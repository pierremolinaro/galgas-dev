#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

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
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n//--------------------------------- Properties\n  private: uint64_t mFlags ;\n  private: bool mIsValid ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;\n  public: VIRTUAL_IN_DEBUG void drop (void) ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n\n//--------------------------------- Private constructor\n  private: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const uint64_t inFlags) ;\n\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\nAC_GALGAS_root (),\nmFlags (0),\nmIsValid (false) {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const uint64_t inFlags) :\nAC_GALGAS_root (),\nmFlags (inFlags),\nmIsValid (true) {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_none (UNUSED_LOCATION_ARGS) {\n  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (0) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_all (UNUSED_LOCATION_ARGS) {\n  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ((uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 26)).stringValue () ;
  result << ") ;\n}\n\n" ;
  GALGAS_uint index_1084_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_1084 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1084.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_1084.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 32)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) {\n  return GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " (((uint64_t) 1) << " ;
      result << index_1084_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 33)).stringValue () ;
      result << ") ;\n}\n\n" ;
      index_1084_idx.increment () ;
      enumerator_1084.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n   typeComparisonResult result = kOperandNotValid ;\n   if (mIsValid && inOperand.mIsValid) {\n     result = kOperandEqual ;\n     if (mFlags < inOperand.mFlags) {\n       result = kFirstOperandLowerThanSecond ;\n     }else if (mFlags > inOperand.mFlags) {\n       result = kFirstOperandGreaterThanSecond ;\n     }\n   }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nbool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n  return mIsValid ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n  mIsValid = false ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_or (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags | inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_and (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags & inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_xor (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags ^ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::substract_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand,\n                 " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n                 " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags & ~ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_tilde (UNUSED_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (mIsValid) {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (((uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 114)).stringValue () ;
  result << ") ^ mFlags) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n                              " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t /* inIndentation */) const {\n  ioString << \"<boolset @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ":\" ;\n  if (! isValid ()) {\n    ioString << \" not built\" ;\n  }else{\n" ;
  GALGAS_uint index_5163_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_5163 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5163.hasCurrentObject ()) {
      result << "    if ((mFlags & ((uint64_t) 1) << " ;
      result << index_5163_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 129)).stringValue () ;
      result << ") != 0) {\n      ioString << \" " ;
      result << enumerator_5163.current_mValue (HERE).readProperty_string ().stringValue () ;
      result << "\" ;\n    }\n" ;
      index_5163_idx.increment () ;
      enumerator_5163.gotoNextObject () ;
    }
  }
  result << "  }\n  ioString << \">\" ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_none (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == 0) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_all (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == (uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 152)).stringValue () ;
  result << ") ;\n  }\n  return result ;\n}\n\n" ;
  GALGAS_uint index_6013_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_6013 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6013.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_6013.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 159)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << " ;
      result << index_6013_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 162)).stringValue () ;
      result << ") != 0) ;\n  }\n  return result ;\n}\n\n" ;
      index_6013_idx.increment () ;
      enumerator_6013.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GALGAS_string & outArgument_outHeader,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_10186 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 276)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, var_typedefinition_10186.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10186.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 279)), temp_1.readProperty_mFlagList () COMMA_SOURCE_FILE ("type-boolset.galgas", 277))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typedefinition_10186.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10186.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 284)), var_typedefinition_10186.readProperty_mIsConcrete (), var_typedefinition_10186.readProperty_mConstructorMap (), var_typedefinition_10186.readProperty_mGetterMap (), var_typedefinition_10186.readProperty_mSetterMap (), var_typedefinition_10186.readProperty_mInstanceMethodMap (), var_typedefinition_10186.readProperty_mClassMethodMap (), var_typedefinition_10186.readProperty_mOptionalMethodMap (), var_typedefinition_10186.readProperty_mEnumerationDescriptor (), var_typedefinition_10186.readProperty_mHandledOperatorFlags (), var_typedefinition_10186.readProperty_mAddAssignOperatorArguments (), var_typedefinition_10186.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-boolset.galgas", 282))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 282)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outImplementation,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 306)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  const GALGAS_boolsetTypeForGeneration temp_2 = this ;
  const GALGAS_boolsetTypeForGeneration temp_3 = this ;
  const GALGAS_boolsetTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 308)).readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 309)), temp_3.readProperty_mFlagList (), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 311)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_length (SOURCE_FILE ("type-boolset.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 311)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 311)) COMMA_SOURCE_FILE ("type-boolset.galgas", 307))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Function 'weakSuffix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_weakSuffix (C_Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("-weak") ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_weakSuffix [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_weakSuffix (C_Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_weakSuffix (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_weakSuffix ("weakSuffix",
                                                            functionWithGenericHeader_weakSuffix,
                                                            & kTypeDescriptor_GALGAS_string,
                                                            0,
                                                            functionArgs_weakSuffix) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@classDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_classDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_classDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("valueclass @").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 176)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classDeclarationAST temp_0 = this ;
  const GALGAS_classDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_6571 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 187)), temp_1.readProperty_mClassTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 187)) ;
  {
  const GALGAS_classDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6571, temp_2, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 188)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_classDeclarationAST temp_5 = this ;
      const GALGAS_classDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6571, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 193)), temp_6.readProperty_mSuperClassName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 193)) COMMA_SOURCE_FILE ("type-class.galgas", 191)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_7 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6980 (temp_7.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_6980.hasCurrentObject ()) {
    {
    const GALGAS_classDeclarationAST temp_8 = this ;
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6571, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_6980.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 200)), temp_8.readProperty_mSuperClassName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 200)) COMMA_SOURCE_FILE ("type-class.galgas", 198)) ;
    }
    enumerator_6980.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap var_getterMap_7978 ;
  GALGAS_setterMap var_setterMap_8005 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_8048 ;
  GALGAS_typedPropertyList var_inheritedTypedPropertyList_8100 ;
  GALGAS_propertyMap var_attributeMap_8132 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 218)) ;
  GALGAS_unifiedTypeMapEntry var_superClassIndex_8204 ;
  GALGAS_bool var_generateHeaderInSeparateFile_8245 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_8204 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 223)) ;
      {
      routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_7978, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 224)) ;
      }
      var_setterMap_8005 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 225)) ;
      var_instanceMethodMap_8048 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 226)) ;
      var_inheritedTypedPropertyList_8100 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 227)) ;
      var_attributeMap_8132 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 228)) ;
      var_generateHeaderInSeparateFile_8245 = GALGAS_bool (false) ;
      const GALGAS_classDeclarationAST temp_2 = this ;
      cEnumerator_lstringlist enumerator_8572 (temp_2.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
      while (enumerator_8572.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_8572.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_generateHeaderInSeparateFile_8245 = GALGAS_bool (true) ;
          }
        }
        enumerator_8572.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_classDeclarationAST temp_4 = this ;
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.readProperty_mSuperClassName (), var_superClassIndex_8204, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 236)) ;
    }
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_8902 ;
    const GALGAS_classDeclarationAST temp_5 = this ;
    extensionMethod_searchType (ioArgument_ioSemanticContext.readProperty_mTypeMap (), temp_5.readProperty_mSuperClassName (), var_superTypeDefinition_8902, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 237)) ;
    var_inheritedTypedPropertyList_8100 = var_superTypeDefinition_8902.readProperty_mAllTypedPropertyList () ;
    var_attributeMap_8132 = var_superTypeDefinition_8902.readProperty_mPropertyMap () ;
    var_generateHeaderInSeparateFile_8245 = var_superTypeDefinition_8902.readProperty_mGenerateHeaderInSeparateFile () ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_superTypeDefinition_8902.readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("type-class.galgas", 242)).operator_not (SOURCE_FILE ("type-class.galgas", 242)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_classDeclarationAST temp_7 = this ;
        const GALGAS_classDeclarationAST temp_8 = this ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mSuperClassName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_8.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 243)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 243)), fixItArray9  COMMA_SOURCE_FILE ("type-class.galgas", 243)) ;
      }
    }
    var_setterMap_8005 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 246)) ;
    cEnumerator_setterMap enumerator_9404 (var_superTypeDefinition_8902.readProperty_mSetterMap (), kENUMERATION_UP) ;
    while (enumerator_9404.hasCurrentObject ()) {
      {
      var_setterMap_8005.setter_insertKey (enumerator_9404.current_lkey (HERE), enumerator_9404.current_mKind (HERE), enumerator_9404.current_mParameterList (HERE), enumerator_9404.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 253)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 248)) ;
      }
      enumerator_9404.gotoNextObject () ;
    }
    var_getterMap_7978 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 258)) ;
    cEnumerator_getterMap enumerator_9790 (var_superTypeDefinition_8902.readProperty_mGetterMap (), kENUMERATION_UP) ;
    while (enumerator_9790.hasCurrentObject ()) {
      {
      var_getterMap_7978.setter_insertKey (enumerator_9790.current_lkey (HERE), enumerator_9790.current_mKind (HERE), enumerator_9790.current_mArgumentTypeList (HERE), enumerator_9790.current_mDeclarationLocation (HERE), enumerator_9790.current_mHasCompilerArgument (HERE), enumerator_9790.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 268)), enumerator_9790.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 261)) ;
      }
      enumerator_9790.gotoNextObject () ;
    }
    var_instanceMethodMap_8048 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 273)) ;
    cEnumerator_instanceMethodMap enumerator_10225 (var_superTypeDefinition_8902.readProperty_mInstanceMethodMap (), kENUMERATION_UP) ;
    while (enumerator_10225.hasCurrentObject ()) {
      {
      var_instanceMethodMap_8048.setter_insertKey (enumerator_10225.current_lkey (HERE), enumerator_10225.current_mKind (HERE), enumerator_10225.current_mParameterList (HERE), enumerator_10225.current_mDeclarationLocation (HERE), enumerator_10225.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 282)), enumerator_10225.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 276)) ;
      }
      enumerator_10225.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorPropertyTypeList_10603 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 288)) ;
  cEnumerator_typedPropertyList enumerator_10663 (var_inheritedTypedPropertyList_8100, kENUMERATION_UP) ;
  while (enumerator_10663.hasCurrentObject ()) {
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_10663.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_10663.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 291)) ;
    }
    var_constructorPropertyTypeList_10603.addAssign_operation (temp_10, enumerator_10663.current_mPropertyTypeEntry (HERE), enumerator_10663.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 290)) ;
    enumerator_10663.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_12 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10964 (temp_12.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10964.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = enumerator_10964.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 296)).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_10964.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray14  COMMA_SOURCE_FILE ("type-class.galgas", 297)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11202 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10964.current_mPropertyTypeName (HERE), var_attributeTypeIndex_11202, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 299)) ;
    }
    GALGAS_bool var_hasSelector_11223 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_11250 (enumerator_10964.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_11250.hasCurrentObject ()) {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsEqual, enumerator_11250.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_15) {
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = var_hasSelector_11223.boolEnum () ;
            if (kBoolTrue == test_16) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              fixItArray17.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_11250.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 304)) ;
            }
          }
          var_hasSelector_11223 = GALGAS_bool (true) ;
        }
      }
      enumerator_11250.gotoNextObject () ;
    }
    GALGAS_lstring temp_18 ;
    const enumGalgasBool test_19 = var_hasSelector_11223.boolEnum () ;
    if (kBoolTrue == test_19) {
      temp_18 = enumerator_10964.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_19) {
      temp_18 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 310)) ;
    }
    var_constructorPropertyTypeList_10603.addAssign_operation (temp_18, var_attributeTypeIndex_11202, enumerator_10964.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 309)) ;
    {
    var_attributeMap_8132.setter_insertKey (enumerator_10964.current_mPropertyName (HERE), enumerator_10964.current_mIsPublic (HERE), enumerator_10964.current_isConstant (HERE), var_attributeTypeIndex_11202, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 313)) ;
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_getterMap_7978.getter_hasKey (enumerator_10964.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-class.galgas", 319)).boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_10964.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_10964.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 320)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 320)), fixItArray21  COMMA_SOURCE_FILE ("type-class.galgas", 320)) ;
      }
    }
    enumerator_10964.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_12049 ;
  {
  const GALGAS_classDeclarationAST temp_22 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_22.readProperty_mClassTypeName (), var_classIndex_12049, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 324)) ;
  }
  GALGAS_constructorMap var_constructorMap_12108 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 329)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_classDeclarationAST temp_24 = this ;
    test_23 = temp_24.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 330)).boolEnum () ;
    if (kBoolTrue == test_23) {
      {
      var_constructorMap_12108.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 332))  COMMA_SOURCE_FILE ("type-class.galgas", 332)), var_constructorPropertyTypeList_10603, GALGAS_bool (false), var_classIndex_12049, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 331)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedPropertyList_12380 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 339)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_12432 = var_inheritedTypedPropertyList_8100 ;
  const GALGAS_classDeclarationAST temp_25 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12559 (temp_25.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12559.hasCurrentObject ()) {
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      test_26 = enumerator_12559.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 342)).boolEnum () ;
      if (kBoolTrue == test_26) {
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (enumerator_12559.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray27  COMMA_SOURCE_FILE ("type-class.galgas", 343)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_12797 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_12559.current_mPropertyTypeName (HERE), var_attributeTypeIndex_12797, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 345)) ;
    }
    GALGAS_bool var_hasSelector_12818 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_12842 (enumerator_12559.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_12842.hasCurrentObject ()) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsEqual, enumerator_12842.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_28) {
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticWarning (enumerator_12842.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%nogetter' is obsolete and has no effect"), fixItArray29  COMMA_SOURCE_FILE ("type-class.galgas", 349)) ;
        }
      }
      if (kBoolFalse == test_28) {
        enumGalgasBool test_30 = kBoolTrue ;
        if (kBoolTrue == test_30) {
          test_30 = GALGAS_bool (kIsEqual, enumerator_12842.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_30) {
            TC_Array <C_FixItDescription> fixItArray31 ;
            inCompiler->emitSemanticWarning (enumerator_12842.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%setter' is obsolete and has no effect"), fixItArray31  COMMA_SOURCE_FILE ("type-class.galgas", 351)) ;
          }
        }
        if (kBoolFalse == test_30) {
          enumGalgasBool test_32 = kBoolTrue ;
          if (kBoolTrue == test_32) {
            test_32 = GALGAS_bool (kIsEqual, enumerator_12842.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_32) {
              var_hasSelector_12818 = GALGAS_bool (true) ;
            }
          }
        }
      }
      enumerator_12842.gotoNextObject () ;
    }
    var_currentClassTypedPropertyList_12380.addAssign_operation (var_attributeTypeIndex_12797, enumerator_12559.current_mPropertyName (HERE), enumerator_12559.current_mIsPublic (HERE), var_hasSelector_12818  COMMA_SOURCE_FILE ("type-class.galgas", 356)) ;
    var_allTypedAttributeList_12432.addAssign_operation (var_attributeTypeIndex_12797, enumerator_12559.current_mPropertyName (HERE), enumerator_12559.current_mIsPublic (HERE), var_hasSelector_12818  COMMA_SOURCE_FILE ("type-class.galgas", 357)) ;
    enumerator_12559.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_13444 (var_currentClassTypedPropertyList_12380, kENUMERATION_UP) ;
  while (enumerator_13444.hasCurrentObject ()) {
    enumGalgasBool test_33 = kBoolTrue ;
    if (kBoolTrue == test_33) {
      test_33 = enumerator_13444.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_33) {
        {
        GALGAS_formalParameterSignature temp_34 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 365)) ;
        temp_34.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 365)), enumerator_13444.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 365)), enumerator_13444.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 365)) ;
        var_setterMap_8005.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_13444.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 363)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 363))  COMMA_SOURCE_FILE ("type-class.galgas", 363)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 364)), temp_34, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 367)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 362)) ;
        }
      }
    }
    enumerator_13444.gotoNextObject () ;
  }
  {
  const GALGAS_classDeclarationAST temp_35 = this ;
  const GALGAS_classDeclarationAST temp_36 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_35.readProperty_mClassTypeName (), GALGAS_bool (true), var_getterMap_7978, var_setterMap_8005, var_instanceMethodMap_8048, temp_36.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 373)) ;
  }
  const GALGAS_classDeclarationAST temp_37 = this ;
  GALGAS_string temp_38 ;
  const enumGalgasBool test_39 = temp_37.readProperty_mIsAbstract ().boolEnum () ;
  if (kBoolTrue == test_39) {
    temp_38 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_39) {
    temp_38 = GALGAS_string ("default") ;
  }
  GALGAS_string var_defaultConstructorName_14329 = temp_38 ;
  cEnumerator_typedPropertyList enumerator_14406 (var_allTypedAttributeList_12432, kENUMERATION_UP) ;
  bool bool_40 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_14329.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_14406.hasCurrentObject () && bool_40) {
    while (enumerator_14406.hasCurrentObject () && bool_40) {
      enumGalgasBool test_41 = kBoolTrue ;
      if (kBoolTrue == test_41) {
        test_41 = GALGAS_bool (kIsEqual, extensionGetter_definition (enumerator_14406.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 388)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_41) {
          var_defaultConstructorName_14329 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_14406.gotoNextObject () ;
      if (enumerator_14406.hasCurrentObject ()) {
        bool_40 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_14329.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_42 = this ;
  const GALGAS_classDeclarationAST temp_43 = this ;
  const GALGAS_classDeclarationAST temp_44 = this ;
  const GALGAS_classDeclarationAST temp_45 = this ;
  const GALGAS_classDeclarationAST temp_46 = this ;
  GALGAS_operators temp_47 ;
  const enumGalgasBool test_48 = temp_46.readProperty_mIsReference ().boolEnum () ;
  if (kBoolTrue == test_48) {
    temp_47 = GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-class.galgas", 410)) ;
  }else if (kBoolFalse == test_48) {
    temp_47 = GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-class.galgas", 410)) ;
  }
  const GALGAS_classDeclarationAST temp_49 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_14636 = GALGAS_unifiedTypeDefinition::constructor_new (temp_42.readProperty_mClassTypeName (), temp_43.readProperty_mIsPredefined (), temp_44.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 396)), var_superClassIndex_8204, GALGAS_typeKindEnum::constructor_classType (temp_45.readProperty_mIsReference ()  COMMA_SOURCE_FILE ("type-class.galgas", 398)), GALGAS_bool (false), var_allTypedAttributeList_12432, var_attributeMap_8132, var_currentClassTypedPropertyList_12380, var_constructorMap_12108, var_getterMap_7978, var_setterMap_8005, var_instanceMethodMap_8048, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 407)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 408)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 409)), temp_47, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 411)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 412)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 413)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 414)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 415)), var_generateHeaderInSeparateFile_8245, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 417)), var_defaultConstructorName_14329, GALGAS_string ("class-").add_operation (temp_49.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 419)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 420))  COMMA_SOURCE_FILE ("type-class.galgas", 393)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_14636, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 422)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classDeclarationAST temp_0 = this ;
  GALGAS_lstring var_classTypeNameForUsefulness_16532 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 438)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_16532, var_classTypeNameForUsefulness_16532, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 439)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_classDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superClassNameForUsefulness_16760 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 441)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16532, var_superClassNameForUsefulness_16760 COMMA_SOURCE_FILE ("type-class.galgas", 442)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classDeclarationAST temp_6 = this ;
      const GALGAS_classDeclarationAST temp_7 = this ;
      GALGAS_lstring var_weakRefTypeNameForUsefulness_16983 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_6.readProperty_mClassTypeName ().readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 445)), temp_7.readProperty_mClassTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 445)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16532, var_weakRefTypeNameForUsefulness_16983 COMMA_SOURCE_FILE ("type-class.galgas", 446)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_17247 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_8.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 449)) ;
  const GALGAS_classDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeMapEntry temp_10 ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, temp_9.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 452)) ;
  }else if (kBoolFalse == test_11) {
    const GALGAS_classDeclarationAST temp_12 = this ;
    temp_10 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_12.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 453)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_17374 = temp_10 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsNotEqual, var_superClassEntry_17374.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 458)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_bool var_superClassIsReference_17810 ;
      extensionGetter_definition (var_superClassEntry_17374, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 459)).readProperty_mTypeKindEnum ().method_classType (var_superClassIsReference_17810, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 459)) ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_classDeclarationAST temp_15 = this ;
        test_14 = var_superClassIsReference_17810.operator_and (temp_15.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 460)) COMMA_SOURCE_FILE ("type-class.galgas", 460)).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_classDeclarationAST temp_16 = this ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'refClass', as its super class"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 461)) ;
        }
      }
      if (kBoolFalse == test_14) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          const GALGAS_classDeclarationAST temp_19 = this ;
          test_18 = var_superClassIsReference_17810.operator_not (SOURCE_FILE ("type-class.galgas", 462)).operator_and (temp_19.readProperty_mIsReference () COMMA_SOURCE_FILE ("type-class.galgas", 462)).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_classDeclarationAST temp_20 = this ;
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'valueclass', as its super class"), fixItArray21  COMMA_SOURCE_FILE ("type-class.galgas", 463)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_18356 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsEqual, var_superClassEntry_17374.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 470)))).boolEnum () ;
    if (kBoolTrue == test_22) {
      var_allAttributeList_18356 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 471)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_18462 = GALGAS_bool (false) ;
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        const GALGAS_classDeclarationAST temp_24 = this ;
        test_23 = GALGAS_bool (kIsStrictSup, temp_24.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-class.galgas", 473)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_23) {
          const GALGAS_classDeclarationAST temp_25 = this ;
          cEnumerator_lstringlist enumerator_18536 (temp_25.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
          while (enumerator_18536.hasCurrentObject ()) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsEqual, enumerator_18536.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_26) {
                enumGalgasBool test_27 = kBoolTrue ;
                if (kBoolTrue == test_27) {
                  test_27 = var_generatedInSeparateFileFeature_18462.boolEnum () ;
                  if (kBoolTrue == test_27) {
                    TC_Array <C_FixItDescription> fixItArray28 ;
                    inCompiler->emitSemanticError (enumerator_18536.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray28  COMMA_SOURCE_FILE ("type-class.galgas", 477)) ;
                  }
                }
                var_generatedInSeparateFileFeature_18462 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_26) {
              TC_Array <C_FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (enumerator_18536.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray29  COMMA_SOURCE_FILE ("type-class.galgas", 481)) ;
            }
            enumerator_18536.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_22) {
    var_allAttributeList_18356 = extensionGetter_definition (var_superClassEntry_17374, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 486)).readProperty_mAllTypedPropertyList () ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      const GALGAS_classDeclarationAST temp_31 = this ;
      test_30 = GALGAS_bool (kIsStrictSup, temp_31.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-class.galgas", 487)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        const GALGAS_classDeclarationAST temp_32 = this ;
        cEnumerator_lstringlist enumerator_19086 (temp_32.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
        while (enumerator_19086.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticError (enumerator_19086.current_mValue (HERE).readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray33  COMMA_SOURCE_FILE ("type-class.galgas", 489)) ;
          enumerator_19086.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_19291 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 494)) ;
  GALGAS_propertyIndexMap var_attributeMap_19333 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 495)) ;
  const GALGAS_classDeclarationAST temp_34 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_19436 (temp_34.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_19436.hasCurrentObject ()) {
    enumGalgasBool test_35 = kBoolTrue ;
    if (kBoolTrue == test_35) {
      test_35 = enumerator_19436.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 497)).boolEnum () ;
      if (kBoolTrue == test_35) {
        TC_Array <C_FixItDescription> fixItArray36 ;
        inCompiler->emitSemanticError (enumerator_19436.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray36  COMMA_SOURCE_FILE ("type-class.galgas", 498)) ;
      }
    }
    GALGAS_lstring var_propertyTypeNameForUsefulness_19625 = function_typeNameForUsefulEntitiesGraph (enumerator_19436.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 500)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16532, var_propertyTypeNameForUsefulness_19625 COMMA_SOURCE_FILE ("type-class.galgas", 501)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_19786 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_19436.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 502)) ;
    GALGAS_bool var_hasSelector_19866 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_19890 (enumerator_19436.current_mAttributeList (HERE), kENUMERATION_UP) ;
    bool bool_37 = var_hasSelector_19866.operator_not (SOURCE_FILE ("type-class.galgas", 504)).isValidAndTrue () ;
    if (enumerator_19890.hasCurrentObject () && bool_37) {
      while (enumerator_19890.hasCurrentObject () && bool_37) {
        var_hasSelector_19866 = GALGAS_bool (kIsEqual, enumerator_19890.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))) ;
        enumerator_19890.gotoNextObject () ;
        if (enumerator_19890.hasCurrentObject ()) {
          bool_37 = var_hasSelector_19866.operator_not (SOURCE_FILE ("type-class.galgas", 504)).isValidAndTrue () ;
        }
      }
    }
    var_typedAttributeList_19291.addAssign_operation (var_t_19786, enumerator_19436.current_mPropertyName (HERE), enumerator_19436.current_mIsPublic (HERE), var_hasSelector_19866  COMMA_SOURCE_FILE ("type-class.galgas", 507)) ;
    var_allAttributeList_18356.addAssign_operation (var_t_19786, enumerator_19436.current_mPropertyName (HERE), enumerator_19436.current_mIsPublic (HERE), var_hasSelector_19866  COMMA_SOURCE_FILE ("type-class.galgas", 512)) ;
    {
    var_attributeMap_19333.setter_insertKey (enumerator_19436.current_mPropertyName (HERE), var_t_19786, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 517)) ;
    }
    enumerator_19436.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_38 = this ;
  const GALGAS_classDeclarationAST temp_39 = this ;
  const GALGAS_classDeclarationAST temp_40 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (temp_38.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 521)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_17247, temp_39.readProperty_mIsAbstract (), temp_40.readProperty_mIsReference (), var_superClassEntry_17374, var_allAttributeList_18356, var_typedAttributeList_19291, extensionGetter_definition (var_selfType_17247, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 529)).readProperty_mGenerateHeaderInSeparateFile ()  COMMA_SOURCE_FILE ("type-class.galgas", 522))  COMMA_SOURCE_FILE ("type-class.galgas", 520)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 550)).operator_not (SOURCE_FILE ("type-class.galgas", 550)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_classTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 551)) ;
    }
  }
  const GALGAS_classTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_21704 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 553)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classTypeForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classTypeForGeneration temp_6 = this ;
      const GALGAS_classTypeForGeneration temp_7 = this ;
      GALGAS_string temp_8 ;
      const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 558)).boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_9) {
        const GALGAS_classTypeForGeneration temp_10 = this ;
        temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 558)) ;
      }
      const GALGAS_classTypeForGeneration temp_11 = this ;
      const GALGAS_classTypeForGeneration temp_12 = this ;
      const GALGAS_classTypeForGeneration temp_13 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21704.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 557)), temp_8, temp_11.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_12.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 560)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())), temp_13.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 555))) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_classTypeForGeneration temp_14 = this ;
    const GALGAS_classTypeForGeneration temp_15 = this ;
    GALGAS_string temp_16 ;
    const enumGalgasBool test_17 = temp_15.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 567)).boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_17) {
      const GALGAS_classTypeForGeneration temp_18 = this ;
      temp_16 = extensionGetter_identifierRepresentation (temp_18.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 567)) ;
    }
    const GALGAS_classTypeForGeneration temp_19 = this ;
    const GALGAS_classTypeForGeneration temp_20 = this ;
    const GALGAS_classTypeForGeneration temp_21 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21704.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_14.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 566)), temp_16, temp_19.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_20.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 569)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())), temp_21.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 564))) ;
  }
  const GALGAS_classTypeForGeneration temp_22 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_21704.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_22.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 575)), var_selfTypeDefinition_21704.readProperty_mIsConcrete (), var_selfTypeDefinition_21704.readProperty_mConstructorMap (), var_selfTypeDefinition_21704.readProperty_mGetterMap (), var_selfTypeDefinition_21704.readProperty_mSetterMap (), var_selfTypeDefinition_21704.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_21704.readProperty_mClassMethodMap (), var_selfTypeDefinition_21704.readProperty_mOptionalMethodMap (), var_selfTypeDefinition_21704.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_21704.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_21704.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_21704.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-class.galgas", 573))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 573)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string constinArgument_inOutputDirectory,
                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_23633 (temp_0.readProperty_mCurrentTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_23633.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_23633.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 596)) ;
    enumerator_23633.gotoNextObject () ;
  }
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_23742 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 598)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_classTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_classTypeForGeneration temp_5 = this ;
        test_4 = temp_5.readProperty_mGenerateHeaderInSeparateFile ().boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_classTypeForGeneration temp_6 = this ;
          const GALGAS_classTypeForGeneration temp_7 = this ;
          GALGAS_string temp_8 ;
          const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 604)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_9) {
            const GALGAS_classTypeForGeneration temp_10 = this ;
            temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 604)) ;
          }
          const GALGAS_classTypeForGeneration temp_11 = this ;
          const GALGAS_classTypeForGeneration temp_12 = this ;
          const GALGAS_classTypeForGeneration temp_13 = this ;
          const GALGAS_classTypeForGeneration temp_14 = this ;
          const GALGAS_classTypeForGeneration temp_15 = this ;
          GALGAS_string var_part_31__23876 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23742.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 603)), temp_8, temp_11.readProperty_mCurrentTypedAttributeList (), temp_12.readProperty_mAllTypedAttributeList (), temp_13.readProperty_mIsAbstract (), extensionGetter_definition (temp_14.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 608)).readProperty_mGetterMap (), extensionGetter_definition (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 609)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 601))) ;
          const GALGAS_classTypeForGeneration temp_16 = this ;
          const GALGAS_classTypeForGeneration temp_17 = this ;
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = temp_17.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 614)).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_19) {
            const GALGAS_classTypeForGeneration temp_20 = this ;
            temp_18 = extensionGetter_identifierRepresentation (temp_20.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 614)) ;
          }
          const GALGAS_classTypeForGeneration temp_21 = this ;
          const GALGAS_classTypeForGeneration temp_22 = this ;
          const GALGAS_classTypeForGeneration temp_23 = this ;
          GALGAS_string var_part_32__24391 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23742.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_16.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 613)), temp_18, temp_21.readProperty_mCurrentTypedAttributeList (), temp_22.readProperty_mAllTypedAttributeList (), temp_23.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 611))) ;
          const GALGAS_classTypeForGeneration temp_24 = this ;
          GALGAS_string var_headerFileName_24801 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 619)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 619)) ;
          {
          GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 621)), var_headerFileName_24801, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__23876, GALGAS_string ("\n\n"), var_part_32__24391, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 620)) ;
          }
          outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_24801, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 631)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 631)) ;
        }
      }
      if (kBoolFalse == test_4) {
        const GALGAS_classTypeForGeneration temp_25 = this ;
        const GALGAS_classTypeForGeneration temp_26 = this ;
        GALGAS_string temp_27 ;
        const enumGalgasBool test_28 = temp_26.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 636)).boolEnum () ;
        if (kBoolTrue == test_28) {
          temp_27 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_28) {
          const GALGAS_classTypeForGeneration temp_29 = this ;
          temp_27 = extensionGetter_identifierRepresentation (temp_29.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 636)) ;
        }
        const GALGAS_classTypeForGeneration temp_30 = this ;
        const GALGAS_classTypeForGeneration temp_31 = this ;
        const GALGAS_classTypeForGeneration temp_32 = this ;
        const GALGAS_classTypeForGeneration temp_33 = this ;
        const GALGAS_classTypeForGeneration temp_34 = this ;
        outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23742.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_25.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 635)), temp_27, temp_30.readProperty_mCurrentTypedAttributeList (), temp_31.readProperty_mAllTypedAttributeList (), temp_32.readProperty_mIsAbstract (), extensionGetter_definition (temp_33.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 640)).readProperty_mGetterMap (), extensionGetter_definition (temp_34.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 641)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 633))) ;
        const GALGAS_classTypeForGeneration temp_35 = this ;
        const GALGAS_classTypeForGeneration temp_36 = this ;
        GALGAS_string temp_37 ;
        const enumGalgasBool test_38 = temp_36.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 646)).boolEnum () ;
        if (kBoolTrue == test_38) {
          temp_37 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_38) {
          const GALGAS_classTypeForGeneration temp_39 = this ;
          temp_37 = extensionGetter_identifierRepresentation (temp_39.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 646)) ;
        }
        const GALGAS_classTypeForGeneration temp_40 = this ;
        const GALGAS_classTypeForGeneration temp_41 = this ;
        const GALGAS_classTypeForGeneration temp_42 = this ;
        outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23742.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_35.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 645)), temp_37, temp_40.readProperty_mCurrentTypedAttributeList (), temp_41.readProperty_mAllTypedAttributeList (), temp_42.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 643))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 643)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_43 = kBoolTrue ;
    if (kBoolTrue == test_43) {
      const GALGAS_classTypeForGeneration temp_44 = this ;
      test_43 = temp_44.readProperty_mGenerateHeaderInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_43) {
        const GALGAS_classTypeForGeneration temp_45 = this ;
        const GALGAS_classTypeForGeneration temp_46 = this ;
        GALGAS_string temp_47 ;
        const enumGalgasBool test_48 = temp_46.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 657)).boolEnum () ;
        if (kBoolTrue == test_48) {
          temp_47 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_48) {
          const GALGAS_classTypeForGeneration temp_49 = this ;
          temp_47 = extensionGetter_identifierRepresentation (temp_49.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 657)) ;
        }
        const GALGAS_classTypeForGeneration temp_50 = this ;
        const GALGAS_classTypeForGeneration temp_51 = this ;
        const GALGAS_classTypeForGeneration temp_52 = this ;
        const GALGAS_classTypeForGeneration temp_53 = this ;
        const GALGAS_classTypeForGeneration temp_54 = this ;
        GALGAS_string var_part_31__26324 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23742.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_45.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 656)), temp_47, temp_50.readProperty_mCurrentTypedAttributeList (), temp_51.readProperty_mAllTypedAttributeList (), temp_52.readProperty_mIsAbstract (), extensionGetter_definition (temp_53.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 661)).readProperty_mGetterMap (), extensionGetter_definition (temp_54.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 662)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 654))) ;
        const GALGAS_classTypeForGeneration temp_55 = this ;
        const GALGAS_classTypeForGeneration temp_56 = this ;
        GALGAS_string temp_57 ;
        const enumGalgasBool test_58 = temp_56.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 667)).boolEnum () ;
        if (kBoolTrue == test_58) {
          temp_57 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_58) {
          const GALGAS_classTypeForGeneration temp_59 = this ;
          temp_57 = extensionGetter_identifierRepresentation (temp_59.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 667)) ;
        }
        const GALGAS_classTypeForGeneration temp_60 = this ;
        const GALGAS_classTypeForGeneration temp_61 = this ;
        const GALGAS_classTypeForGeneration temp_62 = this ;
        GALGAS_string var_part_32__26835 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23742.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_55.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 666)), temp_57, temp_60.readProperty_mCurrentTypedAttributeList (), temp_61.readProperty_mAllTypedAttributeList (), temp_62.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 664))) ;
        const GALGAS_classTypeForGeneration temp_63 = this ;
        GALGAS_string var_headerFileName_27241 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_63.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 672)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 672)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 672)) ;
        {
        GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 674)), var_headerFileName_27241, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__26324, GALGAS_string ("\n\n"), var_part_32__26835, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 673)) ;
        }
        outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_27241, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 684)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 684)) ;
      }
    }
    if (kBoolFalse == test_43) {
      const GALGAS_classTypeForGeneration temp_64 = this ;
      const GALGAS_classTypeForGeneration temp_65 = this ;
      GALGAS_string temp_66 ;
      const enumGalgasBool test_67 = temp_65.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 689)).boolEnum () ;
      if (kBoolTrue == test_67) {
        temp_66 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_67) {
        const GALGAS_classTypeForGeneration temp_68 = this ;
        temp_66 = extensionGetter_identifierRepresentation (temp_68.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 689)) ;
      }
      const GALGAS_classTypeForGeneration temp_69 = this ;
      const GALGAS_classTypeForGeneration temp_70 = this ;
      const GALGAS_classTypeForGeneration temp_71 = this ;
      const GALGAS_classTypeForGeneration temp_72 = this ;
      const GALGAS_classTypeForGeneration temp_73 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23742.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_64.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 688)), temp_66, temp_69.readProperty_mCurrentTypedAttributeList (), temp_70.readProperty_mAllTypedAttributeList (), temp_71.readProperty_mIsAbstract (), extensionGetter_definition (temp_72.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 693)).readProperty_mGetterMap (), extensionGetter_definition (temp_73.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 694)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 686))) ;
      const GALGAS_classTypeForGeneration temp_74 = this ;
      const GALGAS_classTypeForGeneration temp_75 = this ;
      GALGAS_string temp_76 ;
      const enumGalgasBool test_77 = temp_75.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 699)).boolEnum () ;
      if (kBoolTrue == test_77) {
        temp_76 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_77) {
        const GALGAS_classTypeForGeneration temp_78 = this ;
        temp_76 = extensionGetter_identifierRepresentation (temp_78.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 699)) ;
      }
      const GALGAS_classTypeForGeneration temp_79 = this ;
      const GALGAS_classTypeForGeneration temp_80 = this ;
      const GALGAS_classTypeForGeneration temp_81 = this ;
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23742.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_74.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 698)), temp_76, temp_79.readProperty_mCurrentTypedAttributeList (), temp_80.readProperty_mAllTypedAttributeList (), temp_81.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 696))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 696)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outImplementation,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 713)) ;
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_29192 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 714)) ;
  const GALGAS_classTypeForGeneration temp_2 = this ;
  const GALGAS_classTypeForGeneration temp_3 = this ;
  const GALGAS_classTypeForGeneration temp_4 = this ;
  GALGAS_typedPropertyList var_at_29236 = temp_2.readProperty_mAllTypedAttributeList ().getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint (uint32_t (0U)), temp_3.readProperty_mAllTypedAttributeList ().getter_length (SOURCE_FILE ("type-class.galgas", 716)).substract_operation (temp_4.readProperty_mCurrentTypedAttributeList ().getter_length (SOURCE_FILE ("type-class.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 716))  COMMA_SOURCE_FILE ("type-class.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 715)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_classTypeForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_classTypeForGeneration temp_7 = this ;
      const GALGAS_classTypeForGeneration temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = temp_8.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 722)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_10) {
        const GALGAS_classTypeForGeneration temp_11 = this ;
        temp_9 = extensionGetter_identifierRepresentation (temp_11.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 722)) ;
      }
      const GALGAS_classTypeForGeneration temp_12 = this ;
      const GALGAS_classTypeForGeneration temp_13 = this ;
      const GALGAS_classTypeForGeneration temp_14 = this ;
      const GALGAS_classTypeForGeneration temp_15 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeSpecificImplementation (inCompiler, var_typedefinition_29192.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_7.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 721)), temp_9, temp_12.readProperty_mCurrentTypedAttributeList (), temp_13.readProperty_mAllTypedAttributeList (), var_at_29236, temp_14.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 727)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 719))) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_classTypeForGeneration temp_16 = this ;
    const GALGAS_classTypeForGeneration temp_17 = this ;
    GALGAS_string temp_18 ;
    const enumGalgasBool test_19 = temp_17.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 733)).boolEnum () ;
    if (kBoolTrue == test_19) {
      temp_18 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_19) {
      const GALGAS_classTypeForGeneration temp_20 = this ;
      temp_18 = extensionGetter_identifierRepresentation (temp_20.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 733)) ;
    }
    const GALGAS_classTypeForGeneration temp_21 = this ;
    const GALGAS_classTypeForGeneration temp_22 = this ;
    const GALGAS_classTypeForGeneration temp_23 = this ;
    const GALGAS_classTypeForGeneration temp_24 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeSpecificImplementation (inCompiler, var_typedefinition_29192.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_16.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 732)), temp_18, temp_21.readProperty_mCurrentTypedAttributeList (), temp_22.readProperty_mAllTypedAttributeList (), var_at_29236, temp_23.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 738)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 730))) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Function 'generateClassGetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_generateClassGetterDeclaration (const GALGAS_lstring & constinArgument_inGetterName,
                                                       const GALGAS_functionSignature & constinArgument_inArgumentTypeList,
                                                       const GALGAS_bool & constinArgument_inHasCompilerArgument,
                                                       const GALGAS_unifiedTypeMapEntry & constinArgument_inReturnedType,
                                                       const GALGAS_methodQualifier & constinArgument_inQualifier,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_bool var_generateMethodDeclaration_30960 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_30980 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_30980 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_30960 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_30960 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_30980 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_30980 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_30960.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//--- Extension getter ").add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 769)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 769)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual class GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inReturnedType, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 770)) ;
      result_result.plusAssign_operation(GALGAS_string (" getter_").add_operation (constinArgument_inGetterName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 771)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 771)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 771)) ;
      GALGAS_bool var_first_31627 = GALGAS_bool (true) ;
      cEnumerator_functionSignature enumerator_31679 (constinArgument_inArgumentTypeList, kENUMERATION_UP) ;
      while (enumerator_31679.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_31627.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_31627 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 778)) ;
        }
        result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_31679.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 780)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 780)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 780)) ;
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_31679.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 781)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 781)) ;
        enumerator_31679.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_31627.operator_not (SOURCE_FILE ("type-class.galgas", 784)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 785)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("C_Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 787)) ;
          var_first_31627 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_31627.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (") const"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 790)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 790)) ;
      result_result.plusAssign_operation(var_suffix_30980.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 791)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 791)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateClassGetterDeclaration [6] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_functionSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_unifiedTypeMapEntry,
  & kTypeDescriptor_GALGAS_methodQualifier,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateClassGetterDeclaration (C_Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_functionSignature operand1 = GALGAS_functionSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                     inCompiler
                                                                                     COMMA_THERE) ;
  const GALGAS_bool operand2 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_unifiedTypeMapEntry operand3 = GALGAS_unifiedTypeMapEntry::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GALGAS_methodQualifier operand4 = GALGAS_methodQualifier::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_generateClassGetterDeclaration (operand0,
                                                  operand1,
                                                  operand2,
                                                  operand3,
                                                  operand4,
                                                  inCompiler
                                                  COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassGetterDeclaration ("generateClassGetterDeclaration",
                                                                                functionWithGenericHeader_generateClassGetterDeclaration,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                5,
                                                                                functionArgs_generateClassGetterDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'generateClassInstanceMethodDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_generateClassInstanceMethodDeclaration (const GALGAS_lstring & constinArgument_inMethodName,
                                                               const GALGAS_formalParameterSignature & constinArgument_inArgumentTypeList,
                                                               const GALGAS_bool & constinArgument_inHasCompilerArgument,
                                                               const GALGAS_methodQualifier & constinArgument_inQualifier,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_bool var_generateMethodDeclaration_32731 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_32751 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_32751 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_32731 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_32731 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_32751 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_32751 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_32731.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("//--- Extension method ").add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 820)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 820)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual void method_").add_operation (constinArgument_inMethodName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 821)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 821)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 821)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 821)) ;
      GALGAS_bool var_first_33329 = GALGAS_bool (true) ;
      cEnumerator_formalParameterSignature enumerator_33381 (constinArgument_inArgumentTypeList, kENUMERATION_UP) ;
      while (enumerator_33381.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_33329.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_33329 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 828)) ;
        }
        switch (enumerator_33381.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_33381.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 832)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 832)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 832)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_33381.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 834)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 834)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 834)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 834)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_33381.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 836)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 836)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 836)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 836)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_33381.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 838)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 838)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 838)) ;
          }
          break ;
        }
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_33381.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 840)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 840)) ;
        enumerator_33381.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_33329.operator_not (SOURCE_FILE ("type-class.galgas", 843)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 844)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("C_Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 846)) ;
          var_first_33329 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_33329.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 849)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 849)) ;
      result_result.plusAssign_operation(var_suffix_32751.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 850)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 850)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateClassInstanceMethodDeclaration [5] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_methodQualifier,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateClassInstanceMethodDeclaration (C_Compiler * inCompiler,
                                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_formalParameterSignature operand1 = GALGAS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                   inCompiler
                                                                                                   COMMA_THERE) ;
  const GALGAS_bool operand2 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_methodQualifier operand3 = GALGAS_methodQualifier::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_generateClassInstanceMethodDeclaration (operand0,
                                                          operand1,
                                                          operand2,
                                                          operand3,
                                                          inCompiler
                                                          COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassInstanceMethodDeclaration ("generateClassInstanceMethodDeclaration",
                                                                                        functionWithGenericHeader_generateClassInstanceMethodDeclaration,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        4,
                                                                                        functionArgs_generateClassInstanceMethodDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@weakReferenceDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_weakReferenceDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("weak reference @").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 18)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_1648 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1648, temp_2, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 31)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
      const GALGAS_weakReferenceDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1648, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 33)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_superClassIndex_2889 ;
  GALGAS_bool var_generateHeaderInSeparateFile_2930 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_2889 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 58)) ;
      var_generateHeaderInSeparateFile_2930 = GALGAS_bool (false) ;
      const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
      cEnumerator_lstringlist enumerator_3091 (temp_2.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
      while (enumerator_3091.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_3091.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_generateHeaderInSeparateFile_2930 = GALGAS_bool (true) ;
          }
        }
        enumerator_3091.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_2889, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 66)) ;
    }
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_3445 ;
    const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
    extensionMethod_searchType (ioArgument_ioSemanticContext.readProperty_mTypeMap (), temp_5.readProperty_mSuperWeakReferenceTypeName (), var_superTypeDefinition_3445, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 67)) ;
    var_generateHeaderInSeparateFile_2930 = var_superTypeDefinition_3445.readProperty_mGenerateHeaderInSeparateFile () ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_superTypeDefinition_3445.readProperty_mTypeKindEnum ().getter_isWeakReferenceType (SOURCE_FILE ("type-weak-reference.galgas", 78)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 78)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_weakReferenceDeclarationAST temp_7 = this ;
        const GALGAS_weakReferenceDeclarationAST temp_8 = this ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_8.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 79)).add_operation (GALGAS_string (" should be a weak reference type"), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 79)), fixItArray9  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 79)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_weakReferenceIndex_4089 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_10 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_10.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_4089, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 83)) ;
  }
  GALGAS_constructorMap var_constructorMap_4148 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 88)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
  var_constructorMap_4148.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nil"), temp_11.readProperty_mWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 90)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 91)), GALGAS_bool (false), var_weakReferenceIndex_4089, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 89)) ;
  }
  GALGAS_getterMap var_getterMap_4342 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 96)) ;
  GALGAS_setterMap var_setterMap_4374 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 97)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4422 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 98)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_12 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_12.readProperty_mWeakReferenceTypeName (), GALGAS_bool (false), var_getterMap_4342, var_setterMap_4374, var_instanceMethodMap_4422, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 99)) ;
  }
  cEnumerator_getterMap enumerator_4754 (var_getterMap_4342, kENUMERATION_UP) ;
  while (enumerator_4754.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (enumerator_4754.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray13  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 112)) ;
    enumerator_4754.gotoNextObject () ;
  }
  cEnumerator_setterMap enumerator_4855 (var_setterMap_4374, kENUMERATION_UP) ;
  while (enumerator_4855.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (enumerator_4855.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray14  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 115)) ;
    enumerator_4855.gotoNextObject () ;
  }
  cEnumerator_instanceMethodMap enumerator_4956 (var_instanceMethodMap_4422, kENUMERATION_UP) ;
  while (enumerator_4956.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (enumerator_4956.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray15  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 118)) ;
    enumerator_4956.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_5153 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_16 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_16.readProperty_mClassTypeName (), var_classIndex_5153, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 121)) ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_17 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_18 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_19 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_5175 = GALGAS_unifiedTypeDefinition::constructor_new (temp_17.readProperty_mWeakReferenceTypeName (), temp_18.readProperty_mIsPredefined (), GALGAS_bool (true), var_superClassIndex_2889, GALGAS_typeKindEnum::constructor_weakReferenceType (var_classIndex_5153  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 127)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 129)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 130)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 131)), var_constructorMap_4148, GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 133)), GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 134)), GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 135)), GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 136)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 137)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 138)), GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-weak-reference.galgas", 139)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 140)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 141)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 142)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 143)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 144)), var_generateHeaderInSeparateFile_2930, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 146)), GALGAS_string ("nil"), GALGAS_string ("weak-reference-").add_operation (temp_19.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 148)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-weak-reference.galgas", 149))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 122)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_5175, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 151)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  GALGAS_lstring var_weakRefTypeNameForUsefulness_6828 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 168)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_6828, var_weakRefTypeNameForUsefulness_6828, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 169)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_weakReferenceDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superWeakRefNameForUsefulness_7082 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 171)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_6828, var_superWeakRefNameForUsefulness_7082 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 172)) ;
      }
    }
  }
  const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7310 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 175)) ;
  const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 178)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_weakReferenceDeclarationAST temp_8 = this ;
    temp_6 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 179)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_7445 = temp_6 ;
  GALGAS_typedPropertyList var_allAttributeList_7829 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_superClassEntry_7445.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 185)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_allAttributeList_7829 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 186)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_7935 = GALGAS_bool (false) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
        test_10 = GALGAS_bool (kIsStrictSup, temp_11.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 188)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_weakReferenceDeclarationAST temp_12 = this ;
          cEnumerator_lstringlist enumerator_8009 (temp_12.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
          while (enumerator_8009.hasCurrentObject ()) {
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsEqual, enumerator_8009.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_13) {
                enumGalgasBool test_14 = kBoolTrue ;
                if (kBoolTrue == test_14) {
                  test_14 = var_generatedInSeparateFileFeature_7935.boolEnum () ;
                  if (kBoolTrue == test_14) {
                    TC_Array <C_FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (enumerator_8009.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray15  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 192)) ;
                  }
                }
                var_generatedInSeparateFileFeature_7935 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_13) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (enumerator_8009.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray16  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 196)) ;
            }
            enumerator_8009.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    var_allAttributeList_7829 = extensionGetter_definition (var_superClassEntry_7445, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 201)).readProperty_mAllTypedPropertyList () ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      const GALGAS_weakReferenceDeclarationAST temp_18 = this ;
      test_17 = GALGAS_bool (kIsStrictSup, temp_18.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 202)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GALGAS_weakReferenceDeclarationAST temp_19 = this ;
        cEnumerator_lstringlist enumerator_8559 (temp_19.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
        while (enumerator_8559.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (enumerator_8559.current_mValue (HERE).readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray20  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 204)) ;
          enumerator_8559.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_8764 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 209)) ;
  GALGAS_propertyIndexMap var_attributeMap_8806 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 210)) ;
  const GALGAS_weakReferenceDeclarationAST temp_21 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_8895 (temp_21.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_8895.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_t_8931 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_8895.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 212)) ;
    GALGAS_bool var_hasSelector_9011 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_9035 (enumerator_8895.current_mAttributeList (HERE), kENUMERATION_UP) ;
    bool bool_22 = var_hasSelector_9011.operator_not (SOURCE_FILE ("type-weak-reference.galgas", 214)).isValidAndTrue () ;
    if (enumerator_9035.hasCurrentObject () && bool_22) {
      while (enumerator_9035.hasCurrentObject () && bool_22) {
        var_hasSelector_9011 = GALGAS_bool (kIsEqual, enumerator_9035.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))) ;
        enumerator_9035.gotoNextObject () ;
        if (enumerator_9035.hasCurrentObject ()) {
          bool_22 = var_hasSelector_9011.operator_not (SOURCE_FILE ("type-weak-reference.galgas", 214)).isValidAndTrue () ;
        }
      }
    }
    var_typedAttributeList_8764.addAssign_operation (var_t_8931, enumerator_8895.current_mPropertyName (HERE), enumerator_8895.current_mIsPublic (HERE), var_hasSelector_9011  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 217)) ;
    var_allAttributeList_7829.addAssign_operation (var_t_8931, enumerator_8895.current_mPropertyName (HERE), enumerator_8895.current_mIsPublic (HERE), var_hasSelector_9011  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 222)) ;
    {
    var_attributeMap_8806.setter_insertKey (enumerator_8895.current_mPropertyName (HERE), var_t_8931, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 227)) ;
    }
    enumerator_8895.gotoNextObject () ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_23 = this ;
  GALGAS_unifiedTypeMapEntry var_referenceClassType_9423 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_23.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 230)) ;
  const GALGAS_weakReferenceDeclarationAST temp_24 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("weak reference ").add_operation (temp_24.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 234)), GALGAS_weakReferenceTypeForGeneration::constructor_new (var_selfType_7310, var_referenceClassType_9423, var_superClassEntry_7445, var_allAttributeList_7829, var_typedAttributeList_8764, extensionGetter_definition (var_selfType_7310, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 241)).readProperty_mGenerateHeaderInSeparateFile ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 235))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 233)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 261)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 261)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 262)) ;
    }
  }
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReferenceClassType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 264)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_4 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_11031 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 265)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_5 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 269)).boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_9) {
    const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
    temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 269)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 267)), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 268)), temp_8, GALGAS_bool (kIsNotEqual, var_typedefinition_11031.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 266))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typedefinition_11031.readProperty_mTypeName ().readProperty_string (), var_typedefinition_11031.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 274)), var_typedefinition_11031.readProperty_mIsConcrete (), var_typedefinition_11031.readProperty_mConstructorMap (), var_typedefinition_11031.readProperty_mGetterMap (), var_typedefinition_11031.readProperty_mSetterMap (), var_typedefinition_11031.readProperty_mInstanceMethodMap (), var_typedefinition_11031.readProperty_mClassMethodMap (), var_typedefinition_11031.readProperty_mOptionalMethodMap (), var_typedefinition_11031.readProperty_mEnumerationDescriptor (), var_typedefinition_11031.readProperty_mHandledOperatorFlags (), var_typedefinition_11031.readProperty_mAddAssignOperatorArguments (), var_typedefinition_11031.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-weak-reference.galgas", 272))), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 272)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 296)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_12391 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 297)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = temp_3.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 301)).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
    temp_4 = extensionGetter_identifierRepresentation (temp_6.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 301)) ;
  }
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_8 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_9 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_11 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 299)), var_typedefinition_12391.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 300)), temp_4, temp_7.readProperty_mTypedAttributeList (), temp_8.readProperty_mAllTypedPropertyList (), temp_9.readProperty_mAllTypedPropertyList ().getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint (uint32_t (0U)), temp_10.readProperty_mAllTypedPropertyList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 304)).substract_operation (temp_11.readProperty_mTypedAttributeList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 304))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 304)), GALGAS_bool (kIsNotEqual, var_typedefinition_12391.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 298))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4539 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 132)), temp_1.readProperty_mEnumTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 132)) ;
  {
  const GALGAS_enumDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4539, temp_2, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 133)) ;
  }
  GALGAS_bool var_circularReference_4781 = GALGAS_bool (true) ;
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_4828 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_4 = var_circularReference_4781.isValidAndTrue () ;
  if (enumerator_4828.hasCurrentObject () && bool_4) {
    while (enumerator_4828.hasCurrentObject () && bool_4) {
      GALGAS_bool var_namesCurrentType_4903 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_4930 (enumerator_4828.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
      bool bool_5 = var_namesCurrentType_4903.operator_not (SOURCE_FILE ("type-enum.galgas", 138)).isValidAndTrue () ;
      if (enumerator_4930.hasCurrentObject () && bool_5) {
        while (enumerator_4930.hasCurrentObject () && bool_5) {
          GALGAS_lstring var_propertyKey_5017 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4930.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 139)), enumerator_4930.current_mValue_30_ (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 139)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, var_propertyKey_5017.readProperty_string ().objectCompare (var_key_4539.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_namesCurrentType_4903 = GALGAS_bool (true) ;
            }
          }
          enumerator_4930.gotoNextObject () ;
          if (enumerator_4930.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_4903.operator_not (SOURCE_FILE ("type-enum.galgas", 138)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_namesCurrentType_4903.operator_not (SOURCE_FILE ("type-enum.galgas", 144)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_circularReference_4781 = GALGAS_bool (false) ;
        }
      }
      enumerator_4828.gotoNextObject () ;
      if (enumerator_4828.hasCurrentObject ()) {
        bool_4 = var_circularReference_4781.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_circularReference_4781.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumDeclarationAST temp_9 = this ;
      cEnumerator_enumConstantList enumerator_5379 (temp_9.readProperty_mConstantList (), kENUMERATION_UP) ;
      while (enumerator_5379.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_5426 (enumerator_5379.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_5426.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_5488 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5426.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 152)), enumerator_5426.current_mValue_30_ (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 152)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, var_propertyKey_5488.readProperty_string ().objectCompare (var_key_4539.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4539, var_propertyKey_5488 COMMA_SOURCE_FILE ("type-enum.galgas", 154)) ;
              }
            }
          }
          enumerator_5426.gotoNextObject () ;
        }
        enumerator_5379.gotoNextObject () ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap var_constructorMap_6419 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 171)) ;
  GALGAS_setterMap var_setterMap_6451 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 172)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6499 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 173)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_6590 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 175)) ;
  GALGAS_unifiedTypeMapEntry var_enumTypeEntry_6705 ;
  {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mEnumTypeName (), var_enumTypeEntry_6705, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 177)) ;
  }
  GALGAS_constantIndexMap var_constantMap_6760 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 179)) ;
  GALGAS_bool var_hasAssociatedValues_6797 = GALGAS_bool (false) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_6857 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_6857.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_6935 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 182)) ;
    GALGAS_functionSignature var_argumentTypeList_6984 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 183)) ;
    cEnumerator__32_lstringlist enumerator_7020 (enumerator_6857.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_7020.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_7140 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7020.current_mValue_30_ (HERE), var_associatedTypeEntry_7140, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 185)) ;
      }
      var_argumentTypeList_6984.addAssign_operation (enumerator_7020.current_mValue_31_ (HERE), var_associatedTypeEntry_7140, enumerator_7020.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 186)) ;
      var_associatedTypeList_6935.addAssign_operation (var_associatedTypeEntry_7140  COMMA_SOURCE_FILE ("type-enum.galgas", 187)) ;
      var_hasAssociatedValues_6797 = GALGAS_bool (true) ;
      enumerator_7020.gotoNextObject () ;
    }
    {
    var_constantMap_6760.setter_insertKey (enumerator_6857.current_mConstantName (HERE), var_constantMap_6760.getter_count (SOURCE_FILE ("type-enum.galgas", 190)), var_associatedTypeList_6935, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 190)) ;
    }
    {
    var_constructorMap_6419.setter_insertOrReplace (enumerator_6857.current_mConstantName (HERE), var_argumentTypeList_6984, GALGAS_bool (false), var_enumTypeEntry_6705 COMMA_SOURCE_FILE ("type-enum.galgas", 191)) ;
    }
    enumerator_6857.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_2 = this ;
  cEnumerator_enumConstantList enumerator_7589 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_7589.hasCurrentObject ()) {
    GALGAS_optionalMethodSignature var_argumentTypeList_7665 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 200)) ;
    cEnumerator__32_lstringlist enumerator_7701 (enumerator_7589.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_7701.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_7821 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7701.current_mValue_30_ (HERE), var_associatedTypeEntry_7821, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 202)) ;
      }
      var_argumentTypeList_7665.addAssign_operation (GALGAS_bool (false), enumerator_7701.current_mValue_31_ (HERE), var_associatedTypeEntry_7821, enumerator_7701.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 203)) ;
      enumerator_7701.gotoNextObject () ;
    }
    {
    var_optionalMethodMap_6590.setter_insertKey (enumerator_7589.current_mConstantName (HERE), var_argumentTypeList_7665, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 205)) ;
    }
    enumerator_7589.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_8081 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_8081.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_8081.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 212)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_unifiedTypeMapEntryList var_associatedTypeList_8217 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 213)) ;
        GALGAS_formalParameterSignature var_argumentTypeList_8275 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 214)) ;
        cEnumerator__32_lstringlist enumerator_8313 (enumerator_8081.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_8313.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_8435 ;
          {
          extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8313.current_mValue_30_ (HERE), var_associatedTypeEntry_8435, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 216)) ;
          }
          var_argumentTypeList_8275.addAssign_operation (enumerator_8313.current_mValue_31_ (HERE), var_associatedTypeEntry_8435, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 217)), enumerator_8313.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 217)) ;
          var_associatedTypeList_8217.addAssign_operation (var_associatedTypeEntry_8435  COMMA_SOURCE_FILE ("type-enum.galgas", 218)) ;
          var_hasAssociatedValues_6797 = GALGAS_bool (true) ;
          enumerator_8313.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_6499.setter_insertKey (enumerator_8081.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 223)), var_argumentTypeList_8275, enumerator_8081.current_mConstantName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 227)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 221)) ;
        }
      }
    }
    enumerator_8081.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_8939 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_8939, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 233)) ;
  }
  const GALGAS_enumDeclarationAST temp_5 = this ;
  cEnumerator_enumConstantList enumerator_8963 (temp_5.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_8963.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap_8939, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("is").add_operation (enumerator_8963.current_mConstantName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 238)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 235)) ;
    }
    enumerator_8963.gotoNextObject () ;
  }
  {
  const GALGAS_enumDeclarationAST temp_6 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_6.readProperty_mEnumTypeName (), GALGAS_bool (false), var_getterMap_8939, var_setterMap_6451, var_instanceMethodMap_6499, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 244)) ;
  }
  GALGAS_string var_defaultConstructorName_9605 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_enumDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mDefaultConstantName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_unifiedTypeMapEntryList var_associatedTypeList_9764 ;
      const GALGAS_enumDeclarationAST temp_9 = this ;
      GALGAS_uint joker_9739 ; // Joker input parameter
      var_constantMap_6760.method_searchKey (temp_9.readProperty_mDefaultConstantName (), joker_9739, var_associatedTypeList_9764, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 259)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_9764.getter_length (SOURCE_FILE ("type-enum.galgas", 260)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_enumDeclarationAST temp_11 = this ;
          var_defaultConstructorName_9605 = temp_11.readProperty_mDefaultConstantName ().readProperty_string () ;
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_enumDeclarationAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mDefaultConstantName ().readProperty_location (), GALGAS_string ("the default constant should have no associated values"), fixItArray13  COMMA_SOURCE_FILE ("type-enum.galgas", 263)) ;
      }
    }
  }
  const GALGAS_enumDeclarationAST temp_14 = this ;
  const GALGAS_enumDeclarationAST temp_15 = this ;
  const GALGAS_enumDeclarationAST temp_16 = this ;
  const GALGAS_enumDeclarationAST temp_17 = this ;
  GALGAS_headerKind temp_18 ;
  const enumGalgasBool test_19 = var_hasAssociatedValues_6797.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 294)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 294)) ;
  }
  GALGAS_unifiedTypeDefinition var_typeDefinition_10042 = GALGAS_unifiedTypeDefinition::constructor_new (temp_14.readProperty_mEnumTypeName (), temp_15.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-enum.galgas", 271)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 272)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 274)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 275)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 276)), var_constructorMap_6419, var_getterMap_8939, var_setterMap_6451, var_instanceMethodMap_6499, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 281)), var_optionalMethodMap_6590, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 283)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 284)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-enum.galgas", 284)) COMMA_SOURCE_FILE ("type-enum.galgas", 284)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 285)), var_constantMap_6760, temp_16.readProperty_mConstantList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 288)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 289)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-enum.galgas", 291)), var_defaultConstructorName_9605, GALGAS_string ("enum-").add_operation (temp_17.readProperty_mEnumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 293)), temp_18  COMMA_SOURCE_FILE ("type-enum.galgas", 267)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_10042, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 296)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_11663 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 313)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11663, var_nameForUsefulness_11663, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 314)) ;
  }
  GALGAS_stringlist var_constantList_11830 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 316)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_11914 = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 317)) ;
  GALGAS_constantIndexMap var_constantMap_11937 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 318)) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_12012 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_12012.hasCurrentObject ()) {
    var_constantList_11830.addAssign_operation (enumerator_12012.current_mConstantName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 320)) ;
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_12132 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 321)) ;
    GALGAS_stringset var_associatedValueNameSet_12179 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 322)) ;
    cEnumerator__32_lstringlist enumerator_12209 (enumerator_12012.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_12209.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_12287 = function_typeNameForUsefulEntitiesGraph (enumerator_12209.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 324)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_11663, var_propertyTypeNameForUsefulness_12287 COMMA_SOURCE_FILE ("type-enum.galgas", 325)) ;
      }
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_12451 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_12209.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 326)) ;
      var_associatedTypeList_12132.addAssign_operation (var_associatedTypeEntry_12451  COMMA_SOURCE_FILE ("type-enum.galgas", 327)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_associatedValueNameSet_12179.getter_hasKey (enumerator_12209.current_mValue_31_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-enum.galgas", 328)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_12209.current_mValue_31_ (HERE).readProperty_location (), GALGAS_string ("duplicated name"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 329)) ;
        }
      }
      var_associatedValueNameSet_12179.addAssign_operation (enumerator_12209.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 331)) ;
      enumerator_12209.gotoNextObject () ;
    }
    {
    var_constantMap_11937.setter_insertKey (enumerator_12012.current_mConstantName (HERE), var_constantMap_11937.getter_count (SOURCE_FILE ("type-enum.galgas", 333)), var_associatedTypeList_12132, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 333)) ;
    }
    var_enumConstantListForGeneration_11914.addAssign_operation (enumerator_12012.current_mConstantName (HERE).readProperty_string (), var_associatedTypeList_12132  COMMA_SOURCE_FILE ("type-enum.galgas", 334)) ;
    enumerator_12012.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_12911 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 337)) ;
  const GALGAS_enumDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (temp_5.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 339)), GALGAS_enumTypeForGeneration::constructor_new (var_selfType_12911, var_enumConstantListForGeneration_11914  COMMA_SOURCE_FILE ("type-enum.galgas", 340))  COMMA_SOURCE_FILE ("type-enum.galgas", 338)) ;
}
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" enum"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n\n//--------------------------------- Enumeration\n  public: typedef enum {\n    kNotBuilt" ;
  GALGAS_uint index_652_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_652 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_652.hasCurrentObject ()) {
      result << ",\n    kEnum_" ;
      result << enumerator_652.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue () ;
      index_652_.increment () ;
      enumerator_652.gotoNextObject () ;
    }
  }
  result << "\n  } enumeration ;\n  \n//--------------------------------- Private data member\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;\n  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {\n    return mAssociatedValues.unsafePointer () ;\n  }\n\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "  private: enumeration mEnum ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }\n  public: inline enumeration enumValue (void) const { return mEnum ; }\n\n" ;
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
    result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
    result << GALGAS_string (" Phase 2: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).add_operation (GALGAS_string (" enum, associated values"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).stringValue () ;
    result << "\n//\n" ;
    GALGAS_uint index_290_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_290 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_290.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_290.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "//----------------------------------------------------------------------------------------------------------------------\n\nclass cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_290.current_mConstantName (HERE).stringValue () ;
          result << " : public cEnumAssociatedValues {\n" ;
          GALGAS_uint index_626_idx (0) ;
          if (enumerator_290.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_626 (enumerator_290.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_626.hasCurrentObject ()) {
              result << "  public: const GALGAS_" ;
              result << extensionGetter_identifierRepresentation (enumerator_626.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " mAssociatedValue" ;
              result << index_626_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " ;\n" ;
              index_626_idx.increment () ;
              enumerator_626.gotoNextObject () ;
            }
          }
          result << "\n//--- Constructor\n  public: cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_290.current_mConstantName (HERE).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_907_idx (0) ;
          if (enumerator_290.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_907 (enumerator_290.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_907.hasCurrentObject ()) {
              result << "const GALGAS_" ;
              result << extensionGetter_identifierRepresentation (enumerator_907.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              result << " inAssociatedValue" ;
              result << index_907_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              if (enumerator_907.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_907_idx.increment () ;
              enumerator_907.gotoNextObject () ;
            }
          }
          result << "\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS) ;\n\n  public: virtual void description (" ;
          columnMarker = result.currentColumn () ;
          result << "C_String & ioString,\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "const int32_t inIndentation) const ;\n  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;\n\n  public: virtual ~ cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_290.current_mConstantName (HERE).stringValue () ;
          result << " (void) {}\n} ;\n\n" ;
        }else if (kBoolFalse == test_1) {
        }
        index_290_.increment () ;
        enumerator_290.gotoNextObject () ;
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
  GALGAS_uint index_65_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_65 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_65.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_65.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n\ncEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << "::cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_427_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_427 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_427.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_427.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            result << " inAssociatedValue" ;
            result << index_427_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            if (enumerator_427.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_427_idx.increment () ;
            enumerator_427.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) :\ncEnumAssociatedValues (THERE)" ;
        GALGAS_uint index_663_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_663 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_663.hasCurrentObject ()) {
            result << ",\nmAssociatedValue" ;
            result << index_663_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << " (inAssociatedValue" ;
            result << index_663_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << ")" ;
            index_663_idx.increment () ;
            enumerator_663.gotoNextObject () ;
          }
        }
        result << " {\n} ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << "::description (" ;
        columnMarker = result.currentColumn () ;
        result << "C_String & ioString,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const int32_t inIndentation) const {\n  ioString << \"(\\n\" ;\n" ;
        GALGAS_uint index_1166_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1166 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1166.hasCurrentObject ()) {
            result << "  mAssociatedValue" ;
            result << index_1166_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue () ;
            result << ".description (ioString, inIndentation) ;\n" ;
            index_1166_idx.increment () ;
            enumerator_1166.gotoNextObject () ;
          }
        }
        result << "  ioString << \")\" ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << "::compare (const cEnumAssociatedValues * inOperand) const {\n  const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = dynamic_cast<const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << " *> (inOperand) ;\n  macroValidPointer (ptr) ;\n  typeComparisonResult result = kOperandEqual ;\n" ;
        GALGAS_uint index_1896_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1896 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1896.hasCurrentObject ()) {
            result << "  if (result == kOperandEqual) {\n    result = mAssociatedValue" ;
            result << index_1896_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ".objectCompare (ptr->mAssociatedValue" ;
            result << index_1896_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ") ;\n  }\n" ;
            index_1896_idx.increment () ;
            enumerator_1896.gotoNextObject () ;
          }
        }
        result << "  return result ;\n}\n\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_65_.increment () ;
      enumerator_65.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "mAssociatedValues (),\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "mEnum (kNotBuilt) {\n}\n\n" ;
  GALGAS_uint index_2461_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_2461 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2461.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_2461.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 54)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2461.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "UNUSED_LOCATION_ARGS" ;
      }else if (kBoolFalse == test_2) {
        GALGAS_uint index_2846_idx (0) ;
        if (enumerator_2461.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_2846 (enumerator_2461.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2846.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_2846.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_2846_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            if (enumerator_2846.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_2846_idx.increment () ;
            enumerator_2846.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS" ;
      }
      result << ") {\n  GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " result ;\n" ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2461.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  result.mEnum = kEnum_" ;
        result << enumerator_2461.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 67)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_3) {
        result << "  if (" ;
        GALGAS_uint index_3252_idx (0) ;
        if (enumerator_2461.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3252 (enumerator_2461.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3252.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3252_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 71)).stringValue () ;
            result << ".isValid ()" ;
            if (enumerator_3252.hasNextObject ()) {
              result << " && " ;
            }
            index_3252_idx.increment () ;
            enumerator_3252.gotoNextObject () ;
          }
        }
        result << ") {\n    result.mEnum = kEnum_" ;
        result << enumerator_2461.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).stringValue () ;
        result << " ;\n    cEnumAssociatedValues * ptr = NULL ;\n    macroMyNew (ptr, cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_2461.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        GALGAS_uint index_3609_idx (0) ;
        if (enumerator_2461.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3609 (enumerator_2461.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3609.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3609_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue () ;
            if (enumerator_3609.hasNextObject ()) {
              result << ", " ;
            }
            index_3609_idx.increment () ;
            enumerator_3609.gotoNextObject () ;
          }
        }
        result << " COMMA_THERE)) ;\n    result.mAssociatedValues.setPointer (ptr) ;\n    macroDetachSharedObject (ptr) ;\n  }\n" ;
      }
      result << "  return result ;\n}\n\n" ;
      index_2461_.increment () ;
      enumerator_2461.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3915_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_3915 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3915.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, enumerator_3915.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::method_" ;
        result << enumerator_3915.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 94)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4239_idx (0) ;
        if (enumerator_3915.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4239 (enumerator_3915.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4239.hasCurrentObject ()) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_4239.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << " & outAssociatedValue" ;
            result << index_4239_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            index_4239_idx.increment () ;
            enumerator_4239.gotoNextObject () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) const {\n  if (mEnum != kEnum_" ;
        result << enumerator_3915.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 100)).stringValue () ;
        result << ") {\n" ;
        GALGAS_uint index_4541_idx (0) ;
        if (enumerator_3915.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4541 (enumerator_3915.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4541.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_4541_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 102)).stringValue () ;
            result << ".drop () ;\n" ;
            index_4541_idx.increment () ;
            enumerator_4541.gotoNextObject () ;
          }
        }
        result << "    C_String s ;\n    s << \"method @" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " " ;
        result << enumerator_3915.current_mConstantName (HERE).stringValue () ;
        result << " invoked with an invalid enum value\" ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3915.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3915.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_5040_idx (0) ;
        if (enumerator_3915.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_5040 (enumerator_3915.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_5040.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_5040_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_5040_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " ;\n" ;
            index_5040_idx.increment () ;
            enumerator_5040.gotoNextObject () ;
          }
        }
        result << "  }\n}\n\n" ;
      }else if (kBoolFalse == test_4) {
      }
      index_3915_.increment () ;
      enumerator_3915.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5239_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5239 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5239.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nbool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::optional_" ;
      result << enumerator_5239.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 120)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_5521_idx (0) ;
      if (enumerator_5239.current_mAssociatedValueTypeList (HERE).isValid ()) {
        cEnumerator_unifiedTypeMapEntryList enumerator_5521 (enumerator_5239.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_5521.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_5521.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          result << " & outAssociatedValue" ;
          result << index_5521_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          if (enumerator_5521.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_5521_idx.increment () ;
          enumerator_5521.gotoNextObject () ;
        }
      }
      result << ") const {\n  const bool ok = mEnum == kEnum_" ;
      result << enumerator_5239.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 128)).stringValue () ;
      result << " ;\n" ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, enumerator_5239.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 129)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  if (ok) {\n    const auto * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5239.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n    // const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5239.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5239.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_6176_idx (0) ;
        if (enumerator_5239.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_6176 (enumerator_5239.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_6176.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_6176_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 134)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_6176_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 134)).stringValue () ;
            result << " ;\n" ;
            index_6176_idx.increment () ;
            enumerator_6176.gotoNextObject () ;
          }
        }
        result << "  }\n" ;
      }else if (kBoolFalse == test_5) {
      }
      result << "  return ok ;\n}\n\n" ;
      index_5239_.increment () ;
      enumerator_5239.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n\nstatic const char * gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [" ;
  result << in_CONSTANT_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).stringValue () ;
  result << "] = {\n  \"(not built)\"" ;
  GALGAS_uint index_6655_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6655 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6655.hasCurrentObject ()) {
      result << ",\n  " ;
      result << enumerator_6655.current_mConstantName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 147)).stringValue () ;
      index_6655_.increment () ;
      enumerator_6655.gotoNextObject () ;
    }
  }
  result << "\n} ;\n\n" ;
  GALGAS_uint index_6795_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6795 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6795.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_is" ;
      result << enumerator_6795.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n  return GALGAS_bool (kNotBuilt != mEnum, kEnum_" ;
      result << enumerator_6795.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 156)).stringValue () ;
      result << " == mEnum) ;\n}\n\n" ;
      index_6795_.increment () ;
      enumerator_6795.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
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
  result << ") const {\n  ioString << \"<enum @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ": \" << gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [mEnum] ;\n" ;
  const enumGalgasBool test_7 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "  mAssociatedValues.description (ioString, inIndentation) ;\n" ;
  }else if (kBoolFalse == test_7) {
  }
  result << "  ioString << \">\" ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n  typeComparisonResult result = kOperandNotValid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (mEnum < inOperand.mEnum) {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (mEnum > inOperand.mEnum) {\n      result = kFirstOperandGreaterThanSecond ;\n    }else{\n" ;
  const enumGalgasBool test_8 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;\n" ;
  }else if (kBoolFalse == test_8) {
    result << "      result = kOperandEqual ;\n" ;
  }
  result << "    }\n  }\n  return result ;\n}\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_14904 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_14946 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_14904.operator_not (SOURCE_FILE ("type-enum.galgas", 393)).isValidAndTrue () ;
  if (enumerator_14946.hasCurrentObject () && bool_1) {
    while (enumerator_14946.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_14904 = GALGAS_bool (kIsStrictSup, enumerator_14946.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 394)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_14946.gotoNextObject () ;
      if (enumerator_14946.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_14904.operator_not (SOURCE_FILE ("type-enum.galgas", 393)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_15097 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 396)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, var_selfTypedefinition_15097.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_15097.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 399)), temp_3.readProperty_mConstantList (), var_hasAssociatedValues_14904 COMMA_SOURCE_FILE ("type-enum.galgas", 397))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_15097.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_15097.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 405)), var_selfTypedefinition_15097.readProperty_mIsConcrete (), var_selfTypedefinition_15097.readProperty_mConstructorMap (), var_selfTypedefinition_15097.readProperty_mGetterMap (), var_selfTypedefinition_15097.readProperty_mSetterMap (), var_selfTypedefinition_15097.readProperty_mInstanceMethodMap (), var_selfTypedefinition_15097.readProperty_mClassMethodMap (), var_selfTypedefinition_15097.readProperty_mOptionalMethodMap (), var_selfTypedefinition_15097.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_15097.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_15097.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_15097.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-enum.galgas", 403))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 403)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                               GALGAS_string & outArgument_outHeader,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_16324 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_16366 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_16324.operator_not (SOURCE_FILE ("type-enum.galgas", 428)).isValidAndTrue () ;
  if (enumerator_16366.hasCurrentObject () && bool_1) {
    while (enumerator_16366.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_16324 = GALGAS_bool (kIsStrictSup, enumerator_16366.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 429)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_16366.gotoNextObject () ;
      if (enumerator_16366.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_16324.operator_not (SOURCE_FILE ("type-enum.galgas", 428)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_16526 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_16526.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapEntryList enumerator_16567 (enumerator_16526.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_16567.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_16567.current_mEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 433)) ;
      enumerator_16567.gotoNextObject () ;
    }
    enumerator_16526.gotoNextObject () ;
  }
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_16688 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 436)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, var_selfTypedefinition_16688.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_16688.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 439)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_16324 COMMA_SOURCE_FILE ("type-enum.galgas", 437))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_17278 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_17320 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_17278.operator_not (SOURCE_FILE ("type-enum.galgas", 453)).isValidAndTrue () ;
  if (enumerator_17320.hasCurrentObject () && bool_1) {
    while (enumerator_17320.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_17278 = GALGAS_bool (kIsStrictSup, enumerator_17320.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 454)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_17320.gotoNextObject () ;
      if (enumerator_17320.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_17278.operator_not (SOURCE_FILE ("type-enum.galgas", 453)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 456)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_17530 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 457)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, var_selfTypedefinition_17530.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_17530.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 460)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_17278 COMMA_SOURCE_FILE ("type-enum.galgas", 458))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                    GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                    GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                    GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_11972 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 313)), temp_1.readProperty_mExternTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-extern.galgas", 313)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11972, temp_2, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 314)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                              const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                              const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap var_getterMap_12874 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_12874, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 327)) ;
  }
  GALGAS_constructorMap var_constructorMap_12913 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 328)) ;
  GALGAS_setterMap var_setterMap_12945 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 329)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_12993 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 330)) ;
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  cEnumerator_externTypeConstructorList enumerator_13071 (temp_0.readProperty_mExternTypeConstructorList (), kENUMERATION_UP) ;
  while (enumerator_13071.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_13194 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13071.current_mResultTypeName (HERE), var_returnedTypeEntry_13194, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 333)) ;
    }
    GALGAS_functionSignature var_arguments_13239 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 335)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_13315 (enumerator_13071.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_13315.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_13432 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13315.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_13432, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 337)) ;
      }
      var_arguments_13239.addAssign_operation (enumerator_13315.current_mFormalSelector (HERE), var_argumentTypeEntry_13432, enumerator_13315.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 338)) ;
      enumerator_13315.gotoNextObject () ;
    }
    {
    var_constructorMap_12913.setter_insertKey (enumerator_13071.current_mConstructorName (HERE), var_arguments_13239, GALGAS_bool (true), var_returnedTypeEntry_13194, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 341)) ;
    }
    enumerator_13071.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  cEnumerator_externTypeGetterList enumerator_13751 (temp_1.readProperty_mExternTypeGetterList (), kENUMERATION_UP) ;
  while (enumerator_13751.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_13869 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13751.current_mResultTypeName (HERE), var_returnedTypeEntry_13869, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 350)) ;
    }
    GALGAS_functionSignature var_arguments_13914 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 352)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_13990 (enumerator_13751.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_13990.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_14107 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13990.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_14107, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 354)) ;
      }
      var_arguments_13914.addAssign_operation (enumerator_13990.current_mFormalSelector (HERE), var_argumentTypeEntry_14107, enumerator_13990.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 355)) ;
      enumerator_13990.gotoNextObject () ;
    }
    {
    var_getterMap_12874.setter_insertKey (enumerator_13751.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 360)), var_arguments_13914, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 362)), GALGAS_bool (true), var_returnedTypeEntry_13869, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 365)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 358)) ;
    }
    enumerator_13751.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  cEnumerator_externTypeSetterList enumerator_14531 (temp_2.readProperty_mExternTypeSetterList (), kENUMERATION_UP) ;
  while (enumerator_14531.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_14616 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 371)) ;
    cEnumerator_formalParameterListAST enumerator_14719 (enumerator_14531.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_14719.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_14879 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_14719.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_14879, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 373)) ;
      }
      var_routineSignature_14616.addAssign_operation (enumerator_14719.current_mFormalSelector (HERE), var_parameterTypeIndex_14879, enumerator_14719.current_mFormalArgumentPassingMode (HERE), enumerator_14719.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 377)) ;
      enumerator_14719.gotoNextObject () ;
    }
    {
    var_setterMap_12945.setter_insertKey (enumerator_14531.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 382)), var_routineSignature_14616, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 385)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 380)) ;
    }
    enumerator_14531.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  cEnumerator_externTypeMethodList enumerator_15324 (temp_3.readProperty_mExternTypeMethodList (), kENUMERATION_UP) ;
  while (enumerator_15324.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_15383 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 391)) ;
    cEnumerator_formalParameterListAST enumerator_15512 (enumerator_15324.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_15512.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_15651 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_15512.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_15651, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 393)) ;
      }
      var_routineSignature_15383.addAssign_operation (enumerator_15512.current_mFormalSelector (HERE), var_parameterTypeIndex_15651, enumerator_15512.current_mFormalArgumentPassingMode (HERE), enumerator_15512.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 397)) ;
      enumerator_15512.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_12993.setter_insertKey (enumerator_15324.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 402)), var_routineSignature_15383, enumerator_15324.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 406)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 400)) ;
    }
    enumerator_15324.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  const GALGAS_externTypeDeclarationAST temp_6 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_16107 = GALGAS_unifiedTypeDefinition::constructor_new (temp_4.readProperty_mExternTypeName (), temp_5.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-extern.galgas", 415)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 416)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 418)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 419)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 420)), var_constructorMap_12913, var_getterMap_12874, var_setterMap_12945, var_instanceMethodMap_12993, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 425)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 426)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 427)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-extern.galgas", 428)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 429)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 430)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 431)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 432)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 433)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-extern.galgas", 435)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (temp_6.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 437)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 438))  COMMA_SOURCE_FILE ("type-extern.galgas", 411)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_16107, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 440)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_string /* constinArgument_inProductDirectory */,
                                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                             GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                             const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                             GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_17641 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 457)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17641, var_nameForUsefulness_17641, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 458)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 461)), GALGAS_externTypeDeclarationForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_2.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 463)), temp_3.readProperty_mExternTypeName ().readProperty_string (), temp_4.readProperty_mCppPreDeclarationCode (), temp_5.readProperty_mCppClassCode ()  COMMA_SOURCE_FILE ("type-extern.galgas", 462))  COMMA_SOURCE_FILE ("type-extern.galgas", 460)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18848 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 485)) ;
  const GALGAS_externTypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_2 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, var_selfTypedefinition_18848.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 488)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("type-extern.galgas", 486))) ;
  const GALGAS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_18848.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 494)), var_selfTypedefinition_18848.readProperty_mIsConcrete (), var_selfTypedefinition_18848.readProperty_mConstructorMap (), var_selfTypedefinition_18848.readProperty_mGetterMap (), var_selfTypedefinition_18848.readProperty_mSetterMap (), var_selfTypedefinition_18848.readProperty_mInstanceMethodMap (), var_selfTypedefinition_18848.readProperty_mClassMethodMap (), var_selfTypedefinition_18848.readProperty_mOptionalMethodMap (), var_selfTypedefinition_18848.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_18848.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_18848.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_18848.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-extern.galgas", 492))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 492)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3881 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 104)), temp_1.readProperty_mGraphTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 104)) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3881, temp_2, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 105)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3881, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 106)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 106)) COMMA_SOURCE_FILE ("type-graph.galgas", 106)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeEntry_4932 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeEntry_4932, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 119)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeEntry_5074 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_5074, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 124)) ;
  }
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_5212 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mGraphTypeName (), var_graphTypeEntry_5212, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 129)) ;
  }
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_5378 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_5378, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 134)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringListTypeEntry_5533 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_5533, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 139)) ;
  }
  GALGAS_getterMap var_getterMap_5627 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5627, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 144)) ;
  }
  GALGAS_constructorMap var_constructorMap_5666 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 145)) ;
  GALGAS_setterMap var_setterMap_5698 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 146)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5746 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 147)) ;
  GALGAS_formalParameterSignature var_formalParameterList_5837 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 149)) ;
  var_formalParameterList_5837.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 151)), var_associatedListTypeEntry_5378, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 153)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 150)) ;
  var_formalParameterList_5837.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 156)), var_lstringListTypeEntry_5533, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 158)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 155)) ;
  var_formalParameterList_5837.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 161)), var_associatedListTypeEntry_5378, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 163)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 160)) ;
  var_formalParameterList_5837.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 166)), var_lstringListTypeEntry_5533, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 168)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 165)) ;
  {
  var_instanceMethodMap_5746.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 171))  COMMA_SOURCE_FILE ("type-graph.galgas", 171)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 172)), var_formalParameterList_5837, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 174)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 176)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 170)) ;
  }
  {
  var_instanceMethodMap_5746.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 180))  COMMA_SOURCE_FILE ("type-graph.galgas", 180)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 181)), var_formalParameterList_5837, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 183)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 185)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 179)) ;
  }
  var_formalParameterList_5837 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 190)) ;
  var_formalParameterList_5837.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 192)), var_associatedListTypeEntry_5378, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 194)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 191)) ;
  var_formalParameterList_5837.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 197)), var_lstringListTypeEntry_5533, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 199)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 196)) ;
  {
  var_instanceMethodMap_5746.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 202))  COMMA_SOURCE_FILE ("type-graph.galgas", 202)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 203)), var_formalParameterList_5837, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 205)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 207)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 201)) ;
  }
  {
  var_instanceMethodMap_5746.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 211))  COMMA_SOURCE_FILE ("type-graph.galgas", 211)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 212)), var_formalParameterList_5837, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 214)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 216)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 210)) ;
  }
  {
  var_instanceMethodMap_5746.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 220))  COMMA_SOURCE_FILE ("type-graph.galgas", 220)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 221)), var_formalParameterList_5837, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 223)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 225)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 219)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5627, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("nodeList"), temp_2.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 230)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5627, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("reversedGraph"), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 238)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5627, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 246)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5627, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 254)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5627, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 262)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5627, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 270)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_5627, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 278)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_5627, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 288)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5627, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 298)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5627, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 306)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5627, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 314)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_5627, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 322)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_5627, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 336)) ;
  }
  {
  var_constructorMap_5666.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 347))  COMMA_SOURCE_FILE ("type-graph.galgas", 347)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 348)), GALGAS_bool (false), var_graphTypeEntry_5212, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 346)) ;
  }
  var_formalParameterList_5837 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 353)) ;
  var_formalParameterList_5837.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 355)), var_lstringTypeEntry_5074, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 357)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 354)) ;
  cEnumerator_functionSignature enumerator_12246 (extensionGetter_definition (var_associatedListTypeEntry_5378, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 359)).readProperty_mAddAssignOperatorArguments (), kENUMERATION_UP) ;
  while (enumerator_12246.hasCurrentObject ()) {
    var_formalParameterList_5837.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 361)), enumerator_12246.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 363)), enumerator_12246.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 360)) ;
    enumerator_12246.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_5 = this ;
  cEnumerator_graphInsertModifierList enumerator_12502 (temp_5.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_12502.hasCurrentObject ()) {
    {
    var_setterMap_5698.setter_insertOrReplace (enumerator_12502.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 369)), var_formalParameterList_5837, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 372)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 367)) ;
    }
    enumerator_12502.gotoNextObject () ;
  }
  {
  var_setterMap_5698.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 379))  COMMA_SOURCE_FILE ("type-graph.galgas", 379)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 380)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 381)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 383)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 378)) ;
  }
  var_formalParameterList_5837 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 387)) ;
  var_formalParameterList_5837.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 388)), var_stringTypeEntry_4932, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 388)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 388)) ;
  {
  var_setterMap_5698.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 390))  COMMA_SOURCE_FILE ("type-graph.galgas", 390)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 391)), var_formalParameterList_5837, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 394)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 389)) ;
  }
  var_formalParameterList_5837 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 399)) ;
  var_formalParameterList_5837.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 400)), var_lstringTypeEntry_5074, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 400)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 400)) ;
  var_formalParameterList_5837.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 401)), var_lstringTypeEntry_5074, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 401)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 401)) ;
  {
  var_setterMap_5698.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 403))  COMMA_SOURCE_FILE ("type-graph.galgas", 403)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 404)), var_formalParameterList_5837, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 407)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 402)) ;
  }
  var_formalParameterList_5837 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 412)) ;
  var_formalParameterList_5837.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 413)), var_lstringTypeEntry_5074, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 413)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 413)) ;
  {
  var_setterMap_5698.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 415))  COMMA_SOURCE_FILE ("type-graph.galgas", 415)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 416)), var_formalParameterList_5837, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 419)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 414)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_6 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_6.readProperty_mGraphTypeName (), GALGAS_bool (false), var_getterMap_5627, var_setterMap_5698, var_instanceMethodMap_5746, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 424)) ;
  }
  const GALGAS_graphDeclarationAST temp_7 = this ;
  const GALGAS_graphDeclarationAST temp_8 = this ;
  const GALGAS_graphDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_14912 = GALGAS_unifiedTypeDefinition::constructor_new (temp_7.readProperty_mGraphTypeName (), temp_8.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-graph.galgas", 441)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 442)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 444)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 445)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 446)), var_constructorMap_5666, var_getterMap_5627, var_setterMap_5698, var_instanceMethodMap_5746, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 451)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 452)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 453)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 454)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 455)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 456)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 457)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 458)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 459)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-graph.galgas", 461)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (temp_9.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 463)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 464))  COMMA_SOURCE_FILE ("type-graph.galgas", 437)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_14912, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 466)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_16572 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 483)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16572, var_nameForUsefulness_16572, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 484)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_16740 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 485)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16572, var_associatedTypeNameForUsefulness_16740 COMMA_SOURCE_FILE ("type-graph.galgas", 486)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_16919 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_2.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 488)) ;
  const GALGAS_graphDeclarationAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_17011 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 489)) ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  const GALGAS_graphDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListElementTypeEntry_17119 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_4.readProperty_mAssociatedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 491)), temp_5.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 490)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_associatedListTypeEntry_17011, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 493)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_graphDeclarationAST temp_7 = this ;
      const GALGAS_graphDeclarationAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_8.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 494)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 494)), fixItArray9  COMMA_SOURCE_FILE ("type-graph.galgas", 494)) ;
    }
  }
  GALGAS_stringset temp_10 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 497)) ;
  temp_10.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 497)) ;
  temp_10.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 497)) ;
  GALGAS_stringset var_reservedModifierNames_17554 = temp_10 ;
  const GALGAS_graphDeclarationAST temp_11 = this ;
  cEnumerator_graphInsertModifierList enumerator_17628 (temp_11.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_17628.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_reservedModifierNames_17554.getter_hasKey (enumerator_17628.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-graph.galgas", 499)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_17628.current_mInsertModifierName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17628.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 500)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 500)), fixItArray13  COMMA_SOURCE_FILE ("type-graph.galgas", 500)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_17628.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 502)) ;
    }
    enumerator_17628.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_14 = this ;
  const GALGAS_graphDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_14.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 506)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeEntry_16919, var_associatedListTypeEntry_17011, var_associatedListElementTypeEntry_17119, temp_15.readProperty_mInsertModifierList ()  COMMA_SOURCE_FILE ("type-graph.galgas", 507))  COMMA_SOURCE_FILE ("type-graph.galgas", 505)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                       GALGAS_string & outArgument_outHeader,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18988 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 530)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, var_selfTypedefinition_18988.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 533)) COMMA_SOURCE_FILE ("type-graph.galgas", 531))) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_18988.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 537)), var_selfTypedefinition_18988.readProperty_mIsConcrete (), var_selfTypedefinition_18988.readProperty_mConstructorMap (), var_selfTypedefinition_18988.readProperty_mGetterMap (), var_selfTypedefinition_18988.readProperty_mSetterMap (), var_selfTypedefinition_18988.readProperty_mInstanceMethodMap (), var_selfTypedefinition_18988.readProperty_mClassMethodMap (), var_selfTypedefinition_18988.readProperty_mOptionalMethodMap (), var_selfTypedefinition_18988.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_18988.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_18988.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_18988.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-graph.galgas", 535))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 535)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 558)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 559)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 560)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = this ;
  const GALGAS_graphDeclarationForGeneration temp_4 = this ;
  const GALGAS_graphDeclarationForGeneration temp_5 = this ;
  const GALGAS_graphDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 563)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("type-graph.galgas", 561))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listDeclarationAST temp_0 = this ;
  const GALGAS_listDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3226 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 82)), temp_1.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 82)) ;
  {
  const GALGAS_listDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3226, temp_2, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 83)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_3383 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_3383.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3383.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 85)), enumerator_3383.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 85)) COMMA_SOURCE_FILE ("type-list.galgas", 85)) ;
    }
    enumerator_3383.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typedPropertyList var_typedAttributeList_4252 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 100)) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4355 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_4355.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_4355.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 102)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4355.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 103)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_4593 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_4355.current_mPropertyTypeName (HERE), var_attributeTypeIndex_4593, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 105)) ;
    }
    GALGAS_bool var_hasSelector_4614 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_4638 (enumerator_4355.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_4638.hasCurrentObject ()) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, enumerator_4638.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticWarning (enumerator_4638.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%setter' is obsolete and has no effect"), fixItArray4  COMMA_SOURCE_FILE ("type-list.galgas", 109)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsEqual, enumerator_4638.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (enumerator_4638.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%nogetter' is obsolete and has no effect"), fixItArray6  COMMA_SOURCE_FILE ("type-list.galgas", 111)) ;
          }
        }
        if (kBoolFalse == test_5) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsEqual, enumerator_4638.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = var_hasSelector_4614.boolEnum () ;
                if (kBoolTrue == test_8) {
                  TC_Array <C_FixItDescription> fixItArray9 ;
                  inCompiler->emitSemanticError (enumerator_4638.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '%selector' attribute is already named"), fixItArray9  COMMA_SOURCE_FILE ("type-list.galgas", 114)) ;
                }
              }
              var_hasSelector_4614 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            GALGAS_stringlist temp_11 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 120)) ;
            temp_11.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 120)) ;
            appendFixItActions (fixItArray10, kFixItReplace, temp_11) ;
            inCompiler->emitSemanticError (enumerator_4638.current_mValue (HERE).readProperty_location (), GALGAS_string ("only '%selector' attribute is allowed here"), fixItArray10  COMMA_SOURCE_FILE ("type-list.galgas", 118)) ;
          }
        }
      }
      enumerator_4638.gotoNextObject () ;
    }
    var_typedAttributeList_4252.addAssign_operation (var_attributeTypeIndex_4593, enumerator_4355.current_mPropertyName (HERE), enumerator_4355.current_mIsPublic (HERE), var_hasSelector_4614  COMMA_SOURCE_FILE ("type-list.galgas", 123)) ;
    enumerator_4355.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_uintType_5394 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_5394, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 126)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_5498 ;
  {
  const GALGAS_listDeclarationAST temp_12 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_12.readProperty_mListTypeName (), var_listTypeIndex_5498, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 128)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_5719 ;
  {
  const GALGAS_listDeclarationAST temp_13 = this ;
  const GALGAS_listDeclarationAST temp_14 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_13.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 131)), temp_14.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 131)), var_listElementTypeIndex_5719, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 130)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5804 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 135)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5863 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 136)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_5931 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 137)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_5998 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 138)) ;
  cEnumerator_typedPropertyList enumerator_6067 (var_typedAttributeList_4252, kENUMERATION_UP) ;
  while (enumerator_6067.hasCurrentObject ()) {
    GALGAS_string temp_15 ;
    const enumGalgasBool test_16 = enumerator_6067.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = enumerator_6067.current_mPropertyName (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_6110 = temp_15 ;
    var_enumerationDescriptor_5804.addAssign_operation (enumerator_6067.current_mPropertyTypeEntry (HERE), enumerator_6067.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 141)) ;
    var_constructorAttributeTypeList_5863.addAssign_operation (var_selector_6110.getter_nowhere (SOURCE_FILE ("type-list.galgas", 143)), enumerator_6067.current_mPropertyTypeEntry (HERE), enumerator_6067.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 142)) ;
    var_setterOutputFormalArgumentList_5931.addAssign_operation (var_selector_6110.getter_nowhere (SOURCE_FILE ("type-list.galgas", 147)), enumerator_6067.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 149)), enumerator_6067.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 146)) ;
    var_setterInputFormalArgumentList_5998.addAssign_operation (var_selector_6110.getter_nowhere (SOURCE_FILE ("type-list.galgas", 152)), enumerator_6067.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 154)), enumerator_6067.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 151)) ;
    enumerator_6067.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6696 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 158)) ;
  {
  const GALGAS_listDeclarationAST temp_17 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_6696, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyList"), temp_17.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 159)) ;
  }
  {
  var_constructorMap_6696.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 167))  COMMA_SOURCE_FILE ("type-list.galgas", 167)), var_constructorAttributeTypeList_5863, GALGAS_bool (false), var_listTypeIndex_5498, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 166)) ;
  }
  GALGAS_getterMap var_getterMap_7138 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_7138, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 173)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_7138, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 174)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_7138, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 181)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_18 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_7138, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_18.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 188)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_19 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_7138, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_19.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 196)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_20 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_7138, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_20.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 204)) ;
  }
  cEnumerator_typedPropertyList enumerator_8255 (var_typedAttributeList_4252, kENUMERATION_UP) ;
  while (enumerator_8255.hasCurrentObject ()) {
    {
    GALGAS_functionSignature temp_21 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 216)) ;
    temp_21.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 216)), var_uintType_5394, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 216)) ;
    var_getterMap_7138.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_8255.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 214)), enumerator_8255.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 214)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 215)), temp_21, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 217)), GALGAS_bool (true), enumerator_8255.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 220)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 213)) ;
    }
    enumerator_8255.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_8712 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 225)) ;
  {
  var_instanceMethodMap_8712.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 227))  COMMA_SOURCE_FILE ("type-list.galgas", 227)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 228)), var_setterOutputFormalArgumentList_5931, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 230)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 232)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 226)) ;
  }
  {
  var_instanceMethodMap_8712.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 236))  COMMA_SOURCE_FILE ("type-list.galgas", 236)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 237)), var_setterOutputFormalArgumentList_5931, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 239)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 241)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 235)) ;
  }
  GALGAS_setterMap var_setterMap_9234 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 245)) ;
  {
  GALGAS_formalParameterSignature temp_22 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 249)) ;
  temp_22.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 249)), var_listElementTypeIndex_5719, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-list.galgas", 249)), GALGAS_string ("inElement")  COMMA_SOURCE_FILE ("type-list.galgas", 249)) ;
  var_setterMap_9234.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("append"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 247))  COMMA_SOURCE_FILE ("type-list.galgas", 247)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 248)), temp_22, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 251)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 246)) ;
  }
  {
  var_setterMap_9234.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 255))  COMMA_SOURCE_FILE ("type-list.galgas", 255)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 256)), var_setterOutputFormalArgumentList_5931, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 259)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 254)) ;
  }
  {
  var_setterMap_9234.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 263))  COMMA_SOURCE_FILE ("type-list.galgas", 263)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 264)), var_setterOutputFormalArgumentList_5931, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 267)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 262)) ;
  }
  var_setterOutputFormalArgumentList_5931.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 270)), var_uintType_5394, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 270)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 270)) ;
  {
  var_setterMap_9234.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 272))  COMMA_SOURCE_FILE ("type-list.galgas", 272)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 273)), var_setterOutputFormalArgumentList_5931, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 276)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 271)) ;
  }
  cEnumerator_typedPropertyList enumerator_10277 (var_typedAttributeList_4252, kENUMERATION_UP) ;
  while (enumerator_10277.hasCurrentObject ()) {
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = enumerator_10277.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_23) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_10361 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 281)) ;
        var_setterFormalArgumentList_10361.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 282)), enumerator_10277.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 282)), enumerator_10277.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 282)) ;
        var_setterFormalArgumentList_10361.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 283)), var_uintType_5394, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 283)), enumerator_10277.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 283)) ;
        {
        var_setterMap_9234.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_10277.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 285)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 285)), enumerator_10277.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 285)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 286)), var_setterFormalArgumentList_10361, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 289)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 284)) ;
        }
      }
    }
    enumerator_10277.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_5998.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 295)), var_uintType_5394, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 295)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 295)) ;
  {
  var_setterMap_9234.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 297))  COMMA_SOURCE_FILE ("type-list.galgas", 297)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 298)), var_setterInputFormalArgumentList_5998, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 301)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 296)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_24 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_24.readProperty_mListTypeName (), GALGAS_bool (false), var_getterMap_7138, var_setterMap_9234, var_instanceMethodMap_8712, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 305)) ;
  }
  const GALGAS_listDeclarationAST temp_25 = this ;
  const GALGAS_listDeclarationAST temp_26 = this ;
  const GALGAS_listDeclarationAST temp_27 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_11743 = GALGAS_unifiedTypeDefinition::constructor_new (temp_25.readProperty_mListTypeName (), temp_26.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-list.galgas", 322)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 323)), GALGAS_bool (true), var_typedAttributeList_4252, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 326)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 327)), var_constructorMap_6696, var_getterMap_7138, var_setterMap_9234, var_instanceMethodMap_8712, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 332)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 333)), var_enumerationDescriptor_5804, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 335)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 335)) COMMA_SOURCE_FILE ("type-list.galgas", 335)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 335)) COMMA_SOURCE_FILE ("type-list.galgas", 335)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-list.galgas", 335)) COMMA_SOURCE_FILE ("type-list.galgas", 335)), var_constructorAttributeTypeList_5863, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 337)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 338)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 339)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 340)), GALGAS_bool (false), var_listElementTypeIndex_5719, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (temp_27.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 344)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 345))  COMMA_SOURCE_FILE ("type-list.galgas", 318)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_11743, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 347)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_12956 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 355)) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_13041 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_13041.hasCurrentObject ()) {
    var_structAttributeList_12956.addAssign_operation (enumerator_13041.current_isConstant (HERE), enumerator_13041.current_mPropertyTypeName (HERE), enumerator_13041.current_optional (HERE), enumerator_13041.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 363)), enumerator_13041.current_mInitialization (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 357)) ;
    enumerator_13041.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  const GALGAS_listDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 368)), temp_3.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 368)), var_structAttributeList_12956, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 366))  COMMA_SOURCE_FILE ("type-list.galgas", 366)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_14239 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 389)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14239, var_nameForUsefulness_14239, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 390)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_14403 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 391)), temp_2.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 391)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14239, var_elementTypeNameForUsefulness_14403 COMMA_SOURCE_FILE ("type-list.galgas", 392)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_14639 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 394)) ;
  GALGAS_propertyIndexMap var_attributeMap_14681 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 395)) ;
  const GALGAS_listDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_14785 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_14785.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = enumerator_14785.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 397)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_14785.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray5  COMMA_SOURCE_FILE ("type-list.galgas", 398)) ;
      }
    }
    GALGAS_lstring var_propertyTypeNameForUsefulness_14973 = function_typeNameForUsefulEntitiesGraph (enumerator_14785.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 400)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14239, var_propertyTypeNameForUsefulness_14973 COMMA_SOURCE_FILE ("type-list.galgas", 401)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_15125 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_14785.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 402)) ;
    GALGAS_bool var_hasSetter_15203 = enumerator_14785.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_15235 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_15259 (enumerator_14785.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_15259.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsEqual, enumerator_15259.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (enumerator_15259.current_mValue (HERE).readProperty_location (), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 407)) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsEqual, enumerator_15259.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticWarning (enumerator_15259.current_mValue (HERE).readProperty_location (), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray9  COMMA_SOURCE_FILE ("type-list.galgas", 409)) ;
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsEqual, enumerator_15259.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_10) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = var_hasSelector_15235.boolEnum () ;
                if (kBoolTrue == test_11) {
                  TC_Array <C_FixItDescription> fixItArray12 ;
                  inCompiler->emitSemanticError (enumerator_15259.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '%selector' attribute is already named"), fixItArray12  COMMA_SOURCE_FILE ("type-list.galgas", 412)) ;
                }
              }
              var_hasSelector_15235 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            GALGAS_stringlist temp_14 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 418)) ;
            temp_14.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 418)) ;
            appendFixItActions (fixItArray13, kFixItReplace, temp_14) ;
            inCompiler->emitSemanticError (enumerator_15259.current_mValue (HERE).readProperty_location (), GALGAS_string ("only '%selector' attribut is allowed here"), fixItArray13  COMMA_SOURCE_FILE ("type-list.galgas", 416)) ;
          }
        }
      }
      enumerator_15259.gotoNextObject () ;
    }
    var_typedAttributeList_14639.addAssign_operation (var_t_15125, enumerator_14785.current_mPropertyName (HERE), var_hasSetter_15203, var_hasSelector_15235  COMMA_SOURCE_FILE ("type-list.galgas", 421)) ;
    {
    var_attributeMap_14681.setter_insertKey (enumerator_14785.current_mPropertyName (HERE), var_t_15125, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 426)) ;
    }
    enumerator_14785.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_15 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_16031 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_15.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 429)) ;
  const GALGAS_listDeclarationAST temp_16 = this ;
  const GALGAS_listDeclarationAST temp_17 = this ;
  const GALGAS_listDeclarationAST temp_18 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_16.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 431)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_16031, extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_17.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 434)), temp_18.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 434)), var_typedAttributeList_14639  COMMA_SOURCE_FILE ("type-list.galgas", 432))  COMMA_SOURCE_FILE ("type-list.galgas", 430)) ;
}
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_list {\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n\n//--------------------------------- List constructor used by listmap\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) ;\n\n//--------------------------------- Element constructor\n  public: static void makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_843_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_843 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_843.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_843.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_843.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      index_843_.increment () ;
      enumerator_843.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cCollectionElement {\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mObject ;\n\n//--- Constructors\n  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_579_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_579 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_579.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_579.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_579.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_579.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_579_.increment () ;
      enumerator_579.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method for comparing elements\n  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cCollectionElement * copy (void) ;\n\n//--- Description\n  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n} ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1621_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1621 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1621.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_1621.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1621.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      if (enumerator_1621.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1621_.increment () ;
      enumerator_1621.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (" ;
  GALGAS_uint index_1874_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1874 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1874.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_1874.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue () ;
      if (enumerator_1874.hasNextObject ()) {
        result << ", " ;
      }
      index_1874_.increment () ;
      enumerator_1874.gotoNextObject () ;
    }
  }
  result << ") {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (" ;
  GALGAS_uint index_2309_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2309 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2309.hasCurrentObject ()) {
      result << "inElement.mProperty_" ;
      result << enumerator_2309.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue () ;
      if (enumerator_2309.hasNextObject ()) {
        result << ", " ;
      }
      index_2309_.increment () ;
      enumerator_2309.gotoNextObject () ;
    }
  }
  result << ") {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nbool cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n  return true ; // return mObject.isValid () ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncCollectionElement * cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n  cCollectionElement * result = NULL ;\n  macroMyNew (result, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_3008_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3008 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3008.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_3008.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue () ;
      if (enumerator_3008.hasNextObject ()) {
        result << ", " ;
      }
      index_3008_.increment () ;
      enumerator_3008.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3439_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3439 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3439.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n  ioString.writeStringMultiple (\"| \", inIndentation) ;\n  ioString << " ;
      result << enumerator_3439.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue () ;
      result << " \":\" ;\n  mObject.mProperty_" ;
      result << enumerator_3439.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3439_.increment () ;
      enumerator_3439.gotoNextObject () ;
    }
  }
  result << "}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n  macroValidSharedObject (operand, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n  return mObject.objectCompare (operand->mObject) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\nAC_GALGAS_list () {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) :\nAC_GALGAS_list (inSharedArray) {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (UNUSED_LOCATION_ARGS) {\n  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "  (capCollectionElementArray ()) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_listWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5253_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5253 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5253.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_5253.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      result << " & inOperand" ;
      result << index_5253_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      if (enumerator_5253.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5253_IDX.increment () ;
      enumerator_5253.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (" ;
  GALGAS_uint index_5514_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5514 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5514.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_5514_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 131)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_5514.hasNextObject ()) {
        result << " && " ;
      }
      index_5514_IDX.increment () ;
      enumerator_5514.gotoNextObject () ;
    }
  }
  result << ") {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (capCollectionElementArray ()) ;\n    capCollectionElement attributes ;\n    GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_5838_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5838 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5838.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_5838_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 139)).stringValue () ;
      index_5838_IDX.increment () ;
      enumerator_5838.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n    result.appendObject (attributes) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_6250_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6250 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6250.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_6250.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      result << " & in_" ;
      result << enumerator_6250.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      index_6250_.increment () ;
      enumerator_6250.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n  macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6584_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6584 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6584.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_6584.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue () ;
      if (enumerator_6584.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6584_.increment () ;
      enumerator_6584.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n  outAttributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6994_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6994 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6994.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_6994.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      result << " & inOperand" ;
      result << index_6994_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      if (enumerator_6994.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6994_IDX.increment () ;
      enumerator_6994.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (" ;
  GALGAS_uint index_7240_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7240 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7240.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7240_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 177)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_7240.hasNextObject ()) {
        result << " && " ;
      }
      index_7240_IDX.increment () ;
      enumerator_7240.gotoNextObject () ;
    }
  }
  result << ") {\n      cCollectionElement * p = NULL ;\n      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7488_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7488 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7488.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7488_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 184)).stringValue () ;
      if (enumerator_7488.hasNextObject ()) {
        result << ", " ;
      }
      index_7488_IDX.increment () ;
      enumerator_7488.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n      capCollectionElement attributes ;\n      attributes.setPointer (p) ;\n      macroDetachSharedObject (p) ;\n      appendObject (attributes) ;\n    }else{ // Destroy receiver\n      drop () ;\n    }\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_append (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inElement,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inElement.isValid ()) {\n      cCollectionElement * p = NULL ;\n      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inElement COMMA_THERE)) ;\n      capCollectionElement attributes ;\n      attributes.setPointer (p) ;\n      macroDetachSharedObject (p) ;\n      appendObject (attributes) ;\n    }else{\n      drop () ;\n    }\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_insertAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8669_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8669 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8669.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_8669.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << " inOperand" ;
      result << index_8669_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8669_IDX.increment () ;
      enumerator_8669.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inInsertionIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inInsertionIndex.isValid ()" ;
  GALGAS_uint index_9006_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9006 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9006.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_9006_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 229)).stringValue () ;
      result << ".isValid ()" ;
      index_9006_IDX.increment () ;
      enumerator_9006.gotoNextObject () ;
    }
  }
  result << ") {\n      cCollectionElement * p = NULL ;\n      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_9241_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9241 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9241.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_9241_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 235)).stringValue () ;
      if (enumerator_9241.hasNextObject ()) {
        result << ", " ;
      }
      index_9241_IDX.increment () ;
      enumerator_9241.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n      capCollectionElement attributes ;\n      attributes.setPointer (p) ;\n      macroDetachSharedObject (p) ;\n      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n    }else{\n      drop () ;\n    }\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9815_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9815 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9815.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_9815.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << " & outOperand" ;
      result << index_9815_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9815_IDX.increment () ;
      enumerator_9815.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inRemoveIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inRemoveIndex.isValid ()) {\n      capCollectionElement attributes ;\n      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;\n      cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n      if (NULL == p) {\n" ;
  GALGAS_uint index_10412_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10412 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10412.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_10412_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 266)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10412_IDX.increment () ;
      enumerator_10412.gotoNextObject () ;
    }
  }
  result << "        drop () ;\n      }else{\n        macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10650_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10650 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10650.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_10650_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10650.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " ;\n" ;
      index_10650_IDX.increment () ;
      enumerator_10650.gotoNextObject () ;
    }
  }
  result << "      }\n    }else{\n" ;
  GALGAS_uint index_10858_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10858 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10858.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_10858_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 279)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10858_IDX.increment () ;
      enumerator_10858.gotoNextObject () ;
    }
  }
  result << "      drop () ;    \n    }\n  }else{\n" ;
  GALGAS_uint index_11022_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11022 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11022.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11022_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 286)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11022_IDX.increment () ;
      enumerator_11022.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popFirst (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11332_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11332 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11332.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_11332.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << " & outOperand" ;
      result << index_11332_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11332_IDX.increment () ;
      enumerator_11332.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeFirstObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_11778_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11778 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11778.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11778_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 305)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11778_IDX.increment () ;
      enumerator_11778.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11986_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11986 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11986.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11986_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11986.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " ;\n" ;
      index_11986_IDX.increment () ;
      enumerator_11986.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popLast (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12353_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12353 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12353.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_12353.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << " & outOperand" ;
      result << index_12353_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12353_IDX.increment () ;
      enumerator_12353.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeLastObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_12798_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12798 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12798.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12798_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 330)).stringValue () ;
      result << ".drop () ;\n" ;
      index_12798_IDX.increment () ;
      enumerator_12798.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_13006_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13006 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13006.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13006_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_13006.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " ;\n" ;
      index_13006_IDX.increment () ;
      enumerator_13006.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_first (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13371_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13371 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13371.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_13371.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << " & outOperand" ;
      result << index_13371_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13371_IDX.increment () ;
      enumerator_13371.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readFirst (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_13815_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13815 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13815.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13815_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 355)).stringValue () ;
      result << ".drop () ;\n" ;
      index_13815_IDX.increment () ;
      enumerator_13815.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_14023_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14023 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14023.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14023_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_14023.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " ;\n" ;
      index_14023_IDX.increment () ;
      enumerator_14023.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_last (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14387_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14387 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14387.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_14387.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << " & outOperand" ;
      result << index_14387_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_14387_IDX.increment () ;
      enumerator_14387.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readLast (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_14830_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14830 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14830.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14830_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 380)).stringValue () ;
      result << ".drop () ;\n" ;
      index_14830_IDX.increment () ;
      enumerator_14830.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_15038_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15038 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15038.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_15038_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_15038.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " ;\n" ;
      index_15038_IDX.increment () ;
      enumerator_15038.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::add_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand,\n                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = *this ;\n    result.appendList (inOperand) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListWithRange (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_range & inRange,\n                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListFromIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListToIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::plusAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inOperand,\n                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n  appendList (inOperand) ;\n}\n\n" ;
  GALGAS_uint index_17875_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17875 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17875.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_17875.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_17875.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_17875.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
        result << " inOperand,\n                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_uint inIndex,\n                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) {\n  cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;\n  if (NULL != p) {\n    macroValidSharedObject (p, cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n    macroUniqueSharedObject (p) ;\n    p->mObject.mProperty_" ;
        result << enumerator_17875.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 454)).stringValue () ;
        result << " = inOperand ;\n  }\n}\n\n" ;
      }else if (kBoolFalse == test_0) {
      }
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_17875.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_17875.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue () ;
      result << "AtIndex (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_uint & inIndex,\n                                              " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n                                              " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes.ptr () ;\n  GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_17875.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 465)).stringValue () ;
      result << " result ;\n  if (NULL != p) {\n    macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n    result = p->mObject.mProperty_" ;
      result << enumerator_17875.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 468)).stringValue () ;
      result << " ;\n  }\n  return result ;\n}\n\n" ;
      index_17875_IDX.increment () ;
      enumerator_17875.gotoNextObject () ;
    }
  }
  result << "\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const typeEnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n  const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n  return p->mObject ;\n}\n\n\n" ;
  GALGAS_uint index_20811_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20811 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20811.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_20811.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_20811.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n  const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n  return p->mObject.mProperty_" ;
      result << enumerator_20811.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 497)).stringValue () ;
      result << " ;\n}\n\n" ;
      index_20811_IDX.increment () ;
      enumerator_20811.gotoNextObject () ;
    }
  }
  result << "\n\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_17691 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 471)) ;
  const GALGAS_listTypeForGeneration temp_1 = this ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, var_selfTypedefinition_17691.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 474)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-list.galgas", 472))) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_17691.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 479)), var_selfTypedefinition_17691.readProperty_mIsConcrete (), var_selfTypedefinition_17691.readProperty_mConstructorMap (), var_selfTypedefinition_17691.readProperty_mGetterMap (), var_selfTypedefinition_17691.readProperty_mSetterMap (), var_selfTypedefinition_17691.readProperty_mInstanceMethodMap (), var_selfTypedefinition_17691.readProperty_mClassMethodMap (), var_selfTypedefinition_17691.readProperty_mOptionalMethodMap (), var_selfTypedefinition_17691.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_17691.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_17691.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_17691.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-list.galgas", 477))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 477)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_18978 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_18978.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18978.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 501)) ;
    enumerator_18978.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 503)) ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 504)) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_19209 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 505)) ;
  const GALGAS_listTypeForGeneration temp_4 = this ;
  const GALGAS_listTypeForGeneration temp_5 = this ;
  const GALGAS_listTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, var_selfTypedefinition_19209.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 508)), temp_5.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (extensionGetter_definition (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 510)).readProperty_mTypeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 510)) COMMA_SOURCE_FILE ("type-list.galgas", 506))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_2620 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 63)) ;
  var_structAttributeList_2620.addAssign_operation (GALGAS_bool (false), GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 66)), GALGAS_bool (false), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 68)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 70)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-listmap.galgas", 71))  COMMA_SOURCE_FILE ("type-listmap.galgas", 64)) ;
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  var_structAttributeList_2620.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mAssociatedListTypeName (), GALGAS_bool (false), GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 76)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 78)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-listmap.galgas", 79))  COMMA_SOURCE_FILE ("type-listmap.galgas", 72)) ;
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 83)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 83)), var_structAttributeList_2620, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 81))  COMMA_SOURCE_FILE ("type-listmap.galgas", 81)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3953 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 99)), temp_1.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 99)) ;
  {
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3953, temp_2, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 100)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3953, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 101)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 101)) COMMA_SOURCE_FILE ("type-listmap.galgas", 101)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_5027 ;
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mAssociatedListTypeName (), var_associatedTypeDefinition_5027, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 114)) ;
  GALGAS_typedPropertyList var_listTypedAttributeList_5076 = var_associatedTypeDefinition_5027.readProperty_mAllTypedPropertyList () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_associatedTypeDefinition_5027.readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 124)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_listmapDeclarationAST temp_2 = this ;
      const GALGAS_listmapDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 125)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 125)), fixItArray4  COMMA_SOURCE_FILE ("type-listmap.galgas", 125)) ;
      var_listTypedAttributeList_5076 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 126)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_5610 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 129)) ;
  GALGAS_getterMap var_getterMap_5699 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5699, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 130)) ;
  }
  GALGAS_setterMap var_setterMap_5728 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 131)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5776 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 132)) ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeIndex_5914 ;
  {
  const GALGAS_listmapDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.readProperty_mAssociatedListTypeName (), var_associatedListTypeIndex_5914, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 134)) ;
  }
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_6026 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_6026, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 136)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5699, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 138)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5699, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 145)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5699, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 152)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_6 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_5699, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inKey"), temp_6.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 159)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_7 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_5610, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_7.readProperty_mListmapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 168)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_7093 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 176)) ;
  var_enumeratorDescriptor_7093.addAssign_operation (var_stringTypeIndex_6026, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 177)) ;
  var_enumeratorDescriptor_7093.addAssign_operation (var_associatedListTypeIndex_5914, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 178)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_7307 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 180)) ;
  var_addAssignOperatorDescription_7307.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 181)), var_stringTypeIndex_6026, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 181)) ;
  cEnumerator_typedPropertyList enumerator_7448 (var_listTypedAttributeList_5076, kENUMERATION_UP) ;
  while (enumerator_7448.hasCurrentObject ()) {
    var_addAssignOperatorDescription_7307.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 183)), enumerator_7448.current_mPropertyTypeEntry (HERE), enumerator_7448.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 183)) ;
    enumerator_7448.gotoNextObject () ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_8.readProperty_mListmapTypeName (), GALGAS_bool (false), var_getterMap_5699, var_setterMap_5728, var_instanceMethodMap_5776, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 186)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_8128 ;
  {
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_9.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 200)), temp_10.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 200)), var_listElementTypeIndex_8128, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 199)) ;
  }
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  const GALGAS_listmapDeclarationAST temp_13 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_8181 = GALGAS_unifiedTypeDefinition::constructor_new (temp_11.readProperty_mListmapTypeName (), temp_12.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-listmap.galgas", 208)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 209)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 211)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 212)), var_listTypedAttributeList_5076, var_constructorMap_5610, var_getterMap_5699, var_setterMap_5728, var_instanceMethodMap_5776, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 218)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 219)), var_enumeratorDescriptor_7093, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 221)), var_addAssignOperatorDescription_7307, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 223)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 224)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 225)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 226)), GALGAS_bool (false), var_listElementTypeIndex_8128, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (temp_13.readProperty_mListmapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 230)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 231))  COMMA_SOURCE_FILE ("type-listmap.galgas", 204)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_8181, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 233)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_9835 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 250)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9835, var_nameForUsefulness_9835, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 251)) ;
  }
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_10005 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 252)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9835, var_associatedTypeNameForUsefulness_10005 COMMA_SOURCE_FILE ("type-listmap.galgas", 253)) ;
  }
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_10193 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 254)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 254)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9835, var_elementTypeNameForUsefulness_10193 COMMA_SOURCE_FILE ("type-listmap.galgas", 255)) ;
  }
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_10533 ;
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  extensionMethod_searchType (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mAssociatedListTypeName (), var_associatedTypeDefinition_10533, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 257)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_associatedTypeDefinition_10533.readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 267)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_listmapDeclarationAST temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("associated type should be a list type"), fixItArray7  COMMA_SOURCE_FILE ("type-listmap.galgas", 268)) ;
    }
  }
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (temp_8.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 272)), GALGAS_listmapTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_9.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 274)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_10.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 275)), var_associatedTypeDefinition_10533.readProperty_mAllTypedPropertyList (), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_11.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), temp_12.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277))  COMMA_SOURCE_FILE ("type-listmap.galgas", 273))  COMMA_SOURCE_FILE ("type-listmap.galgas", 271)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_string & outArgument_outHeader,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_12172 (temp_0.readProperty_mAssociatedListTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_12172.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_12172.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 297)) ;
    enumerator_12172.gotoNextObject () ;
  }
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_12293 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 299)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, var_selfTypedefinition_12293.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 302)) COMMA_SOURCE_FILE ("type-listmap.galgas", 300))) ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_12293.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 306)), var_selfTypedefinition_12293.readProperty_mIsConcrete (), var_selfTypedefinition_12293.readProperty_mConstructorMap (), var_selfTypedefinition_12293.readProperty_mGetterMap (), var_selfTypedefinition_12293.readProperty_mSetterMap (), var_selfTypedefinition_12293.readProperty_mInstanceMethodMap (), var_selfTypedefinition_12293.readProperty_mClassMethodMap (), var_selfTypedefinition_12293.readProperty_mOptionalMethodMap (), var_selfTypedefinition_12293.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_12293.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_12293.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_12293.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-listmap.galgas", 304))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 304)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outImplementation,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 327)) ;
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListMapElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 328)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  const GALGAS_listmapTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 330)), extensionGetter_identifierRepresentation (temp_3.readProperty_mAssociatedListTypeIndex (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 331)), temp_4.readProperty_mAssociatedListTypedAttributeList () COMMA_SOURCE_FILE ("type-listmap.galgas", 329))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dictDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_dictDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_dictDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("dict @").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 15)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_3786 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 111)) ;
  const GALGAS_dictDeclarationAST temp_0 = this ;
  var_structAttributeList_3786.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mKeyTypeName (), GALGAS_bool (false), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 112)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 112)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-dict.galgas", 112))  COMMA_SOURCE_FILE ("type-dict.galgas", 112)) ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_3960 (temp_1.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_3960.hasCurrentObject ()) {
    var_structAttributeList_3786.addAssign_operation (GALGAS_bool (false), enumerator_3960.current_mPropertyTypeName (HERE), enumerator_3960.current_optional (HERE), enumerator_3960.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 114)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-dict.galgas", 114))  COMMA_SOURCE_FILE ("type-dict.galgas", 114)) ;
    enumerator_3960.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_2 = this ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_2.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_3.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 118)), temp_4.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 118)), var_structAttributeList_3786, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 116))  COMMA_SOURCE_FILE ("type-dict.galgas", 116)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  GALGAS_lstring var_dictionary_5098 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 135)), temp_1.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 135)) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_5098, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 136)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 137)), temp_4.readProperty_mKeyTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 137)) COMMA_SOURCE_FILE ("type-dict.galgas", 137)) ;
  }
  const GALGAS_dictDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5367 (temp_5.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5367.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5367.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 139)), enumerator_5367.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 139)) COMMA_SOURCE_FILE ("type-dict.galgas", 139)) ;
    }
    enumerator_5367.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_keyTypeIndex_6269 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_6269, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 153)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6327 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_keyTypeIndex_6269, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 155)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_6452 = GALGAS_bool (false) ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_6469 (temp_1.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_6469.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_6469.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_6452.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_6469.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-dict.galgas", 161)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_6452 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_6469.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 165)) ;
    }
    enumerator_6469.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6773 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 169)) ;
  GALGAS_getterMap var_getterMap_6863 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6863, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 170)) ;
  }
  GALGAS_setterMap var_setterMap_6892 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 171)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6940 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 172)) ;
  {
  const GALGAS_dictDeclarationAST temp_6 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_6773, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyDict"), temp_6.readProperty_mDictTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 174)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_7 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_6863, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string::makeEmptyString (), temp_7.readProperty_mKeyTypeName ().readProperty_string (), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 182)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_6863, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 190)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_7648 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 198)) ;
  GALGAS_typedPropertyList var_typedPropertyList_7696 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 199)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_7778 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 200)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_7778.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 201)), var_keyTypeIndex_6269, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 201)) ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_6452.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_7648.addAssign_operation (temp_8.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 203)), var_keyTypeIndex_6269, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 205)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 202)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_8131 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 207)) ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_6452.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_8131.addAssign_operation (temp_10.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 209)), var_keyTypeIndex_6269, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 211)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 208)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_8384 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 213)) ;
  GALGAS_string temp_12 ;
  const enumGalgasBool test_13 = var_usesSelectorsInInsertAndSearch_6452.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_8384.addAssign_operation (GALGAS_bool (true), temp_12.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 216)), var_keyTypeIndex_6269, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 214)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_8571 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 219)) ;
  const GALGAS_dictDeclarationAST temp_14 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_8663 (temp_14.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_8663.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_8777 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8663.current_mPropertyTypeName (HERE), var_attributeTypeIndex_8777, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 221)) ;
    }
    GALGAS_bool var_hasSetter_8796 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_8823 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_7778.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 224)), var_attributeTypeIndex_8777, enumerator_8663.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 224)) ;
    var_typedPropertyList_7696.addAssign_operation (var_attributeTypeIndex_8777, enumerator_8663.current_mPropertyName (HERE), var_hasSetter_8796, var_hasSelector_8823  COMMA_SOURCE_FILE ("type-dict.galgas", 225)) ;
    var_typesToIncludeInHeaderCompilation_8571.addAssign_operation (var_attributeTypeIndex_8777  COMMA_SOURCE_FILE ("type-dict.galgas", 226)) ;
    var_enumerationDescriptor_6327.addAssign_operation (var_attributeTypeIndex_8777, enumerator_8663.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 227)) ;
    GALGAS_lstring temp_15 ;
    const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_6452.boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = enumerator_8663.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 229)) ;
    }
    var_insertMethodFormalArgumentList_7648.addAssign_operation (temp_15, var_attributeTypeIndex_8777, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 231)), enumerator_8663.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 228)) ;
    GALGAS_lstring temp_17 ;
    const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_6452.boolEnum () ;
    if (kBoolTrue == test_18) {
      temp_17 = enumerator_8663.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_18) {
      temp_17 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 234)) ;
    }
    var_removeMethodFormalArgumentList_8131.addAssign_operation (temp_17, var_attributeTypeIndex_8777, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-dict.galgas", 236)), enumerator_8663.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 233)) ;
    GALGAS_bool test_19 = var_usesSelectorsInInsertAndSearch_6452 ;
    if (kBoolTrue != test_19.boolEnum ()) {
      test_19 = var_hasSelector_8823 ;
    }
    GALGAS_lstring temp_20 ;
    const enumGalgasBool test_21 = test_19.boolEnum () ;
    if (kBoolTrue == test_21) {
      temp_20 = enumerator_8663.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_21) {
      temp_20 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 240)) ;
    }
    var_optionalMethodSignature_8384.addAssign_operation (GALGAS_bool (false), temp_20, var_attributeTypeIndex_8777, enumerator_8663.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 238)) ;
    enumerator_8663.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_22 = this ;
  var_setterMap_6892.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), temp_22.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 246)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 247)), var_removeMethodFormalArgumentList_8131, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 250)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 245)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_23 = this ;
  const GALGAS_dictDeclarationAST temp_24 = this ;
  var_instanceMethodMap_6940.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("searchKey"), temp_23.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 255)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 256)), var_removeMethodFormalArgumentList_8131, temp_24.readProperty_mDictTypeName ().readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 260)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 254)) ;
  }
  const GALGAS_dictDeclarationAST temp_25 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10466 (temp_25.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10466.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_10513 = GALGAS_lstring::constructor_new (enumerator_10466.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 265)), enumerator_10466.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 265)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_10675 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10466.current_mPropertyTypeName (HERE), var_attributeTypeIndex_10675, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 266)) ;
    }
    {
    GALGAS_functionSignature temp_26 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 270)) ;
    temp_26.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 270)), var_keyTypeIndex_6269, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 270)) ;
    var_getterMap_6863.setter_insertOrReplace (var_accessorName_10513, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 269)), temp_26, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 271)), GALGAS_bool (true), var_attributeTypeIndex_10675, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 274)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 267)) ;
    }
    enumerator_10466.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_27 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11098 (temp_27.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_11098.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_11145 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_11098.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 281)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 281)), enumerator_11098.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 280)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11402 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_11098.current_mPropertyTypeName (HERE), var_attributeTypeIndex_11402, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 284)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_11443 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 288)) ;
    var_accessorFormalArgumentList_11443.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 289)), var_attributeTypeIndex_11402, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 289)), enumerator_11098.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 289)) ;
    var_accessorFormalArgumentList_11443.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 290)), var_keyTypeIndex_6269, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 290)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 290)) ;
    {
    var_setterMap_6892.setter_insertOrReplace (var_accessorName_11145, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 293)), var_accessorFormalArgumentList_11443, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 296)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 291)) ;
    }
    enumerator_11098.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_28 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_28.readProperty_mDictTypeName (), GALGAS_bool (false), var_getterMap_6863, var_setterMap_6892, var_instanceMethodMap_6940, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 301)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_12421 ;
  {
  const GALGAS_dictDeclarationAST temp_29 = this ;
  const GALGAS_dictDeclarationAST temp_30 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_29.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 315)), temp_30.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 315)), var_elementTypeEntry_12421, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 314)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_12474 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 319)) ;
  {
  var_optionalMethodMap_12474.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 320)), var_optionalMethodSignature_8384, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 320)) ;
  }
  const GALGAS_dictDeclarationAST temp_31 = this ;
  const GALGAS_dictDeclarationAST temp_32 = this ;
  const GALGAS_dictDeclarationAST temp_33 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_12624 = GALGAS_unifiedTypeDefinition::constructor_new (temp_31.readProperty_mDictTypeName (), temp_32.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-dict.galgas", 326)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-dict.galgas", 327)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 329)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 330)), var_typedPropertyList_7696, var_constructorMap_6773, var_getterMap_6863, var_setterMap_6892, var_instanceMethodMap_6940, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 336)), var_optionalMethodMap_12474, var_enumerationDescriptor_6327, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 339)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 339)) COMMA_SOURCE_FILE ("type-dict.galgas", 339)), var_argumentTypeListForAddAssignWithFieldExpressionList_7778, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 341)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 342)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 343)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 344)), GALGAS_bool (false), var_elementTypeEntry_12421, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (temp_33.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 348)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-dict.galgas", 349))  COMMA_SOURCE_FILE ("type-dict.galgas", 322)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_12624, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 351)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters (const GALGAS_lstring constinArgument_inString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_13944 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 359)), kENUMERATION_UP) ;
  while (enumerator_13944.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_13981 = enumerator_13944.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 360)) ;
    {
    GALGAS_string joker_14068 ; // Joker input parameter
    var_explodedArray_13981.setter_popFirst (joker_14068, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 361)) ;
    }
    cEnumerator_stringlist enumerator_14086 (var_explodedArray_13981, kENUMERATION_UP) ;
    while (enumerator_14086.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_14086.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 363)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_14161 = enumerator_14086.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 364)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_14161.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 366)) ;
            }
          }
        }
      }
      enumerator_14086.gotoNextObject () ;
    }
    enumerator_13944.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters (const GALGAS_lstring constinArgument_inString,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_14654 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 376)), kENUMERATION_UP) ;
  while (enumerator_14654.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_14691 = enumerator_14654.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 377)) ;
    {
    GALGAS_string joker_14778 ; // Joker input parameter
    var_explodedArray_14691.setter_popFirst (joker_14778, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 378)) ;
    }
    cEnumerator_stringlist enumerator_14796 (var_explodedArray_14691, kENUMERATION_UP) ;
    while (enumerator_14796.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_14796.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 380)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_14871 = enumerator_14796.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 381)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_14871.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_14871.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 382)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 383)) ;
            }
          }
        }
      }
      enumerator_14796.gotoNextObject () ;
    }
    enumerator_14654.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForMapAndDict'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForMapAndDict (C_Compiler *
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dict.galgas", 393)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 394)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 395)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 396)) ;
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

void cPtr_dictDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_15951 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 411)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15951, var_nameForUsefulness_15951, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 412)) ;
  }
  const GALGAS_dictDeclarationAST temp_1 = this ;
  const GALGAS_dictDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_16115 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mDictTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 413)), temp_2.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 413)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15951, var_elementTypeNameForUsefulness_16115 COMMA_SOURCE_FILE ("type-dict.galgas", 414)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_16371 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 416)) ;
  GALGAS_propertyIndexMap var_attributeMap_16413 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 417)) ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_16480 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_16480.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_16544 = function_typeNameForUsefulEntitiesGraph (enumerator_16480.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 419)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15951, var_propertyTypeNameForUsefulness_16544 COMMA_SOURCE_FILE ("type-dict.galgas", 420)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_16717 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_16480.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 421)) ;
    GALGAS_bool var_hasSetter_16795 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_16822 = GALGAS_bool (false) ;
    var_typedAttributeList_16371.addAssign_operation (var_t_16717, enumerator_16480.current_mPropertyName (HERE), var_hasSetter_16795, var_hasSelector_16822  COMMA_SOURCE_FILE ("type-dict.galgas", 424)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 429)).getter_hasKey (enumerator_16480.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-dict.galgas", 429)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_17015 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_17092 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 431)), kENUMERATION_UP) ;
        while (enumerator_17092.hasCurrentObject ()) {
          var_m_17015.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_17092.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 432)) ;
          enumerator_17092.gotoNextObject () ;
        }
        var_m_17015.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 434)) ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_16480.current_mPropertyName (HERE).readProperty_location (), var_m_17015, fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 435)) ;
      }
    }
    {
    var_attributeMap_16413.setter_insertKey (enumerator_16480.current_mPropertyName (HERE), var_t_16717, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 437)) ;
    }
    enumerator_16480.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_6 = this ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  const GALGAS_dictDeclarationAST temp_8 = this ;
  const GALGAS_dictDeclarationAST temp_9 = this ;
  const GALGAS_dictDeclarationAST temp_10 = this ;
  const GALGAS_dictDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_6.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 441)), GALGAS_dictTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_7.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 443)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_8.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 444)), temp_9.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 444)), temp_10.readProperty_mDictTypeName (), var_typedAttributeList_16371, temp_11.readProperty_mKeyTypeName ()  COMMA_SOURCE_FILE ("type-dict.galgas", 442))  COMMA_SOURCE_FILE ("type-dict.galgas", 440)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18494 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 468)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, var_selfTypedefinition_18494.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 471)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-dict.galgas", 469))) ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_18494.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 476)), var_selfTypedefinition_18494.readProperty_mIsConcrete (), var_selfTypedefinition_18494.readProperty_mConstructorMap (), var_selfTypedefinition_18494.readProperty_mGetterMap (), var_selfTypedefinition_18494.readProperty_mSetterMap (), var_selfTypedefinition_18494.readProperty_mInstanceMethodMap (), var_selfTypedefinition_18494.readProperty_mClassMethodMap (), var_selfTypedefinition_18494.readProperty_mOptionalMethodMap (), var_selfTypedefinition_18494.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_18494.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_18494.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_18494.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-dict.galgas", 474))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 474)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 497)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 498)) ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  const GALGAS_dictTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 500)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 502)) COMMA_SOURCE_FILE ("type-dict.galgas", 499))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@mapDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_mapDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_mapDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 47)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_10433 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 302)) ;
  var_structAttributeList_10433.addAssign_operation (GALGAS_bool (false), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 305)), GALGAS_bool (false), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 307)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 309)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-map.galgas", 310))  COMMA_SOURCE_FILE ("type-map.galgas", 303)) ;
  const GALGAS_mapDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10683 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10683.hasCurrentObject ()) {
    var_structAttributeList_10433.addAssign_operation (GALGAS_bool (false), enumerator_10683.current_mPropertyTypeName (HERE), enumerator_10683.current_optional (HERE), enumerator_10683.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 318)), enumerator_10683.current_mInitialization (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 312)) ;
    enumerator_10683.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 323)), temp_3.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 323)), var_structAttributeList_10433, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 321))  COMMA_SOURCE_FILE ("type-map.galgas", 321)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapDeclarationAST temp_0 = this ;
  const GALGAS_mapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_11869 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 339)), temp_1.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 339)) ;
  {
  const GALGAS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11869, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 340)) ;
  }
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12024 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12024.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_12024.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 342)), enumerator_12024.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 342)) COMMA_SOURCE_FILE ("type-map.galgas", 342)) ;
    }
    enumerator_12024.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_12931 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_12931, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 357)) ;
  }
  GALGAS_unifiedTypeMapEntry var_locationTypeEntry_13044 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeEntry_13044, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 359)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeIndex_13154 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_13154, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 361)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 363)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_13154, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 363)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_13239 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_13322 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_13355 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_13371 (temp_1.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_13371.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_13371.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_13322.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_13371.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-map.galgas", 370)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_13322 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_13371.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_activateSuggestion_13355.operator_not (SOURCE_FILE ("type-map.galgas", 374)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_13371.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 375)) ;
            }
          }
          var_activateSuggestion_13355 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_13371.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute"), fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 379)) ;
      }
    }
    enumerator_13371.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_13838 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 383)) ;
  GALGAS_getterMap var_getterMap_13928 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_13928, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 384)) ;
  }
  GALGAS_setterMap var_setterMap_13956 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 385)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_14004 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 386)) ;
  {
  const GALGAS_mapDeclarationAST temp_9 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_13838, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_9.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 388)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_10 = this ;
  const GALGAS_mapDeclarationAST temp_11 = this ;
  routine_enterConstructorWithArgument (var_constructorMap_13838, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("mapWithMapToOverride"), temp_10.readProperty_mMapTypeName ().readProperty_string (), GALGAS_string ("inMap"), temp_11.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 395)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13928, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 405)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments (var_getterMap_13928, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 412)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13928, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 423)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13928, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 430)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_13928, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 437)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_13928, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 446)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_12 = this ;
  routine_enterBaseGetterWithoutArgument (var_getterMap_13928, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("overriddenMap"), temp_12.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 455)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13928, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 462)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_16168 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 470)) ;
  GALGAS_typedPropertyList var_typedPropertyList_16223 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 471)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_16302 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 472)) ;
  GALGAS_string temp_13 ;
  const enumGalgasBool test_14 = var_usesSelectorsInInsertAndSearch_13322.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_16302.addAssign_operation (GALGAS_bool (true), temp_13.getter_nowhere (SOURCE_FILE ("type-map.galgas", 475)), var_stringTypeIndex_12931, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 473)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_16529 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 478)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_16529.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 479)), var_lstringTypeIndex_13154, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 479)) ;
  GALGAS_string temp_15 ;
  const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_13322.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_16168.addAssign_operation (temp_15.getter_nowhere (SOURCE_FILE ("type-map.galgas", 481)), var_lstringTypeIndex_13154, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 483)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 480)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_16893 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 485)) ;
  GALGAS_string temp_17 ;
  const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_13322.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_16893.addAssign_operation (temp_17.getter_nowhere (SOURCE_FILE ("type-map.galgas", 487)), var_lstringTypeIndex_13154, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 489)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 486)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_17162 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 491)) ;
  const GALGAS_mapDeclarationAST temp_19 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_17258 (temp_19.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_17258.hasCurrentObject ()) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = enumerator_17258.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-map.galgas", 493)).boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_17258.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a map"), fixItArray21  COMMA_SOURCE_FILE ("type-map.galgas", 494)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_17495 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_17258.current_mPropertyTypeName (HERE), var_attributeTypeIndex_17495, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 496)) ;
    }
    GALGAS_bool var_hasSetter_17514 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_17541 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_17568 (enumerator_17258.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_17568.hasCurrentObject ()) {
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        test_22 = GALGAS_bool (kIsEqual, enumerator_17568.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_22) {
          var_hasSelector_17541 = GALGAS_bool (true) ;
          enumGalgasBool test_23 = kBoolTrue ;
          if (kBoolTrue == test_23) {
            GALGAS_bool test_24 = var_hasSelector_17541 ;
            if (kBoolTrue == test_24.boolEnum ()) {
              test_24 = var_usesSelectorsInInsertAndSearch_13322 ;
            }
            test_23 = test_24.boolEnum () ;
            if (kBoolTrue == test_23) {
              TC_Array <C_FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticWarning (enumerator_17568.current_mValue (HERE).readProperty_location (), GALGAS_string ("%selector useless, map has %selectors attributes"), fixItArray25  COMMA_SOURCE_FILE ("type-map.galgas", 503)) ;
            }
          }
        }
      }
      enumerator_17568.gotoNextObject () ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_16529.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 507)), var_attributeTypeIndex_17495, enumerator_17258.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 507)) ;
    var_typedPropertyList_16223.addAssign_operation (var_attributeTypeIndex_17495, enumerator_17258.current_mPropertyName (HERE), var_hasSetter_17514, var_hasSelector_17541  COMMA_SOURCE_FILE ("type-map.galgas", 508)) ;
    var_typesToIncludeInHeaderCompilation_17162.addAssign_operation (var_attributeTypeIndex_17495  COMMA_SOURCE_FILE ("type-map.galgas", 509)) ;
    var_enumerationDescriptor_13239.addAssign_operation (var_attributeTypeIndex_17495, enumerator_17258.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 510)) ;
    GALGAS_bool test_26 = var_usesSelectorsInInsertAndSearch_13322 ;
    if (kBoolTrue != test_26.boolEnum ()) {
      test_26 = var_hasSelector_17541 ;
    }
    GALGAS_lstring temp_27 ;
    const enumGalgasBool test_28 = test_26.boolEnum () ;
    if (kBoolTrue == test_28) {
      temp_27 = enumerator_17258.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_28) {
      temp_27 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 512)) ;
    }
    var_insertMethodFormalArgumentList_16168.addAssign_operation (temp_27, var_attributeTypeIndex_17495, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 514)), enumerator_17258.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 511)) ;
    GALGAS_bool test_29 = var_usesSelectorsInInsertAndSearch_13322 ;
    if (kBoolTrue != test_29.boolEnum ()) {
      test_29 = var_hasSelector_17541 ;
    }
    GALGAS_lstring temp_30 ;
    const enumGalgasBool test_31 = test_29.boolEnum () ;
    if (kBoolTrue == test_31) {
      temp_30 = enumerator_17258.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_31) {
      temp_30 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 517)) ;
    }
    var_removeMethodFormalArgumentList_16893.addAssign_operation (temp_30, var_attributeTypeIndex_17495, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 519)), enumerator_17258.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 516)) ;
    GALGAS_bool test_32 = var_usesSelectorsInInsertAndSearch_13322 ;
    if (kBoolTrue != test_32.boolEnum ()) {
      test_32 = var_hasSelector_17541 ;
    }
    GALGAS_lstring temp_33 ;
    const enumGalgasBool test_34 = test_32.boolEnum () ;
    if (kBoolTrue == test_34) {
      temp_33 = enumerator_17258.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_34) {
      temp_33 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 523)) ;
    }
    var_optionalMethodSignature_16302.addAssign_operation (GALGAS_bool (false), temp_33, var_attributeTypeIndex_17495, enumerator_17258.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 521)) ;
    enumerator_17258.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_35 = this ;
  cEnumerator_insertMethodListAST enumerator_18848 (temp_35.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_18848.hasCurrentObject ()) {
    enumGalgasBool test_36 = kBoolTrue ;
    if (kBoolTrue == test_36) {
      test_36 = var_setterMap_13956.getter_hasKey (enumerator_18848.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 529)).boolEnum () ;
      if (kBoolTrue == test_36) {
        TC_Array <C_FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (enumerator_18848.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_18848.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 530)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 530)), fixItArray37  COMMA_SOURCE_FILE ("type-map.galgas", 530)) ;
      }
    }
    if (kBoolFalse == test_36) {
      {
      var_setterMap_13956.setter_insertOrReplace (enumerator_18848.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 534)), var_insertMethodFormalArgumentList_16168, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 537)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 532)) ;
      }
    }
    enumerator_18848.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_38 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_19311 (temp_38.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_19311.hasCurrentObject ()) {
    enumGalgasBool test_39 = kBoolTrue ;
    if (kBoolTrue == test_39) {
      test_39 = var_setterMap_13956.getter_hasKey (enumerator_19311.current_mMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 544)).boolEnum () ;
      if (kBoolTrue == test_39) {
        TC_Array <C_FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticError (enumerator_19311.current_mMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_19311.current_mMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 545)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 545)), fixItArray40  COMMA_SOURCE_FILE ("type-map.galgas", 545)) ;
      }
    }
    if (kBoolFalse == test_39) {
      {
      var_setterMap_13956.setter_insertOrReplace (enumerator_19311.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 549)), var_removeMethodFormalArgumentList_16893, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 552)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 547)) ;
      }
    }
    enumerator_19311.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_41 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_19821 (temp_41.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_19821.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_searchMethodFormalArgumentList_19890 = var_removeMethodFormalArgumentList_16893 ;
    enumGalgasBool test_42 = kBoolTrue ;
    if (kBoolTrue == test_42) {
      test_42 = enumerator_19821.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_42) {
        GALGAS_lstring temp_43 ;
        const enumGalgasBool test_44 = var_usesSelectorsInInsertAndSearch_13322.boolEnum () ;
        if (kBoolTrue == test_44) {
          temp_43 = GALGAS_string ("keyLocation").getter_nowhere (SOURCE_FILE ("type-map.galgas", 562)) ;
        }else if (kBoolFalse == test_44) {
          temp_43 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 562)) ;
        }
        var_searchMethodFormalArgumentList_19890.addAssign_operation (temp_43, var_locationTypeEntry_13044, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 564)), GALGAS_string ("outKeyLocation")  COMMA_SOURCE_FILE ("type-map.galgas", 561)) ;
      }
    }
    {
    var_instanceMethodMap_14004.setter_insertKey (enumerator_19821.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 569)), var_searchMethodFormalArgumentList_19890, enumerator_19821.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 573)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 567)) ;
    }
    enumerator_19821.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_45 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_20495 (temp_45.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_20495.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_20542 = GALGAS_lstring::constructor_new (enumerator_20495.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 579)), enumerator_20495.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 579)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_20704 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_20495.current_mPropertyTypeName (HERE), var_attributeTypeIndex_20704, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 580)) ;
    }
    {
    GALGAS_functionSignature temp_46 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 584)) ;
    temp_46.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 584)), var_stringTypeIndex_12931, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 584)) ;
    var_getterMap_13928.setter_insertOrReplace (var_accessorName_20542, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 583)), temp_46, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 585)), GALGAS_bool (true), var_attributeTypeIndex_20704, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 588)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 581)) ;
    }
    enumerator_20495.gotoNextObject () ;
  }
  enumGalgasBool test_47 = kBoolTrue ;
  if (kBoolTrue == test_47) {
    const GALGAS_mapDeclarationAST temp_48 = this ;
    test_47 = GALGAS_bool (kIsSupOrEqual, temp_48.readProperty_mInsertOrReplaceDeclarationListAST ().getter_length (SOURCE_FILE ("type-map.galgas", 593)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_47) {
      GALGAS_location var_insertOrReplaceLocation_21146 ;
      const GALGAS_mapDeclarationAST temp_49 = this ;
      temp_49.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_21146, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 594)) ;
      {
      var_setterMap_13956.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_21146  COMMA_SOURCE_FILE ("type-map.galgas", 596)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 597)), var_insertMethodFormalArgumentList_16168, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 600)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 595)) ;
      }
    }
  }
  const GALGAS_mapDeclarationAST temp_50 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_21514 (temp_50.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_21514.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_21561 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_21514.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 607)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 607)), enumerator_21514.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 606)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_21818 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_21514.current_mPropertyTypeName (HERE), var_attributeTypeIndex_21818, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 610)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_21885 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 614)) ;
    var_accessorFormalArgumentList_21885.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 615)), var_attributeTypeIndex_21818, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 615)), enumerator_21514.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 615)) ;
    var_accessorFormalArgumentList_21885.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 616)), var_stringTypeIndex_12931, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 616)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 616)) ;
    {
    var_setterMap_13956.setter_insertOrReplace (var_accessorName_21561, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 619)), var_accessorFormalArgumentList_21885, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 622)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 617)) ;
    }
    enumerator_21514.gotoNextObject () ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_22350 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 627)) ;
  {
  var_optionalMethodMap_22350.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 628)), var_optionalMethodSignature_16302, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 628)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_51 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_51.readProperty_mMapTypeName (), GALGAS_bool (false), var_getterMap_13928, var_setterMap_13956, var_instanceMethodMap_14004, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 630)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_22992 ;
  {
  const GALGAS_mapDeclarationAST temp_52 = this ;
  const GALGAS_mapDeclarationAST temp_53 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_52.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 644)), temp_53.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 644)), var_elementTypeEntry_22992, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 643)) ;
  }
  const GALGAS_mapDeclarationAST temp_54 = this ;
  const GALGAS_mapDeclarationAST temp_55 = this ;
  const GALGAS_mapDeclarationAST temp_56 = this ;
  const GALGAS_mapDeclarationAST temp_57 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_23040 = GALGAS_unifiedTypeDefinition::constructor_new (temp_54.readProperty_mMapTypeName (), temp_55.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-map.galgas", 652)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-map.galgas", 653)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 655)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 656)), var_typedPropertyList_16223, var_constructorMap_13838, var_getterMap_13928, var_setterMap_13956, var_instanceMethodMap_14004, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 662)), var_optionalMethodMap_22350, var_enumerationDescriptor_13239, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 665)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 665)) COMMA_SOURCE_FILE ("type-map.galgas", 665)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 665)) COMMA_SOURCE_FILE ("type-map.galgas", 665)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-map.galgas", 665)) COMMA_SOURCE_FILE ("type-map.galgas", 665)), var_argumentTypeListForAddAssignWithFieldExpressionList_16529, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 667)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 668)), temp_56.readProperty_mSearchMethodList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 670)), GALGAS_bool (false), var_elementTypeEntry_22992, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (temp_57.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 674)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 674)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-map.galgas", 675))  COMMA_SOURCE_FILE ("type-map.galgas", 648)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_23040, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 677)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GALGAS_string /* constinArgument_inProductDirectory */,
                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                      GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_25126 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 706)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_25126, var_nameForUsefulness_25126, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 707)) ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_25289 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mMapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 708)), temp_2.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 708)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_25126, var_elementTypeNameForUsefulness_25289 COMMA_SOURCE_FILE ("type-map.galgas", 709)) ;
  }
  GALGAS_bool var_usesSelectorsInInsertAndSearch_25527 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_25560 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_lstringlist enumerator_25576 (temp_3.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_25576.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, enumerator_25576.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_usesSelectorsInInsertAndSearch_25527 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_25576.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_activateSuggestion_25560 = GALGAS_bool (false) ;
        }
      }
    }
    enumerator_25576.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_25839 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 721)) ;
  GALGAS_propertyIndexMap var_attributeMap_25881 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 722)) ;
  const GALGAS_mapDeclarationAST temp_6 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_25948 (temp_6.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_25948.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_26012 = function_typeNameForUsefulEntitiesGraph (enumerator_25948.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 724)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_25126, var_propertyTypeNameForUsefulness_26012 COMMA_SOURCE_FILE ("type-map.galgas", 725)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_26185 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_25948.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 726)) ;
    GALGAS_bool var_hasSetter_26263 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_26290 = GALGAS_bool (false) ;
    var_typedAttributeList_25839.addAssign_operation (var_t_26185, enumerator_25948.current_mPropertyName (HERE), var_hasSetter_26263, var_hasSelector_26290  COMMA_SOURCE_FILE ("type-map.galgas", 729)) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 734)).getter_hasKey (enumerator_25948.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 734)).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_string var_m_26483 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_26560 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 736)), kENUMERATION_UP) ;
        while (enumerator_26560.hasCurrentObject ()) {
          var_m_26483.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_26560.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 737)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 737)) ;
          enumerator_26560.gotoNextObject () ;
        }
        var_m_26483.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 739)) ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_25948.current_mPropertyName (HERE).readProperty_location (), var_m_26483, fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 740)) ;
      }
    }
    {
    var_attributeMap_25881.setter_insertKey (enumerator_25948.current_mPropertyName (HERE), var_t_26185, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 742)) ;
    }
    enumerator_25948.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_26791 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 745)) ;
  const GALGAS_mapDeclarationAST temp_9 = this ;
  cEnumerator_insertMethodListAST enumerator_26855 (temp_9.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_26855.hasCurrentObject ()) {
    {
    var_insertMethodMap_26791.setter_insertKey (enumerator_26855.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 747)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_26855.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 748)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_26855.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 749)) ;
    }
    enumerator_26855.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_27113 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 752)) ;
  const GALGAS_mapDeclarationAST temp_10 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_27159 (temp_10.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_27159.hasCurrentObject ()) {
    {
    var_searchMethodMap_27113.setter_insertKey (enumerator_27159.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 754)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_27159.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 755)) ;
    }
    enumerator_27159.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_11 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_27354 (temp_11.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_27354.hasCurrentObject ()) {
    {
    var_insertMethodMap_26791.setter_insertKey (enumerator_27354.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 759)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_27354.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 760)) ;
    }
    enumerator_27354.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_12 = this ;
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_27593 (temp_12.readProperty_mInsertOrReplaceDeclarationListAST (), kENUMERATION_UP) ;
  GALGAS_uint index_27556 ((uint32_t) 0) ;
  while (enumerator_27593.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsStrictSup, index_27556.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticWarning (enumerator_27593.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray14  COMMA_SOURCE_FILE ("type-map.galgas", 765)) ;
      }
    }
    enumerator_27593.gotoNextObject () ;
    index_27556.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 763)) ;
  }
  const GALGAS_mapDeclarationAST temp_15 = this ;
  GALGAS_bool var_hasInsertOrReplaceModifier_27820 = GALGAS_bool (kIsStrictSup, temp_15.readProperty_mInsertOrReplaceDeclarationListAST ().getter_length (SOURCE_FILE ("type-map.galgas", 768)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = var_hasInsertOrReplaceModifier_27820.operator_and (var_insertMethodMap_26791.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 769)) COMMA_SOURCE_FILE ("type-map.galgas", 769)).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_28049 ;
      const GALGAS_mapDeclarationAST temp_17 = this ;
      temp_17.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceDeclarationLocation_28049, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 770)) ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_28049, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray18  COMMA_SOURCE_FILE ("type-map.galgas", 771)) ;
    }
  }
  const GALGAS_mapDeclarationAST temp_19 = this ;
  const GALGAS_mapDeclarationAST temp_20 = this ;
  const GALGAS_mapDeclarationAST temp_21 = this ;
  const GALGAS_mapDeclarationAST temp_22 = this ;
  const GALGAS_mapDeclarationAST temp_23 = this ;
  const GALGAS_mapDeclarationAST temp_24 = this ;
  const GALGAS_mapDeclarationAST temp_25 = this ;
  const GALGAS_mapDeclarationAST temp_26 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (temp_19.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 776)), GALGAS_mapTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_20.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 778)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_21.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 779)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 779)), temp_22.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 779)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 779)), temp_23.readProperty_mMapTypeName (), var_typedAttributeList_25839, temp_24.readProperty_mInsertMethodList (), temp_25.readProperty_mSearchMethodList (), temp_26.readProperty_mRemoveMethodList (), var_hasInsertOrReplaceModifier_27820, var_activateSuggestion_25560  COMMA_SOURCE_FILE ("type-map.galgas", 777))  COMMA_SOURCE_FILE ("type-map.galgas", 775)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                              GALGAS_string & outArgument_outHeader,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_29782 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 811)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, var_selfTypedefinition_29782.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 814)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-map.galgas", 812))) ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_29782.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 820)), var_selfTypedefinition_29782.readProperty_mIsConcrete (), var_selfTypedefinition_29782.readProperty_mConstructorMap (), var_selfTypedefinition_29782.readProperty_mGetterMap (), var_selfTypedefinition_29782.readProperty_mSetterMap (), var_selfTypedefinition_29782.readProperty_mInstanceMethodMap (), var_selfTypedefinition_29782.readProperty_mClassMethodMap (), var_selfTypedefinition_29782.readProperty_mOptionalMethodMap (), var_selfTypedefinition_29782.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_29782.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_29782.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_29782.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-map.galgas", 818))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 818)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                              GALGAS_string & outArgument_outHeader,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_30963 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_30963.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_30963.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 842)) ;
    enumerator_30963.gotoNextObject () ;
  }
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_31070 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 844)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, var_selfTypedefinition_31070.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 847)), temp_3.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-map.galgas", 845))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                     GALGAS_string & outArgument_outImplementation,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 858)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 859)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_31738 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 860)) ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  const GALGAS_mapTypeForGeneration temp_5 = this ;
  const GALGAS_mapTypeForGeneration temp_6 = this ;
  const GALGAS_mapTypeForGeneration temp_7 = this ;
  const GALGAS_mapTypeForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, var_selfTypedefinition_31738.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-map.galgas", 862)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mInsertMethodList (), temp_5.readProperty_mSearchMethodList (), temp_6.readProperty_mRemoveMethodList (), temp_7.readProperty_mHasInsertOrReplaceModifier (), temp_8.readProperty_mActivateSuggestions () COMMA_SOURCE_FILE ("type-map.galgas", 861))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                    GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                    GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                    GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4874 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 137)), temp_1.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 137)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4874, temp_2, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 138)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5043 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5043.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5043.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 140)), enumerator_5043.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 140)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 140)) ;
    }
    enumerator_5043.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_5660 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 150)) ;
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5745 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5745.hasCurrentObject ()) {
    var_structAttributeList_5660.addAssign_operation (enumerator_5745.current_isConstant (HERE), enumerator_5745.current_mPropertyTypeName (HERE), enumerator_5745.current_optional (HERE), enumerator_5745.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 158)), enumerator_5745.current_mInitialization (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 152)) ;
    enumerator_5745.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 163)), temp_3.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 163)), var_structAttributeList_5660, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 161))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 161)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                              const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                              const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap var_optionalMethodMap_6704 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 176)) ;
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_6832 ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mSortedListTypeName (), var_listTypeIndex_6832, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 178)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_7065 ;
  {
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 181)), temp_2.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 181)), var_listElementTypeIndex_7065, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 180)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_7153 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 185)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_7212 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 186)) ;
  GALGAS_formalParameterSignature var_setterFormalArgumentList_7274 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 187)) ;
  GALGAS_typedPropertyList var_typedAttributeList_7323 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 188)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_7390 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_7390.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_7504 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7390.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7504, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 190)) ;
    }
    GALGAS_bool var_hasSetter_7523 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_7550 = GALGAS_bool (false) ;
    var_typedAttributeList_7323.addAssign_operation (var_attributeTypeIndex_7504, enumerator_7390.current_mPropertyName (HERE), var_hasSetter_7523, var_hasSelector_7550  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 193)) ;
    var_enumerationDescriptor_7153.addAssign_operation (var_attributeTypeIndex_7504, enumerator_7390.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 194)) ;
    var_constructorAttributeTypeList_7212.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 195)), var_attributeTypeIndex_7504, enumerator_7390.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 195)) ;
    var_setterFormalArgumentList_7274.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 196)), var_attributeTypeIndex_7504, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-sorted-list.galgas", 196)), enumerator_7390.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 196)) ;
    enumerator_7390.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_7998 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 199)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_7998, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptySortedList"), temp_4.readProperty_mSortedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 200)) ;
  }
  {
  var_constructorMap_7998.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 208))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 208)), var_constructorAttributeTypeList_7212, GALGAS_bool (false), var_listTypeIndex_6832, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 207)) ;
  }
  GALGAS_getterMap var_getterMap_8457 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_8457, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 214)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_8457, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 215)) ;
  }
  GALGAS_setterMap var_setterMap_8679 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 223)) ;
  {
  var_setterMap_8679.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 225))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 225)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 226)), var_setterFormalArgumentList_7274, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 229)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 224)) ;
  }
  {
  var_setterMap_8679.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 233))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 233)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 234)), var_setterFormalArgumentList_7274, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 237)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 232)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_9181 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 241)) ;
  {
  var_instanceMethodMap_9181.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 243))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 243)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 244)), var_setterFormalArgumentList_7274, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 246)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 248)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 242)) ;
  }
  {
  var_instanceMethodMap_9181.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 252))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 252)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 253)), var_setterFormalArgumentList_7274, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 255)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 257)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 251)) ;
  }
  {
  const GALGAS_sortedListDeclarationAST temp_5 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_5.readProperty_mSortedListTypeName (), GALGAS_bool (false), var_getterMap_8457, var_setterMap_8679, var_instanceMethodMap_9181, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 261)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_6 = this ;
  const GALGAS_sortedListDeclarationAST temp_7 = this ;
  const GALGAS_sortedListDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_10029 = GALGAS_unifiedTypeDefinition::constructor_new (temp_6.readProperty_mSortedListTypeName (), temp_7.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-sorted-list.galgas", 278)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("type-sorted-list.galgas", 279)), GALGAS_bool (true), var_typedAttributeList_7323, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 282)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 283)), var_constructorMap_7998, var_getterMap_8457, var_setterMap_8679, var_instanceMethodMap_9181, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 288)), var_optionalMethodMap_6704, var_enumerationDescriptor_7153, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-sorted-list.galgas", 291)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-sorted-list.galgas", 291)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 291)), var_constructorAttributeTypeList_7212, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 293)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 294)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 295)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 296)), GALGAS_bool (false), var_listElementTypeIndex_7065, GALGAS_string ("emptySortedList"), GALGAS_string ("-sortedlist-").add_operation (temp_8.readProperty_mSortedListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-sorted-list.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 300)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-sorted-list.galgas", 301))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 274)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_10029, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 303)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_string /* constinArgument_inProductDirectory */,
                                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                             GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                             const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                             GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  GALGAS_lstring var_sortedListNameForUsefulness_11679 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 320)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_11679, var_sortedListNameForUsefulness_11679, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 321)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_11869 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 322)), temp_2.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 322)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_11679, var_elementTypeNameForUsefulness_11869 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 323)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_12118 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 325)) ;
  GALGAS_propertyIndexMap var_attributeMap_12179 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 326)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12246 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12246.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_12310 = function_typeNameForUsefulEntitiesGraph (enumerator_12246.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 328)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_11679, var_propertyTypeNameForUsefulness_12310 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 329)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_12472 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_12246.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 330)) ;
    GALGAS_bool var_hasSetter_12550 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_12577 = GALGAS_bool (true) ;
    var_typedAttributeList_12118.addAssign_operation (var_t_12472, enumerator_12246.current_mPropertyName (HERE), var_hasSetter_12550, var_hasSelector_12577  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 333)) ;
    {
    var_attributeMap_12179.setter_insertKey (enumerator_12246.current_mPropertyName (HERE), var_t_12472, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 338)) ;
    }
    enumerator_12246.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting_12794 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sorted-list.galgas", 341)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_12857 = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 342)) ;
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_12901 (temp_4.readProperty_mSortDescriptorList (), kENUMERATION_UP) ;
  while (enumerator_12901.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_13014 ;
    var_attributeMap_12179.method_searchKey (enumerator_12901.current_mSortedAttributeName (HERE), var_type_13014, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 344)) ;
    var_sortDescriptorList_12857.addAssign_operation (var_type_13014, enumerator_12901.current_mSortedAttributeName (HERE).readProperty_string (), enumerator_12901.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 345)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_attributesUsedForSorting_12794.getter_hasKey (enumerator_12901.current_mSortedAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_12901.current_mSortedAttributeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_12901.current_mSortedAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 347)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 347)), fixItArray6  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 347)) ;
      }
    }
    var_attributesUsedForSorting_12794.addAssign_operation (enumerator_12901.current_mSortedAttributeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 349)) ;
    enumerator_12901.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_7 = this ;
  const GALGAS_sortedListDeclarationAST temp_8 = this ;
  const GALGAS_sortedListDeclarationAST temp_9 = this ;
  const GALGAS_sortedListDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (temp_7.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 353)), GALGAS_sortedListTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_8.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_9.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 356)), temp_10.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 356)), var_typedAttributeList_12118, var_sortDescriptorList_12857  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 352)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'sortedListGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_sortedListGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_sortedListGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_sortedListGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_sortedListGenerationTemplate_0,
  0,
  gWrapperAllDirectories_sortedListGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedListGenerationTemplate sortedlistTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & /* in_ATTRIBUTE_5F_LIST */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_sortedlist {\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedListGenerationTemplate sortedlistTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                     const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                     const GALGAS_sortDescriptorListForGeneration & in_SORT_5F_ATTRIBUTE_5F_LIST
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cSortedListElement {\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mObject ;\n\n//--- Constructor\n  public: cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_607_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_607 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_607.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_607.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_607.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_607.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_607_.increment () ;
      enumerator_607.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cSortedListElement * copy (void) ;\n\n//--- Virtual method for comparing elements\n  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Description\n public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n\n//--- Virtual method that comparing element for sorting\n  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;\n} ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1709_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1709 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1709.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_1709.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1709.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue () ;
      if (enumerator_1709.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1709_.increment () ;
      enumerator_1709.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\ncSortedListElement (THERE),\nmObject (" ;
  GALGAS_uint index_2002_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2002 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2002.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_2002.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 47)).stringValue () ;
      if (enumerator_2002.hasNextObject ()) {
        result << ", " ;
      }
      index_2002_.increment () ;
      enumerator_2002.gotoNextObject () ;
    }
  }
  result << ") {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nbool cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n  return mObject.isValid () ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncSortedListElement * cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n  cSortedListElement * result = NULL ;\n  macroMyNew (result, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2690_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2690 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2690.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_2690.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 65)).stringValue () ;
      if (enumerator_2690.hasNextObject ()) {
        result << ", " ;
      }
      index_2690_.increment () ;
      enumerator_2690.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3144_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3144 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3144.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n  ioString.writeStringMultiple (\"| \", inIndentation) ;\n  ioString << " ;
      result << enumerator_3144.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 79)).stringValue () ;
      result << " \":\" ;\n  mObject.mProperty_" ;
      result << enumerator_3144.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 80)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3144_.increment () ;
      enumerator_3144.gotoNextObject () ;
    }
  }
  result << "}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n  macroValidSharedObject (operand, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n  return mObject.objectCompare (operand->mObject) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\nAC_GALGAS_sortedlist () {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compareForSorting (const cSortedListElement * inOperand) const {\n  typeComparisonResult result = kOperandEqual ;\n  const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n  macroValidSharedObject (operand, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_4706_ (0) ;
  if (in_SORT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_sortDescriptorListForGeneration enumerator_4706 (in_SORT_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4706.hasCurrentObject ()) {
      result << "  if (result == kOperandEqual) {\n    result = " ;
      const enumGalgasBool test_0 = enumerator_4706.current_mAscendingOrder (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "mObject.mProperty_" ;
        result << enumerator_4706.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue () ;
        result << ".objectCompare (operand->mObject.mProperty_" ;
        result << enumerator_4706.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue () ;
        result << ")" ;
      }else if (kBoolFalse == test_0) {
        result << "operand->mObject.mProperty_" ;
        result << enumerator_4706.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue () ;
        result << ".objectCompare (mObject.mProperty_" ;
        result << enumerator_4706.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue () ;
        result << ")" ;
      }
      result << " ;\n  }\n" ;
      index_4706_.increment () ;
      enumerator_4706.gotoNextObject () ;
    }
  }
  result << "  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptySortedList (LOCATION_ARGS) {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  result.createNewEmptySortedList (THERE) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_sortedListWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5809_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5809 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5809.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_5809.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue () ;
      result << " & inOperand" ;
      result << index_5809_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue () ;
      if (enumerator_5809.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5809_IDX.increment () ;
      enumerator_5809.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = constructor_emptySortedList (THERE) ;\n  cSortedListElement * p = NULL ;\n  macroMyNew (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_6215_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6215 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6215.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_6215_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 138)).stringValue () ;
      if (enumerator_6215.hasNextObject ()) {
        result << ", " ;
      }
      index_6215_IDX.increment () ;
      enumerator_6215.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n  capSortedListElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  result.appendObject (attributes) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6710_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6710 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6710.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_6710.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue () ;
      result << " & inOperand" ;
      result << index_6710_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue () ;
      if (enumerator_6710.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6710_IDX.increment () ;
      enumerator_6710.gotoNextObject () ;
    }
  }
  result << "\n    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = NULL ;\n    macroMyNew (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7070_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7070 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7070.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7070_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 162)).stringValue () ;
      if (enumerator_7070.hasNextObject ()) {
        result << ", " ;
      }
      index_7070_IDX.increment () ;
      enumerator_7070.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n    capSortedListElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::plusAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inOperand,\n                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid ()) {\n    appendSortedList (inOperand) ;\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popSmallest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7962_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7962 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7962.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_7962.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue () ;
      result << " & outOperand" ;
      result << index_7962_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_7962_IDX.increment () ;
      enumerator_7962.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_8452_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8452 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8452.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_8452_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 197)).stringValue () ;
      result << ".drop () ;\n" ;
      index_8452_IDX.increment () ;
      enumerator_8452.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_8682_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8682 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8682.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_8682_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 203)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_8682.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 203)).stringValue () ;
      result << " ;\n" ;
      index_8682_IDX.increment () ;
      enumerator_8682.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popGreatest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9076_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9076 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9076.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_9076.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 212)).stringValue () ;
      result << " & outOperand" ;
      result << index_9076_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 212)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9076_IDX.increment () ;
      enumerator_9076.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_9566_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9566 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9566.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9566_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 222)).stringValue () ;
      result << ".drop () ;\n" ;
      index_9566_IDX.increment () ;
      enumerator_9566.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_9796_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9796 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9796.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9796_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 228)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_9796.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 228)).stringValue () ;
      result << " ;\n" ;
      index_9796_IDX.increment () ;
      enumerator_9796.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_smallest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10187_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10187 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10187.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_10187.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 237)).stringValue () ;
      result << " & outOperand" ;
      result << index_10187_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 237)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10187_IDX.increment () ;
      enumerator_10187.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_10680_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10680 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10680.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10680_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 247)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10680_IDX.increment () ;
      enumerator_10680.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10910_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10910 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10910.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10910_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 253)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10910.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 253)).stringValue () ;
      result << " ;\n" ;
      index_10910_IDX.increment () ;
      enumerator_10910.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_greatest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11301_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11301 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11301.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_11301.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 262)).stringValue () ;
      result << " & outOperand" ;
      result << index_11301_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 262)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11301_IDX.increment () ;
      enumerator_11301.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_11794_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11794 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11794.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11794_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 272)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11794_IDX.increment () ;
      enumerator_11794.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12024_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12024 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12024.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12024_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 278)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12024.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 278)).stringValue () ;
      result << " ;\n" ;
      index_12024_IDX.increment () ;
      enumerator_12024.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const typeEnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n  const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n  return p->mObject ;\n}\n\n" ;
  GALGAS_uint index_13097_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13097 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13097.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_13097.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_13097.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n  const cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n  return p->mObject.mProperty_" ;
      result << enumerator_13097.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 304)).stringValue () ;
      result << " ;\n}\n\n" ;
      index_13097_IDX.increment () ;
      enumerator_13097.gotoNextObject () ;
    }
  }
  result << "\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                     GALGAS_string & outArgument_outHeader,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sortedListTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_15452 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 401)) ;
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, var_selfTypedefinition_15452.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 404)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 402))) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_15452.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 409)), var_selfTypedefinition_15452.readProperty_mIsConcrete (), var_selfTypedefinition_15452.readProperty_mConstructorMap (), var_selfTypedefinition_15452.readProperty_mGetterMap (), var_selfTypedefinition_15452.readProperty_mSetterMap (), var_selfTypedefinition_15452.readProperty_mInstanceMethodMap (), var_selfTypedefinition_15452.readProperty_mClassMethodMap (), var_selfTypedefinition_15452.readProperty_mOptionalMethodMap (), var_selfTypedefinition_15452.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_15452.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_15452.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_15452.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 407))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 407)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_string & outArgument_outImplementation,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sortedListTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_16645 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_16645.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16645.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 431)) ;
    enumerator_16645.gotoNextObject () ;
  }
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 433)) ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 434)) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  const GALGAS_sortedListTypeForGeneration temp_4 = this ;
  const GALGAS_sortedListTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 436)), temp_4.readProperty_mTypedAttributeList (), temp_5.readProperty_mSortDescriptorList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 435))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structDeclarationAST temp_0 = this ;
  const GALGAS_structDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3283 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 84)), temp_1.readProperty_mStructTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-struct.galgas", 84)) ;
  {
  const GALGAS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3283, temp_2, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 85)) ;
  }
  const GALGAS_structDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_3444 (temp_3.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_3444.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey_3499 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3444.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 87)), enumerator_3444.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-struct.galgas", 87)) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3283, var_propertyKey_3499 COMMA_SOURCE_FILE ("type-struct.galgas", 88)) ;
    }
    enumerator_3444.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_structDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_structDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("struct @").add_operation (temp_0.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 97)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'selectorFeatureForNewConstructor'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_selectorFeatureForNewConstructor (C_Compiler *
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("selector") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_selectorFeatureForNewConstructor = false ;
static GALGAS_string gOnceFunctionResult_selectorFeatureForNewConstructor ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_selectorFeatureForNewConstructor (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_selectorFeatureForNewConstructor) {
    gOnceFunctionResult_selectorFeatureForNewConstructor = onceFunction_selectorFeatureForNewConstructor (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_selectorFeatureForNewConstructor = true ;
  }
  return gOnceFunctionResult_selectorFeatureForNewConstructor ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_selectorFeatureForNewConstructor (void) {
  gOnceFunctionResult_selectorFeatureForNewConstructor.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_selectorFeatureForNewConstructor (NULL,
                                                                              releaseOnceFunctionResult_selectorFeatureForNewConstructor) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_selectorFeatureForNewConstructor [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_selectorFeatureForNewConstructor (C_Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_selectorFeatureForNewConstructor (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_selectorFeatureForNewConstructor ("selectorFeatureForNewConstructor",
                                                                                  functionWithGenericHeader_selectorFeatureForNewConstructor,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  0,
                                                                                  functionArgs_selectorFeatureForNewConstructor) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap var_optionalMethodMap_4943 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 116)) ;
  GALGAS_unifiedTypeMapEntry var_structTypeIndex_5076 ;
  {
  const GALGAS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mStructTypeName (), var_structTypeIndex_5076, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 118)) ;
  }
  GALGAS_propertyMap var_propertyMap_5143 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 120)) ;
  GALGAS_constructorMap var_constructorMap_5185 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 121)) ;
  GALGAS_functionSignature var_constructorPropertyTypeList_5243 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 122)) ;
  GALGAS_typedPropertyList var_typedPropertyList_5291 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 123)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_5361 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 124)) ;
  const GALGAS_structDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5473 (temp_1.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_5473.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_propertyTypeEntry_5595 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5473.current_mPropertyTypeName (HERE), var_propertyTypeEntry_5595, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 126)) ;
    }
    GALGAS_lstring var_selector_5622 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-struct.galgas", 127)) ;
    cEnumerator_lstringlist enumerator_5653 (enumerator_5473.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_5653.hasCurrentObject ()) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, enumerator_5653.current_mValue (HERE).readProperty_string ().objectCompare (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 129)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_selector_5622 = enumerator_5473.current_mPropertyName (HERE) ;
        }
      }
      enumerator_5653.gotoNextObject () ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = enumerator_5473.current_mInitialization (HERE).getter_isNone (SOURCE_FILE ("type-struct.galgas", 133)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_constructorPropertyTypeList_5243.addAssign_operation (var_selector_5622, var_propertyTypeEntry_5595, enumerator_5473.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-struct.galgas", 134)) ;
      }
    }
    var_typesToIncludeInHeaderCompilation_5361.addAssign_operation (var_propertyTypeEntry_5595  COMMA_SOURCE_FILE ("type-struct.galgas", 136)) ;
    GALGAS_bool test_4 = enumerator_5473.current_mIsPublic (HERE) ;
    if (kBoolTrue == test_4.boolEnum ()) {
      test_4 = enumerator_5473.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 137)) ;
    }
    GALGAS_bool var_hasSetter_6003 = test_4 ;
    GALGAS_bool var_hasSelector_6052 = GALGAS_bool (false) ;
    var_typedPropertyList_5291.addAssign_operation (var_propertyTypeEntry_5595, enumerator_5473.current_mPropertyName (HERE), var_hasSetter_6003, var_hasSelector_6052  COMMA_SOURCE_FILE ("type-struct.galgas", 139)) ;
    {
    var_propertyMap_5143.setter_insertKey (enumerator_5473.current_mPropertyName (HERE), enumerator_5473.current_mIsPublic (HERE), enumerator_5473.current_isConstant (HERE), var_propertyTypeEntry_5595, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 140)) ;
    }
    enumerator_5473.gotoNextObject () ;
  }
  {
  var_constructorMap_5185.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 143))  COMMA_SOURCE_FILE ("type-struct.galgas", 143)), var_constructorPropertyTypeList_5243, GALGAS_bool (false), var_structTypeIndex_5076, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 142)) ;
  }
  GALGAS_getterMap var_getterMap_6466 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6466, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 149)) ;
  }
  GALGAS_setterMap var_setterMap_6507 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 151)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6577 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 153)) ;
  {
  const GALGAS_structDeclarationAST temp_5 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_5.readProperty_mStructTypeName (), GALGAS_bool (false), var_getterMap_6466, var_setterMap_6507, var_instanceMethodMap_6577, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 155)) ;
  }
  GALGAS_unifiedTypeMapEntry var_enumeratedType_6987 ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_structDeclarationAST temp_7 = this ;
    test_6 = GALGAS_bool (kIsEqual, temp_7.readProperty_mEnumeratedElementTypeName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_enumeratedType_6987 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-struct.galgas", 170)) ;
    }
  }
  if (kBoolFalse == test_6) {
    {
    const GALGAS_structDeclarationAST temp_8 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_8.readProperty_mEnumeratedElementTypeName (), var_enumeratedType_6987, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 172)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_7290 = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_7331 (var_typedPropertyList_5291, kENUMERATION_UP) ;
  bool bool_9 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_7290.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_7331.hasCurrentObject () && bool_9) {
    while (enumerator_7331.hasCurrentObject () && bool_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsEqual, extensionGetter_definition (enumerator_7331.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 180)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).operator_or (extensionGetter_definition (enumerator_7331.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 180)).readProperty_mIsConcrete ().operator_not (SOURCE_FILE ("type-struct.galgas", 180)) COMMA_SOURCE_FILE ("type-struct.galgas", 180)).boolEnum () ;
        if (kBoolTrue == test_10) {
          var_defaultConstructorName_7290 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_7331.gotoNextObject () ;
      if (enumerator_7331.hasCurrentObject ()) {
        bool_9 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_7290.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_structDeclarationAST temp_11 = this ;
  const GALGAS_structDeclarationAST temp_12 = this ;
  const GALGAS_structDeclarationAST temp_13 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_7611 = GALGAS_unifiedTypeDefinition::constructor_new (temp_11.readProperty_mStructTypeName (), temp_12.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-struct.galgas", 189)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("type-struct.galgas", 190)), GALGAS_bool (false), var_typedPropertyList_5291, var_propertyMap_5143, var_typedPropertyList_5291, var_constructorMap_5185, var_getterMap_6466, var_setterMap_6507, var_instanceMethodMap_6577, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 199)), var_optionalMethodMap_4943, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 201)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-struct.galgas", 202)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-struct.galgas", 202)) COMMA_SOURCE_FILE ("type-struct.galgas", 202)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 203)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 204)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 205)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 206)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 207)), GALGAS_bool (false), var_enumeratedType_6987, var_defaultConstructorName_7290, GALGAS_string ("struct-").add_operation (temp_13.readProperty_mStructTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-struct.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 211)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-struct.galgas", 212))  COMMA_SOURCE_FILE ("type-struct.galgas", 185)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_7611, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 214)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForStruct'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForStruct (C_Compiler *
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 222)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-struct.galgas", 223)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-struct.galgas", 224)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-struct.galgas", 225)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForStruct = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForStruct ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForStruct (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForStruct) {
    gOnceFunctionResult_forbiddenKeysForStruct = onceFunction_forbiddenKeysForStruct (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForStruct = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForStruct ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForStruct (void) {
  gOnceFunctionResult_forbiddenKeysForStruct.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForStruct (NULL,
                                                                    releaseOnceFunctionResult_forbiddenKeysForStruct) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForStruct [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForStruct (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForStruct (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForStruct ("forbiddenKeysForStruct",
                                                                        functionWithGenericHeader_forbiddenKeysForStruct,
                                                                        & kTypeDescriptor_GALGAS_stringset,
                                                                        0,
                                                                        functionArgs_forbiddenKeysForStruct) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                         GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structDeclarationAST temp_0 = this ;
  GALGAS_lstring var_structNameForUsefulness_9573 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mStructTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 240)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_9573, var_structNameForUsefulness_9573, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 241)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_structDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mStructurePropertyList ().getter_length (SOURCE_FILE ("type-struct.galgas", 243)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructTypeName ().readProperty_location (), GALGAS_string ("a structure cannot be empty: it must have at least one property"), fixItArray4  COMMA_SOURCE_FILE ("type-struct.galgas", 244)) ;
    }
  }
  GALGAS_typedPropertyList var_typedPropertyList_9921 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 246)) ;
  GALGAS_typedPropertyList var_constructorArgumentList_9975 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 247)) ;
  GALGAS_propertyIndexMap var_propertyMap_10016 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 248)) ;
  const GALGAS_structDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10112 (temp_5.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_10112.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_10185 = function_typeNameForUsefulEntitiesGraph (enumerator_10112.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 250)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_9573, var_propertyTypeNameForUsefulness_10185 COMMA_SOURCE_FILE ("type-struct.galgas", 251)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_10343 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_10112.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 252)) ;
    GALGAS_bool var_hasSelector_10423 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_10447 (enumerator_10112.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_10447.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_10447.current_mValue (HERE).readProperty_string ().objectCompare (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 255)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_10447.current_mValue (HERE).readProperty_location (), GALGAS_string ("a struct property accepts only the %").add_operation (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 256)).add_operation (GALGAS_string (" feature"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 256)), fixItArray7  COMMA_SOURCE_FILE ("type-struct.galgas", 256)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_hasSelector_10423.boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_10447.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated %").add_operation (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 258)).add_operation (GALGAS_string (" feature"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 258)), fixItArray9  COMMA_SOURCE_FILE ("type-struct.galgas", 258)) ;
        }
      }
      if (kBoolFalse == test_8) {
        var_hasSelector_10423 = GALGAS_bool (true) ;
      }
      enumerator_10447.gotoNextObject () ;
    }
    GALGAS_bool var_hasSetter_10842 = GALGAS_bool (true) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 264)).getter_hasKey (enumerator_10112.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-struct.galgas", 264)).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string var_m_10938 = GALGAS_string ("an property cannot be named:") ;
        cEnumerator_stringset enumerator_11012 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 266)), kENUMERATION_UP) ;
        while (enumerator_11012.hasCurrentObject ()) {
          var_m_10938.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_11012.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 267)) ;
          enumerator_11012.gotoNextObject () ;
        }
        var_m_10938.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 269)) ;
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_10112.current_mPropertyName (HERE).readProperty_location (), var_m_10938, fixItArray11  COMMA_SOURCE_FILE ("type-struct.galgas", 270)) ;
      }
    }
    {
    var_propertyMap_10016.setter_insertKey (enumerator_10112.current_mPropertyName (HERE), var_t_10343, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 272)) ;
    }
    switch (enumerator_10112.current_mInitialization (HERE).enumValue ()) {
    case GALGAS_propertyInCollectionInitializationAST::kNotBuilt:
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_none:
      {
        var_constructorArgumentList_9975.addAssign_operation (var_t_10343, enumerator_10112.current_mPropertyName (HERE), var_hasSetter_10842, var_hasSelector_10423  COMMA_SOURCE_FILE ("type-struct.galgas", 277)) ;
      }
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_some:
      {
      }
      break ;
    }
    var_typedPropertyList_9921.addAssign_operation (var_t_10343, enumerator_10112.current_mPropertyName (HERE), var_hasSetter_10842, var_hasSelector_10423  COMMA_SOURCE_FILE ("type-struct.galgas", 284)) ;
    enumerator_10112.gotoNextObject () ;
  }
  GALGAS_string var_initializationCode_11599 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_11623 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 292)) ;
  GALGAS_uint var_temporaryVariableIndex_11674 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_11709 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 294)) ;
  GALGAS_usefulEntitiesGraph var_usefulEntitiesGraph_11772 = GALGAS_usefulEntitiesGraph::constructor_emptyGraph (SOURCE_FILE ("type-struct.galgas", 295)) ;
  const GALGAS_structDeclarationAST temp_12 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11861 (temp_12.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_11861.hasCurrentObject ()) {
    switch (enumerator_11861.current_mInitialization (HERE).enumValue ()) {
    case GALGAS_propertyInCollectionInitializationAST::kNotBuilt:
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_none:
      {
      }
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_some:
      {
        const cEnumAssociatedValues_propertyInCollectionInitializationAST_some * extractPtr_13150 = (const cEnumAssociatedValues_propertyInCollectionInitializationAST_some *) (enumerator_11861.current_mInitialization (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_11966_expressionAST = extractPtr_13150->mAssociatedValue0 ;
        GALGAS_localVarManager var_variableMap_11991 = GALGAS_localVarManager::constructor_new (GALGAS_currentVarManager::constructor_new (GALGAS_scopeLocalVarMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 300)), GALGAS_localVarMapListForLLVM::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 300))  COMMA_SOURCE_FILE ("type-struct.galgas", 300)), GALGAS_openedOverrideList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 300))  COMMA_SOURCE_FILE ("type-struct.galgas", 300)) ;
        GALGAS_analysisContext var_analysisContext_12079 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("type-struct.galgas", 305)), GALGAS_string::makeEmptyString (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-struct.galgas", 301)) ;
        GALGAS_unifiedTypeMapEntry var_propertyType_12270 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_11861.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 309)) ;
        GALGAS_semanticExpressionForGeneration var_expression_12569 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_11966_expressionAST.ptr (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-struct.galgas", 311)), var_usefulEntitiesGraph_11772, var_propertyType_12270, var_analysisContext_12079, var_variableMap_11991, var_expression_12569, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 310)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (var_propertyType_12270, var_expression_12569.readProperty_mResultType (), enumerator_11861.current_mPropertyName (HERE).readProperty_location (), var_expression_12569, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 319)) ;
        }
        GALGAS_string var_sourceVar_12966 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) var_expression_12569.ptr (), var_initializationCode_11599, var_inclusionSet_11623, var_temporaryVariableIndex_11674, var_unusedVariableCppNameSet_11709, var_sourceVar_12966, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 325)) ;
        var_initializationCode_11599.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (var_propertyType_12270, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 332)) ;
        var_initializationCode_11599.plusAssign_operation(GALGAS_string (" in_").add_operation (enumerator_11861.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 333)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 333)).add_operation (var_sourceVar_12966, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 333)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 333)) ;
      }
      break ;
    }
    enumerator_11861.gotoNextObject () ;
  }
  const GALGAS_structDeclarationAST temp_13 = this ;
  const GALGAS_structDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (temp_13.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 339)), GALGAS_structTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_14.readProperty_mStructTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 341)), var_typedPropertyList_9921, var_constructorArgumentList_9975, var_initializationCode_11599  COMMA_SOURCE_FILE ("type-struct.galgas", 340))  COMMA_SOURCE_FILE ("type-struct.galgas", 338)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'boolsetGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_boolsetGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_boolsetGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_boolsetGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_boolsetGenerationTemplate_0,
  0,
  gWrapperAllDirectories_boolsetGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'boolsetGenerationTemplate structTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_boolsetGenerationTemplate_structTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                  const GALGAS_typedPropertyList & /* in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST */,
                                                                                  const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n//--------------------------------- Properties\n" ;
  GALGAS_uint index_486_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_486 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_486.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_486.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_486.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue () ;
      result << " ;\n  public: inline GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_486.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue () ;
      result << " readProperty_" ;
      result << enumerator_486.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue () ;
      result << " (void) const {\n    return mProperty_" ;
      result << enumerator_486.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 13)).stringValue () ;
      result << " ;\n  }\n\n" ;
      index_486_.increment () ;
      enumerator_486.gotoNextObject () ;
    }
  }
  result << "//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;\n  public: VIRTUAL_IN_DEBUG void drop (void) ;\n\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//--------------------------------- Default GALGAS constructor\n  public: static GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " constructor_default (LOCATION_ARGS) ;\n\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n\n//--------------------------------- Property setters\n" ;
  GALGAS_uint index_1429_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1429 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1429.hasCurrentObject ()) {
      result << "  public: inline void setter_set" ;
      result << enumerator_1429.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 32)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 32)).stringValue () ;
      result << " (const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_1429.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 32)).stringValue () ;
      result << " & inValue COMMA_UNUSED_LOCATION_ARGS) {\n    mProperty_" ;
      result << enumerator_1429.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 33)).stringValue () ;
      result << " = inValue ;\n  }\n\n" ;
      index_1429_.increment () ;
      enumerator_1429.gotoNextObject () ;
    }
  }
  result << "//--------------------------------- Virtual destructor (in debug mode)\n  public: virtual ~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_2052_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2052 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2052.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_2052.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 41)).stringValue () ;
      result << " & in_" ;
      result << enumerator_2052.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 41)).stringValue () ;
      if (enumerator_2052.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_2052_.increment () ;
      enumerator_2052.gotoNextObject () ;
    }
  }
  result << ") ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'boolsetGenerationTemplate structTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_boolsetGenerationTemplate_structTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                              const GALGAS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                              const GALGAS_typedPropertyList & in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST,
                                                                                              const GALGAS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                              const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  GALGAS_uint index_269_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_269 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_269.hasCurrentObject ()) {
      result << "mProperty_" ;
      result << enumerator_269.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 6)).stringValue () ;
      result << " ()" ;
      if (enumerator_269.hasNextObject ()) {
        result << ",\n" ;
      }
      index_269_.increment () ;
      enumerator_269.gotoNextObject () ;
    }
  }
  result << " {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_813_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_813 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_813.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_813.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue () ;
      result << " & inOperand" ;
      result << index_813_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue () ;
      if (enumerator_813.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_813_IDX.increment () ;
      enumerator_813.gotoNextObject () ;
    }
  }
  result << ") :\n" ;
  GALGAS_uint index_1020_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1020 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1020.hasCurrentObject ()) {
      result << "mProperty_" ;
      result << enumerator_1020.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue () ;
      result << " (inOperand" ;
      result << index_1020_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue () ;
      result << ")" ;
      if (enumerator_1020.hasNextObject ()) {
        result << ",\n" ;
      }
      index_1020_IDX.increment () ;
      enumerator_1020.gotoNextObject () ;
    }
  }
  result << " {\n}\n\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_default (UNUSED_LOCATION_ARGS) {\n  return GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_1510_ (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1510 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1510.hasCurrentObject ()) {
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_1510.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue () ;
        result << "::constructor_" ;
        result << extensionGetter_definition (enumerator_1510.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).readProperty_mDefaultConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue () ;
        result << " (HERE)" ;
        if (enumerator_1510.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_1510_.increment () ;
        enumerator_1510.gotoNextObject () ;
      }
    }
    result << ") ;\n}\n\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_new (" ;
  columnMarker = result.currentColumn () ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 45)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "UNUSED_LOCATION_ARGS) {\n" ;
  }else if (kBoolFalse == test_1) {
    GALGAS_uint index_2063_ (0) ;
    if (in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_2063 (in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2063.hasCurrentObject ()) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_2063.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 49)).stringValue () ;
        result << " & in_" ;
        result << enumerator_2063.current_mPropertyName (HERE).readProperty_string ().stringValue () ;
        if (enumerator_2063.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_2063_.increment () ;
        enumerator_2063.gotoNextObject () ;
      }
    }
    result << " \n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_UNUSED_LOCATION_ARGS) {\n" ;
  }
  result << in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue () ;
  result << "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (" ;
  GALGAS_uint index_2345_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2345 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2345.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_2345.current_mPropertyName (HERE).readProperty_string ().stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_2345.hasNextObject ()) {
        result << " && " ;
      }
      index_2345_.increment () ;
      enumerator_2345.gotoNextObject () ;
    }
  }
  result << ") {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2517_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2517 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2517.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_2517.current_mPropertyName (HERE).readProperty_string ().stringValue () ;
      if (enumerator_2517.hasNextObject ()) {
        result << ", " ;
      }
      index_2517_.increment () ;
      enumerator_2517.gotoNextObject () ;
    }
  }
  result << ") ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n   typeComparisonResult result = kOperandEqual ;\n" ;
  GALGAS_uint index_2965_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2965 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2965.hasCurrentObject ()) {
      result << "  if (result == kOperandEqual) {\n    result = mProperty_" ;
      result << enumerator_2965.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 79)).stringValue () ;
      result << ".objectCompare (inOperand.mProperty_" ;
      result << enumerator_2965.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 79)).stringValue () ;
      result << ") ;\n  }\n" ;
      index_2965_.increment () ;
      enumerator_2965.gotoNextObject () ;
    }
  }
  result << "  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nbool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n  return " ;
  GALGAS_uint index_3476_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3476 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3476.hasCurrentObject ()) {
      result << "mProperty_" ;
      result << enumerator_3476.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_3476.hasNextObject ()) {
        result << " && " ;
      }
      index_3476_.increment () ;
      enumerator_3476.gotoNextObject () ;
    }
  }
  result << " ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n" ;
  GALGAS_uint index_3837_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3837 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3837.hasCurrentObject ()) {
      result << "  mProperty_" ;
      result << enumerator_3837.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 100)).stringValue () ;
      result << ".drop () ;\n" ;
      index_3837_.increment () ;
      enumerator_3837.gotoNextObject () ;
    }
  }
  result << "}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n                              " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t inIndentation) const {\n  ioString << \"<struct @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ":\" ;\n  if (! isValid ()) {\n    ioString << \" not built\" ;\n  }else{\n" ;
  GALGAS_uint index_4375_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4375 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4375.hasCurrentObject ()) {
      result << "    mProperty_" ;
      result << enumerator_4375.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 114)).stringValue () ;
      result << ".description (ioString, inIndentation+1) ;\n" ;
      if (enumerator_4375.hasNextObject ()) {
        result << "    ioString << \", \" ;\n" ;
      }
      index_4375_IDX.increment () ;
      enumerator_4375.gotoNextObject () ;
    }
  }
  result << "  }\n  ioString << \">\" ;\n}\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                 GALGAS_string & outArgument_outHeader,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_14965 (temp_0.readProperty_mTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_14965.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_14965.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 386)) ;
    enumerator_14965.gotoNextObject () ;
  }
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_15071 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 388)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_boolsetGenerationTemplate_structTypeHeader_31_ (inCompiler, var_selfTypedefinition_15071.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 391)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), GALGAS_bool (kIsNotEqual, var_selfTypedefinition_15071.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 389))) ;
  const GALGAS_structTypeForGeneration temp_5 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_15071.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 398)), var_selfTypedefinition_15071.readProperty_mIsConcrete (), var_selfTypedefinition_15071.readProperty_mConstructorMap (), var_selfTypedefinition_15071.readProperty_mGetterMap (), var_selfTypedefinition_15071.readProperty_mSetterMap (), var_selfTypedefinition_15071.readProperty_mInstanceMethodMap (), var_selfTypedefinition_15071.readProperty_mClassMethodMap (), var_selfTypedefinition_15071.readProperty_mOptionalMethodMap (), var_selfTypedefinition_15071.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_15071.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_15071.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_15071.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-struct.galgas", 396))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 396)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outImplementation,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 420)) ;
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_16413 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 421)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  const GALGAS_structTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_boolsetGenerationTemplate_structTypeSpecificImplementation (inCompiler, var_selfTypedefinition_16413.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 424)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), GALGAS_bool (kIsNotEqual, var_selfTypedefinition_16413.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 422))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_abstractExtensionGetterAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  const GALGAS_abstractExtensionGetterAST temp_1 = this ;
  result_result = GALGAS_string ("abstract extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 107)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 107)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 107)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                      GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  const GALGAS_abstractExtensionGetterAST temp_1 = this ;
  const GALGAS_abstractExtensionGetterAST temp_2 = this ;
  GALGAS_lstring var_key_5108 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 122)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 122)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 122)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 121)) ;
  {
  const GALGAS_abstractExtensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5108, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 125)) ;
  }
  {
  const GALGAS_abstractExtensionGetterAST temp_4 = this ;
  const GALGAS_abstractExtensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5108, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 126)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 126)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 126)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 128)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 128)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-getter.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 129)) ;
      }
    }
  }
  const GALGAS_abstractExtensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_5626 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 134)) ;
  if (NULL != objectArray_5626) {
    macroValidSharedObject (objectArray_5626, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionGetterAST temp_10 = this ;
    const GALGAS_abstractExtensionGetterAST temp_11 = this ;
    const GALGAS_abstractExtensionGetterAST temp_12 = this ;
    objectArray_5626->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionGetterName (), temp_11.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_12.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("extension-abstract-getter.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 135)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7504 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 170)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7504, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 172)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-abstract-getter.galgas", 172)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 172)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionGetterAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an extension getter: '@").add_operation (extensionGetter_definition (var_selfType_7504, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 174)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 174)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 174)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 173)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7504, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 175)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionGetterAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_7504, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 177)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 177)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 177)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 176)) ;
      }
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_8157 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-getter.galgas", 180)) ;
  const GALGAS_abstractExtensionGetterAST temp_7 = this ;
  cEnumerator_formalInputParameterListAST enumerator_8243 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), kENUMERATION_UP) ;
  while (enumerator_8243.hasCurrentObject ()) {
    var_formalParameterListForGeneration_8157.addAssign_operation (enumerator_8243.current_mFormalSelector (HERE), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_8243.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 184)), enumerator_8243.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_8243.current_mFormalArgumentName (HERE), enumerator_8243.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 182)) ;
    enumerator_8243.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterAST temp_8 = this ;
  const GALGAS_abstractExtensionGetterAST temp_9 = this ;
  const GALGAS_abstractExtensionGetterAST temp_10 = this ;
  const GALGAS_abstractExtensionGetterAST temp_11 = this ;
  const GALGAS_abstractExtensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 191)), GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 194)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 194)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 194)), var_selfType_7504, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 197)), var_formalParameterListForGeneration_8157  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 192))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 190)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionGetterListMap,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  const GALGAS_abstractExtensionGetterAST temp_1 = this ;
  ioArgument_ioAbstractExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 220)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionGetterForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 237)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_1 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_2 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 247)).readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 246))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 262)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 261)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 262)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 263))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 261)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 264)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 265)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_4 = this ;
  cEnumerator_formalInputParameterListForGeneration enumerator_12613 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_12613.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12613.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 267)) ;
    enumerator_12613.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_6 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_7 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 270)).readProperty_mTypeName ().readProperty_string (), temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_8.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 269))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                      GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  const GALGAS_abstractExtensionMethodAST temp_1 = this ;
  const GALGAS_abstractExtensionMethodAST temp_2 = this ;
  GALGAS_lstring var_key_4062 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 88)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 88)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 88)), temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 87)) ;
  {
  const GALGAS_abstractExtensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4062, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 91)) ;
  }
  {
  const GALGAS_abstractExtensionMethodAST temp_4 = this ;
  const GALGAS_abstractExtensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4062, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 92)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 92)) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 92)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 94)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 94)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-method.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 95)) ;
      }
    }
  }
  const GALGAS_abstractExtensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_4580 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 100)) ;
  if (NULL != objectArray_4580) {
    macroValidSharedObject (objectArray_4580, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionMethodAST temp_10 = this ;
    const GALGAS_abstractExtensionMethodAST temp_11 = this ;
    objectArray_4580->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionMethodName (), temp_11.readProperty_mAbstractExtensionMethodFormalParameterList (), GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("extension-abstract-method.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 101)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_abstractExtensionMethodAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  const GALGAS_abstractExtensionMethodAST temp_1 = this ;
  result_result = GALGAS_string ("abstract extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 114)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 114)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 114)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7006 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 145)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7006, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 147)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-abstract-method.galgas", 147)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 147)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionMethodAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_7006, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7006, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 149)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionMethodAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_7006, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 150)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 150)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 150)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 150)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_7604 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-method.galgas", 153)) ;
  const GALGAS_abstractExtensionMethodAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_7739 (temp_7.readProperty_mAbstractExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_7739.hasCurrentObject ()) {
    var_formalParameterListForGeneration_7604.addAssign_operation (enumerator_7739.current_mFormalSelector (HERE), enumerator_7739.current_mFormalArgumentPassingMode (HERE), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_7739.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 158)), enumerator_7739.current_mFormalArgumentName (HERE), enumerator_7739.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 155)) ;
    enumerator_7739.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodAST temp_8 = this ;
  const GALGAS_abstractExtensionMethodAST temp_9 = this ;
  const GALGAS_abstractExtensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (temp_8.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 164)), GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_7006, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 167)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 167)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 167)).add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 167)), var_selfType_7006, temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_7604  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 165))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 163)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionMethodListMapAST,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  const GALGAS_abstractExtensionMethodAST temp_1 = this ;
  ioArgument_ioAbstractExtensionMethodListMapAST.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 191)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_1 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 212)).readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), temp_2.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 211))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionMethodForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 221)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 230)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 230)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 230)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 230))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 230)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 231)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_11992 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_11992.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11992.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 233)) ;
    enumerator_11992.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, temp_4.readProperty_mReceiverType (), temp_5.readProperty_mAbstractExtensionMethodName (), temp_6.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 235))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GALGAS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  const GALGAS_abstractExtensionSetterAST temp_1 = this ;
  const GALGAS_abstractExtensionSetterAST temp_2 = this ;
  GALGAS_lstring var_key_3368 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 73)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 73)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 73)), temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 73)) ;
  {
  const GALGAS_abstractExtensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3368, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 74)) ;
  }
  {
  const GALGAS_abstractExtensionSetterAST temp_4 = this ;
  const GALGAS_abstractExtensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3368, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 75)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 75)) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 75)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 77)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-setter.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 78)) ;
      }
    }
  }
  const GALGAS_abstractExtensionSetterAST temp_9 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_3874 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 83)) ;
  if (NULL != objectArray_3874) {
    macroValidSharedObject (objectArray_3874, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionSetterAST temp_10 = this ;
    const GALGAS_abstractExtensionSetterAST temp_11 = this ;
    objectArray_3874->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionSetterName (), temp_11.readProperty_mAbstractExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 84)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_abstractExtensionSetterAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  const GALGAS_abstractExtensionSetterAST temp_1 = this ;
  result_result = GALGAS_string ("abstract extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 96)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 96)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 96)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_6274 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 128)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_6274, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 130)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-abstract-setter.galgas", 130)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 130)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionSetterAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_6274, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 131)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 131)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 131)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 131)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_6274, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 132)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionSetterAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_6274, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 133)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 133)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 133)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 133)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6873 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-setter.galgas", 136)) ;
  const GALGAS_abstractExtensionSetterAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_7008 (temp_7.readProperty_mAbstractExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_7008.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6873.addAssign_operation (enumerator_7008.current_mFormalSelector (HERE), enumerator_7008.current_mFormalArgumentPassingMode (HERE), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_7008.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 141)), enumerator_7008.current_mFormalArgumentName (HERE), enumerator_7008.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 138)) ;
    enumerator_7008.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterAST temp_8 = this ;
  const GALGAS_abstractExtensionSetterAST temp_9 = this ;
  const GALGAS_abstractExtensionSetterAST temp_10 = this ;
  const GALGAS_abstractExtensionSetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (temp_8.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 147)), GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 150)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 150)).add_operation (temp_10.readProperty_mAbstractExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 150)), var_selfType_6274, temp_11.readProperty_mAbstractExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_6873  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 148))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 146)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionSetterListMap,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                     GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  const GALGAS_abstractExtensionSetterAST temp_1 = this ;
  ioArgument_ioAbstractExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 175)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionSetterForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 193)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_1 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 202)).readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName (), temp_2.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 201))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 215)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 215)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 215)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 215))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 215)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 216)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_11016 (temp_3.readProperty_mAbstractExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_11016.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11016.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 218)) ;
    enumerator_11016.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 221)).readProperty_mTypeName ().readProperty_string (), temp_5.readProperty_mAbstractExtensionSetterName (), temp_6.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 220))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_extensionGetterAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  result_result = GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 135)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 135)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 135)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  const GALGAS_extensionGetterAST temp_2 = this ;
  GALGAS_lstring var_key_6271 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 148)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 148)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 148)), temp_2.readProperty_mExtensionGetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 148)) ;
  {
  const GALGAS_extensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6271, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 149)) ;
  }
  {
  const GALGAS_extensionGetterAST temp_4 = this ;
  const GALGAS_extensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6271, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 150)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 150)) COMMA_SOURCE_FILE ("extension-getter.galgas", 150)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-getter.galgas", 152)).operator_not (SOURCE_FILE ("extension-getter.galgas", 152)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-getter.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 153)) ;
      }
    }
  }
  const GALGAS_extensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_6761 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 158)) ;
  if (NULL != objectArray_6761) {
    macroValidSharedObject (objectArray_6761, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_extensionGetterAST temp_10 = this ;
    const GALGAS_extensionGetterAST temp_11 = this ;
    const GALGAS_extensionGetterAST temp_12 = this ;
    objectArray_6761->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionGetterName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("extension-getter.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 159)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  GALGAS_lstring var_nameForUsefulness_8493 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 194)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8493, var_nameForUsefulness_8493, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 195)) ;
  }
  const GALGAS_extensionGetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_8675 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 196)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_8675, var_nameForUsefulness_8493 COMMA_SOURCE_FILE ("extension-getter.galgas", 197)) ;
  }
  const GALGAS_extensionGetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_8855 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 199)) ;
  GALGAS_string var_selfObjectNameNew_8982 ;
  GALGAS_string var_selfObjectAccessorNew_9018 ;
  GALGAS_bool var_implementedAsFunctionNew_9055 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_8855, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 204)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 204)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectNameNew_8982 = GALGAS_string ("this") ;
      var_selfObjectAccessorNew_9018 = GALGAS_string ("this->") ;
      var_implementedAsFunctionNew_9055 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameNew_8982 = GALGAS_string ("inObject") ;
    var_selfObjectAccessorNew_9018 = GALGAS_string ("inObject.") ;
    var_implementedAsFunctionNew_9055 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionGetterAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContextNew_9399 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_8982, GALGAS_selfAvailability::constructor_available (var_selfType_8855, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("extension-getter.galgas", 218)), var_selfObjectAccessorNew_9018, temp_5.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 214)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_10360 ;
  GALGAS_unifiedTypeMapEntry var_returnType_10380 ;
  GALGAS_string var_returnVariableCppName_10411 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_10457 ;
  {
  const GALGAS_extensionGetterAST temp_6 = this ;
  GALGAS_typedPropertyList temp_7 ;
  const enumGalgasBool test_8 = extensionGetter_definition (var_selfType_8855, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 228)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 228)).operator_or (GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_8855, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 228)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-getter.galgas", 228)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 228)).operator_or (GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_8855, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 228)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_sharedMapEntryType (SOURCE_FILE ("extension-getter.galgas", 228)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 228)).boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = extensionGetter_definition (var_selfType_8855, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 229)).readProperty_mAllTypedPropertyList () ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-getter.galgas", 230)) ;
  }
  const GALGAS_extensionGetterAST temp_9 = this ;
  const GALGAS_extensionGetterAST temp_10 = this ;
  const GALGAS_extensionGetterAST temp_11 = this ;
  const GALGAS_extensionGetterAST temp_12 = this ;
  routine_analyzeFunctionBody (var_nameForUsefulness_8493, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_9399, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionGetterFormalInputParameterList (), temp_7, var_selfObjectAccessorNew_9018, temp_9.readProperty_mExtensionGetterInstructionList (), temp_10.readProperty_mExtensionGetterReturnedVariableName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_10360, var_returnType_10380, var_returnVariableCppName_10411, var_semanticInstructionListForGeneration_10457, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 222)) ;
  }
  const GALGAS_extensionGetterAST temp_13 = this ;
  const GALGAS_extensionGetterAST temp_14 = this ;
  const GALGAS_extensionGetterAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (temp_13.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 244)), GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_selfType_8855, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 247)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 247)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 247)).add_operation (temp_14.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 247)), var_selfType_8855, temp_15.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunctionNew_9055, var_returnType_10380, var_returnVariableCppName_10411, var_formalParameterListForGeneration_10360, extensionGetter_definition (var_selfType_8855, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 254)).readProperty_mAllTypedPropertyList (), var_semanticInstructionListForGeneration_10457  COMMA_SOURCE_FILE ("extension-getter.galgas", 245))  COMMA_SOURCE_FILE ("extension-getter.galgas", 243)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & ioArgument_ioExtensionGetterListMap,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  ioArgument_ioExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 276)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionGetterForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-getter.galgas", 299)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_string & outArgument_outHeader,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_extensionGetterForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionGetterForGeneration temp_2 = this ;
      const GALGAS_extensionGetterForGeneration temp_3 = this ;
      const GALGAS_extensionGetterForGeneration temp_4 = this ;
      const GALGAS_extensionGetterForGeneration temp_5 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 308)).readProperty_mTypeName ().readProperty_string (), temp_3.readProperty_mExtensionGetterName (), temp_4.readProperty_mExtensionGetterFormalParameterList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 311)) COMMA_SOURCE_FILE ("extension-getter.galgas", 307))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionGetterForGeneration temp_6 = this ;
    const GALGAS_extensionGetterForGeneration temp_7 = this ;
    const GALGAS_extensionGetterForGeneration temp_8 = this ;
    const GALGAS_extensionGetterForGeneration temp_9 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 315)).readProperty_mTypeName ().readProperty_string (), temp_7.readProperty_mExtensionGetterName (), temp_8.readProperty_mExtensionGetterFormalParameterList (), temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 314))) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outImplementation,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionGetterForGeneration temp_0 = this ;
  cEnumerator_formalInputParameterListForGeneration enumerator_14883 (temp_0.readProperty_mExtensionGetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_14883.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14883.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 330)) ;
    enumerator_14883.gotoNextObject () ;
  }
  const GALGAS_extensionGetterForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 332)) ;
  const GALGAS_extensionGetterForGeneration temp_2 = this ;
  GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_15096 = temp_2.readProperty_mExtensionGetterFormalParameterList () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_extensionGetterForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_extensionGetterForGeneration temp_5 = this ;
      var_extensionReaderFormalParameterList_15096.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 336)), temp_5.readProperty_mReceiverType (), GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 339))  COMMA_SOURCE_FILE ("extension-getter.galgas", 339)), GALGAS_bool (true), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 335)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_6 = this ;
      const GALGAS_extensionGetterForGeneration temp_7 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 344)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 343)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 344)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 345))  COMMA_SOURCE_FILE ("extension-getter.galgas", 343)) ;
      GALGAS_string var_code_15930 ;
      {
      const GALGAS_extensionGetterForGeneration temp_8 = this ;
      const GALGAS_extensionGetterForGeneration temp_9 = this ;
      const GALGAS_extensionGetterForGeneration temp_10 = this ;
      const GALGAS_extensionGetterForGeneration temp_11 = this ;
      routine_generateFunction (GALGAS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 347)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_15096, temp_9.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("C_Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GALGAS_bool (false), GALGAS_bool (false), var_code_15930, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 346)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_12 = this ;
      const GALGAS_extensionGetterForGeneration temp_13 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 359)).readProperty_mTypeName ().readProperty_string (), temp_13.readProperty_mExtensionGetterName (), var_code_15930 COMMA_SOURCE_FILE ("extension-getter.galgas", 358))) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_extensionGetterForGeneration temp_14 = this ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 364)) ;
    const GALGAS_extensionGetterForGeneration temp_15 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_16262 = temp_15.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_16307 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 367)).isValid ()) {
      uint32_t variant_16323 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 367)).uintValue () ;
      bool loop_16323 = true ;
      while (loop_16323) {
        loop_16323 = var_searching_16307.isValid () ;
        if (loop_16323) {
          loop_16323 = var_searching_16307.boolValue () ;
        }
        if (loop_16323 && (0 == variant_16323)) {
          loop_16323 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 367)) ;
        }
        if (loop_16323) {
          variant_16323 -- ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = extensionGetter_definition (var_baseType_16262, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 368)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("extension-getter.galgas", 368)).operator_not (SOURCE_FILE ("extension-getter.galgas", 368)).boolEnum () ;
            if (kBoolTrue == test_16) {
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                const GALGAS_extensionGetterForGeneration temp_18 = this ;
                test_17 = extensionGetter_definition (extensionGetter_definition (var_baseType_16262, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 369)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 369)).readProperty_mGetterMap ().getter_hasKey (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas", 369)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  var_baseType_16262 = extensionGetter_definition (var_baseType_16262, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 370)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_17) {
                var_searching_16307 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_16) {
            var_searching_16307 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionGetterForGeneration temp_19 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_16262, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 379)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 378)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 379)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 380))  COMMA_SOURCE_FILE ("extension-getter.galgas", 378)) ;
    GALGAS_string var_extensionGetterCode_17282 ;
    {
    const GALGAS_extensionGetterForGeneration temp_20 = this ;
    const GALGAS_extensionGetterForGeneration temp_21 = this ;
    const GALGAS_extensionGetterForGeneration temp_22 = this ;
    const GALGAS_extensionGetterForGeneration temp_23 = this ;
    const GALGAS_extensionGetterForGeneration temp_24 = this ;
    routine_generateExtensionGetterNew (GALGAS_string ("cPtr_").add_operation (extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 382)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 382)).add_operation (GALGAS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 382)).add_operation (temp_21.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 382)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_15096, temp_22.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("C_Compiler"), temp_23.readProperty_mResultType (), temp_24.readProperty_mResultVarCppName (), var_extensionGetterCode_17282, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 381)) ;
    }
    const GALGAS_extensionGetterForGeneration temp_25 = this ;
    const GALGAS_extensionGetterForGeneration temp_26 = this ;
    const GALGAS_extensionGetterForGeneration temp_27 = this ;
    const GALGAS_extensionGetterForGeneration temp_28 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, extensionGetter_definition (temp_25.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 392)).readProperty_mTypeName ().readProperty_string (), temp_26.readProperty_mExtensionGetterName (), temp_27.readProperty_mExtensionGetterFormalParameterList (), var_extensionGetterCode_17282, temp_28.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 391))) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_extensionMethodAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  result_result = GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 105)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 105)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 105)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  const GALGAS_extensionMethodAST temp_2 = this ;
  GALGAS_lstring var_key_5351 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 119)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 119)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 119)), temp_2.readProperty_mExtensionMethodName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-method.galgas", 118)) ;
  {
  const GALGAS_extensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5351, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 122)) ;
  }
  {
  const GALGAS_extensionMethodAST temp_4 = this ;
  const GALGAS_extensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5351, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 123)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-method.galgas", 123)) COMMA_SOURCE_FILE ("extension-method.galgas", 123)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-method.galgas", 125)).operator_not (SOURCE_FILE ("extension-method.galgas", 125)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-method.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 126)) ;
      }
    }
  }
  const GALGAS_extensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_5854 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 131)) ;
  if (NULL != objectArray_5854) {
    macroValidSharedObject (objectArray_5854, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_extensionMethodAST temp_10 = this ;
    const GALGAS_extensionMethodAST temp_11 = this ;
    objectArray_5854->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mExtensionMethodName (), temp_11.readProperty_mExtensionMethodFormalParameterList (), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("extension-method.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 132)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  GALGAS_lstring var_nameForUsefulness_7537 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 166)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7537, var_nameForUsefulness_7537, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 167)) ;
  }
  const GALGAS_extensionMethodAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_7719 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 168)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7719, var_nameForUsefulness_7537 COMMA_SOURCE_FILE ("extension-method.galgas", 169)) ;
  }
  const GALGAS_extensionMethodAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7900 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 171)) ;
  GALGAS_string var_selfObjectNameNew_7990 ;
  GALGAS_string var_selfObjectAccessorNew_8026 ;
  GALGAS_bool var_implementedAsFunction_8060 ;
  GALGAS_bool var_isReferenceClass_8115 = GALGAS_bool (false) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_isReference_8209 ;
    const bool optionalResult8179 = extensionGetter_definition (var_selfType_7900, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 177)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_8209) ;
    if (!optionalResult8179) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      var_isReferenceClass_8115 = var_isReference_8209 ;
      var_selfObjectNameNew_7990 = GALGAS_string ("this") ;
      var_selfObjectAccessorNew_8026 = GALGAS_string ("this->") ;
      var_implementedAsFunction_8060 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameNew_7990 = GALGAS_string ("inObject") ;
    var_selfObjectAccessorNew_8026 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_8060 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionMethodAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContextNew_8528 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_7990, GALGAS_selfAvailability::constructor_available (var_selfType_7900, GALGAS_bool (false), var_isReferenceClass_8115  COMMA_SOURCE_FILE ("extension-method.galgas", 192)), var_selfObjectAccessorNew_8026, temp_5.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-method.galgas", 188)) ;
  GALGAS_bool var_isRefClass_8845 = GALGAS_bool (false) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    GALGAS_bool var_reference_8937 ;
    const bool optionalResult8909 = extensionGetter_definition (var_selfType_7900, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 197)).readProperty_mTypeKindEnum ().optional_classType (var_reference_8937) ;
    if (!optionalResult8909) {
      test_6 = kBoolFalse ;
    }
    if (kBoolTrue == test_6) {
      var_isRefClass_8845 = var_reference_8937 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_9000 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 200)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_9051 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 201)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_7900, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 202)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-method.galgas", 202)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_nonMutableProperties_9051 = extensionGetter_definition (var_selfType_7900, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 203)).readProperty_mAllTypedPropertyList () ;
    }
  }
  if (kBoolFalse == test_7) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_bool var_isReference_9296 ;
      const bool optionalResult9266 = extensionGetter_definition (var_selfType_7900, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 204)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_9296) ;
      if (!optionalResult9266) {
        test_8 = kBoolFalse ;
      }
      if (kBoolTrue == test_8) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_isReference_9296.boolEnum () ;
          if (kBoolTrue == test_9) {
            var_mutableProperties_9000 = extensionGetter_definition (var_selfType_7900, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 206)).readProperty_mAllTypedPropertyList () ;
          }
        }
        if (kBoolFalse == test_9) {
          var_nonMutableProperties_9051 = extensionGetter_definition (var_selfType_7900, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 208)).readProperty_mAllTypedPropertyList () ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9865 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_9907 ;
  {
  const GALGAS_extensionMethodAST temp_10 = this ;
  const GALGAS_extensionMethodAST temp_11 = this ;
  const GALGAS_extensionMethodAST temp_12 = this ;
  routine_analyzeRoutineBody (var_nameForUsefulness_7537, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_8528, ioArgument_ioTypeMap, temp_10.readProperty_mExtensionMethodFormalParameterList (), var_nonMutableProperties_9051, var_mutableProperties_9000, temp_11.readProperty_mExtensionMethodInstructionList (), temp_12.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_9865, var_formalParameterListForGeneration_9907, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 211)) ;
  }
  const GALGAS_extensionMethodAST temp_13 = this ;
  const GALGAS_extensionMethodAST temp_14 = this ;
  const GALGAS_extensionMethodAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (temp_13.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 226)), GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_7900, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 229)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 229)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 229)).add_operation (temp_14.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 229)), var_selfType_7900, temp_15.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_8060, var_formalParameterListForGeneration_9907, extensionGetter_definition (var_selfType_7900, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 234)).readProperty_mAllTypedPropertyList (), var_semanticInstructionListForGeneration_9865  COMMA_SOURCE_FILE ("extension-method.galgas", 227))  COMMA_SOURCE_FILE ("extension-method.galgas", 225)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                             GALGAS_genericExtensionMethodListMap & ioArgument_ioExtensionMethodListMap,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  ioArgument_ioExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-method.galgas", 257)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionMethodForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-method.galgas", 276)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_string & outArgument_outHeader,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionMethodForGeneration temp_2 = this ;
      const GALGAS_extensionMethodForGeneration temp_3 = this ;
      const GALGAS_extensionMethodForGeneration temp_4 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 286)).readProperty_mTypeName ().readProperty_string (), temp_3.readProperty_mExtensionMethodName (), temp_4.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 285))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_5 = this ;
    const GALGAS_extensionMethodForGeneration temp_6 = this ;
    const GALGAS_extensionMethodForGeneration temp_7 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 292)).readProperty_mTypeName ().readProperty_string (), temp_6.readProperty_mExtensionMethodName (), temp_7.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 291))) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outImplementation,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionMethodForGeneration temp_2 = this ;
      GALGAS_formalParameterListForGeneration var_extensionMethodFormalParameterList_13971 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GALGAS_extensionMethodForGeneration temp_3 = this ;
      var_extensionMethodFormalParameterList_13971.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 309)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 310)), temp_3.readProperty_mReceiverType (), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 312))  COMMA_SOURCE_FILE ("extension-method.galgas", 312)), GALGAS_string ("inObject"), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 308)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_4 = this ;
      const GALGAS_extensionMethodForGeneration temp_5 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 316)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 316)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 316)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 316))  COMMA_SOURCE_FILE ("extension-method.galgas", 316)) ;
      GALGAS_string var_code_14897 ;
      {
      const GALGAS_extensionMethodForGeneration temp_6 = this ;
      const GALGAS_extensionMethodForGeneration temp_7 = this ;
      routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 319)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_13971, temp_7.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_14897, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 317)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_8 = this ;
      const GALGAS_extensionMethodForGeneration temp_9 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 331)).readProperty_mTypeName ().readProperty_string (), temp_9.readProperty_mExtensionMethodName (), var_code_14897 COMMA_SOURCE_FILE ("extension-method.galgas", 330))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_10 = this ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 336)) ;
    const GALGAS_extensionMethodForGeneration temp_11 = this ;
    cEnumerator_formalParameterListForGeneration enumerator_15228 (temp_11.readProperty_mExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
    while (enumerator_15228.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_15228.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 338)) ;
      enumerator_15228.gotoNextObject () ;
    }
    const GALGAS_extensionMethodForGeneration temp_12 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_15385 = temp_12.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_15430 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 342)).isValid ()) {
      uint32_t variant_15446 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 342)).uintValue () ;
      bool loop_15446 = true ;
      while (loop_15446) {
        loop_15446 = var_searching_15430.isValid () ;
        if (loop_15446) {
          loop_15446 = var_searching_15430.boolValue () ;
        }
        if (loop_15446 && (0 == variant_15446)) {
          loop_15446 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 342)) ;
        }
        if (loop_15446) {
          variant_15446 -- ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = extensionGetter_definition (var_baseType_15385, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 343)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("extension-method.galgas", 343)).operator_not (SOURCE_FILE ("extension-method.galgas", 343)).boolEnum () ;
            if (kBoolTrue == test_13) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                const GALGAS_extensionMethodForGeneration temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_15385, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 344)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 344)).readProperty_mInstanceMethodMap ().getter_hasKey (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas", 344)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  var_baseType_15385 = extensionGetter_definition (var_baseType_15385, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 345)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_14) {
                var_searching_15430 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_13) {
            var_searching_15430 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionMethodForGeneration temp_16 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (var_baseType_15385, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 354)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 354)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 354)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 355))  COMMA_SOURCE_FILE ("extension-method.galgas", 353)) ;
    GALGAS_string var_methodImplementation_16241 ;
    {
    const GALGAS_extensionMethodForGeneration temp_17 = this ;
    const GALGAS_extensionMethodForGeneration temp_18 = this ;
    const GALGAS_extensionMethodForGeneration temp_19 = this ;
    const GALGAS_extensionMethodForGeneration temp_20 = this ;
    routine_generateExtensionMethodNew (temp_17.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_16241, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 356)) ;
    }
    const GALGAS_extensionMethodForGeneration temp_21 = this ;
    const GALGAS_extensionMethodForGeneration temp_22 = this ;
    const GALGAS_extensionMethodForGeneration temp_23 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, extensionGetter_definition (temp_21.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 365)).readProperty_mTypeName ().readProperty_string (), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_16241 COMMA_SOURCE_FILE ("extension-method.galgas", 364))) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionSetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_extensionSetterAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_extensionSetterAST temp_0 = this ;
  const GALGAS_extensionSetterAST temp_1 = this ;
  result_result = GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 105)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 105)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 105)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionSetterAST temp_0 = this ;
  const GALGAS_extensionSetterAST temp_1 = this ;
  const GALGAS_extensionSetterAST temp_2 = this ;
  GALGAS_lstring var_key_5263 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 119)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 119)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 119)), temp_2.readProperty_mExtensionSetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-setter.galgas", 118)) ;
  {
  const GALGAS_extensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5263, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 122)) ;
  }
  {
  const GALGAS_extensionSetterAST temp_4 = this ;
  const GALGAS_extensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5263, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 123)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-setter.galgas", 123)) COMMA_SOURCE_FILE ("extension-setter.galgas", 123)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-setter.galgas", 125)).operator_not (SOURCE_FILE ("extension-setter.galgas", 125)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-setter.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 126)) ;
      }
    }
  }
  const GALGAS_extensionSetterAST temp_9 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_5765 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-setter.galgas", 131)) ;
  if (NULL != objectArray_5765) {
    macroValidSharedObject (objectArray_5765, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_extensionSetterAST temp_10 = this ;
    const GALGAS_extensionSetterAST temp_11 = this ;
    objectArray_5765->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionSetterName (), temp_11.readProperty_mExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 132)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionSetterAST temp_0 = this ;
  const GALGAS_extensionSetterAST temp_1 = this ;
  GALGAS_lstring var_nameForUsefulness_7431 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 164)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7431, var_nameForUsefulness_7431, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 165)) ;
  }
  const GALGAS_extensionSetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_7613 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 166)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7613, var_nameForUsefulness_7431 COMMA_SOURCE_FILE ("extension-setter.galgas", 167)) ;
  }
  const GALGAS_extensionSetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7793 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 169)) ;
  GALGAS_string var_selfObjectName_7879 ;
  GALGAS_string var_selfObjectAccessor_7912 ;
  GALGAS_bool var_implementedAsFunction_7946 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_7793, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 174)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-setter.galgas", 174)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectName_7879 = GALGAS_string ("object") ;
      var_selfObjectAccessor_7912 = GALGAS_string ("object->") ;
      var_implementedAsFunction_7946 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_7879 = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor_7912 = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction_7946 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionSetterAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContext_8305 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_7879, GALGAS_selfAvailability::constructor_available (var_selfType_7793, GALGAS_bool (true), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-setter.galgas", 188)), var_selfObjectAccessor_7912, temp_5.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-setter.galgas", 184)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8975 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_9017 ;
  {
  const GALGAS_extensionSetterAST temp_6 = this ;
  const GALGAS_extensionSetterAST temp_7 = this ;
  const GALGAS_extensionSetterAST temp_8 = this ;
  routine_analyzeRoutineBody (var_nameForUsefulness_7431, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8305, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionSetterFormalParameterList (), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 198)), extensionGetter_definition (var_selfType_7793, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 199)).readProperty_mAllTypedPropertyList (), temp_7.readProperty_mExtensionSetterInstructionList (), temp_8.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_8975, var_formalParameterListForGeneration_9017, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 192)) ;
  }
  const GALGAS_extensionSetterAST temp_9 = this ;
  const GALGAS_extensionSetterAST temp_10 = this ;
  const GALGAS_extensionSetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (temp_9.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 207)), GALGAS_extensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (extensionGetter_definition (var_selfType_7793, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 210)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 210)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 210)).add_operation (temp_10.readProperty_mExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 210)), var_selfType_7793, temp_11.readProperty_mExtensionSetterName ().readProperty_string (), var_implementedAsFunction_7946, var_formalParameterListForGeneration_9017, extensionGetter_definition (var_selfType_7793, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 215)).readProperty_mAllTypedPropertyList (), var_semanticInstructionListForGeneration_8975  COMMA_SOURCE_FILE ("extension-setter.galgas", 208))  COMMA_SOURCE_FILE ("extension-setter.galgas", 206)) ;
}
