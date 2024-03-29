#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  const GALGAS_boolsetDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3931 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 99)), temp_1.readProperty_mBoolsetTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 99)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3931, temp_2, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 100)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolsetDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_boolsetDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("boolset @").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 108)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForBoolset'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForBoolset (Compiler *
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("type-boolset.galgas", 116)) ;
  result_result.addAssign_operation (GALGAS_string ("all")  COMMA_SOURCE_FILE ("type-boolset.galgas", 117)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-boolset.galgas", 118)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-boolset.galgas", 119)) ;
  result_result.addAssign_operation (GALGAS_string ("none")  COMMA_SOURCE_FILE ("type-boolset.galgas", 120)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-boolset.galgas", 121)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForBoolset = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForBoolset ;

//--------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForBoolset (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForBoolset) {
    gOnceFunctionResult_forbiddenKeysForBoolset = onceFunction_forbiddenKeysForBoolset (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForBoolset = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForBoolset ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForBoolset (void) {
  gOnceFunctionResult_forbiddenKeysForBoolset.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForBoolset (nullptr,
                                                                   releaseOnceFunctionResult_forbiddenKeysForBoolset) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForBoolset [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForBoolset (Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForBoolset (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForBoolset ("forbiddenKeysForBoolset",
                                                                         functionWithGenericHeader_forbiddenKeysForBoolset,
                                                                         & kTypeDescriptor_GALGAS_stringset,
                                                                         0,
                                                                         functionArgs_forbiddenKeysForBoolset) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_slotNameSet_5422 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("type-boolset.galgas", 134)) ;
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_5446 (temp_0.readProperty_mFlagList (), EnumerationOrder::up) ;
  while (enumerator_5446.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 136)).getter_hasKey (enumerator_5446.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 136)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_m_5560 = GALGAS_string ("a slot cannot be named:") ;
        cEnumerator_stringset enumerator_5630 (function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 138)), EnumerationOrder::up) ;
        while (enumerator_5630.hasCurrentObject ()) {
          var_m_5560.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_5630.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 139)) ;
          enumerator_5630.gotoNextObject () ;
        }
        var_m_5560.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 141)) ;
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5446.current_mValue (HERE).readProperty_location (), var_m_5560, fixItArray2  COMMA_SOURCE_FILE ("type-boolset.galgas", 142)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_slotNameSet_5422.getter_hasKey (enumerator_5446.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 143)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_5446.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated slot name"), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 144)) ;
        }
      }
    }
    var_slotNameSet_5422.addAssign_operation (enumerator_5446.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 146)) ;
    enumerator_5446.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_boolsetTypeIndex_5943 ;
  {
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mBoolsetTypeName (), var_boolsetTypeIndex_5943, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 149)) ;
  }
  GALGAS_getterMap var_getterMap_6054 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6054, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 151)) ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_6089 = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 152)) ;
  {
  var_classFunctionMap_6089.setter_insertKey (GALGAS_string ("none").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 153)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 153)), GALGAS_bool (false), var_boolsetTypeIndex_5943, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 153)) ;
  }
  {
  var_classFunctionMap_6089.setter_insertKey (GALGAS_string ("all").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 154)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 154)), GALGAS_bool (false), var_boolsetTypeIndex_5943, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 154)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6054, ioArgument_ioTypeMap, GALGAS_string ("none"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 155)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6054, ioArgument_ioTypeMap, GALGAS_string ("all"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 163)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  cEnumerator_lstringlist enumerator_6638 (temp_6.readProperty_mFlagList (), EnumerationOrder::up) ;
  while (enumerator_6638.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_classFunctionMap_6089.getter_hasKey (enumerator_6638.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 172)).operator_not (SOURCE_FILE ("type-boolset.galgas", 172)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        var_classFunctionMap_6089.setter_insertKey (enumerator_6638.current_mValue (HERE), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 173)), GALGAS_bool (false), var_boolsetTypeIndex_5943, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 173)) ;
        }
        {
        routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6054, ioArgument_ioTypeMap, enumerator_6638.current_mValue (HERE).readProperty_string (), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 174)) ;
        }
      }
    }
    enumerator_6638.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_7063 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 185)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7125 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 187)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mBoolsetTypeName (), GALGAS_bool (false), var_getterMap_6054, var_setterMap_7063, var_instanceMethodMap_7125, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 189)) ;
  }
  GALGAS_operators var_operators_7511 = GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("type-boolset.galgas", 203)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("type-boolset.galgas", 203)) COMMA_SOURCE_FILE ("type-boolset.galgas", 203)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("type-boolset.galgas", 203)) COMMA_SOURCE_FILE ("type-boolset.galgas", 203)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("type-boolset.galgas", 203)) COMMA_SOURCE_FILE ("type-boolset.galgas", 203)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-boolset.galgas", 204)) COMMA_SOURCE_FILE ("type-boolset.galgas", 203)).operator_or (GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("type-boolset.galgas", 204)) COMMA_SOURCE_FILE ("type-boolset.galgas", 204)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("type-boolset.galgas", 204)) COMMA_SOURCE_FILE ("type-boolset.galgas", 204)) ;
  const GALGAS_boolsetDeclarationAST temp_9 = this ;
  const GALGAS_boolsetDeclarationAST temp_10 = this ;
  const GALGAS_boolsetDeclarationAST temp_11 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_7724 = GALGAS_unifiedTypeDefinition::class_func_new (temp_9.readProperty_mBoolsetTypeName (), temp_10.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-boolset.galgas", 210)), GALGAS_typeKindEnum::class_func_boolsetType (SOURCE_FILE ("type-boolset.galgas", 211)), GALGAS_bool (false), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 213)), GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 214)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 215)), var_classFunctionMap_6089, var_getterMap_6054, var_setterMap_7063, var_instanceMethodMap_7125, GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 220)), GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 221)), GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 222)), var_operators_7511, GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 224)), GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-boolset.galgas", 225)), GALGAS_enumConstantList::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 226)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 227)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-boolset.galgas", 228)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-boolset.galgas", 230)), GALGAS_string ("none"), GALGAS_string ("boolset-").add_operation (temp_11.readProperty_mBoolsetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-boolset.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 232)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-boolset.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 206)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7724.readProperty_typeName (), var_typeDefinition_7724, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 235)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                          const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_boolsetDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 253)).objectCompare (GALGAS_uint (uint32_t (64U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_boolsetDeclarationAST temp_2 = this ;
      GALGAS_location var_s_9403 = temp_2.readProperty_mFlagList ().getter_mValueAtIndex (GALGAS_uint (uint32_t (64U)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 254)).readProperty_location () ;
      const GALGAS_boolsetDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_9403, GALGAS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 255)).getter_string (SOURCE_FILE ("type-boolset.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 255)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 255)), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 255)) ;
    }
  }
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  GALGAS_lstring var_boolsetNameForUsefulness_9558 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 258)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_9558, var_boolsetNameForUsefulness_9558, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 259)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  const GALGAS_boolsetDeclarationAST temp_7 = this ;
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (temp_6.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 261)), GALGAS_boolsetTypeForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 263)), temp_8.readProperty_mFlagList ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 262))  COMMA_SOURCE_FILE ("type-boolset.galgas", 260)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'structGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_structGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_lstringlist & /* in_SLOT_5F_LIST */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" boolset"), inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Properties\n  private: uint64_t mFlags ;\n  private: bool mIsValid ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Private constructor\n  private: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                              const GALGAS_lstringlist & in_SLOT_5F_LIST,
                                                                                              const GALGAS_bigint & in_FULL_5F_SET
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmFlags (0),\nmIsValid (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) :\nAC_GALGAS_root (),\nmFlags (inFlags),\nmIsValid (true) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_none (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (0) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_all (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (uint64_t (") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 26)).stringValue ()) ;
  result.appendString (")) ;\n}\n\n") ;
  GALGAS_uint index_1000_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_1000 (in_SLOT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1000.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_1000.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 32)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" (uint64_t (1) << ") ;
      result.appendString (index_1000_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 33)).stringValue ()) ;
      result.appendString (") ;\n}\n\n") ;
      index_1000_idx.increment () ;
      enumerator_1000.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::invalid ;\n   if (mIsValid && inOperand.mIsValid) {\n     result = ComparisonResult::operandEqual ;\n     if (mFlags < inOperand.mFlags) {\n       result = ComparisonResult::firstOperandLowerThanSecond ;\n     }else if (mFlags > inOperand.mFlags) {\n       result = ComparisonResult::firstOperandGreaterThanSecond ;\n     }\n   }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mIsValid ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_or (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags | inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_and (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_xor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags ^ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::substract_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & ~ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_tilde (UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (((uint64_t) ") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 108)).stringValue ()) ;
  result.appendString (") ^ mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<boolset @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (":\") ;\n  if (! isValid ()) {\n    ioString.appendCString (\" not built\") ;\n  }else{\n") ;
  GALGAS_uint index_4778_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_4778 (in_SLOT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4778.hasCurrentObject ()) {
      result.appendString ("    if ((mFlags & ((uint64_t) 1) << ") ;
      result.appendString (index_4778_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 123)).stringValue ()) ;
      result.appendString (") != 0) {\n      ioString.appendCString (\" ") ;
      result.appendString (enumerator_4778.current_mValue (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") ;\n    }\n") ;
      index_4778_idx.increment () ;
      enumerator_4778.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_none (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == 0) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_all (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == uint64_t (") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 146)).stringValue ()) ;
  result.appendString (")) ;\n  }\n  return result ;\n}\n\n") ;
  GALGAS_uint index_5614_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_5614 (in_SLOT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5614.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_5614.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 153)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool ((mFlags & (uint64_t (1) << ") ;
      result.appendString (index_5614_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 156)).stringValue ()) ;
      result.appendString (")) != 0) ;\n  }\n  return result ;\n}\n\n") ;
      index_5614_idx.increment () ;
      enumerator_5614.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GALGAS_string & outArgument_outHeader,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_11072 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 299)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, var_typedefinition_11072.readProperty_typeName ().readProperty_string (), var_typedefinition_11072.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 302)), temp_1.readProperty_mFlagList () COMMA_SOURCE_FILE ("type-boolset.galgas", 300))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typedefinition_11072.readProperty_typeName ().readProperty_string (), var_typedefinition_11072.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 307)), var_typedefinition_11072.readProperty_isConcrete (), var_typedefinition_11072.readProperty_classFunctionMap (), var_typedefinition_11072.readProperty_mGetterMap (), var_typedefinition_11072.readProperty_mSetterMap (), var_typedefinition_11072.readProperty_mInstanceMethodMap (), var_typedefinition_11072.readProperty_classMethodMap (), var_typedefinition_11072.readProperty_optionalMethodMap (), var_typedefinition_11072.readProperty_mEnumerationDescriptor (), var_typedefinition_11072.readProperty_mHandledOperatorFlags (), var_typedefinition_11072.readProperty_mAddAssignOperatorArguments (), var_typedefinition_11072.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-boolset.galgas", 305))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 305)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outImplementation,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 329)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  const GALGAS_boolsetTypeForGeneration temp_2 = this ;
  const GALGAS_boolsetTypeForGeneration temp_3 = this ;
  const GALGAS_boolsetTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 331)).readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 332)), temp_3.readProperty_mFlagList (), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 334)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 334)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 334)) COMMA_SOURCE_FILE ("type-boolset.galgas", 330))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Function 'weakSuffix'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_weakSuffix (Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("-weak") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_weakSuffix [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_weakSuffix (Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_weakSuffix (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_weakSuffix ("weakSuffix",
                                                            functionWithGenericHeader_weakSuffix,
                                                            & kTypeDescriptor_GALGAS_string,
                                                            0,
                                                            functionArgs_weakSuffix) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@classDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_classDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_classDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("valueclass @").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 187)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classDeclarationAST temp_0 = this ;
  const GALGAS_classDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_7132 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 199)), temp_1.readProperty_mClassTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 199)) ;
  {
  const GALGAS_classDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7132, temp_2, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 200)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_classDeclarationAST temp_5 = this ;
      const GALGAS_classDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7132, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 205)), temp_6.readProperty_mSuperClassName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 205)) COMMA_SOURCE_FILE ("type-class.galgas", 203)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_7 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_7562 (temp_7.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_7562.hasCurrentObject ()) {
    {
    const GALGAS_classDeclarationAST temp_8 = this ;
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7132, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (enumerator_7562.current_propertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 212)), temp_8.readProperty_mSuperClassName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 212)) COMMA_SOURCE_FILE ("type-class.galgas", 210)) ;
    }
    enumerator_7562.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap var_getterMap_8284 ;
  GALGAS_setterMap var_setterMap_8313 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_8350 ;
  GALGAS_typedPropertyList var_inheritedTypedPropertyList_8395 ;
  GALGAS_propertyMap var_attributeMap_8443 = GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-class.galgas", 229)) ;
  GALGAS_unifiedTypeMapEntry var_superClassIndex_8516 ;
  GALGAS_bool var_generateHeaderInSeparateFile_8546 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_8516 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-class.galgas", 234)) ;
      {
      routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_8284, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 235)) ;
      }
      var_setterMap_8313 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-class.galgas", 236)) ;
      var_instanceMethodMap_8350 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-class.galgas", 237)) ;
      var_inheritedTypedPropertyList_8395 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-class.galgas", 238)) ;
      var_attributeMap_8443 = GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-class.galgas", 239)) ;
      const GALGAS_classDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_8546 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_classDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperClassName (), var_superClassIndex_8516, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 242)) ;
    }
    const GALGAS_classDeclarationAST temp_4 = this ;
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_8996 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 243)) ;
    var_inheritedTypedPropertyList_8395 = var_superTypeDefinition_8996.readProperty_allTypedPropertyList () ;
    var_attributeMap_8443 = var_superTypeDefinition_8996.readProperty_propertyMap () ;
    var_generateHeaderInSeparateFile_8546 = var_superTypeDefinition_8996.readProperty_mGenerateHeaderInSeparateFile () ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_superTypeDefinition_8996.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("type-class.galgas", 248)).operator_not (SOURCE_FILE ("type-class.galgas", 248)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_classDeclarationAST temp_6 = this ;
        const GALGAS_classDeclarationAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperClassName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_7.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 249)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 249)), fixItArray8  COMMA_SOURCE_FILE ("type-class.galgas", 249)) ;
      }
    }
    var_setterMap_8313 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-class.galgas", 252)) ;
    cEnumerator_setterMap enumerator_9579 (var_superTypeDefinition_8996.readProperty_mSetterMap (), EnumerationOrder::up) ;
    while (enumerator_9579.hasCurrentObject ()) {
      {
      var_setterMap_8313.setter_insertKey (enumerator_9579.current_lkey (HERE), enumerator_9579.current_mKind (HERE), enumerator_9579.current_mParameterList (HERE), enumerator_9579.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-class.galgas", 259)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 254)) ;
      }
      enumerator_9579.gotoNextObject () ;
    }
    var_getterMap_8284 = GALGAS_getterMap::class_func_emptyMap (SOURCE_FILE ("type-class.galgas", 264)) ;
    cEnumerator_getterMap enumerator_9976 (var_superTypeDefinition_8996.readProperty_mGetterMap (), EnumerationOrder::up) ;
    while (enumerator_9976.hasCurrentObject ()) {
      {
      var_getterMap_8284.setter_insertKey (enumerator_9976.current_lkey (HERE), enumerator_9976.current_mKind (HERE), enumerator_9976.current_mArgumentTypeList (HERE), enumerator_9976.current_mDeclarationLocation (HERE), enumerator_9976.current_mHasCompilerArgument (HERE), enumerator_9976.current_mReturnedType (HERE), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-class.galgas", 274)), enumerator_9976.current_mGetterNameThatObsoletesInvokationName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 267)) ;
      }
      enumerator_9976.gotoNextObject () ;
    }
    var_instanceMethodMap_8350 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-class.galgas", 279)) ;
    cEnumerator_instanceMethodMap enumerator_10448 (var_superTypeDefinition_8996.readProperty_mInstanceMethodMap (), EnumerationOrder::up) ;
    while (enumerator_10448.hasCurrentObject ()) {
      {
      var_instanceMethodMap_8350.setter_insertKey (enumerator_10448.current_lkey (HERE), enumerator_10448.current_mKind (HERE), enumerator_10448.current_mParameterList (HERE), enumerator_10448.current_mDeclarationLocation (HERE), enumerator_10448.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-class.galgas", 288)), enumerator_10448.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 282)) ;
      }
      enumerator_10448.gotoNextObject () ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_10856 ;
  {
  const GALGAS_classDeclarationAST temp_9 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_9.readProperty_mClassTypeName (), var_classIndex_10856, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 294)) ;
  }
  GALGAS_functionSignature var_constructorPropertyTypeList_10952 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-class.galgas", 296)) ;
  cEnumerator_typedPropertyList enumerator_11029 (var_inheritedTypedPropertyList_8395, EnumerationOrder::up) ;
  while (enumerator_11029.hasCurrentObject ()) {
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_11029.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_11029.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 299)) ;
    }
    var_constructorPropertyTypeList_10952.addAssign_operation (temp_10, enumerator_11029.current_mPropertyTypeEntry (HERE), enumerator_11029.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 298)) ;
    enumerator_11029.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_12 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11324 (temp_12.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_11324.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = enumerator_11324.current_initialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 304)).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_11324.current_propertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray14  COMMA_SOURCE_FILE ("type-class.galgas", 305)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11547 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11324.current_propertyTypeName (HERE), var_attributeTypeIndex_11547, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 307)) ;
    }
    GALGAS_lstring temp_15 ;
    const enumGalgasBool test_16 = enumerator_11324.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = enumerator_11324.current_propertyName (HERE) ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 309)) ;
    }
    var_constructorPropertyTypeList_10952.addAssign_operation (temp_15, var_attributeTypeIndex_11547, enumerator_11324.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 308)) ;
    {
    var_attributeMap_8443.setter_insertKey (enumerator_11324.current_propertyName (HERE), extensionGetter_accessControl (enumerator_11324.current_accessControl (HERE), var_classIndex_10856, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 314)), enumerator_11324.current_isConstant (HERE), var_attributeTypeIndex_11547, enumerator_11324.current_initialization (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 312)) ;
    }
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_getterMap_8284.getter_hasKey (enumerator_11324.current_propertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-class.galgas", 319)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_11324.current_propertyName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_11324.current_propertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 320)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 320)), fixItArray18  COMMA_SOURCE_FILE ("type-class.galgas", 320)) ;
      }
    }
    enumerator_11324.gotoNextObject () ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_12158 = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("type-class.galgas", 324)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_classDeclarationAST temp_20 = this ;
    test_19 = temp_20.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 325)).boolEnum () ;
    if (kBoolTrue == test_19) {
      {
      var_classFunctionMap_12158.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("new"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 327)), var_constructorPropertyTypeList_10952, GALGAS_bool (false), var_classIndex_10856, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 326)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedPropertyList_12439 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-class.galgas", 334)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_12501 = var_inheritedTypedPropertyList_8395 ;
  const GALGAS_classDeclarationAST temp_21 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12617 (temp_21.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_12617.hasCurrentObject ()) {
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = enumerator_12617.current_initialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 337)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (enumerator_12617.current_propertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray23  COMMA_SOURCE_FILE ("type-class.galgas", 338)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_12841 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12617.current_propertyTypeName (HERE), var_attributeTypeIndex_12841, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 340)) ;
    }
    var_currentClassTypedPropertyList_12439.addAssign_operation (var_attributeTypeIndex_12841, enumerator_12617.current_propertyName (HERE), enumerator_12617.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 341)), enumerator_12617.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 341)) ;
    var_allTypedAttributeList_12501.addAssign_operation (var_attributeTypeIndex_12841, enumerator_12617.current_propertyName (HERE), enumerator_12617.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 342)), enumerator_12617.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 342)) ;
    enumerator_12617.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_13198 (var_currentClassTypedPropertyList_12439, EnumerationOrder::up) ;
  while (enumerator_13198.hasCurrentObject ()) {
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      test_24 = enumerator_13198.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_24) {
        {
        GALGAS_formalParameterSignature temp_25 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-class.galgas", 350)) ;
        temp_25.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 350)), enumerator_13198.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-class.galgas", 350)), enumerator_13198.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 350)) ;
        var_setterMap_8313.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("set").add_operation (enumerator_13198.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 348)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 348)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-class.galgas", 349)), temp_25, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("type-class.galgas", 352)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 347)) ;
        }
      }
    }
    enumerator_13198.gotoNextObject () ;
  }
  {
  const GALGAS_classDeclarationAST temp_26 = this ;
  const GALGAS_classDeclarationAST temp_27 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_26.readProperty_mClassTypeName (), GALGAS_bool (true), var_getterMap_8284, var_setterMap_8313, var_instanceMethodMap_8350, temp_27.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 358)) ;
  }
  const GALGAS_classDeclarationAST temp_28 = this ;
  GALGAS_string temp_29 ;
  const enumGalgasBool test_30 = temp_28.readProperty_mIsAbstract ().boolEnum () ;
  if (kBoolTrue == test_30) {
    temp_29 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_30) {
    temp_29 = GALGAS_string ("default") ;
  }
  GALGAS_string var_defaultConstructorName_14132 = temp_29 ;
  cEnumerator_typedPropertyList enumerator_14232 (var_allTypedAttributeList_12501, EnumerationOrder::up) ;
  bool bool_31 = GALGAS_bool (ComparisonKind::notEqual, var_defaultConstructorName_14132.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_14232.hasCurrentObject () && bool_31) {
    while (enumerator_14232.hasCurrentObject () && bool_31) {
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (enumerator_14232.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 374)).readProperty_defaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_32) {
          var_defaultConstructorName_14132 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_14232.gotoNextObject () ;
      if (enumerator_14232.hasCurrentObject ()) {
        bool_31 = GALGAS_bool (ComparisonKind::notEqual, var_defaultConstructorName_14132.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_33 = this ;
  const GALGAS_classDeclarationAST temp_34 = this ;
  const GALGAS_classDeclarationAST temp_35 = this ;
  const GALGAS_classDeclarationAST temp_36 = this ;
  const GALGAS_classDeclarationAST temp_37 = this ;
  GALGAS_operators temp_38 ;
  const enumGalgasBool test_39 = temp_37.readProperty_mIsReference ().boolEnum () ;
  if (kBoolTrue == test_39) {
    temp_38 = GALGAS_operators::class_func_isReferenceEquatable (SOURCE_FILE ("type-class.galgas", 396)) ;
  }else if (kBoolFalse == test_39) {
    temp_38 = GALGAS_operators::class_func_isComparable (SOURCE_FILE ("type-class.galgas", 396)) ;
  }
  const GALGAS_classDeclarationAST temp_40 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_14459 = GALGAS_unifiedTypeDefinition::class_func_new (temp_33.readProperty_mClassTypeName (), temp_34.readProperty_isPredefined (), temp_35.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 382)), var_superClassIndex_8516, GALGAS_typeKindEnum::class_func_classType (temp_36.readProperty_mIsReference ()  COMMA_SOURCE_FILE ("type-class.galgas", 384)), GALGAS_bool (false), var_allTypedAttributeList_12501, var_attributeMap_8443, var_currentClassTypedPropertyList_12439, var_classFunctionMap_12158, var_getterMap_8284, var_setterMap_8313, var_instanceMethodMap_8350, GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("type-class.galgas", 393)), GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("type-class.galgas", 394)), GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("type-class.galgas", 395)), temp_38, GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-class.galgas", 397)), GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-class.galgas", 398)), GALGAS_enumConstantList::class_func_emptyList (SOURCE_FILE ("type-class.galgas", 399)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-class.galgas", 400)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-class.galgas", 401)), var_generateHeaderInSeparateFile_8546, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-class.galgas", 403)), var_defaultConstructorName_14132, GALGAS_string ("class-").add_operation (temp_40.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 405)), GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("type-class.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 379)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14459.readProperty_typeName (), var_typeDefinition_14459, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 408)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classDeclarationAST temp_0 = this ;
  GALGAS_lstring var_classTypeNameForUsefulness_16380 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 421)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_16380, var_classTypeNameForUsefulness_16380, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 422)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_classDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superClassNameForUsefulness_16613 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 424)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16380, var_superClassNameForUsefulness_16613 COMMA_SOURCE_FILE ("type-class.galgas", 425)) ;
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
      GALGAS_lstring var_weakRefTypeNameForUsefulness_16843 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (temp_6.readProperty_mClassTypeName ().readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 428)), temp_7.readProperty_mClassTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 428)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16380, var_weakRefTypeNameForUsefulness_16843 COMMA_SOURCE_FILE ("type-class.galgas", 429)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_17135 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 432)) ;
  const GALGAS_classDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeMapEntry temp_10 ;
  const enumGalgasBool test_11 = GALGAS_bool (ComparisonKind::equal, temp_9.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-class.galgas", 435)) ;
  }else if (kBoolFalse == test_11) {
    const GALGAS_classDeclarationAST temp_12 = this ;
    temp_10 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 436)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_17252 = temp_10 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (ComparisonKind::notEqual, var_superClassEntry_17252.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-class.galgas", 441)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_bool var_superClassIsReference_17686 ;
      extensionGetter_definition (var_superClassEntry_17252, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 442)).readProperty_typeKind ().method_classType (var_superClassIsReference_17686, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 442)) ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_classDeclarationAST temp_15 = this ;
        test_14 = var_superClassIsReference_17686.operator_and (temp_15.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 443)) COMMA_SOURCE_FILE ("type-class.galgas", 443)).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_classDeclarationAST temp_16 = this ;
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'refClass', as its super class"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 444)) ;
        }
      }
      if (kBoolFalse == test_14) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          const GALGAS_classDeclarationAST temp_19 = this ;
          test_18 = var_superClassIsReference_17686.operator_not (SOURCE_FILE ("type-class.galgas", 445)).operator_and (temp_19.readProperty_mIsReference () COMMA_SOURCE_FILE ("type-class.galgas", 445)).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_classDeclarationAST temp_20 = this ;
            TC_Array <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'valueclass', as its super class"), fixItArray21  COMMA_SOURCE_FILE ("type-class.galgas", 446)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_18257 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (ComparisonKind::equal, var_superClassEntry_17252.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-class.galgas", 453)))).boolEnum () ;
    if (kBoolTrue == test_22) {
      var_allAttributeList_18257 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-class.galgas", 454)) ;
    }
  }
  if (kBoolFalse == test_22) {
    var_allAttributeList_18257 = extensionGetter_definition (var_superClassEntry_17252, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 469)).readProperty_allTypedPropertyList () ;
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      const GALGAS_classDeclarationAST temp_24 = this ;
      test_23 = temp_24.readProperty_mGenerateInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_23) {
        const GALGAS_classDeclarationAST temp_25 = this ;
        TC_Array <FixItDescription> fixItArray26 ;
        inCompiler->emitSemanticError (temp_25.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray26  COMMA_SOURCE_FILE ("type-class.galgas", 472)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_19284 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-class.galgas", 477)) ;
  GALGAS_propertyIndexMap var_attributeMap_19334 = GALGAS_propertyIndexMap::class_func_emptyMap (SOURCE_FILE ("type-class.galgas", 478)) ;
  const GALGAS_classDeclarationAST temp_27 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_19436 (temp_27.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_19436.hasCurrentObject ()) {
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = enumerator_19436.current_initialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 480)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_19436.current_propertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray29  COMMA_SOURCE_FILE ("type-class.galgas", 481)) ;
      }
    }
    GALGAS_lstring var_propertyTypeNameForUsefulness_19618 = function_typeNameForUsefulEntitiesGraph (enumerator_19436.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 483)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16380, var_propertyTypeNameForUsefulness_19618 COMMA_SOURCE_FILE ("type-class.galgas", 484)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_19810 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_19436.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 485)) ;
    var_typedAttributeList_19284.addAssign_operation (var_t_19810, enumerator_19436.current_propertyName (HERE), enumerator_19436.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 489)), enumerator_19436.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 486)) ;
    var_allAttributeList_18257.addAssign_operation (var_t_19810, enumerator_19436.current_propertyName (HERE), enumerator_19436.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 494)), enumerator_19436.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 491)) ;
    {
    var_attributeMap_19334.setter_insertKey (enumerator_19436.current_propertyName (HERE), var_t_19810, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 496)) ;
    }
    enumerator_19436.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_30 = this ;
  const GALGAS_classDeclarationAST temp_31 = this ;
  const GALGAS_classDeclarationAST temp_32 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (temp_30.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 500)), GALGAS_classTypeForGeneration::class_func_new (var_selfType_17135, temp_31.readProperty_mIsAbstract (), temp_32.readProperty_mIsReference (), var_superClassEntry_17252, var_allAttributeList_18257, var_typedAttributeList_19284, extensionGetter_definition (var_selfType_17135, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 508)).readProperty_mGenerateHeaderInSeparateFile ()  COMMA_SOURCE_FILE ("type-class.galgas", 501))  COMMA_SOURCE_FILE ("type-class.galgas", 499)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 533)).operator_not (SOURCE_FILE ("type-class.galgas", 533)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_classTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 534)) ;
    }
  }
  const GALGAS_classTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_21694 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 536)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classTypeForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classTypeForGeneration temp_6 = this ;
      const GALGAS_classTypeForGeneration temp_7 = this ;
      GALGAS_string temp_8 ;
      const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 541)).boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_9) {
        const GALGAS_classTypeForGeneration temp_10 = this ;
        temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 541)) ;
      }
      const GALGAS_classTypeForGeneration temp_11 = this ;
      const GALGAS_classTypeForGeneration temp_12 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21694.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 540)), temp_8, temp_11.readProperty_mIsAbstract (), temp_12.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 538))) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_classTypeForGeneration temp_13 = this ;
    const GALGAS_classTypeForGeneration temp_14 = this ;
    GALGAS_string temp_15 ;
    const enumGalgasBool test_16 = temp_14.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 549)).boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_16) {
      const GALGAS_classTypeForGeneration temp_17 = this ;
      temp_15 = extensionGetter_identifierRepresentation (temp_17.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 549)) ;
    }
    const GALGAS_classTypeForGeneration temp_18 = this ;
    const GALGAS_classTypeForGeneration temp_19 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21694.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_13.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 548)), temp_15, temp_18.readProperty_mIsAbstract (), temp_19.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 546))) ;
  }
  const GALGAS_classTypeForGeneration temp_20 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_21694.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_20.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 556)), var_selfTypeDefinition_21694.readProperty_isConcrete (), var_selfTypeDefinition_21694.readProperty_classFunctionMap (), var_selfTypeDefinition_21694.readProperty_mGetterMap (), var_selfTypeDefinition_21694.readProperty_mSetterMap (), var_selfTypeDefinition_21694.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_21694.readProperty_classMethodMap (), var_selfTypeDefinition_21694.readProperty_optionalMethodMap (), var_selfTypeDefinition_21694.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_21694.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_21694.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_21694.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-class.galgas", 554))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 554)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration2'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string constinArgument_inOutputDirectory,
                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_23471 (temp_0.readProperty_mCurrentTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_23471.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_23471.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 577)) ;
    enumerator_23471.gotoNextObject () ;
  }
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_23567 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 579)) ;
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
          const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 585)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_9) {
            const GALGAS_classTypeForGeneration temp_10 = this ;
            temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 585)) ;
          }
          const GALGAS_classTypeForGeneration temp_11 = this ;
          const GALGAS_classTypeForGeneration temp_12 = this ;
          const GALGAS_classTypeForGeneration temp_13 = this ;
          const GALGAS_classTypeForGeneration temp_14 = this ;
          const GALGAS_classTypeForGeneration temp_15 = this ;
          GALGAS_string var_part_31__23710 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23567.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 584)), temp_8, temp_11.readProperty_mCurrentTypedAttributeList (), temp_12.readProperty_mAllTypedAttributeList (), temp_13.readProperty_mIsAbstract (), extensionGetter_definition (temp_14.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 589)).readProperty_mGetterMap (), extensionGetter_definition (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 590)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 582))) ;
          const GALGAS_classTypeForGeneration temp_16 = this ;
          const GALGAS_classTypeForGeneration temp_17 = this ;
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = temp_17.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 595)).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_19) {
            const GALGAS_classTypeForGeneration temp_20 = this ;
            temp_18 = extensionGetter_identifierRepresentation (temp_20.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 595)) ;
          }
          const GALGAS_classTypeForGeneration temp_21 = this ;
          const GALGAS_classTypeForGeneration temp_22 = this ;
          const GALGAS_classTypeForGeneration temp_23 = this ;
          GALGAS_string var_part_32__24224 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23567.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_16.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 594)), temp_18, temp_21.readProperty_mCurrentTypedAttributeList (), temp_22.readProperty_mAllTypedAttributeList (), temp_23.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 592))) ;
          const GALGAS_classTypeForGeneration temp_24 = this ;
          GALGAS_string var_headerFileName_24624 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 600)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 600)) ;
          {
          GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 602)), var_headerFileName_24624, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__23710, GALGAS_string ("\n\n"), var_part_32__24224, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 601)) ;
          }
          outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_24624, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 612)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 612)) ;
        }
      }
      if (kBoolFalse == test_4) {
        const GALGAS_classTypeForGeneration temp_25 = this ;
        const GALGAS_classTypeForGeneration temp_26 = this ;
        GALGAS_string temp_27 ;
        const enumGalgasBool test_28 = temp_26.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 617)).boolEnum () ;
        if (kBoolTrue == test_28) {
          temp_27 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_28) {
          const GALGAS_classTypeForGeneration temp_29 = this ;
          temp_27 = extensionGetter_identifierRepresentation (temp_29.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 617)) ;
        }
        const GALGAS_classTypeForGeneration temp_30 = this ;
        const GALGAS_classTypeForGeneration temp_31 = this ;
        const GALGAS_classTypeForGeneration temp_32 = this ;
        const GALGAS_classTypeForGeneration temp_33 = this ;
        const GALGAS_classTypeForGeneration temp_34 = this ;
        outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23567.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_25.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 616)), temp_27, temp_30.readProperty_mCurrentTypedAttributeList (), temp_31.readProperty_mAllTypedAttributeList (), temp_32.readProperty_mIsAbstract (), extensionGetter_definition (temp_33.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 621)).readProperty_mGetterMap (), extensionGetter_definition (temp_34.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 622)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 614))) ;
        const GALGAS_classTypeForGeneration temp_35 = this ;
        const GALGAS_classTypeForGeneration temp_36 = this ;
        GALGAS_string temp_37 ;
        const enumGalgasBool test_38 = temp_36.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 627)).boolEnum () ;
        if (kBoolTrue == test_38) {
          temp_37 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_38) {
          const GALGAS_classTypeForGeneration temp_39 = this ;
          temp_37 = extensionGetter_identifierRepresentation (temp_39.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 627)) ;
        }
        const GALGAS_classTypeForGeneration temp_40 = this ;
        const GALGAS_classTypeForGeneration temp_41 = this ;
        const GALGAS_classTypeForGeneration temp_42 = this ;
        outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23567.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_35.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 626)), temp_37, temp_40.readProperty_mCurrentTypedAttributeList (), temp_41.readProperty_mAllTypedAttributeList (), temp_42.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 624))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 624)) ;
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
        const enumGalgasBool test_48 = temp_46.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 638)).boolEnum () ;
        if (kBoolTrue == test_48) {
          temp_47 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_48) {
          const GALGAS_classTypeForGeneration temp_49 = this ;
          temp_47 = extensionGetter_identifierRepresentation (temp_49.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 638)) ;
        }
        const GALGAS_classTypeForGeneration temp_50 = this ;
        const GALGAS_classTypeForGeneration temp_51 = this ;
        const GALGAS_classTypeForGeneration temp_52 = this ;
        const GALGAS_classTypeForGeneration temp_53 = this ;
        const GALGAS_classTypeForGeneration temp_54 = this ;
        GALGAS_string var_part_31__26154 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23567.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_45.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 637)), temp_47, temp_50.readProperty_mCurrentTypedAttributeList (), temp_51.readProperty_mAllTypedAttributeList (), temp_52.readProperty_mIsAbstract (), extensionGetter_definition (temp_53.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 642)).readProperty_mGetterMap (), extensionGetter_definition (temp_54.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 643)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 635))) ;
        const GALGAS_classTypeForGeneration temp_55 = this ;
        const GALGAS_classTypeForGeneration temp_56 = this ;
        GALGAS_string temp_57 ;
        const enumGalgasBool test_58 = temp_56.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 648)).boolEnum () ;
        if (kBoolTrue == test_58) {
          temp_57 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_58) {
          const GALGAS_classTypeForGeneration temp_59 = this ;
          temp_57 = extensionGetter_identifierRepresentation (temp_59.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 648)) ;
        }
        const GALGAS_classTypeForGeneration temp_60 = this ;
        const GALGAS_classTypeForGeneration temp_61 = this ;
        const GALGAS_classTypeForGeneration temp_62 = this ;
        GALGAS_string var_part_32__26664 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23567.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_55.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 647)), temp_57, temp_60.readProperty_mCurrentTypedAttributeList (), temp_61.readProperty_mAllTypedAttributeList (), temp_62.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 645))) ;
        const GALGAS_classTypeForGeneration temp_63 = this ;
        GALGAS_string var_headerFileName_27060 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_63.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 653)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 653)) ;
        {
        GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 655)), var_headerFileName_27060, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__26154, GALGAS_string ("\n\n"), var_part_32__26664, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 654)) ;
        }
        outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_27060, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 665)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 665)) ;
      }
    }
    if (kBoolFalse == test_43) {
      const GALGAS_classTypeForGeneration temp_64 = this ;
      const GALGAS_classTypeForGeneration temp_65 = this ;
      GALGAS_string temp_66 ;
      const enumGalgasBool test_67 = temp_65.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 670)).boolEnum () ;
      if (kBoolTrue == test_67) {
        temp_66 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_67) {
        const GALGAS_classTypeForGeneration temp_68 = this ;
        temp_66 = extensionGetter_identifierRepresentation (temp_68.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 670)) ;
      }
      const GALGAS_classTypeForGeneration temp_69 = this ;
      const GALGAS_classTypeForGeneration temp_70 = this ;
      const GALGAS_classTypeForGeneration temp_71 = this ;
      const GALGAS_classTypeForGeneration temp_72 = this ;
      const GALGAS_classTypeForGeneration temp_73 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23567.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_64.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 669)), temp_66, temp_69.readProperty_mCurrentTypedAttributeList (), temp_70.readProperty_mAllTypedAttributeList (), temp_71.readProperty_mIsAbstract (), extensionGetter_definition (temp_72.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 674)).readProperty_mGetterMap (), extensionGetter_definition (temp_73.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 675)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 667))) ;
      const GALGAS_classTypeForGeneration temp_74 = this ;
      const GALGAS_classTypeForGeneration temp_75 = this ;
      GALGAS_string temp_76 ;
      const enumGalgasBool test_77 = temp_75.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 680)).boolEnum () ;
      if (kBoolTrue == test_77) {
        temp_76 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_77) {
        const GALGAS_classTypeForGeneration temp_78 = this ;
        temp_76 = extensionGetter_identifierRepresentation (temp_78.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 680)) ;
      }
      const GALGAS_classTypeForGeneration temp_79 = this ;
      const GALGAS_classTypeForGeneration temp_80 = this ;
      const GALGAS_classTypeForGeneration temp_81 = this ;
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23567.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_74.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 679)), temp_76, temp_79.readProperty_mCurrentTypedAttributeList (), temp_80.readProperty_mAllTypedAttributeList (), temp_81.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 677))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 677)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outImplementation,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 694)) ;
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_28987 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 695)) ;
  const GALGAS_classTypeForGeneration temp_2 = this ;
  const GALGAS_classTypeForGeneration temp_3 = this ;
  const GALGAS_classTypeForGeneration temp_4 = this ;
  GALGAS_typedPropertyList var_at_29043 = temp_2.readProperty_mAllTypedAttributeList ().getter_subListWithRange (GALGAS_range::class_func_new (GALGAS_uint (uint32_t (0U)), temp_3.readProperty_mAllTypedAttributeList ().getter_count (SOURCE_FILE ("type-class.galgas", 697)).substract_operation (temp_4.readProperty_mCurrentTypedAttributeList ().getter_count (SOURCE_FILE ("type-class.galgas", 697)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 697)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 697)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 696)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_classTypeForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_classTypeForGeneration temp_7 = this ;
      const GALGAS_classTypeForGeneration temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = temp_8.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 703)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_10) {
        const GALGAS_classTypeForGeneration temp_11 = this ;
        temp_9 = extensionGetter_identifierRepresentation (temp_11.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 703)) ;
      }
      const GALGAS_classTypeForGeneration temp_12 = this ;
      const GALGAS_classTypeForGeneration temp_13 = this ;
      const GALGAS_classTypeForGeneration temp_14 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeSpecificImplementation (inCompiler, var_typedefinition_28987.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_7.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 702)), temp_9, temp_12.readProperty_mCurrentTypedAttributeList (), temp_13.readProperty_mAllTypedAttributeList (), var_at_29043, temp_14.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 700))) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_classTypeForGeneration temp_15 = this ;
    const GALGAS_classTypeForGeneration temp_16 = this ;
    GALGAS_string temp_17 ;
    const enumGalgasBool test_18 = temp_16.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 713)).boolEnum () ;
    if (kBoolTrue == test_18) {
      temp_17 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_18) {
      const GALGAS_classTypeForGeneration temp_19 = this ;
      temp_17 = extensionGetter_identifierRepresentation (temp_19.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 713)) ;
    }
    const GALGAS_classTypeForGeneration temp_20 = this ;
    const GALGAS_classTypeForGeneration temp_21 = this ;
    const GALGAS_classTypeForGeneration temp_22 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeSpecificImplementation (inCompiler, var_typedefinition_28987.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 712)), temp_17, temp_20.readProperty_mCurrentTypedAttributeList (), temp_21.readProperty_mAllTypedAttributeList (), var_at_29043, temp_22.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 710))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_generateClassGetterDeclaration (const GALGAS_lstring & constinArgument_inGetterName,
                                                       const GALGAS_functionSignature & constinArgument_inArgumentTypeList,
                                                       const GALGAS_bool & constinArgument_inHasCompilerArgument,
                                                       const GALGAS_unifiedTypeMapEntry & constinArgument_inReturnedType,
                                                       const GALGAS_methodQualifier & constinArgument_inQualifier,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_bool var_generateMethodDeclaration_30578 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_30617 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_30617 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_30578 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_30578 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_30617 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_30617 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_30578.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//--- Extension getter ").add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 748)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 748)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual class GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inReturnedType, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 749)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 749)) ;
      result_result.plusAssign_operation(GALGAS_string (" getter_").add_operation (constinArgument_inGetterName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 750)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 750)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 750)) ;
      GALGAS_bool var_first_31265 = GALGAS_bool (true) ;
      cEnumerator_functionSignature enumerator_31304 (constinArgument_inArgumentTypeList, EnumerationOrder::up) ;
      while (enumerator_31304.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_31265.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_31265 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 757)) ;
        }
        result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_31304.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 759)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 759)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 759)) ;
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_31304.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 760)) ;
        enumerator_31304.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_31265.operator_not (SOURCE_FILE ("type-class.galgas", 763)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 764)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 766)) ;
          var_first_31265 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_31265.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (") const"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 769)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 769)) ;
      result_result.plusAssign_operation(var_suffix_30617.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 770)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateClassGetterDeclaration [6] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_functionSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_unifiedTypeMapEntry,
  & kTypeDescriptor_GALGAS_methodQualifier,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateClassGetterDeclaration (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassGetterDeclaration ("generateClassGetterDeclaration",
                                                                                functionWithGenericHeader_generateClassGetterDeclaration,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                5,
                                                                                functionArgs_generateClassGetterDeclaration) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassInstanceMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_generateClassInstanceMethodDeclaration (const GALGAS_lstring & constinArgument_inMethodName,
                                                               const GALGAS_formalParameterSignature & constinArgument_inArgumentTypeList,
                                                               const GALGAS_bool & constinArgument_inHasCompilerArgument,
                                                               const GALGAS_methodQualifier & constinArgument_inQualifier,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_bool var_generateMethodDeclaration_32323 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_32362 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_32362 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_32323 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_32323 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_32362 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_32362 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_32323.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("//--- Extension method ").add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 799)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 799)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual void method_").add_operation (constinArgument_inMethodName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 800)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 800)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 800)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 800)) ;
      GALGAS_bool var_first_32941 = GALGAS_bool (true) ;
      cEnumerator_formalParameterSignature enumerator_32980 (constinArgument_inArgumentTypeList, EnumerationOrder::up) ;
      while (enumerator_32980.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_32941.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_32941 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 807)) ;
        }
        switch (enumerator_32980.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32980.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 811)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 811)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 811)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32980.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 813)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 813)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 813)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 813)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32980.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 815)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 815)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 815)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 815)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32980.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 817)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 817)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 817)) ;
          }
          break ;
        }
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_32980.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 819)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 819)) ;
        enumerator_32980.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_32941.operator_not (SOURCE_FILE ("type-class.galgas", 822)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 823)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 825)) ;
          var_first_32941 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_32941.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 828)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 828)) ;
      result_result.plusAssign_operation(var_suffix_32362.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 829)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 829)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateClassInstanceMethodDeclaration [5] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_methodQualifier,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateClassInstanceMethodDeclaration (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassInstanceMethodDeclaration ("generateClassInstanceMethodDeclaration",
                                                                                        functionWithGenericHeader_generateClassInstanceMethodDeclaration,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        4,
                                                                                        functionArgs_generateClassInstanceMethodDeclaration) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@weakReferenceDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_weakReferenceDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("weak reference @").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_2632 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 48)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 48)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2632, temp_2, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 49)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
      const GALGAS_weakReferenceDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2632, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 53)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 53)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 51)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_superClassIndex_3853 ;
  GALGAS_bool var_generateHeaderInSeparateFile_3881 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_3853 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-weak-reference.galgas", 77)) ;
      const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_3881 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_weakReferenceDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_3853, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 85)) ;
    }
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_4342 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 86)) ;
    var_generateHeaderInSeparateFile_3881 = var_superTypeDefinition_4342.readProperty_mGenerateHeaderInSeparateFile () ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_superTypeDefinition_4342.readProperty_typeKind ().getter_isWeakReferenceType (SOURCE_FILE ("type-weak-reference.galgas", 97)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 97)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_weakReferenceDeclarationAST temp_6 = this ;
        const GALGAS_weakReferenceDeclarationAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_7.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 98)).add_operation (GALGAS_string (" should be a weak reference type"), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 98)), fixItArray8  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 98)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_weakReferenceIndex_5010 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_9 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_9.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_5010, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 102)) ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_5078 = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 107)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_10 = this ;
  var_classFunctionMap_5078.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("nil"), temp_10.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 109)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 110)), GALGAS_bool (false), var_weakReferenceIndex_5010, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 108)) ;
  }
  GALGAS_getterMap var_getterMap_5281 = GALGAS_getterMap::class_func_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 115)) ;
  GALGAS_setterMap var_setterMap_5313 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 116)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5353 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 117)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_11.readProperty_mWeakReferenceTypeName (), GALGAS_bool (false), var_getterMap_5281, var_setterMap_5313, var_instanceMethodMap_5353, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 118)) ;
  }
  cEnumerator_getterMap enumerator_5717 (var_getterMap_5281, EnumerationOrder::up) ;
  while (enumerator_5717.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (enumerator_5717.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray12  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 132)) ;
    enumerator_5717.gotoNextObject () ;
  }
  cEnumerator_setterMap enumerator_5818 (var_setterMap_5313, EnumerationOrder::up) ;
  while (enumerator_5818.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (enumerator_5818.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray13  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 135)) ;
    enumerator_5818.gotoNextObject () ;
  }
  cEnumerator_instanceMethodMap enumerator_5919 (var_instanceMethodMap_5353, EnumerationOrder::up) ;
  while (enumerator_5919.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (enumerator_5919.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray14  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 138)) ;
    enumerator_5919.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_6090 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_15 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_15.readProperty_mClassTypeName (), var_classIndex_6090, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 141)) ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_16 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_17 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_18 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_6108 = GALGAS_unifiedTypeDefinition::class_func_new (temp_16.readProperty_mWeakReferenceTypeName (), temp_17.readProperty_isPredefined (), GALGAS_bool (true), var_superClassIndex_3853, GALGAS_typeKindEnum::class_func_weakReferenceType (var_classIndex_6090  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 147)), GALGAS_bool (false), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 149)), GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 150)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 151)), var_classFunctionMap_5078, GALGAS_getterMap::class_func_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 153)), GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 154)), GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 155)), GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 156)), GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 157)), GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 158)), GALGAS_operators::class_func_isReferenceEquatable (SOURCE_FILE ("type-weak-reference.galgas", 159)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 160)), GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 161)), GALGAS_enumConstantList::class_func_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 162)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 163)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 164)), var_generateHeaderInSeparateFile_3881, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-weak-reference.galgas", 166)), GALGAS_string ("nil"), GALGAS_string ("weak-reference-").add_operation (temp_18.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 168)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-weak-reference.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 142)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_6108.readProperty_typeName (), var_typeDefinition_6108, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 171)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  GALGAS_lstring var_weakRefTypeNameForUsefulness_7855 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 188)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_7855, var_weakRefTypeNameForUsefulness_7855, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 189)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_weakReferenceDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superWeakRefNameForUsefulness_8108 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 191)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_7855, var_superWeakRefNameForUsefulness_8108 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 192)) ;
      }
    }
  }
  const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_8357 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 195)) ;
  const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::equal, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-weak-reference.galgas", 198)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_weakReferenceDeclarationAST temp_8 = this ;
    temp_6 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 199)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_8478 = temp_6 ;
  GALGAS_typedPropertyList var_allAttributeList_8854 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (ComparisonKind::equal, var_superClassEntry_8478.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-weak-reference.galgas", 205)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_allAttributeList_8854 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 206)) ;
    }
  }
  if (kBoolFalse == test_9) {
    var_allAttributeList_8854 = extensionGetter_definition (var_superClassEntry_8478, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 221)).readProperty_allTypedPropertyList () ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mGenerateInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_weakReferenceDeclarationAST temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray13  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 223)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_9767 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 227)) ;
  GALGAS_propertyIndexMap var_attributeMap_9815 = GALGAS_propertyIndexMap::class_func_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 228)) ;
  const GALGAS_weakReferenceDeclarationAST temp_14 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_9915 (temp_14.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_9915.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_t_9951 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9915.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 230)) ;
    var_typedAttributeList_9767.addAssign_operation (var_t_9951, enumerator_9915.current_propertyName (HERE), enumerator_9915.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 234)), enumerator_9915.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 231)) ;
    var_allAttributeList_8854.addAssign_operation (var_t_9951, enumerator_9915.current_propertyName (HERE), enumerator_9915.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 239)), enumerator_9915.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 236)) ;
    {
    var_attributeMap_9815.setter_insertKey (enumerator_9915.current_propertyName (HERE), var_t_9951, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 241)) ;
    }
    enumerator_9915.gotoNextObject () ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_15 = this ;
  GALGAS_unifiedTypeMapEntry var_referenceClassType_10335 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_15.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 244)) ;
  const GALGAS_weakReferenceDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("weak reference ").add_operation (temp_16.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 248)), GALGAS_weakReferenceTypeForGeneration::class_func_new (var_selfType_8357, var_referenceClassType_10335, var_superClassEntry_8478, var_allAttributeList_8854, var_typedAttributeList_9767, extensionGetter_definition (var_selfType_8357, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 255)).readProperty_mGenerateHeaderInSeparateFile ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 249))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 247)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 275)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 275)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 276)) ;
    }
  }
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReferenceClassType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 278)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_4 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_11861 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 279)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_5 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 283)).boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_9) {
    const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
    temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 283)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 281)), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 282)), temp_8 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 280))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typedefinition_11861.readProperty_typeName ().readProperty_string (), var_typedefinition_11861.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 287)), var_typedefinition_11861.readProperty_isConcrete (), var_typedefinition_11861.readProperty_classFunctionMap (), var_typedefinition_11861.readProperty_mGetterMap (), var_typedefinition_11861.readProperty_mSetterMap (), var_typedefinition_11861.readProperty_mInstanceMethodMap (), var_typedefinition_11861.readProperty_classMethodMap (), var_typedefinition_11861.readProperty_optionalMethodMap (), var_typedefinition_11861.readProperty_mEnumerationDescriptor (), var_typedefinition_11861.readProperty_mHandledOperatorFlags (), var_typedefinition_11861.readProperty_mAddAssignOperatorArguments (), var_typedefinition_11861.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-weak-reference.galgas", 285))), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 285)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 309)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_13145 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 310)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = temp_3.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 314)).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
    temp_4 = extensionGetter_identifierRepresentation (temp_6.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 314)) ;
  }
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_8 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_9 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_11 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 312)), var_typedefinition_13145.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 313)), temp_4, temp_7.readProperty_mTypedAttributeList (), temp_8.readProperty_allTypedPropertyList (), temp_9.readProperty_allTypedPropertyList ().getter_subListWithRange (GALGAS_range::class_func_new (GALGAS_uint (uint32_t (0U)), temp_10.readProperty_allTypedPropertyList ().getter_count (SOURCE_FILE ("type-weak-reference.galgas", 317)).substract_operation (temp_11.readProperty_mTypedAttributeList ().getter_count (SOURCE_FILE ("type-weak-reference.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 317)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 311))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_5126 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 137)), temp_1.readProperty_mEnumTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 137)) ;
  {
  const GALGAS_enumDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5126, temp_2, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 138)) ;
  }
  GALGAS_bool var_circularReference_5354 = GALGAS_bool (true) ;
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_5388 (temp_3.readProperty_mConstantList (), EnumerationOrder::up) ;
  bool bool_4 = var_circularReference_5354.isValidAndTrue () ;
  if (enumerator_5388.hasCurrentObject () && bool_4) {
    while (enumerator_5388.hasCurrentObject () && bool_4) {
      GALGAS_bool var_namesCurrentType_5477 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_5519 (enumerator_5388.current_mAssociatedValueDefinitionList (HERE), EnumerationOrder::up) ;
      bool bool_5 = var_namesCurrentType_5477.operator_not (SOURCE_FILE ("type-enum.galgas", 143)).isValidAndTrue () ;
      if (enumerator_5519.hasCurrentObject () && bool_5) {
        while (enumerator_5519.hasCurrentObject () && bool_5) {
          GALGAS_lstring var_propertyKey_5596 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (enumerator_5519.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 144)), enumerator_5519.current_mValue_30_ (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 144)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (ComparisonKind::equal, var_propertyKey_5596.readProperty_string ().objectCompare (var_key_5126.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_namesCurrentType_5477 = GALGAS_bool (true) ;
            }
          }
          enumerator_5519.gotoNextObject () ;
          if (enumerator_5519.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_5477.operator_not (SOURCE_FILE ("type-enum.galgas", 143)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_namesCurrentType_5477.operator_not (SOURCE_FILE ("type-enum.galgas", 149)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_circularReference_5354 = GALGAS_bool (false) ;
        }
      }
      enumerator_5388.gotoNextObject () ;
      if (enumerator_5388.hasCurrentObject ()) {
        bool_4 = var_circularReference_5354.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_circularReference_5354.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumDeclarationAST temp_9 = this ;
      cEnumerator_enumConstantList enumerator_5939 (temp_9.readProperty_mConstantList (), EnumerationOrder::up) ;
      while (enumerator_5939.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_6015 (enumerator_5939.current_mAssociatedValueDefinitionList (HERE), EnumerationOrder::up) ;
        while (enumerator_6015.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_6067 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (enumerator_6015.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 157)), enumerator_6015.current_mValue_30_ (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 157)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (ComparisonKind::notEqual, var_propertyKey_6067.readProperty_string ().objectCompare (var_key_5126.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5126, var_propertyKey_6067 COMMA_SOURCE_FILE ("type-enum.galgas", 159)) ;
              }
            }
          }
          enumerator_6015.gotoNextObject () ;
        }
        enumerator_5939.gotoNextObject () ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap var_classFunctionMap_6959 = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("type-enum.galgas", 177)) ;
  GALGAS_setterMap var_setterMap_6998 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-enum.galgas", 178)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7038 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-enum.galgas", 179)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_7129 = GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("type-enum.galgas", 181)) ;
  GALGAS_unifiedTypeMapEntry var_enumTypeEntry_7231 ;
  {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mEnumTypeName (), var_enumTypeEntry_7231, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 183)) ;
  }
  GALGAS_constantIndexMap var_constantMap_7291 = GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-enum.galgas", 185)) ;
  GALGAS_bool var_hasAssociatedValues_7320 = GALGAS_bool (false) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_7369 (temp_1.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_7369.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_7459 = GALGAS_unifiedTypeMapEntryList::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 188)) ;
    GALGAS_functionSignature var_argumentTypeList_7510 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 189)) ;
    cEnumerator__32_lstringlist enumerator_7550 (enumerator_7369.current_mAssociatedValueDefinitionList (HERE), EnumerationOrder::up) ;
    while (enumerator_7550.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_7646 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7550.current_mValue_30_ (HERE), var_associatedTypeEntry_7646, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 191)) ;
      }
      var_argumentTypeList_7510.addAssign_operation (enumerator_7550.current_mValue_31_ (HERE), var_associatedTypeEntry_7646, enumerator_7550.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 192)) ;
      var_associatedTypeList_7459.addAssign_operation (var_associatedTypeEntry_7646  COMMA_SOURCE_FILE ("type-enum.galgas", 193)) ;
      var_hasAssociatedValues_7320 = GALGAS_bool (true) ;
      enumerator_7550.gotoNextObject () ;
    }
    {
    var_constantMap_7291.setter_insertKey (enumerator_7369.current_mConstantName (HERE), var_constantMap_7291.getter_count (SOURCE_FILE ("type-enum.galgas", 196)), var_associatedTypeList_7459, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 196)) ;
    }
    {
    var_classFunctionMap_6959.setter_insertOrReplace (enumerator_7369.current_mConstantName (HERE), var_argumentTypeList_7510, GALGAS_bool (false), var_enumTypeEntry_7231 COMMA_SOURCE_FILE ("type-enum.galgas", 197)) ;
    }
    enumerator_7369.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_2 = this ;
  cEnumerator_enumConstantList enumerator_8086 (temp_2.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_8086.hasCurrentObject ()) {
    GALGAS_optionalMethodSignature var_argumentTypeList_8176 = GALGAS_optionalMethodSignature::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 206)) ;
    cEnumerator__32_lstringlist enumerator_8216 (enumerator_8086.current_mAssociatedValueDefinitionList (HERE), EnumerationOrder::up) ;
    while (enumerator_8216.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_8312 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8216.current_mValue_30_ (HERE), var_associatedTypeEntry_8312, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 208)) ;
      }
      var_argumentTypeList_8176.addAssign_operation (GALGAS_bool (false), enumerator_8216.current_mValue_31_ (HERE), var_associatedTypeEntry_8312, enumerator_8216.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 209)) ;
      enumerator_8216.gotoNextObject () ;
    }
    {
    var_optionalMethodMap_7129.setter_insertKey (enumerator_8086.current_mConstantName (HERE), var_argumentTypeList_8176, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 211)) ;
    }
    enumerator_8086.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_8561 (temp_3.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_8561.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_8561.current_mAssociatedValueDefinitionList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 218)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_unifiedTypeMapEntryList var_associatedTypeList_8708 = GALGAS_unifiedTypeMapEntryList::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 219)) ;
        GALGAS_formalParameterSignature var_argumentTypeList_8768 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 220)) ;
        cEnumerator__32_lstringlist enumerator_8810 (enumerator_8561.current_mAssociatedValueDefinitionList (HERE), EnumerationOrder::up) ;
        while (enumerator_8810.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_8908 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8810.current_mValue_30_ (HERE), var_associatedTypeEntry_8908, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 222)) ;
          }
          var_argumentTypeList_8768.addAssign_operation (enumerator_8810.current_mValue_31_ (HERE), var_associatedTypeEntry_8908, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-enum.galgas", 223)), enumerator_8810.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 223)) ;
          var_associatedTypeList_8708.addAssign_operation (var_associatedTypeEntry_8908  COMMA_SOURCE_FILE ("type-enum.galgas", 224)) ;
          var_hasAssociatedValues_7320 = GALGAS_bool (true) ;
          enumerator_8810.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_7038.setter_insertKey (enumerator_8561.current_mConstantName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-enum.galgas", 229)), var_argumentTypeList_8768, enumerator_8561.current_mConstantName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 233)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 227)) ;
        }
      }
    }
    enumerator_8561.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_9405 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_9405, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 239)) ;
  }
  const GALGAS_enumDeclarationAST temp_5 = this ;
  cEnumerator_enumConstantList enumerator_9437 (temp_5.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_9437.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_9405, ioArgument_ioTypeMap, GALGAS_string ("is").add_operation (enumerator_9437.current_mConstantName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 244)), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 241)) ;
    }
    enumerator_9437.gotoNextObject () ;
  }
  {
  const GALGAS_enumDeclarationAST temp_6 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_6.readProperty_mEnumTypeName (), GALGAS_bool (false), var_getterMap_9405, var_setterMap_6998, var_instanceMethodMap_7038, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 251)) ;
  }
  const GALGAS_enumDeclarationAST temp_7 = this ;
  const GALGAS_enumDeclarationAST temp_8 = this ;
  const GALGAS_enumDeclarationAST temp_9 = this ;
  const GALGAS_enumDeclarationAST temp_10 = this ;
  const GALGAS_enumDeclarationAST temp_11 = this ;
  GALGAS_headerKind temp_12 ;
  const enumGalgasBool test_13 = var_hasAssociatedValues_7320.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("type-enum.galgas", 292)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-enum.galgas", 292)) ;
  }
  GALGAS_unifiedTypeDefinition var_typeDefinition_10088 = GALGAS_unifiedTypeDefinition::class_func_new (temp_7.readProperty_mEnumTypeName (), temp_8.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-enum.galgas", 269)), GALGAS_typeKindEnum::class_func_enumType (var_constantMap_7291, temp_9.readProperty_mConstantList ()  COMMA_SOURCE_FILE ("type-enum.galgas", 270)), GALGAS_bool (false), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 272)), GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-enum.galgas", 273)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 274)), var_classFunctionMap_6959, var_getterMap_9405, var_setterMap_6998, var_instanceMethodMap_7038, GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("type-enum.galgas", 279)), var_optionalMethodMap_7129, GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 281)), GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 282)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("type-enum.galgas", 282)) COMMA_SOURCE_FILE ("type-enum.galgas", 282)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 283)), var_constantMap_7291, temp_10.readProperty_mConstantList (), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 286)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 287)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-enum.galgas", 289)), GALGAS_string::makeEmptyString (), GALGAS_string ("enum-").add_operation (temp_11.readProperty_mEnumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 291)), temp_12, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 265)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_10088.readProperty_typeName (), var_typeDefinition_10088, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 294)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_11910 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 311)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11910, var_nameForUsefulness_11910, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 312)) ;
  }
  GALGAS_stringlist var_constantList_12082 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 314)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_12149 = GALGAS_enumConstantListForGeneration::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 315)) ;
  GALGAS_constantIndexMap var_constantMap_12190 = GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-enum.galgas", 316)) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_12246 (temp_1.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_12246.hasCurrentObject ()) {
    var_constantList_12082.addAssign_operation (enumerator_12246.current_mConstantName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 318)) ;
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_12378 = GALGAS_unifiedTypeMapEntryList::class_func_emptyList (SOURCE_FILE ("type-enum.galgas", 319)) ;
    GALGAS_stringset var_associatedValueNameSet_12421 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("type-enum.galgas", 320)) ;
    cEnumerator__32_lstringlist enumerator_12466 (enumerator_12246.current_mAssociatedValueDefinitionList (HERE), EnumerationOrder::up) ;
    while (enumerator_12466.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_12522 = function_typeNameForUsefulEntitiesGraph (enumerator_12466.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 322)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_11910, var_propertyTypeNameForUsefulness_12522 COMMA_SOURCE_FILE ("type-enum.galgas", 323)) ;
      }
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_12696 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12466.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 324)) ;
      var_associatedTypeList_12378.addAssign_operation (var_associatedTypeEntry_12696  COMMA_SOURCE_FILE ("type-enum.galgas", 325)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_associatedValueNameSet_12421.getter_hasKey (enumerator_12466.current_mValue_31_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-enum.galgas", 326)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_12466.current_mValue_31_ (HERE).readProperty_location (), GALGAS_string ("duplicated name"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 327)) ;
        }
      }
      var_associatedValueNameSet_12421.addAssign_operation (enumerator_12466.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 329)) ;
      enumerator_12466.gotoNextObject () ;
    }
    {
    var_constantMap_12190.setter_insertKey (enumerator_12246.current_mConstantName (HERE), var_constantMap_12190.getter_count (SOURCE_FILE ("type-enum.galgas", 331)), var_associatedTypeList_12378, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 331)) ;
    }
    var_enumConstantListForGeneration_12149.addAssign_operation (enumerator_12246.current_mConstantName (HERE).readProperty_string (), var_associatedTypeList_12378  COMMA_SOURCE_FILE ("type-enum.galgas", 332)) ;
    enumerator_12246.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_13160 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 335)) ;
  const GALGAS_enumDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (temp_5.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 337)), GALGAS_enumTypeForGeneration::class_func_new (var_selfType_13160, var_enumConstantListForGeneration_12149  COMMA_SOURCE_FILE ("type-enum.galgas", 338))  COMMA_SOURCE_FILE ("type-enum.galgas", 336)) ;
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

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" enum"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("*\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Enumeration\n  public: typedef enum {\n    kNotBuilt") ;
  GALGAS_uint index_611_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_611 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_611.hasCurrentObject ()) {
      result.appendString (",\n    kEnum_") ;
      result.appendString (enumerator_611.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue ()) ;
      index_611_.increment () ;
      enumerator_611.gotoNextObject () ;
    }
  }
  result.appendString ("\n  } enumeration ;\n  \n//--------------------------------- Private data member\n") ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;\n  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {\n    return mAssociatedValues.unsafePointer () ;\n  }\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  private: enumeration mEnum ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }\n  public: inline enumeration enumValue (void) const { return mEnum ; }\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
    result.appendString (GALGAS_string (" Phase 2: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).add_operation (GALGAS_string (" enum, associated values"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).stringValue ()) ;
    result.appendString ("\n//\n") ;
    GALGAS_uint index_269_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_269 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_269.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_269.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("//--------------------------------------------------------------------------------------------------\n\nclass cEnumAssociatedValues_") ;
          result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_269.current_mConstantName (HERE).stringValue ()) ;
          result.appendString (" : public cEnumAssociatedValues {\n") ;
          GALGAS_uint index_583_idx (0) ;
          if (enumerator_269.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_583 (enumerator_269.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
            while (enumerator_583.hasCurrentObject ()) {
              result.appendString ("  public: const GALGAS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_583.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue ()) ;
              result.appendString (" mAssociatedValue") ;
              result.appendString (index_583_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue ()) ;
              result.appendString (" ;\n") ;
              index_583_idx.increment () ;
              enumerator_583.gotoNextObject () ;
            }
          }
          result.appendString ("\n//--- Constructor\n  public: cEnumAssociatedValues_") ;
          result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_269.current_mConstantName (HERE).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_864_idx (0) ;
          if (enumerator_269.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_864 (enumerator_269.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
            while (enumerator_864.hasCurrentObject ()) {
              result.appendString ("const GALGAS_") ;
              result.appendString (extensionGetter_identifierRepresentation (enumerator_864.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue ()) ;
              result.appendString (" inAssociatedValue") ;
              result.appendString (index_864_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue ()) ;
              if (enumerator_864.hasNextObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_864_idx.increment () ;
              enumerator_864.gotoNextObject () ;
            }
          }
          result.appendString ("\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("COMMA_LOCATION_ARGS) ;\n\n  public: virtual void description (") ;
          columnMarker = result.currentColumn () ;
          result.appendString ("String & ioString,\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("const int32_t inIndentation) const ;\n  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;\n\n  public: virtual ~ cEnumAssociatedValues_") ;
          result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_269.current_mConstantName (HERE).stringValue ()) ;
          result.appendString (" (void) {}\n} ;\n\n") ;
          } break ;
        case kBoolFalse : {
          } break ;
        default :
          break ;
        }
        index_269_.increment () ;
        enumerator_269.gotoNextObject () ;
      }
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                         const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  GALGAS_uint index_64_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_64 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_64.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_64.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\ncEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.appendString ("::cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_404_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_404 (enumerator_64.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_404.hasCurrentObject ()) {
            result.appendString ("const GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_404.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue ()) ;
            result.appendString (" inAssociatedValue") ;
            result.appendString (index_404_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue ()) ;
            if (enumerator_404.hasNextObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_404_idx.increment () ;
            enumerator_404.gotoNextObject () ;
          }
        }
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) :\ncEnumAssociatedValues (THERE)") ;
        GALGAS_uint index_640_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_640 (enumerator_64.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_640.hasCurrentObject ()) {
            result.appendString (",\nmAssociatedValue") ;
            result.appendString (index_640_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue ()) ;
            result.appendString (" (inAssociatedValue") ;
            result.appendString (index_640_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue ()) ;
            result.appendString (")") ;
            index_640_idx.increment () ;
            enumerator_640.gotoNextObject () ;
          }
        }
        result.appendString (" {\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.appendString ("::description (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("String & ioString,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"(\\n\") ;\n") ;
        GALGAS_uint index_1134_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1134 (enumerator_64.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_1134.hasCurrentObject ()) {
            result.appendString ("  mAssociatedValue") ;
            result.appendString (index_1134_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue ()) ;
            result.appendString (".description (ioString, inIndentation) ;\n") ;
            index_1134_idx.increment () ;
            enumerator_1134.gotoNextObject () ;
          }
        }
        result.appendString ("  ioString.appendCString (\")\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.appendString ("::compare (const cEnumAssociatedValues * inOperand) const {\n  const cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" * ptr = dynamic_cast<const cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" *> (inOperand) ;\n  macroValidPointer (ptr) ;\n  ComparisonResult result = ComparisonResult::operandEqual ;\n") ;
        GALGAS_uint index_1866_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1866 (enumerator_64.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_1866.hasCurrentObject ()) {
            result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = mAssociatedValue") ;
            result.appendString (index_1866_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue ()) ;
            result.appendString (".objectCompare (ptr->mAssociatedValue") ;
            result.appendString (index_1866_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue ()) ;
            result.appendString (") ;\n  }\n") ;
            index_1866_idx.increment () ;
            enumerator_1866.gotoNextObject () ;
          }
        }
        result.appendString ("  return result ;\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_64_.increment () ;
      enumerator_64.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const enumGalgasBool test_1 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("mAssociatedValues (),\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("mEnum (kNotBuilt) {\n}\n\n") ;
  GALGAS_uint index_2429_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_2429 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2429.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_2429.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 54)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_2429.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("UNUSED_LOCATION_ARGS") ;
        } break ;
      case kBoolFalse : {
        GALGAS_uint index_2791_idx (0) ;
        if (enumerator_2429.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_2791 (enumerator_2429.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_2791.hasCurrentObject ()) {
            result.appendString ("const GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2791.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue ()) ;
            result.appendString (" & inAssociatedValue") ;
            result.appendString (index_2791_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue ()) ;
            if (enumerator_2791.hasNextObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_2791_idx.increment () ;
            enumerator_2791.gotoNextObject () ;
          }
        }
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS") ;
        } break ;
      default :
        break ;
      }
      result.appendString (") {\n  GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" result ;\n") ;
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_2429.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("  result.mEnum = kEnum_") ;
        result.appendString (enumerator_2429.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 67)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("  if (") ;
        GALGAS_uint index_3196_idx (0) ;
        if (enumerator_2429.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3196 (enumerator_2429.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_3196.hasCurrentObject ()) {
            result.appendString ("inAssociatedValue") ;
            result.appendString (index_3196_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 71)).stringValue ()) ;
            result.appendString (".isValid ()") ;
            if (enumerator_3196.hasNextObject ()) {
              result.appendString (" && ") ;
            }
            index_3196_idx.increment () ;
            enumerator_3196.gotoNextObject () ;
          }
        }
        result.appendString (") {\n    result.mEnum = kEnum_") ;
        result.appendString (enumerator_2429.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).stringValue ()) ;
        result.appendString (" ;\n    cEnumAssociatedValues * ptr = nullptr ;\n    macroMyNew (ptr, cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_2429.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" (") ;
        GALGAS_uint index_3556_idx (0) ;
        if (enumerator_2429.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3556 (enumerator_2429.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_3556.hasCurrentObject ()) {
            result.appendString ("inAssociatedValue") ;
            result.appendString (index_3556_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue ()) ;
            if (enumerator_3556.hasNextObject ()) {
              result.appendString (", ") ;
            }
            index_3556_idx.increment () ;
            enumerator_3556.gotoNextObject () ;
          }
        }
        result.appendString (" COMMA_THERE)) ;\n    result.mAssociatedValues.setPointer (ptr) ;\n    macroDetachSharedObject (ptr) ;\n  }\n") ;
        } break ;
      default :
        break ;
      }
      result.appendString ("  return result ;\n}\n\n") ;
      index_2429_.increment () ;
      enumerator_2429.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3863_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_3863 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3863.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_3863.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::method_") ;
        result.appendString (enumerator_3863.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 94)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4165_idx (0) ;
        if (enumerator_3863.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4165 (enumerator_3863.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_4165.hasCurrentObject ()) {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_4165.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue ()) ;
            result.appendString (" & outAssociatedValue") ;
            result.appendString (index_4165_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            index_4165_idx.increment () ;
            enumerator_4165.gotoNextObject () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * inCompiler\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (mEnum != kEnum_") ;
        result.appendString (enumerator_3863.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 100)).stringValue ()) ;
        result.appendString (") {\n") ;
        GALGAS_uint index_4465_idx (0) ;
        if (enumerator_3863.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4465 (enumerator_3863.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_4465.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue") ;
            result.appendString (index_4465_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 102)).stringValue ()) ;
            result.appendString (".drop () ;\n") ;
            index_4465_idx.increment () ;
            enumerator_4465.gotoNextObject () ;
          }
        }
        result.appendString ("    String s ;\n    s.appendCString (\"method @") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" ") ;
        result.appendString (enumerator_3863.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" invoked with an invalid enum value\") ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_3863.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" * ptr = (const cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_3863.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" *) unsafePointer () ;\n") ;
        GALGAS_uint index_4975_idx (0) ;
        if (enumerator_3863.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4975 (enumerator_3863.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_4975.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue") ;
            result.appendString (index_4975_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue ()) ;
            result.appendString (" = ptr->mAssociatedValue") ;
            result.appendString (index_4975_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue ()) ;
            result.appendString (" ;\n") ;
            index_4975_idx.increment () ;
            enumerator_4975.gotoNextObject () ;
          }
        }
        result.appendString ("  }\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_3863_.increment () ;
      enumerator_3863.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5175_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5175 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5175.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::optional_") ;
      result.appendString (enumerator_5175.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 120)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_5436_idx (0) ;
      if (enumerator_5175.current_mAssociatedValueTypeList (HERE).isValid ()) {
        cEnumerator_unifiedTypeMapEntryList enumerator_5436 (enumerator_5175.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
        while (enumerator_5436.hasCurrentObject ()) {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_5436.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue ()) ;
          result.appendString (" & outAssociatedValue") ;
          result.appendString (index_5436_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue ()) ;
          if (enumerator_5436.hasNextObject ()) {
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_5436_idx.increment () ;
          enumerator_5436.gotoNextObject () ;
        }
      }
      result.appendString (") const {\n  const bool ok = mEnum == kEnum_") ;
      result.appendString (enumerator_5175.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 128)).stringValue ()) ;
      result.appendString (" ;\n") ;
      const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_5175.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 129)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_5) {
      case kBoolTrue : {
        result.appendString ("  if (ok) {\n    const auto * ptr = (const cEnumAssociatedValues_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_5175.current_mConstantName (HERE).stringValue ()) ;
        result.appendString (" *) unsafePointer () ;\n") ;
        GALGAS_uint index_5910_idx (0) ;
        if (enumerator_5175.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_5910 (enumerator_5175.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_5910.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue") ;
            result.appendString (index_5910_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 133)).stringValue ()) ;
            result.appendString (" = ptr->mAssociatedValue") ;
            result.appendString (index_5910_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 133)).stringValue ()) ;
            result.appendString (" ;\n") ;
            index_5910_idx.increment () ;
            enumerator_5910.gotoNextObject () ;
          }
        }
        result.appendString ("  }\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("  return ok ;\n}\n\n") ;
      index_5175_.increment () ;
      enumerator_5175.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nstatic const char * gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_CONSTANT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).stringValue ()) ;
  result.appendString ("] = {\n  \"(not built)\"") ;
  GALGAS_uint index_6369_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6369 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6369.hasCurrentObject ()) {
      result.appendString (",\n  ") ;
      result.appendString (enumerator_6369.current_mConstantName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 146)).stringValue ()) ;
      index_6369_.increment () ;
      enumerator_6369.gotoNextObject () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  GALGAS_uint index_6509_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6509 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6509.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_is") ;
      result.appendString (enumerator_6509.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return GALGAS_bool (kNotBuilt != mEnum, kEnum_") ;
      result.appendString (enumerator_6509.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue ()) ;
      result.appendString (" == mEnum) ;\n}\n\n") ;
      index_6509_.increment () ;
      enumerator_6509.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t ") ;
  const enumGalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("inIndentation") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("/* inIndentation */") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") const {\n  ioString.appendCString (\"<enum @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (": \") ;\n  ioString.appendCString (gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [mEnum]) ;\n") ;
  const enumGalgasBool test_7 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_7) {
  case kBoolTrue : {
    result.appendString ("  mAssociatedValues.description (ioString, inIndentation) ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (mEnum < inOperand.mEnum) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mEnum > inOperand.mEnum) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n") ;
  const enumGalgasBool test_8 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_8) {
  case kBoolTrue : {
    result.appendString ("      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("      result = ComparisonResult::operandEqual ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("    }\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_15079 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_15116 (temp_0.readProperty_mConstantList (), EnumerationOrder::up) ;
  bool bool_1 = var_hasAssociatedValues_15079.operator_not (SOURCE_FILE ("type-enum.galgas", 391)).isValidAndTrue () ;
  if (enumerator_15116.hasCurrentObject () && bool_1) {
    while (enumerator_15116.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_15079 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_15116.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 392)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_15116.gotoNextObject () ;
      if (enumerator_15116.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_15079.operator_not (SOURCE_FILE ("type-enum.galgas", 391)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_15272 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 394)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, var_selfTypedefinition_15272.readProperty_typeName ().readProperty_string (), var_selfTypedefinition_15272.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 397)), temp_3.readProperty_mConstantList (), var_hasAssociatedValues_15079 COMMA_SOURCE_FILE ("type-enum.galgas", 395))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_15272.readProperty_typeName ().readProperty_string (), var_selfTypedefinition_15272.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 403)), var_selfTypedefinition_15272.readProperty_isConcrete (), var_selfTypedefinition_15272.readProperty_classFunctionMap (), var_selfTypedefinition_15272.readProperty_mGetterMap (), var_selfTypedefinition_15272.readProperty_mSetterMap (), var_selfTypedefinition_15272.readProperty_mInstanceMethodMap (), var_selfTypedefinition_15272.readProperty_classMethodMap (), var_selfTypedefinition_15272.readProperty_optionalMethodMap (), var_selfTypedefinition_15272.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_15272.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_15272.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_15272.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-enum.galgas", 401))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 401)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration2'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                               GALGAS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_16492 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_16529 (temp_0.readProperty_mConstantList (), EnumerationOrder::up) ;
  bool bool_1 = var_hasAssociatedValues_16492.operator_not (SOURCE_FILE ("type-enum.galgas", 426)).isValidAndTrue () ;
  if (enumerator_16529.hasCurrentObject () && bool_1) {
    while (enumerator_16529.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_16492 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_16529.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 427)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_16529.gotoNextObject () ;
      if (enumerator_16529.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_16492.operator_not (SOURCE_FILE ("type-enum.galgas", 426)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_16688 (temp_2.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_16688.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapEntryList enumerator_16748 (enumerator_16688.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
    while (enumerator_16748.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_16748.current_mEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 431)) ;
      enumerator_16748.gotoNextObject () ;
    }
    enumerator_16688.gotoNextObject () ;
  }
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_16856 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 434)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, var_selfTypedefinition_16856.readProperty_typeName ().readProperty_string (), var_selfTypedefinition_16856.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 437)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_16492 COMMA_SOURCE_FILE ("type-enum.galgas", 435))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_17443 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_17480 (temp_0.readProperty_mConstantList (), EnumerationOrder::up) ;
  bool bool_1 = var_hasAssociatedValues_17443.operator_not (SOURCE_FILE ("type-enum.galgas", 451)).isValidAndTrue () ;
  if (enumerator_17480.hasCurrentObject () && bool_1) {
    while (enumerator_17480.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_17443 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_17480.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 452)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_17480.gotoNextObject () ;
      if (enumerator_17480.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_17443.operator_not (SOURCE_FILE ("type-enum.galgas", 451)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 454)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_17695 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 455)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, var_selfTypedefinition_17695.readProperty_typeName ().readProperty_string (), var_selfTypedefinition_17695.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 458)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_17443 COMMA_SOURCE_FILE ("type-enum.galgas", 456))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                    GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                    GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                    GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                    GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_14397 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 364)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 364)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_14397, temp_2, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 365)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                              const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                              const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap var_getterMap_15245 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_15245, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 379)) ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_15281 = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("type-extern.galgas", 380)) ;
  GALGAS_setterMap var_setterMap_15320 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-extern.galgas", 381)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_15360 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-extern.galgas", 382)) ;
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  cEnumerator_externTypeConstructorList enumerator_15444 (temp_0.readProperty_mExternTypeConstructorList (), EnumerationOrder::up) ;
  while (enumerator_15444.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_15547 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15444.current_mResultTypeName (HERE), var_returnedTypeEntry_15547, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 385)) ;
    }
    GALGAS_functionSignature var_arguments_15600 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 387)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_15665 (enumerator_15444.current_mParameterList (HERE), EnumerationOrder::up) ;
    while (enumerator_15665.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_15768 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15665.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_15768, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 389)) ;
      }
      var_arguments_15600.addAssign_operation (enumerator_15665.current_mFormalSelector (HERE), var_argumentTypeEntry_15768, enumerator_15665.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 390)) ;
      enumerator_15665.gotoNextObject () ;
    }
    {
    var_classFunctionMap_15281.setter_insertKey (enumerator_15444.current_mConstructorName (HERE), var_arguments_15600, GALGAS_bool (true), var_returnedTypeEntry_15547, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 393)) ;
    }
    enumerator_15444.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  cEnumerator_externTypeGetterList enumerator_16092 (temp_1.readProperty_mExternTypeGetterList (), EnumerationOrder::up) ;
  while (enumerator_16092.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_16190 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16092.current_mResultTypeName (HERE), var_returnedTypeEntry_16190, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 402)) ;
    }
    GALGAS_functionSignature var_arguments_16243 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 404)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_16308 (enumerator_16092.current_mParameterList (HERE), EnumerationOrder::up) ;
    while (enumerator_16308.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_16411 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16308.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_16411, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 406)) ;
      }
      var_arguments_16243.addAssign_operation (enumerator_16308.current_mFormalSelector (HERE), var_argumentTypeEntry_16411, enumerator_16308.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 407)) ;
      enumerator_16308.gotoNextObject () ;
    }
    {
    var_getterMap_15245.setter_insertKey (enumerator_16092.current_mGetterName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-extern.galgas", 412)), var_arguments_16243, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 414)), GALGAS_bool (true), var_returnedTypeEntry_16190, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 417)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 410)) ;
    }
    enumerator_16092.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  cEnumerator_externTypeSetterList enumerator_16866 (temp_2.readProperty_mExternTypeSetterList (), EnumerationOrder::up) ;
  while (enumerator_16866.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_16955 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 423)) ;
    cEnumerator_formalParameterListAST enumerator_17073 (enumerator_16866.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
    while (enumerator_17073.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_17199 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17073.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_17199, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 425)) ;
      }
      var_routineSignature_16955.addAssign_operation (enumerator_17073.current_mFormalSelector (HERE), var_parameterTypeIndex_17199, enumerator_17073.current_mFormalArgumentPassingMode (HERE), enumerator_17073.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 429)) ;
      enumerator_17073.gotoNextObject () ;
    }
    {
    var_setterMap_15320.setter_insertKey (enumerator_16866.current_mSetterName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-extern.galgas", 434)), var_routineSignature_16955, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 437)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 432)) ;
    }
    enumerator_16866.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  cEnumerator_externTypeMethodList enumerator_17642 (temp_3.readProperty_mExternTypeMethodList (), EnumerationOrder::up) ;
  while (enumerator_17642.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_17705 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 443)) ;
    cEnumerator_formalParameterListAST enumerator_17849 (enumerator_17642.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
    while (enumerator_17849.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_17954 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17849.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_17954, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 445)) ;
      }
      var_routineSignature_17705.addAssign_operation (enumerator_17849.current_mFormalSelector (HERE), var_parameterTypeIndex_17954, enumerator_17849.current_mFormalArgumentPassingMode (HERE), enumerator_17849.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 449)) ;
      enumerator_17849.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_15360.setter_insertKey (enumerator_17642.current_mMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-extern.galgas", 454)), var_routineSignature_17705, enumerator_17642.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 458)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 452)) ;
    }
    enumerator_17642.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  const GALGAS_externTypeDeclarationAST temp_6 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_18414 = GALGAS_unifiedTypeDefinition::class_func_new (temp_4.readProperty_mExternTypeName (), temp_5.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-extern.galgas", 467)), GALGAS_typeKindEnum::class_func_externType (SOURCE_FILE ("type-extern.galgas", 468)), GALGAS_bool (false), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 470)), GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-extern.galgas", 471)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 472)), var_classFunctionMap_15281, var_getterMap_15245, var_setterMap_15320, var_instanceMethodMap_15360, GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("type-extern.galgas", 477)), GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("type-extern.galgas", 478)), GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 479)), GALGAS_operators::class_func_none (SOURCE_FILE ("type-extern.galgas", 480)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 481)), GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-extern.galgas", 482)), GALGAS_enumConstantList::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 483)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 484)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-extern.galgas", 485)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-extern.galgas", 487)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (temp_6.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 489)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-extern.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 463)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_18414.readProperty_typeName (), var_typeDefinition_18414, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 492)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_string /* constinArgument_inProductDirectory */,
                                                             const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                             GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_20071 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 509)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_20071, var_nameForUsefulness_20071, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 510)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 513)), GALGAS_externTypeDeclarationForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 515)), temp_3.readProperty_mExternTypeName ().readProperty_string (), temp_4.readProperty_mCppPreDeclarationCode (), temp_5.readProperty_mCppClassCode ()  COMMA_SOURCE_FILE ("type-extern.galgas", 514))  COMMA_SOURCE_FILE ("type-extern.galgas", 512)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_21192 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 537)) ;
  const GALGAS_externTypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_2 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, var_selfTypedefinition_21192.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 540)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("type-extern.galgas", 538))) ;
  const GALGAS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_21192.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 546)), var_selfTypedefinition_21192.readProperty_isConcrete (), var_selfTypedefinition_21192.readProperty_classFunctionMap (), var_selfTypedefinition_21192.readProperty_mGetterMap (), var_selfTypedefinition_21192.readProperty_mSetterMap (), var_selfTypedefinition_21192.readProperty_mInstanceMethodMap (), var_selfTypedefinition_21192.readProperty_classMethodMap (), var_selfTypedefinition_21192.readProperty_optionalMethodMap (), var_selfTypedefinition_21192.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_21192.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_21192.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_21192.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-extern.galgas", 544))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 544)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4744 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 119)), temp_1.readProperty_mGraphTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 119)) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4744, temp_2, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 120)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4744, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 121)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 121)) COMMA_SOURCE_FILE ("type-graph.galgas", 121)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeEntry_5728 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeEntry_5728, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 135)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeEntry_5852 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_5852, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 140)) ;
  }
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_5975 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mGraphTypeName (), var_graphTypeEntry_5975, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 145)) ;
  }
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_6115 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_6115, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 150)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringListTypeEntry_6256 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_6256, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 155)) ;
  }
  GALGAS_getterMap var_getterMap_6344 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6344, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 160)) ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_6380 = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("type-graph.galgas", 161)) ;
  GALGAS_setterMap var_setterMap_6419 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-graph.galgas", 162)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6459 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-graph.galgas", 163)) ;
  GALGAS_formalParameterSignature var_formalParameterList_6548 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 165)) ;
  var_formalParameterList_6548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 167)), var_associatedListTypeEntry_6115, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 169)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 166)) ;
  var_formalParameterList_6548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 172)), var_lstringListTypeEntry_6256, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 174)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 171)) ;
  var_formalParameterList_6548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 177)), var_associatedListTypeEntry_6115, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 179)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 176)) ;
  var_formalParameterList_6548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 182)), var_lstringListTypeEntry_6256, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 184)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 181)) ;
  {
  var_instanceMethodMap_6459.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("topologicalSort"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 187)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 188)), var_formalParameterList_6548, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 190)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 192)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 186)) ;
  }
  {
  var_instanceMethodMap_6459.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 196)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 197)), var_formalParameterList_6548, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 199)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 201)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 195)) ;
  }
  var_formalParameterList_6548 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 206)) ;
  var_formalParameterList_6548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 208)), var_associatedListTypeEntry_6115, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 210)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 207)) ;
  var_formalParameterList_6548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 213)), var_lstringListTypeEntry_6256, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 215)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 212)) ;
  {
  var_instanceMethodMap_6459.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("circularities"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 218)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 219)), var_formalParameterList_6548, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 221)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 223)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 217)) ;
  }
  {
  var_instanceMethodMap_6459.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 227)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 228)), var_formalParameterList_6548, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 230)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 232)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 226)) ;
  }
  {
  var_instanceMethodMap_6459.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 236)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 237)), var_formalParameterList_6548, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 239)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 241)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 235)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6344, ioArgument_ioTypeMap, GALGAS_string ("nodeList"), GALGAS_string::makeEmptyString (), temp_2.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 246)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6344, ioArgument_ioTypeMap, GALGAS_string ("reversedGraph"), GALGAS_string::makeEmptyString (), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 255)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6344, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 264)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6344, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 273)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6344, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 282)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6344, ioArgument_ioTypeMap, GALGAS_string ("graphviz"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 291)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6344, ioArgument_ioTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 300)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6344, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 310)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6344, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 320)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6344, ioArgument_ioTypeMap, GALGAS_string ("lkeyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 329)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6344, ioArgument_ioTypeMap, GALGAS_string ("edges"), GALGAS_string::makeEmptyString (), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 338)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6344, ioArgument_ioTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 347)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6344, ioArgument_ioTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 361)) ;
  }
  {
  var_classFunctionMap_6380.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("emptyGraph"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 372)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 373)), GALGAS_bool (false), var_graphTypeEntry_5975, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 371)) ;
  }
  var_formalParameterList_6548 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 378)) ;
  var_formalParameterList_6548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 380)), var_lstringTypeEntry_5852, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 382)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 379)) ;
  cEnumerator_functionSignature enumerator_12933 (extensionGetter_definition (var_associatedListTypeEntry_6115, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 384)).readProperty_mAddAssignOperatorArguments (), EnumerationOrder::up) ;
  while (enumerator_12933.hasCurrentObject ()) {
    var_formalParameterList_6548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 386)), enumerator_12933.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 388)), enumerator_12933.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 385)) ;
    enumerator_12933.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_5 = this ;
  cEnumerator_graphInsertModifierList enumerator_13207 (temp_5.readProperty_mInsertModifierList (), EnumerationOrder::up) ;
  while (enumerator_13207.hasCurrentObject ()) {
    {
    var_setterMap_6419.setter_insertOrReplace (enumerator_13207.current_mInsertModifierName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 394)), var_formalParameterList_6548, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 397)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 392)) ;
    }
    enumerator_13207.gotoNextObject () ;
  }
  {
  var_setterMap_6419.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 404)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 405)), GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 406)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-graph.galgas", 408)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 403)) ;
  }
  var_formalParameterList_6548 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 412)) ;
  var_formalParameterList_6548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 413)), var_stringTypeEntry_5728, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 413)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 413)) ;
  {
  var_setterMap_6419.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 415)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 416)), var_formalParameterList_6548, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-graph.galgas", 419)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 414)) ;
  }
  var_formalParameterList_6548 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 424)) ;
  var_formalParameterList_6548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 425)), var_lstringTypeEntry_5852, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 425)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 425)) ;
  var_formalParameterList_6548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 426)), var_lstringTypeEntry_5852, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 426)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 426)) ;
  {
  var_setterMap_6419.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("addEdge"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 428)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 429)), var_formalParameterList_6548, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-graph.galgas", 432)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 427)) ;
  }
  var_formalParameterList_6548 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 437)) ;
  var_formalParameterList_6548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 438)), var_lstringTypeEntry_5852, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 438)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 438)) ;
  {
  var_setterMap_6419.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("noteNode"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 440)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 441)), var_formalParameterList_6548, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-graph.galgas", 444)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 439)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_6 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_6.readProperty_mGraphTypeName (), GALGAS_bool (false), var_getterMap_6344, var_setterMap_6419, var_instanceMethodMap_6459, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 449)) ;
  }
  const GALGAS_graphDeclarationAST temp_7 = this ;
  const GALGAS_graphDeclarationAST temp_8 = this ;
  const GALGAS_graphDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_15620 = GALGAS_unifiedTypeDefinition::class_func_new (temp_7.readProperty_mGraphTypeName (), temp_8.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-graph.galgas", 467)), GALGAS_typeKindEnum::class_func_graphType (SOURCE_FILE ("type-graph.galgas", 468)), GALGAS_bool (false), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 470)), GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-graph.galgas", 471)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 472)), var_classFunctionMap_6380, var_getterMap_6344, var_setterMap_6419, var_instanceMethodMap_6459, GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("type-graph.galgas", 477)), GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("type-graph.galgas", 478)), GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 479)), GALGAS_operators::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 480)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 481)), GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-graph.galgas", 482)), GALGAS_enumConstantList::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 483)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 484)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-graph.galgas", 485)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-graph.galgas", 487)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (temp_9.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 489)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-graph.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 463)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_15620.readProperty_typeName (), var_typeDefinition_15620, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_17365 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 509)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17365, var_nameForUsefulness_17365, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 510)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_17519 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 511)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17365, var_associatedTypeNameForUsefulness_17519 COMMA_SOURCE_FILE ("type-graph.galgas", 512)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_17715 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 514)) ;
  const GALGAS_graphDeclarationAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_17791 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 515)) ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  const GALGAS_graphDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListElementTypeEntry_17885 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (temp_4.readProperty_mAssociatedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 517)), temp_5.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 516)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_associatedListTypeEntry_17791, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 519)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("type-graph.galgas", 519)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_graphDeclarationAST temp_7 = this ;
      const GALGAS_graphDeclarationAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_8.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 520)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 520)), fixItArray9  COMMA_SOURCE_FILE ("type-graph.galgas", 520)) ;
    }
  }
  GALGAS_stringset temp_10 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("type-graph.galgas", 523)) ;
  temp_10.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 523)) ;
  temp_10.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 523)) ;
  GALGAS_stringset var_reservedModifierNames_18303 = temp_10 ;
  const GALGAS_graphDeclarationAST temp_11 = this ;
  cEnumerator_graphInsertModifierList enumerator_18379 (temp_11.readProperty_mInsertModifierList (), EnumerationOrder::up) ;
  while (enumerator_18379.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_reservedModifierNames_18303.getter_hasKey (enumerator_18379.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-graph.galgas", 525)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_18379.current_mInsertModifierName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_18379.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 526)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 526)), fixItArray13  COMMA_SOURCE_FILE ("type-graph.galgas", 526)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_18379.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 528)) ;
    }
    enumerator_18379.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_14 = this ;
  const GALGAS_graphDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_14.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 532)), GALGAS_graphDeclarationForGeneration::class_func_new (var_graphTypeEntry_17715, var_associatedListTypeEntry_17791, var_associatedListElementTypeEntry_17885, temp_15.readProperty_mInsertModifierList ()  COMMA_SOURCE_FILE ("type-graph.galgas", 533))  COMMA_SOURCE_FILE ("type-graph.galgas", 531)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                       GALGAS_string & outArgument_outHeader,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_19662 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 556)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, var_selfTypedefinition_19662.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 559)) COMMA_SOURCE_FILE ("type-graph.galgas", 557))) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_19662.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 563)), var_selfTypedefinition_19662.readProperty_isConcrete (), var_selfTypedefinition_19662.readProperty_classFunctionMap (), var_selfTypedefinition_19662.readProperty_mGetterMap (), var_selfTypedefinition_19662.readProperty_mSetterMap (), var_selfTypedefinition_19662.readProperty_mInstanceMethodMap (), var_selfTypedefinition_19662.readProperty_classMethodMap (), var_selfTypedefinition_19662.readProperty_optionalMethodMap (), var_selfTypedefinition_19662.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_19662.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_19662.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_19662.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-graph.galgas", 561))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 561)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 584)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 585)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 586)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = this ;
  const GALGAS_graphDeclarationForGeneration temp_4 = this ;
  const GALGAS_graphDeclarationForGeneration temp_5 = this ;
  const GALGAS_graphDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 589)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("type-graph.galgas", 587))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listDeclarationAST temp_0 = this ;
  const GALGAS_listDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4750 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 122)), temp_1.readProperty_mListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 122)) ;
  {
  const GALGAS_listDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4750, temp_2, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 123)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4908 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_4908.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (enumerator_4908.current_propertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 125)), enumerator_4908.current_propertyTypeName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 125)) COMMA_SOURCE_FILE ("type-list.galgas", 125)) ;
    }
    enumerator_4908.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typedPropertyList var_typedAttributeList_5721 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 141)) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5818 (temp_0.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_5818.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_5818.current_initialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 143)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5818.current_propertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 144)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_6033 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5818.current_propertyTypeName (HERE), var_attributeTypeIndex_6033, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 146)) ;
    }
    var_typedAttributeList_5721.addAssign_operation (var_attributeTypeIndex_6033, enumerator_5818.current_propertyName (HERE), GALGAS_bool (true), enumerator_5818.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 147)) ;
    enumerator_5818.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_uintType_6232 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("uint"), var_uintType_6232, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 150)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_6314 ;
  {
  const GALGAS_listDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mListTypeName (), var_listTypeIndex_6314, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 152)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_6511 ;
  {
  const GALGAS_listDeclarationAST temp_4 = this ;
  const GALGAS_listDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (temp_4.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 155)), temp_5.readProperty_mListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 155)), var_listElementTypeIndex_6511, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 154)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6595 = GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 159)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_6647 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 160)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_6713 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 161)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_6781 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 162)) ;
  cEnumerator_typedPropertyList enumerator_6867 (var_typedAttributeList_5721, EnumerationOrder::up) ;
  while (enumerator_6867.hasCurrentObject ()) {
    GALGAS_string temp_6 ;
    const enumGalgasBool test_7 = enumerator_6867.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_7) {
      temp_6 = enumerator_6867.current_mPropertyName (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_7) {
      temp_6 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_6914 = temp_6 ;
    var_enumerationDescriptor_6595.addAssign_operation (enumerator_6867.current_mPropertyTypeEntry (HERE), enumerator_6867.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 165)) ;
    var_constructorAttributeTypeList_6647.addAssign_operation (var_selector_6914.getter_nowhere (SOURCE_FILE ("type-list.galgas", 167)), enumerator_6867.current_mPropertyTypeEntry (HERE), enumerator_6867.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 166)) ;
    var_setterOutputFormalArgumentList_6713.addAssign_operation (var_selector_6914.getter_nowhere (SOURCE_FILE ("type-list.galgas", 171)), enumerator_6867.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-list.galgas", 173)), enumerator_6867.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 170)) ;
    var_setterInputFormalArgumentList_6781.addAssign_operation (var_selector_6914.getter_nowhere (SOURCE_FILE ("type-list.galgas", 176)), enumerator_6867.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 178)), enumerator_6867.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 175)) ;
    enumerator_6867.gotoNextObject () ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_7499 = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("type-list.galgas", 182)) ;
  {
  const GALGAS_listDeclarationAST temp_8 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_7499, ioArgument_ioTypeMap, GALGAS_string ("emptyList"), temp_8.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 183)) ;
  }
  {
  var_classFunctionMap_7499.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("listWithValue"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 191)), var_constructorAttributeTypeList_6647, GALGAS_bool (false), var_listTypeIndex_6314, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 190)) ;
  }
  GALGAS_getterMap var_getterMap_7919 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7919, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 197)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7919, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 198)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7919, ioArgument_ioTypeMap, GALGAS_string ("range"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 206)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_9 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7919, ioArgument_ioTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_9.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 214)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_10 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7919, ioArgument_ioTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_10.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 222)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_11 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7919, ioArgument_ioTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_11.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 230)) ;
  }
  cEnumerator_typedPropertyList enumerator_9062 (var_typedAttributeList_5721, EnumerationOrder::up) ;
  while (enumerator_9062.hasCurrentObject ()) {
    {
    GALGAS_functionSignature temp_12 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 242)) ;
    temp_12.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 242)), var_uintType_6232, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 242)) ;
    var_getterMap_7919.setter_insertOrReplace (GALGAS_lstring::class_func_new (enumerator_9062.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 240)), enumerator_9062.current_mPropertyName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 240)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 241)), temp_12, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 243)), GALGAS_bool (true), enumerator_9062.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 246)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 239)) ;
    }
    enumerator_9062.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_9537 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-list.galgas", 251)) ;
  {
  var_instanceMethodMap_9537.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("first"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 253)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 254)), var_setterOutputFormalArgumentList_6713, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 256)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 258)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 252)) ;
  }
  {
  var_instanceMethodMap_9537.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("last"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 262)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 263)), var_setterOutputFormalArgumentList_6713, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 265)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 267)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 261)) ;
  }
  GALGAS_setterMap var_setterMap_10067 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-list.galgas", 271)) ;
  {
  var_setterMap_10067.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("append"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 273)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 274)), var_setterInputFormalArgumentList_6781, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 277)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 272)) ;
  }
  {
  var_setterMap_10067.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("popFirst"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 281)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 282)), var_setterOutputFormalArgumentList_6713, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 285)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 280)) ;
  }
  {
  var_setterMap_10067.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("popLast"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 289)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 290)), var_setterOutputFormalArgumentList_6713, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 293)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 288)) ;
  }
  var_setterOutputFormalArgumentList_6713.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 296)), var_uintType_6232, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 296)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 296)) ;
  {
  var_setterMap_10067.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("removeAtIndex"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 298)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 299)), var_setterOutputFormalArgumentList_6713, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 302)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 297)) ;
  }
  cEnumerator_typedPropertyList enumerator_11150 (var_typedAttributeList_5721, EnumerationOrder::up) ;
  while (enumerator_11150.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = enumerator_11150.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_11211 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 307)) ;
        var_setterFormalArgumentList_11211.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 308)), enumerator_11150.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 308)), enumerator_11150.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 308)) ;
        var_setterFormalArgumentList_11211.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 309)), var_uintType_6232, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 309)), enumerator_11150.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 309)) ;
        {
        var_setterMap_10067.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("set").add_operation (enumerator_11150.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 311)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 311)), enumerator_11150.current_mPropertyName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 311)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 312)), var_setterFormalArgumentList_11211, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 315)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 310)) ;
        }
      }
    }
    enumerator_11150.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_6781.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 321)), var_uintType_6232, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 321)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 321)) ;
  {
  var_setterMap_10067.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("insertAtIndex"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 323)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 324)), var_setterInputFormalArgumentList_6781, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 327)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 322)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_14 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mListTypeName (), GALGAS_bool (false), var_getterMap_7919, var_setterMap_10067, var_instanceMethodMap_9537, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 331)) ;
  }
  const GALGAS_listDeclarationAST temp_15 = this ;
  const GALGAS_listDeclarationAST temp_16 = this ;
  const GALGAS_listDeclarationAST temp_17 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_12619 = GALGAS_unifiedTypeDefinition::class_func_new (temp_15.readProperty_mListTypeName (), temp_16.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-list.galgas", 349)), GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("type-list.galgas", 350)), GALGAS_bool (true), var_typedAttributeList_5721, GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-list.galgas", 353)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 354)), var_classFunctionMap_7499, var_getterMap_7919, var_setterMap_10067, var_instanceMethodMap_9537, GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("type-list.galgas", 359)), GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("type-list.galgas", 360)), var_enumerationDescriptor_6595, GALGAS_operators::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 362)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 362)) COMMA_SOURCE_FILE ("type-list.galgas", 362)).operator_or (GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("type-list.galgas", 362)) COMMA_SOURCE_FILE ("type-list.galgas", 362)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("type-list.galgas", 362)) COMMA_SOURCE_FILE ("type-list.galgas", 362)), var_constructorAttributeTypeList_6647, GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-list.galgas", 364)), GALGAS_enumConstantList::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 365)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 366)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 367)), GALGAS_bool (false), var_listElementTypeIndex_6511, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (temp_17.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 371)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-list.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 345)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12619.readProperty_typeName (), var_typeDefinition_12619, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 374)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_14038 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 382)) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_14126 (temp_0.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_14126.hasCurrentObject ()) {
    var_structAttributeList_14038.addAssign_operation (enumerator_14126.current_isConstant (HERE), enumerator_14126.current_propertyTypeName (HERE), enumerator_14126.current_propertyName (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-list.galgas", 388)), enumerator_14126.current_hasSelector (HERE), enumerator_14126.current_initialization (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 384)) ;
    enumerator_14126.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  const GALGAS_listDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::class_func_new (temp_1.readProperty_isPredefined (), GALGAS_lstring::class_func_new (temp_2.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 394)), temp_3.readProperty_mListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 394)), var_structAttributeList_14038, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 392))  COMMA_SOURCE_FILE ("type-list.galgas", 392)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_15285 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 415)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15285, var_nameForUsefulness_15285, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 416)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_15438 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (temp_1.readProperty_mListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 417)), temp_2.readProperty_mListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 417)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15285, var_elementTypeNameForUsefulness_15438 COMMA_SOURCE_FILE ("type-list.galgas", 418)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_listDeclarationAST temp_4 = this ;
    test_3 = temp_4.readProperty_usefullList ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_15285  COMMA_SOURCE_FILE ("type-list.galgas", 420)) ;
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_15768 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-list.galgas", 423)) ;
  GALGAS_propertyIndexMap var_attributeMap_15816 = GALGAS_propertyIndexMap::class_func_emptyMap (SOURCE_FILE ("type-list.galgas", 424)) ;
  const GALGAS_listDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_15906 (temp_5.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_15906.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = enumerator_15906.current_initialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 426)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_15906.current_propertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 427)) ;
      }
    }
    GALGAS_lstring var_propertyTypeNameForUsefulness_16078 = function_typeNameForUsefulEntitiesGraph (enumerator_15906.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 429)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15285, var_propertyTypeNameForUsefulness_16078 COMMA_SOURCE_FILE ("type-list.galgas", 430)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_16257 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_15906.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 431)) ;
    var_typedAttributeList_15768.addAssign_operation (var_t_16257, enumerator_15906.current_propertyName (HERE), GALGAS_bool (true), enumerator_15906.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 432)) ;
    {
    var_attributeMap_15816.setter_insertKey (enumerator_15906.current_propertyName (HERE), var_t_16257, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 437)) ;
    }
    enumerator_15906.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_16503 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 440)) ;
  const GALGAS_listDeclarationAST temp_9 = this ;
  const GALGAS_listDeclarationAST temp_10 = this ;
  const GALGAS_listDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_9.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 442)), GALGAS_listTypeForGeneration::class_func_new (var_selfType_16503, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (temp_10.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 445)), temp_11.readProperty_mListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 445)), var_typedAttributeList_15768  COMMA_SOURCE_FILE ("type-list.galgas", 443))  COMMA_SOURCE_FILE ("type-list.galgas", 441)) ;
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

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_list {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- List constructor used by listmap\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const capCollectionElementArray & inSharedArray) ;\n\n//--------------------------------- Element constructor\n  public: static void makeAttributesFromObjects (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("capCollectionElement & outAttributes") ;
  GALGAS_uint index_781_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_781 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_781.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_781.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_781.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue ()) ;
      index_781_.increment () ;
      enumerator_781.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (Compiler * inCompiler,
                                                                                         const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                         const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cCollectionElement {\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element mObject ;\n\n//--- Class functions\n  public: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_541_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_541 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_541.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_541.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_541.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue ()) ;
      if (enumerator_541.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_541_.increment () ;
      enumerator_541.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n  public: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method for comparing elements\n  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cCollectionElement * copy (void) ;\n\n//--- Description\n  public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1557_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1557 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1557.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1557.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1557.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue ()) ;
      if (enumerator_1557.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1557_.increment () ;
      enumerator_1557.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (") ;
  GALGAS_uint index_1810_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1810 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1810.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1810.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue ()) ;
      if (enumerator_1810.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_1810_.increment () ;
      enumerator_1810.gotoNextObject () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (") ;
  GALGAS_uint index_2225_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2225 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2225.hasCurrentObject ()) {
      result.appendString ("inElement.mProperty_") ;
      result.appendString (enumerator_2225.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue ()) ;
      if (enumerator_2225.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_2225_.increment () ;
      enumerator_2225.gotoNextObject () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return true ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement * cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copy (void) {\n  cCollectionElement * result = nullptr ;\n  macroMyNew (result, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_2856_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2856 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2856.hasCurrentObject ()) {
      result.appendString ("mObject.mProperty_") ;
      result.appendString (enumerator_2856.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue ()) ;
      if (enumerator_2856.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_2856_.increment () ;
      enumerator_2856.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString, const int32_t inIndentation) const {\n") ;
  GALGAS_uint index_3265_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3265 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3265.hasCurrentObject ()) {
      result.appendString ("  ioString.appendNewLine () ;\n  ioString.appendStringMultiple (\"| \", inIndentation) ;\n  ioString.appendCString (") ;
      result.appendString (enumerator_3265.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" \":\") ;\n  mObject.mProperty_") ;
      result.appendString (enumerator_3265.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation) ;\n") ;
      index_3265_.increment () ;
      enumerator_3265.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::compare (const cCollectionElement * inOperand) const {\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * operand = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inOperand ;\n  macroValidSharedObject (operand, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return mObject.objectCompare (operand->mObject) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_list () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const capCollectionElementArray & inSharedArray) :\nAC_GALGAS_list (inSharedArray) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyList (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (capCollectionElementArray ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_listWithValue (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_4993_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4993 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4993.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4993.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_4993_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue ()) ;
      if (enumerator_4993.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_4993_IDX.increment () ;
      enumerator_4993.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (") ;
  GALGAS_uint index_5254_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5254 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5254.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_5254_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 131)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      if (enumerator_5254.hasNextObject ()) {
        result.appendString (" && ") ;
      }
      index_5254_IDX.increment () ;
      enumerator_5254.gotoNextObject () ;
    }
  }
  result.appendString (") {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (capCollectionElementArray ()) ;\n    capCollectionElement attributes ;\n    GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeAttributesFromObjects (attributes") ;
  GALGAS_uint index_5578_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5578 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5578.hasCurrentObject ()) {
      result.appendString (", inOperand") ;
      result.appendString (index_5578_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 139)).stringValue ()) ;
      index_5578_IDX.increment () ;
      enumerator_5578.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE) ;\n    result.appendObject (attributes) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeAttributesFromObjects (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("capCollectionElement & outAttributes") ;
  GALGAS_uint index_5971_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5971 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5971.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5971.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_5971.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue ()) ;
      index_5971_.increment () ;
      enumerator_5971.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6308_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6308 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6308.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_6308.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue ()) ;
      if (enumerator_6308.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6308_.increment () ;
      enumerator_6308.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n  outAttributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6697_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6697 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6697.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6697.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_6697_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue ()) ;
      if (enumerator_6697.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6697_IDX.increment () ;
      enumerator_6697.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_7036_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7036 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7036.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_7036_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 178)).stringValue ()) ;
      if (enumerator_7036.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7036_IDX.increment () ;
      enumerator_7036.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capCollectionElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_append (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7476_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7476 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7476.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7476.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_7476_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (",") ;
      if (enumerator_7476.hasNextObject ()) {
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7476_IDX.increment () ;
      enumerator_7476.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_7853_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7853 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7853.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_7853_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 202)).stringValue ()) ;
      if (enumerator_7853.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7853_IDX.increment () ;
      enumerator_7853.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capCollectionElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insertAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8298_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8298 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8298.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8298.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 217)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_8298_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 217)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8298_IDX.increment () ;
      enumerator_8298.gotoNextObject () ;
    }
  }
  result.appendString ("const GALGAS_uint inInsertionIndex,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inInsertionIndex.isValid ()") ;
  GALGAS_uint index_8633_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8633 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8633.hasCurrentObject ()) {
      result.appendString (" && inOperand") ;
      result.appendString (index_8633_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 225)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      index_8633_IDX.increment () ;
      enumerator_8633.gotoNextObject () ;
    }
  }
  result.appendString (") {\n      cCollectionElement * p = nullptr ;\n      macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_8871_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8871 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8871.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_8871_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 231)).stringValue ()) ;
      if (enumerator_8871.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_8871_IDX.increment () ;
      enumerator_8871.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n      capCollectionElement attributes ;\n      attributes.setPointer (p) ;\n      macroDetachSharedObject (p) ;\n      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n    }else{\n      drop () ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9425_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9425 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9425.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9425.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 249)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_9425_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 249)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9425_IDX.increment () ;
      enumerator_9425.gotoNextObject () ;
    }
  }
  result.appendString ("const GALGAS_uint inRemoveIndex,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inRemoveIndex.isValid ()) {\n      capCollectionElement attributes ;\n      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;\n      cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n      if (nullptr == p) {\n") ;
  GALGAS_uint index_10023_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10023 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10023.hasCurrentObject ()) {
      result.appendString ("        outOperand") ;
      result.appendString (index_10023_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 262)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_10023_IDX.increment () ;
      enumerator_10023.gotoNextObject () ;
    }
  }
  result.appendString ("        drop () ;\n      }else{\n        macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_10261_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10261 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10261.hasCurrentObject ()) {
      result.appendString ("        outOperand") ;
      result.appendString (index_10261_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 269)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_10261.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 269)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_10261_IDX.increment () ;
      enumerator_10261.gotoNextObject () ;
    }
  }
  result.appendString ("      }\n    }else{\n") ;
  GALGAS_uint index_10469_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10469 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10469.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_10469_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 275)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_10469_IDX.increment () ;
      enumerator_10469.gotoNextObject () ;
    }
  }
  result.appendString ("      drop () ;    \n    }\n  }else{\n") ;
  GALGAS_uint index_10633_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10633 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10633.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_10633_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 282)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_10633_IDX.increment () ;
      enumerator_10633.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popFirst (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10923_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10923 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10923.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_10923.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 291)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_10923_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 291)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10923_IDX.increment () ;
      enumerator_10923.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeFirstObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_11370_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11370 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11370.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11370_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 301)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_11370_IDX.increment () ;
      enumerator_11370.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_11578_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11578 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11578.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11578_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 307)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_11578.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 307)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_11578_IDX.increment () ;
      enumerator_11578.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popLast (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11925_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11925 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11925.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11925.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 316)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_11925_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 316)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11925_IDX.increment () ;
      enumerator_11925.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeLastObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_12371_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12371 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12371.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12371_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 326)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_12371_IDX.increment () ;
      enumerator_12371.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_12579_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12579 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12579.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12579_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 332)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_12579.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 332)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_12579_IDX.increment () ;
      enumerator_12579.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_first (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12924_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12924 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12924.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_12924.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 341)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_12924_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 341)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12924_IDX.increment () ;
      enumerator_12924.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readFirst (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_13369_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13369 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13369.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13369_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 351)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_13369_IDX.increment () ;
      enumerator_13369.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_13577_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13577 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13577.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13577_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 357)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_13577.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 357)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_13577_IDX.increment () ;
      enumerator_13577.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_last (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13921_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13921 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13921.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_13921.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 366)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_13921_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 366)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13921_IDX.increment () ;
      enumerator_13921.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readLast (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_14365_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14365 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14365.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_14365_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 376)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_14365_IDX.increment () ;
      enumerator_14365.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_14573_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14573 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14573.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_14573_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 382)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_14573.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 382)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_14573_IDX.increment () ;
      enumerator_14573.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n                                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = *this ;\n    result.appendList (inOperand) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListWithRange (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_range & inRange,\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyList (THERE) ;\n  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListFromIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_uint & inIndex,\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyList (THERE) ;\n  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListToIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_uint & inIndex,\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyList (THERE) ;\n  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  appendList (inOperand) ;\n}\n\n") ;
  GALGAS_uint index_17297_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17297 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_17297.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_17297.current_hasSetter (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_17297.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 442)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 442)).stringValue ()) ;
        result.appendString ("AtIndex (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_17297.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 442)).stringValue ()) ;
        result.appendString (" inOperand,\n                                              ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("GALGAS_uint inIndex,\n                                              ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * inCompiler\n                                              ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" * p = (cCollectionElement_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cCollectionElement_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (") ;\n    macroUniqueSharedObject (p) ;\n    p->mObject.mProperty_") ;
        result.appendString (enumerator_17297.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 450)).stringValue ()) ;
        result.appendString (" = inOperand ;\n  }\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_17297.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 456)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_17297.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 456)).stringValue ()) ;
      result.appendString ("AtIndex (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GALGAS_uint & inIndex,\n                                              ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                                              ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) attributes.ptr () ;\n  GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_17297.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 461)).stringValue ()) ;
      result.appendString (" result ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    result = p->mObject.mProperty_") ;
      result.appendString (enumerator_17297.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 464)).stringValue ()) ;
      result.appendString (" ;\n  }\n  return result ;\n}\n\n") ;
      index_17297_IDX.increment () ;
      enumerator_17297.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject,\n                   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const EnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return p->mObject ;\n}\n\n\n") ;
  GALGAS_uint index_20151_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20151 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_20151.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_20151.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 490)).stringValue ()) ;
      result.appendString (" cEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_20151.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 490)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  return p->mObject.mProperty_") ;
      result.appendString (enumerator_20151.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 493)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_20151_IDX.increment () ;
      enumerator_20151.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18083 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 482)) ;
  const GALGAS_listTypeForGeneration temp_1 = this ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, var_selfTypedefinition_18083.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 485)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-list.galgas", 483))) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_18083.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 490)), var_selfTypedefinition_18083.readProperty_isConcrete (), var_selfTypedefinition_18083.readProperty_classFunctionMap (), var_selfTypedefinition_18083.readProperty_mGetterMap (), var_selfTypedefinition_18083.readProperty_mSetterMap (), var_selfTypedefinition_18083.readProperty_mInstanceMethodMap (), var_selfTypedefinition_18083.readProperty_classMethodMap (), var_selfTypedefinition_18083.readProperty_optionalMethodMap (), var_selfTypedefinition_18083.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_18083.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_18083.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_18083.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-list.galgas", 488))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 488)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_19383 (temp_0.readProperty_mTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_19383.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19383.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 512)) ;
    enumerator_19383.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 514)) ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 515)) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_19597 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 516)) ;
  const GALGAS_listTypeForGeneration temp_4 = this ;
  const GALGAS_listTypeForGeneration temp_5 = this ;
  const GALGAS_listTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, var_selfTypedefinition_19597.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 519)), temp_5.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (extensionGetter_definition (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 521)).readProperty_mTypeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 521)) COMMA_SOURCE_FILE ("type-list.galgas", 517))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_3411 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("type-listmap.galgas", 81)) ;
  var_structAttributeList_3411.addAssign_operation (GALGAS_bool (false), GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 84)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 85)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-listmap.galgas", 86)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-listmap.galgas", 88))  COMMA_SOURCE_FILE ("type-listmap.galgas", 82)) ;
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  var_structAttributeList_3411.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mAssociatedListTypeName (), GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 92)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-listmap.galgas", 93)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-listmap.galgas", 95))  COMMA_SOURCE_FILE ("type-listmap.galgas", 89)) ;
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::class_func_new (temp_1.readProperty_isPredefined (), GALGAS_lstring::class_func_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 99)), temp_3.readProperty_mListmapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 99)), var_structAttributeList_3411, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 97))  COMMA_SOURCE_FILE ("type-listmap.galgas", 97)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4835 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 116)), temp_1.readProperty_mListmapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 116)) ;
  {
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4835, temp_2, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 117)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4835, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 118)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 118)) COMMA_SOURCE_FILE ("type-listmap.galgas", 118)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_5780 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_0.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 132)) ;
  GALGAS_typedPropertyList var_listTypedAttributeList_5889 = var_associatedTypeDefinition_5780.readProperty_allTypedPropertyList () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_associatedTypeDefinition_5780.readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("type-listmap.galgas", 134)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_listmapDeclarationAST temp_2 = this ;
      const GALGAS_listmapDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 135)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 135)), fixItArray4  COMMA_SOURCE_FILE ("type-listmap.galgas", 135)) ;
      var_listTypedAttributeList_5889 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-listmap.galgas", 136)) ;
    }
  }
  GALGAS_classFunctionMap var_classFunctionMap_6230 = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("type-listmap.galgas", 139)) ;
  GALGAS_getterMap var_getterMap_6309 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6309, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 140)) ;
  }
  GALGAS_setterMap var_setterMap_6338 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-listmap.galgas", 141)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6378 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-listmap.galgas", 142)) ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeIndex_6493 ;
  {
  const GALGAS_listmapDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mAssociatedListTypeName (), var_associatedListTypeIndex_6493, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 144)) ;
  }
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_6596 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeIndex_6596, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 146)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6309, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 148)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6309, ioArgument_ioTypeMap, GALGAS_string ("allKeys"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 156)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6309, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 164)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_6 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6309, ioArgument_ioTypeMap, GALGAS_string ("listForKey"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inKey"), temp_6.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 172)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_7 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_6230, ioArgument_ioTypeMap, GALGAS_string ("emptyMap"), temp_7.readProperty_mListmapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 181)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_7662 = GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("type-listmap.galgas", 189)) ;
  var_enumeratorDescriptor_7662.addAssign_operation (var_stringTypeIndex_6596, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 190)) ;
  var_enumeratorDescriptor_7662.addAssign_operation (var_associatedListTypeIndex_6493, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 191)) ;
  GALGAS_formalParameterSignature var_insertSetterFormalArgumentList_7909 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-listmap.galgas", 193)) ;
  var_insertSetterFormalArgumentList_7909.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 195)), var_stringTypeIndex_6596, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-listmap.galgas", 197)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 194)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_8064 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-listmap.galgas", 199)) ;
  var_addAssignOperatorDescription_8064.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 200)), var_stringTypeIndex_6596, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 200)) ;
  cEnumerator_typedPropertyList enumerator_8232 (var_listTypedAttributeList_5889, EnumerationOrder::up) ;
  while (enumerator_8232.hasCurrentObject ()) {
    var_addAssignOperatorDescription_8064.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 202)), enumerator_8232.current_mPropertyTypeEntry (HERE), enumerator_8232.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 202)) ;
    var_insertSetterFormalArgumentList_7909.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 204)), enumerator_8232.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-listmap.galgas", 206)), enumerator_8232.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 203)) ;
    enumerator_8232.gotoNextObject () ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  var_setterMap_6338.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("insert"), temp_8.readProperty_mListmapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 210)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-listmap.galgas", 211)), var_insertSetterFormalArgumentList_7909, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-listmap.galgas", 214)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-listmap.galgas", 209)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_9.readProperty_mListmapTypeName (), GALGAS_bool (false), var_getterMap_6309, var_setterMap_6338, var_instanceMethodMap_6378, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 218)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_9236 ;
  {
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (temp_10.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 233)), temp_11.readProperty_mListmapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 233)), var_listElementTypeIndex_9236, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 232)) ;
  }
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  const GALGAS_listmapDeclarationAST temp_13 = this ;
  const GALGAS_listmapDeclarationAST temp_14 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_9295 = GALGAS_unifiedTypeDefinition::class_func_new (temp_12.readProperty_mListmapTypeName (), temp_13.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-listmap.galgas", 241)), GALGAS_typeKindEnum::class_func_listMapType (SOURCE_FILE ("type-listmap.galgas", 242)), GALGAS_bool (true), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-listmap.galgas", 244)), GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-listmap.galgas", 245)), var_listTypedAttributeList_5889, var_classFunctionMap_6230, var_getterMap_6309, var_setterMap_6338, var_instanceMethodMap_6378, GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("type-listmap.galgas", 251)), GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("type-listmap.galgas", 252)), var_enumeratorDescriptor_7662, GALGAS_operators::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 254)), var_addAssignOperatorDescription_8064, GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-listmap.galgas", 256)), GALGAS_enumConstantList::class_func_emptyList (SOURCE_FILE ("type-listmap.galgas", 257)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-listmap.galgas", 258)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-listmap.galgas", 259)), GALGAS_bool (false), var_listElementTypeIndex_9236, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (temp_14.readProperty_mListmapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 263)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-listmap.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 237)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_9295.readProperty_typeName (), var_typeDefinition_9295, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 266)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                          const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_11071 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 283)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11071, var_nameForUsefulness_11071, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 284)) ;
  }
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_11227 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 285)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_11071, var_associatedTypeNameForUsefulness_11227 COMMA_SOURCE_FILE ("type-listmap.galgas", 286)) ;
  }
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_11418 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 287)), temp_3.readProperty_mListmapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 287)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_11071, var_elementTypeNameForUsefulness_11418 COMMA_SOURCE_FILE ("type-listmap.galgas", 288)) ;
  }
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_11692 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 290)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::notEqual, var_associatedTypeDefinition_11692.readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("type-listmap.galgas", 300)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_listmapDeclarationAST temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("associated type should be a list type"), fixItArray7  COMMA_SOURCE_FILE ("type-listmap.galgas", 301)) ;
    }
  }
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (temp_8.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 305)), GALGAS_listmapTypeForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 307)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 308)), var_associatedTypeDefinition_11692.readProperty_allTypedPropertyList (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (temp_11.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 310)), temp_12.readProperty_mListmapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 310))  COMMA_SOURCE_FILE ("type-listmap.galgas", 306))  COMMA_SOURCE_FILE ("type-listmap.galgas", 304)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_string & outArgument_outHeader,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_13290 (temp_0.readProperty_mAssociatedListTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_13290.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_13290.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 330)) ;
    enumerator_13290.gotoNextObject () ;
  }
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_13394 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 332)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, var_selfTypedefinition_13394.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 335)) COMMA_SOURCE_FILE ("type-listmap.galgas", 333))) ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_13394.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 339)), var_selfTypedefinition_13394.readProperty_isConcrete (), var_selfTypedefinition_13394.readProperty_classFunctionMap (), var_selfTypedefinition_13394.readProperty_mGetterMap (), var_selfTypedefinition_13394.readProperty_mSetterMap (), var_selfTypedefinition_13394.readProperty_mInstanceMethodMap (), var_selfTypedefinition_13394.readProperty_classMethodMap (), var_selfTypedefinition_13394.readProperty_optionalMethodMap (), var_selfTypedefinition_13394.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_13394.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_13394.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_13394.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-listmap.galgas", 337))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 337)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outImplementation,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 360)) ;
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListMapElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 361)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  const GALGAS_listmapTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 363)), extensionGetter_identifierRepresentation (temp_3.readProperty_mAssociatedListTypeIndex (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 364)), temp_4.readProperty_mAssociatedListTypedAttributeList () COMMA_SOURCE_FILE ("type-listmap.galgas", 362))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dictDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_dictDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_dictDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("dict @").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_4285 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 111)) ;
  const GALGAS_dictDeclarationAST temp_0 = this ;
  var_structAttributeList_4285.addAssign_operation (GALGAS_bool (true), temp_0.readProperty_mKeyTypeName (), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 115)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-dict.galgas", 116)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-dict.galgas", 118))  COMMA_SOURCE_FILE ("type-dict.galgas", 112)) ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4525 (temp_1.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_4525.hasCurrentObject ()) {
    var_structAttributeList_4285.addAssign_operation (GALGAS_bool (true), enumerator_4525.current_propertyTypeName (HERE), enumerator_4525.current_propertyName (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-dict.galgas", 124)), enumerator_4525.current_hasSelector (HERE), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-dict.galgas", 126))  COMMA_SOURCE_FILE ("type-dict.galgas", 120)) ;
    enumerator_4525.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_2 = this ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::class_func_new (temp_2.readProperty_isPredefined (), GALGAS_lstring::class_func_new (temp_3.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 130)), temp_4.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 130)), var_structAttributeList_4285, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 128))  COMMA_SOURCE_FILE ("type-dict.galgas", 128)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  GALGAS_lstring var_dictionary_5748 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 148)), temp_1.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 148)) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_5748, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 149)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 150)), temp_4.readProperty_mKeyTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 150)) COMMA_SOURCE_FILE ("type-dict.galgas", 150)) ;
  }
  const GALGAS_dictDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6017 (temp_5.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_6017.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (enumerator_6017.current_propertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 152)), enumerator_6017.current_propertyTypeName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 152)) COMMA_SOURCE_FILE ("type-dict.galgas", 152)) ;
    }
    enumerator_6017.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_keyTypeIndex_6844 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_6844, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 167)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6893 = GALGAS_enumerationDescriptorList::class_func_listWithValue (var_keyTypeIndex_6844, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 169)) ;
  GALGAS_classFunctionMap var_classFunctionMap_7010 = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("type-dict.galgas", 171)) ;
  GALGAS_getterMap var_getterMap_7090 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7090, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 172)) ;
  }
  GALGAS_setterMap var_setterMap_7119 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-dict.galgas", 173)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7159 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-dict.galgas", 174)) ;
  {
  const GALGAS_dictDeclarationAST temp_1 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_7010, ioArgument_ioTypeMap, GALGAS_string ("emptyDict"), temp_1.readProperty_mDictTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 176)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7090, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string::makeEmptyString (), temp_2.readProperty_mKeyTypeName ().readProperty_string (), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 184)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7090, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 192)) ;
  }
  GALGAS_formalParameterSignature var_insertSetterFormalArgumentList_7849 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 201)) ;
  GALGAS_typedPropertyList var_typedPropertyList_7910 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 202)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_7958 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 203)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_7958.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 204)), var_keyTypeIndex_6844, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 204)) ;
  var_insertSetterFormalArgumentList_7849.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 206)), var_keyTypeIndex_6844, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 208)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 205)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_8249 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 210)) ;
  var_removeMethodFormalArgumentList_8249.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 212)), var_keyTypeIndex_6844, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 214)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 211)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_8426 = GALGAS_optionalMethodSignature::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 216)) ;
  var_optionalMethodSignature_8426.addAssign_operation (GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 219)), var_keyTypeIndex_6844, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 217)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_8549 = GALGAS_unifiedTypeMapEntryList::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 222)) ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_8646 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_8646.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_8716 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8646.current_propertyTypeName (HERE), var_attributeTypeIndex_8716, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 224)) ;
    }
    GALGAS_bool var_hasSetter_8744 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_8769 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_7958.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 227)), var_attributeTypeIndex_8716, enumerator_8646.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 227)) ;
    var_typedPropertyList_7910.addAssign_operation (var_attributeTypeIndex_8716, enumerator_8646.current_propertyName (HERE), var_hasSetter_8744, var_hasSelector_8769  COMMA_SOURCE_FILE ("type-dict.galgas", 228)) ;
    var_typesToIncludeInHeaderCompilation_8549.addAssign_operation (var_attributeTypeIndex_8716  COMMA_SOURCE_FILE ("type-dict.galgas", 229)) ;
    var_enumerationDescriptor_6893.addAssign_operation (var_attributeTypeIndex_8716, enumerator_8646.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 230)) ;
    var_insertSetterFormalArgumentList_7849.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 232)), var_attributeTypeIndex_8716, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 234)), enumerator_8646.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 231)) ;
    var_removeMethodFormalArgumentList_8249.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 237)), var_attributeTypeIndex_8716, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-dict.galgas", 239)), enumerator_8646.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 236)) ;
    var_optionalMethodSignature_8426.addAssign_operation (GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 243)), var_attributeTypeIndex_8716, enumerator_8646.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 241)) ;
    enumerator_8646.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_4 = this ;
  var_setterMap_7119.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("insert"), temp_4.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 249)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 250)), var_insertSetterFormalArgumentList_7849, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 253)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 248)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_5 = this ;
  var_setterMap_7119.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("removeKey"), temp_5.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 258)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 259)), var_removeMethodFormalArgumentList_8249, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 262)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 257)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_6 = this ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  var_instanceMethodMap_7159.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("searchKey"), temp_6.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 267)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 268)), var_removeMethodFormalArgumentList_8249, temp_7.readProperty_mDictTypeName ().readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 272)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 266)) ;
  }
  const GALGAS_dictDeclarationAST temp_8 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10447 (temp_8.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_10447.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_10483 = GALGAS_lstring::class_func_new (enumerator_10447.current_propertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 277)), enumerator_10447.current_propertyName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 277)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_10613 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_10447.current_propertyTypeName (HERE), var_attributeTypeIndex_10613, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 278)) ;
    }
    {
    GALGAS_functionSignature temp_9 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 282)) ;
    temp_9.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 282)), var_keyTypeIndex_6844, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 282)) ;
    var_getterMap_7090.setter_insertOrReplace (var_accessorName_10483, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 281)), temp_9, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 283)), GALGAS_bool (true), var_attributeTypeIndex_10613, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 286)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 279)) ;
    }
    enumerator_10447.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_10 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11060 (temp_10.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_11060.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_11096 = GALGAS_lstring::class_func_new (GALGAS_string ("set").add_operation (enumerator_11060.current_propertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 293)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 293)), enumerator_11060.current_propertyName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 292)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11321 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11060.current_propertyTypeName (HERE), var_attributeTypeIndex_11321, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 296)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_11354 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 300)) ;
    var_accessorFormalArgumentList_11354.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 301)), var_attributeTypeIndex_11321, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 301)), enumerator_11060.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 301)) ;
    var_accessorFormalArgumentList_11354.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 302)), var_keyTypeIndex_6844, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 302)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 302)) ;
    {
    var_setterMap_7119.setter_insertOrReplace (var_accessorName_11096, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 305)), var_accessorFormalArgumentList_11354, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 308)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 303)) ;
    }
    enumerator_11060.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_11 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_11.readProperty_mDictTypeName (), GALGAS_bool (false), var_getterMap_7090, var_setterMap_7119, var_instanceMethodMap_7159, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 313)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_12341 ;
  {
  const GALGAS_dictDeclarationAST temp_12 = this ;
  const GALGAS_dictDeclarationAST temp_13 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (temp_12.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 328)), temp_13.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 328)), var_elementTypeEntry_12341, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 327)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_12393 = GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("type-dict.galgas", 332)) ;
  {
  var_optionalMethodMap_12393.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 333)), var_optionalMethodSignature_8426, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 333)) ;
  }
  const GALGAS_dictDeclarationAST temp_14 = this ;
  const GALGAS_dictDeclarationAST temp_15 = this ;
  const GALGAS_dictDeclarationAST temp_16 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_12546 = GALGAS_unifiedTypeDefinition::class_func_new (temp_14.readProperty_mDictTypeName (), temp_15.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dict.galgas", 339)), GALGAS_typeKindEnum::class_func_mapType (SOURCE_FILE ("type-dict.galgas", 340)), GALGAS_bool (true), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 342)), GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-dict.galgas", 343)), var_typedPropertyList_7910, var_classFunctionMap_7010, var_getterMap_7090, var_setterMap_7119, var_instanceMethodMap_7159, GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("type-dict.galgas", 349)), var_optionalMethodMap_12393, var_enumerationDescriptor_6893, GALGAS_operators::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 352)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 352)) COMMA_SOURCE_FILE ("type-dict.galgas", 352)), var_argumentTypeListForAddAssignWithFieldExpressionList_7958, GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-dict.galgas", 354)), GALGAS_enumConstantList::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 355)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 356)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 357)), GALGAS_bool (false), var_elementTypeEntry_12341, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (temp_16.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 361)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-dict.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 335)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12546.readProperty_typeName (), var_typeDefinition_12546, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 364)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const GALGAS_lstring constinArgument_inString,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_14023 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 372)), EnumerationOrder::up) ;
  while (enumerator_14023.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_14048 = enumerator_14023.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 373)) ;
    {
    GALGAS_string joker_14147 ; // Joker input parameter
    var_explodedArray_14048.setter_popFirst (joker_14147, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 374)) ;
    }
    cEnumerator_stringlist enumerator_14160 (var_explodedArray_14048, EnumerationOrder::up) ;
    while (enumerator_14160.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_14160.current_mValue (HERE).getter_count (SOURCE_FILE ("type-dict.galgas", 376)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_14239 = enumerator_14160.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 377)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (ComparisonKind::notEqual, var_c_14239.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 379)) ;
            }
          }
        }
      }
      enumerator_14160.gotoNextObject () ;
    }
    enumerator_14023.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (const GALGAS_lstring constinArgument_inString,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_14711 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 389)), EnumerationOrder::up) ;
  while (enumerator_14711.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_14736 = enumerator_14711.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 390)) ;
    {
    GALGAS_string joker_14835 ; // Joker input parameter
    var_explodedArray_14736.setter_popFirst (joker_14835, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 391)) ;
    }
    cEnumerator_stringlist enumerator_14848 (var_explodedArray_14736, EnumerationOrder::up) ;
    while (enumerator_14848.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_14848.current_mValue (HERE).getter_count (SOURCE_FILE ("type-dict.galgas", 393)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_14927 = enumerator_14848.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 394)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (ComparisonKind::notEqual, var_c_14927.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_c_14927.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 395)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 396)) ;
            }
          }
        }
      }
      enumerator_14848.gotoNextObject () ;
    }
    enumerator_14711.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForMapAndDict'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForMapAndDict (Compiler *
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("type-dict.galgas", 406)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 407)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 408)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 409)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForMapAndDict ;

//--------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForMapAndDict (class Compiler * inCompiler
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

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForMapAndDict [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForMapAndDict (Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
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
//
//Overriding extension method '@dictDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_15947 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 424)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15947, var_nameForUsefulness_15947, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 425)) ;
  }
  const GALGAS_dictDeclarationAST temp_1 = this ;
  const GALGAS_dictDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_16100 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (temp_1.readProperty_mDictTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 426)), temp_2.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 426)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15947, var_elementTypeNameForUsefulness_16100 COMMA_SOURCE_FILE ("type-dict.galgas", 427)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_16366 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-dict.galgas", 429)) ;
  GALGAS_propertyIndexMap var_attributeMap_16414 = GALGAS_propertyIndexMap::class_func_emptyMap (SOURCE_FILE ("type-dict.galgas", 430)) ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_16478 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_16478.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_16514 = function_typeNameForUsefulEntitiesGraph (enumerator_16478.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 432)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15947, var_propertyTypeNameForUsefulness_16514 COMMA_SOURCE_FILE ("type-dict.galgas", 433)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_16706 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_16478.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 434)) ;
    GALGAS_bool var_hasSetter_16760 = GALGAS_bool (true) ;
    var_typedAttributeList_16366.addAssign_operation (var_t_16706, enumerator_16478.current_propertyName (HERE), var_hasSetter_16760, enumerator_16478.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 436)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 441)).getter_hasKey (enumerator_16478.current_propertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-dict.galgas", 441)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_16984 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_17061 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 443)), EnumerationOrder::up) ;
        while (enumerator_17061.hasCurrentObject ()) {
          var_m_16984.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_17061.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 444)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 444)) ;
          enumerator_17061.gotoNextObject () ;
        }
        var_m_16984.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 446)) ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_16478.current_propertyName (HERE).readProperty_location (), var_m_16984, fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 447)) ;
      }
    }
    {
    var_attributeMap_16414.setter_insertKey (enumerator_16478.current_propertyName (HERE), var_t_16706, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 449)) ;
    }
    enumerator_16478.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_6 = this ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  const GALGAS_dictDeclarationAST temp_8 = this ;
  const GALGAS_dictDeclarationAST temp_9 = this ;
  const GALGAS_dictDeclarationAST temp_10 = this ;
  const GALGAS_dictDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_6.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 453)), GALGAS_dictTypeForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 455)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (temp_8.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 456)), temp_9.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 456)), temp_10.readProperty_mDictTypeName (), var_typedAttributeList_16366, temp_11.readProperty_mKeyTypeName ()  COMMA_SOURCE_FILE ("type-dict.galgas", 454))  COMMA_SOURCE_FILE ("type-dict.galgas", 452)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18352 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 480)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, var_selfTypedefinition_18352.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 483)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-dict.galgas", 481))) ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_18352.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 488)), var_selfTypedefinition_18352.readProperty_isConcrete (), var_selfTypedefinition_18352.readProperty_classFunctionMap (), var_selfTypedefinition_18352.readProperty_mGetterMap (), var_selfTypedefinition_18352.readProperty_mSetterMap (), var_selfTypedefinition_18352.readProperty_mInstanceMethodMap (), var_selfTypedefinition_18352.readProperty_classMethodMap (), var_selfTypedefinition_18352.readProperty_optionalMethodMap (), var_selfTypedefinition_18352.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_18352.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_18352.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_18352.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-dict.galgas", 486))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 486)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 509)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 510)) ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  const GALGAS_dictTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 512)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 514)) COMMA_SOURCE_FILE ("type-dict.galgas", 511))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@mapDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_mapDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_mapDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 62)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_9748 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 265)) ;
  var_structAttributeList_9748.addAssign_operation (GALGAS_bool (false), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 268)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 269)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-map.galgas", 270)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-map.galgas", 272))  COMMA_SOURCE_FILE ("type-map.galgas", 266)) ;
  const GALGAS_mapDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10021 (temp_0.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_10021.hasCurrentObject ()) {
    var_structAttributeList_9748.addAssign_operation (GALGAS_bool (false), enumerator_10021.current_propertyTypeName (HERE), enumerator_10021.current_propertyName (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-map.galgas", 278)), enumerator_10021.current_hasSelector (HERE), enumerator_10021.current_initialization (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 274)) ;
    enumerator_10021.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::class_func_new (temp_1.readProperty_isPredefined (), GALGAS_lstring::class_func_new (temp_2.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 284)), temp_3.readProperty_mMapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 284)), var_structAttributeList_9748, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 282))  COMMA_SOURCE_FILE ("type-map.galgas", 282)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapDeclarationAST temp_0 = this ;
  const GALGAS_mapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_11271 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 301)), temp_1.readProperty_mMapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 301)) ;
  {
  const GALGAS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11271, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 302)) ;
  }
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11427 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_11427.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (enumerator_11427.current_propertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 304)), enumerator_11427.current_propertyTypeName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 304)) COMMA_SOURCE_FILE ("type-map.galgas", 304)) ;
    }
    enumerator_11427.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_12272 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeIndex_12272, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 320)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeIndex_12364 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_12364, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 322)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 324)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_12364, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 324)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_12444 = temp_0 ;
  GALGAS_classFunctionMap var_classFunctionMap_12525 = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("type-map.galgas", 326)) ;
  GALGAS_getterMap var_getterMap_12605 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_12605, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 327)) ;
  }
  GALGAS_setterMap var_setterMap_12633 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-map.galgas", 328)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_12673 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-map.galgas", 329)) ;
  {
  const GALGAS_mapDeclarationAST temp_1 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_12525, ioArgument_ioTypeMap, GALGAS_string ("emptyMap"), temp_1.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 331)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_2 = this ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_12525, ioArgument_ioTypeMap, GALGAS_string ("mapWithMapToOverride"), temp_2.readProperty_mMapTypeName ().readProperty_string (), GALGAS_string ("inMap"), temp_3.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 338)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12605, ioArgument_ioTypeMap, GALGAS_string ("levels"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 348)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12605, ioArgument_ioTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 356)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12605, ioArgument_ioTypeMap, GALGAS_string ("keySet"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 367)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12605, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 375)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12605, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 383)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12605, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 392)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12605, ioArgument_ioTypeMap, GALGAS_string ("overriddenMap"), GALGAS_string::makeEmptyString (), temp_4.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 401)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12605, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 409)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_14773 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 418)) ;
  GALGAS_typedPropertyList var_typedPropertyList_14841 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 419)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_14914 = GALGAS_optionalMethodSignature::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 420)) ;
  var_optionalMethodSignature_14914.addAssign_operation (GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 423)), var_stringTypeIndex_12272, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 421)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_15058 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 426)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_15058.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 427)), var_lstringTypeIndex_12364, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 427)) ;
  var_insertMethodFormalArgumentList_14773.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 429)), var_lstringTypeIndex_12364, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 431)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 428)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_15388 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 433)) ;
  var_removeMethodFormalArgumentList_15388.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 435)), var_lstringTypeIndex_12364, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 437)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 434)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_15599 = GALGAS_unifiedTypeMapEntryList::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 439)) ;
  const GALGAS_mapDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_15692 (temp_5.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_15692.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = enumerator_15692.current_initialization (HERE).getter_isSome (SOURCE_FILE ("type-map.galgas", 441)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_15692.current_propertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a map"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 442)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_15906 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15692.current_propertyTypeName (HERE), var_attributeTypeIndex_15906, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 444)) ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_15058.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 454)), var_attributeTypeIndex_15906, enumerator_15692.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 454)) ;
    var_typedPropertyList_14841.addAssign_operation (var_attributeTypeIndex_15906, enumerator_15692.current_propertyName (HERE), GALGAS_bool (true), enumerator_15692.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 455)) ;
    var_typesToIncludeInHeaderCompilation_15599.addAssign_operation (var_attributeTypeIndex_15906  COMMA_SOURCE_FILE ("type-map.galgas", 456)) ;
    var_enumerationDescriptor_12444.addAssign_operation (var_attributeTypeIndex_15906, enumerator_15692.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 457)) ;
    GALGAS_lstring temp_8 ;
    const enumGalgasBool test_9 = enumerator_15692.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = enumerator_15692.current_propertyName (HERE) ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 459)) ;
    }
    var_insertMethodFormalArgumentList_14773.addAssign_operation (temp_8, var_attributeTypeIndex_15906, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 461)), enumerator_15692.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 458)) ;
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_15692.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_15692.current_propertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 464)) ;
    }
    var_removeMethodFormalArgumentList_15388.addAssign_operation (temp_10, var_attributeTypeIndex_15906, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-map.galgas", 466)), enumerator_15692.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 463)) ;
    GALGAS_lstring temp_12 ;
    const enumGalgasBool test_13 = enumerator_15692.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_13) {
      temp_12 = enumerator_15692.current_propertyName (HERE) ;
    }else if (kBoolFalse == test_13) {
      temp_12 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 470)) ;
    }
    var_optionalMethodSignature_14914.addAssign_operation (GALGAS_bool (false), temp_12, var_attributeTypeIndex_15906, enumerator_15692.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 468)) ;
    enumerator_15692.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_14 = this ;
  cEnumerator_insertMethodListAST enumerator_17180 (temp_14.readProperty_mInsertMethodList (), EnumerationOrder::up) ;
  while (enumerator_17180.hasCurrentObject ()) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = var_setterMap_12633.getter_hasKey (enumerator_17180.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 476)).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_17180.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17180.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 477)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 477)), fixItArray16  COMMA_SOURCE_FILE ("type-map.galgas", 477)) ;
      }
    }
    if (kBoolFalse == test_15) {
      {
      var_setterMap_12633.setter_insertOrReplace (enumerator_17180.current_mInsertMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 481)), var_insertMethodFormalArgumentList_14773, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 484)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 479)) ;
      }
    }
    enumerator_17180.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_17 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_17643 (temp_17.readProperty_mRemoveMethodList (), EnumerationOrder::up) ;
  while (enumerator_17643.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_setterMap_12633.getter_hasKey (enumerator_17643.current_mMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 491)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_17643.current_mMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17643.current_mMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 492)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 492)), fixItArray19  COMMA_SOURCE_FILE ("type-map.galgas", 492)) ;
      }
    }
    if (kBoolFalse == test_18) {
      {
      var_setterMap_12633.setter_insertOrReplace (enumerator_17643.current_mMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 496)), var_removeMethodFormalArgumentList_15388, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 499)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 494)) ;
      }
    }
    enumerator_17643.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_20 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_18134 (temp_20.readProperty_mSearchMethodList (), EnumerationOrder::up) ;
  while (enumerator_18134.hasCurrentObject ()) {
    {
    var_instanceMethodMap_12673.setter_insertKey (enumerator_18134.current_mSearchMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 508)), var_removeMethodFormalArgumentList_15388, enumerator_18134.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 512)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 506)) ;
    }
    enumerator_18134.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_21 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_18469 (temp_21.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_18469.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_18505 = GALGAS_lstring::class_func_new (enumerator_18469.current_propertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 518)), enumerator_18469.current_propertyName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 518)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_18642 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18469.current_propertyTypeName (HERE), var_attributeTypeIndex_18642, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 519)) ;
    }
    {
    GALGAS_functionSignature temp_22 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 523)) ;
    temp_22.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 523)), var_stringTypeIndex_12272, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 523)) ;
    var_getterMap_12605.setter_insertOrReplace (var_accessorName_18505, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 522)), temp_22, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 524)), GALGAS_bool (true), var_attributeTypeIndex_18642, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 527)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 520)) ;
    }
    enumerator_18469.gotoNextObject () ;
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_mapDeclarationAST temp_24 = this ;
    test_23 = GALGAS_bool (ComparisonKind::greaterOrEqual, temp_24.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("type-map.galgas", 532)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_location var_insertOrReplaceLocation_19112 ;
      const GALGAS_mapDeclarationAST temp_25 = this ;
      temp_25.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_19112, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 533)) ;
      {
      var_setterMap_12633.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_19112, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 535)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 536)), var_insertMethodFormalArgumentList_14773, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 539)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 534)) ;
      }
    }
  }
  const GALGAS_mapDeclarationAST temp_26 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_19483 (temp_26.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_19483.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_19519 = GALGAS_lstring::class_func_new (GALGAS_string ("set").add_operation (enumerator_19483.current_propertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 546)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 546)), enumerator_19483.current_propertyName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 545)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_19752 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_19483.current_propertyTypeName (HERE), var_attributeTypeIndex_19752, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 549)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_19811 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 553)) ;
    var_accessorFormalArgumentList_19811.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 554)), var_attributeTypeIndex_19752, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 554)), enumerator_19483.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 554)) ;
    var_accessorFormalArgumentList_19811.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 555)), var_stringTypeIndex_12272, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 555)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 555)) ;
    {
    var_setterMap_12633.setter_insertOrReplace (var_accessorName_19519, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 558)), var_accessorFormalArgumentList_19811, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 561)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 556)) ;
    }
    enumerator_19483.gotoNextObject () ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_20285 = GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("type-map.galgas", 566)) ;
  {
  var_optionalMethodMap_20285.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 567)), var_optionalMethodSignature_14914, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 567)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_27 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_27.readProperty_mMapTypeName (), GALGAS_bool (false), var_getterMap_12605, var_setterMap_12633, var_instanceMethodMap_12673, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 569)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_20927 ;
  {
  const GALGAS_mapDeclarationAST temp_28 = this ;
  const GALGAS_mapDeclarationAST temp_29 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (temp_28.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 584)), temp_29.readProperty_mMapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 584)), var_elementTypeEntry_20927, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 583)) ;
  }
  const GALGAS_mapDeclarationAST temp_30 = this ;
  const GALGAS_mapDeclarationAST temp_31 = this ;
  const GALGAS_mapDeclarationAST temp_32 = this ;
  const GALGAS_mapDeclarationAST temp_33 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_20977 = GALGAS_unifiedTypeDefinition::class_func_new (temp_30.readProperty_mMapTypeName (), temp_31.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-map.galgas", 592)), GALGAS_typeKindEnum::class_func_mapType (SOURCE_FILE ("type-map.galgas", 593)), GALGAS_bool (true), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 595)), GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-map.galgas", 596)), var_typedPropertyList_14841, var_classFunctionMap_12525, var_getterMap_12605, var_setterMap_12633, var_instanceMethodMap_12673, GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("type-map.galgas", 602)), var_optionalMethodMap_20285, var_enumerationDescriptor_12444, GALGAS_operators::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 605)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 605)) COMMA_SOURCE_FILE ("type-map.galgas", 605)).operator_or (GALGAS_operators::class_func_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 605)) COMMA_SOURCE_FILE ("type-map.galgas", 605)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("type-map.galgas", 605)) COMMA_SOURCE_FILE ("type-map.galgas", 605)).operator_or (GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("type-map.galgas", 605)) COMMA_SOURCE_FILE ("type-map.galgas", 605)), var_argumentTypeListForAddAssignWithFieldExpressionList_15058, GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-map.galgas", 607)), GALGAS_enumConstantList::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 608)), temp_32.readProperty_mSearchMethodList (), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 610)), GALGAS_bool (false), var_elementTypeEntry_20927, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (temp_33.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 614)), GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("type-map.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 588)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_20977.readProperty_typeName (), var_typeDefinition_20977, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 617)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GALGAS_string /* constinArgument_inProductDirectory */,
                                                      const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                      GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_23232 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 646)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_23232, var_nameForUsefulness_23232, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 647)) ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_23384 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (temp_1.readProperty_mMapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 648)), temp_2.readProperty_mMapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 648)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 648)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_23232, var_elementTypeNameForUsefulness_23384 COMMA_SOURCE_FILE ("type-map.galgas", 649)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_23646 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-map.galgas", 651)) ;
  GALGAS_propertyIndexMap var_attributeMap_23694 = GALGAS_propertyIndexMap::class_func_emptyMap (SOURCE_FILE ("type-map.galgas", 652)) ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_23753 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_23753.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_23789 = function_typeNameForUsefulEntitiesGraph (enumerator_23753.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 654)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_23232, var_propertyTypeNameForUsefulness_23789 COMMA_SOURCE_FILE ("type-map.galgas", 655)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_23989 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_23753.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 656)) ;
    GALGAS_bool var_hasSelector_24051 = GALGAS_bool (false) ;
    var_typedAttributeList_23646.addAssign_operation (var_t_23989, enumerator_23753.current_propertyName (HERE), GALGAS_bool (true), var_hasSelector_24051  COMMA_SOURCE_FILE ("type-map.galgas", 658)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 663)).getter_hasKey (enumerator_23753.current_propertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 663)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_24273 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_24350 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 665)), EnumerationOrder::up) ;
        while (enumerator_24350.hasCurrentObject ()) {
          var_m_24273.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_24350.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 666)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 666)) ;
          enumerator_24350.gotoNextObject () ;
        }
        var_m_24273.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 668)) ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_23753.current_propertyName (HERE).readProperty_location (), var_m_24273, fixItArray5  COMMA_SOURCE_FILE ("type-map.galgas", 669)) ;
      }
    }
    {
    var_attributeMap_23694.setter_insertKey (enumerator_23753.current_propertyName (HERE), var_t_23989, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 671)) ;
    }
    enumerator_23753.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_24567 = GALGAS_insertMethodMap::class_func_emptyMap (SOURCE_FILE ("type-map.galgas", 674)) ;
  const GALGAS_mapDeclarationAST temp_6 = this ;
  cEnumerator_insertMethodListAST enumerator_24627 (temp_6.readProperty_mInsertMethodList (), EnumerationOrder::up) ;
  while (enumerator_24627.hasCurrentObject ()) {
    {
    var_insertMethodMap_24567.setter_insertKey (enumerator_24627.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 676)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_24627.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 677)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_24627.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 678)) ;
    }
    enumerator_24627.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_24889 = GALGAS_searchMethodMap::class_func_emptyMap (SOURCE_FILE ("type-map.galgas", 681)) ;
  const GALGAS_mapDeclarationAST temp_7 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_24935 (temp_7.readProperty_mSearchMethodList (), EnumerationOrder::up) ;
  while (enumerator_24935.hasCurrentObject ()) {
    {
    var_searchMethodMap_24889.setter_insertKey (enumerator_24935.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 683)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_24935.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 684)) ;
    }
    enumerator_24935.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_8 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_25130 (temp_8.readProperty_mRemoveMethodList (), EnumerationOrder::up) ;
  while (enumerator_25130.hasCurrentObject ()) {
    {
    var_insertMethodMap_24567.setter_insertKey (enumerator_25130.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 688)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_25130.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 689)) ;
    }
    enumerator_25130.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_9 = this ;
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_25347 (temp_9.readProperty_mInsertOrReplaceDeclarationListAST (), EnumerationOrder::up) ;
  GALGAS_uint index_25342 (uint32_t (0)) ;
  while (enumerator_25347.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (ComparisonKind::greaterThan, index_25342.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_25347.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray11  COMMA_SOURCE_FILE ("type-map.galgas", 694)) ;
      }
    }
    enumerator_25347.gotoNextObject () ;
    index_25342.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 692)) ;
  }
  const GALGAS_mapDeclarationAST temp_12 = this ;
  GALGAS_bool var_hasInsertOrReplaceModifier_25583 = GALGAS_bool (ComparisonKind::greaterThan, temp_12.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("type-map.galgas", 697)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_hasInsertOrReplaceModifier_25583.operator_and (var_insertMethodMap_24567.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 698)) COMMA_SOURCE_FILE ("type-map.galgas", 698)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_25803 ;
      const GALGAS_mapDeclarationAST temp_14 = this ;
      temp_14.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceDeclarationLocation_25803, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 699)) ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_25803, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray15  COMMA_SOURCE_FILE ("type-map.galgas", 700)) ;
    }
  }
  const GALGAS_mapDeclarationAST temp_16 = this ;
  const GALGAS_mapDeclarationAST temp_17 = this ;
  const GALGAS_mapDeclarationAST temp_18 = this ;
  const GALGAS_mapDeclarationAST temp_19 = this ;
  const GALGAS_mapDeclarationAST temp_20 = this ;
  const GALGAS_mapDeclarationAST temp_21 = this ;
  const GALGAS_mapDeclarationAST temp_22 = this ;
  const GALGAS_mapDeclarationAST temp_23 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (temp_16.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 705)), GALGAS_mapTypeForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_17.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 707)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (temp_18.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 708)), temp_19.readProperty_mMapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 708)), temp_20.readProperty_mMapTypeName (), var_typedAttributeList_23646, temp_21.readProperty_mInsertMethodList (), temp_22.readProperty_mSearchMethodList (), temp_23.readProperty_mRemoveMethodList (), var_hasInsertOrReplaceModifier_25583  COMMA_SOURCE_FILE ("type-map.galgas", 706))  COMMA_SOURCE_FILE ("type-map.galgas", 704)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                              GALGAS_string & outArgument_outHeader,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_27390 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 738)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, var_selfTypedefinition_27390.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 741)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-map.galgas", 739))) ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_27390.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 747)), var_selfTypedefinition_27390.readProperty_isConcrete (), var_selfTypedefinition_27390.readProperty_classFunctionMap (), var_selfTypedefinition_27390.readProperty_mGetterMap (), var_selfTypedefinition_27390.readProperty_mSetterMap (), var_selfTypedefinition_27390.readProperty_mInstanceMethodMap (), var_selfTypedefinition_27390.readProperty_classMethodMap (), var_selfTypedefinition_27390.readProperty_optionalMethodMap (), var_selfTypedefinition_27390.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_27390.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_27390.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_27390.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-map.galgas", 745))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 745)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendDeclaration2'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                              GALGAS_string & outArgument_outHeader,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_28562 (temp_0.readProperty_mTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_28562.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_28562.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 769)) ;
    enumerator_28562.gotoNextObject () ;
  }
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_28652 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 771)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, var_selfTypedefinition_28652.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 774)), temp_3.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-map.galgas", 772))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                     GALGAS_string & outArgument_outImplementation,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 785)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 786)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_29297 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 787)) ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  const GALGAS_mapTypeForGeneration temp_5 = this ;
  const GALGAS_mapTypeForGeneration temp_6 = this ;
  const GALGAS_mapTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, var_selfTypedefinition_29297.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-map.galgas", 789)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mInsertMethodList (), temp_5.readProperty_mSearchMethodList (), temp_6.readProperty_mRemoveMethodList (), temp_7.readProperty_mHasInsertOrReplaceModifier () COMMA_SOURCE_FILE ("type-map.galgas", 788))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                    GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                    GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                    GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                    GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_5666 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 149)), temp_1.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 149)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5666, temp_2, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 150)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5836 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_5836.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (enumerator_5836.current_propertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 152)), enumerator_5836.current_propertyTypeName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 152)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 152)) ;
    }
    enumerator_5836.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_6365 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 162)) ;
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6453 (temp_0.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_6453.hasCurrentObject ()) {
    var_structAttributeList_6365.addAssign_operation (enumerator_6453.current_isConstant (HERE), enumerator_6453.current_propertyTypeName (HERE), enumerator_6453.current_propertyName (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-sorted-list.galgas", 168)), enumerator_6453.current_hasSelector (HERE), enumerator_6453.current_initialization (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 164)) ;
    enumerator_6453.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::class_func_new (temp_1.readProperty_isPredefined (), GALGAS_lstring::class_func_new (temp_2.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 174)), temp_3.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 174)), var_structAttributeList_6365, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 172))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 172)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                              const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                              const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap var_optionalMethodMap_7472 = GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 189)) ;
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_7587 ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mSortedListTypeName (), var_listTypeIndex_7587, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 191)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_7796 ;
  {
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 194)), temp_2.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 194)), var_listElementTypeIndex_7796, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 193)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_7883 = GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 198)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_7935 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 199)) ;
  GALGAS_formalParameterSignature var_setterFormalOutputArgumentList_8001 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 200)) ;
  GALGAS_formalParameterSignature var_setterFormalInputArgumentList_8069 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 201)) ;
  GALGAS_typedPropertyList var_typedAttributeList_8129 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 202)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_8194 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_8194.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_8272 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8194.current_propertyTypeName (HERE), var_attributeTypeIndex_8272, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 204)) ;
    }
    GALGAS_bool var_hasSelector_8300 = GALGAS_bool (false) ;
    var_typedAttributeList_8129.addAssign_operation (var_attributeTypeIndex_8272, enumerator_8194.current_propertyName (HERE), GALGAS_bool (true), var_hasSelector_8300  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 206)) ;
    var_enumerationDescriptor_7883.addAssign_operation (var_attributeTypeIndex_8272, enumerator_8194.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 207)) ;
    var_constructorAttributeTypeList_7935.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 208)), var_attributeTypeIndex_8272, enumerator_8194.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 208)) ;
    var_setterFormalOutputArgumentList_8001.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 209)), var_attributeTypeIndex_8272, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-sorted-list.galgas", 209)), enumerator_8194.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 209)) ;
    var_setterFormalInputArgumentList_8069.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 210)), var_attributeTypeIndex_8272, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-sorted-list.galgas", 210)), enumerator_8194.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 210)) ;
    enumerator_8194.gotoNextObject () ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_8852 = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 213)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_8852, ioArgument_ioTypeMap, GALGAS_string ("emptySortedList"), temp_4.readProperty_mSortedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 214)) ;
  }
  {
  var_classFunctionMap_8852.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 222)), var_constructorAttributeTypeList_7935, GALGAS_bool (false), var_listTypeIndex_7587, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 221)) ;
  }
  GALGAS_getterMap var_getterMap_9290 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_9290, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 228)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_9290, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 229)) ;
  }
  GALGAS_setterMap var_setterMap_9520 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 238)) ;
  {
  var_setterMap_9520.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("popGreatest"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 240)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 241)), var_setterFormalOutputArgumentList_8001, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 244)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 239)) ;
  }
  {
  var_setterMap_9520.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("popSmallest"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 248)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 249)), var_setterFormalOutputArgumentList_8001, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 252)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 247)) ;
  }
  {
  var_setterMap_9520.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("insert"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 256)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 257)), var_setterFormalInputArgumentList_8069, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 260)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 255)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_10242 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 264)) ;
  {
  var_instanceMethodMap_10242.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("greatest"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 266)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 267)), var_setterFormalOutputArgumentList_8001, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 269)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 271)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 265)) ;
  }
  {
  var_instanceMethodMap_10242.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("smallest"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 275)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 276)), var_setterFormalOutputArgumentList_8001, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 278)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 280)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 274)) ;
  }
  {
  const GALGAS_sortedListDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_mSortedListTypeName (), GALGAS_bool (false), var_getterMap_9290, var_setterMap_9520, var_instanceMethodMap_10242, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 284)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_6 = this ;
  const GALGAS_sortedListDeclarationAST temp_7 = this ;
  const GALGAS_sortedListDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_11121 = GALGAS_unifiedTypeDefinition::class_func_new (temp_6.readProperty_mSortedListTypeName (), temp_7.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-sorted-list.galgas", 302)), GALGAS_typeKindEnum::class_func_sortedListType (SOURCE_FILE ("type-sorted-list.galgas", 303)), GALGAS_bool (true), var_typedAttributeList_8129, GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 306)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 307)), var_classFunctionMap_8852, var_getterMap_9290, var_setterMap_9520, var_instanceMethodMap_10242, GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 312)), var_optionalMethodMap_7472, var_enumerationDescriptor_7883, GALGAS_operators::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-sorted-list.galgas", 315)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("type-sorted-list.galgas", 315)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 315)), var_constructorAttributeTypeList_7935, GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 317)), GALGAS_enumConstantList::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 318)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 319)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 320)), GALGAS_bool (false), var_listElementTypeIndex_7796, GALGAS_string ("emptySortedList"), GALGAS_string ("-sortedlist-").add_operation (temp_8.readProperty_mSortedListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-sorted-list.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 324)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-sorted-list.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 298)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_11121.readProperty_typeName (), var_typeDefinition_11121, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 327)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_string /* constinArgument_inProductDirectory */,
                                                             const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                             GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  GALGAS_lstring var_sortedListNameForUsefulness_12919 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 344)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_12919, var_sortedListNameForUsefulness_12919, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 345)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_13108 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346)), temp_2.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_12919, var_elementTypeNameForUsefulness_13108 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 347)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_13367 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 349)) ;
  GALGAS_propertyIndexMap var_attributeMap_13434 = GALGAS_propertyIndexMap::class_func_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 350)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_13493 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_13493.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_13529 = function_typeNameForUsefulEntitiesGraph (enumerator_13493.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 352)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_12919, var_propertyTypeNameForUsefulness_13529 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 353)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_13718 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_13493.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)) ;
    GALGAS_bool var_hasSelector_13780 = GALGAS_bool (true) ;
    var_typedAttributeList_13367.addAssign_operation (var_t_13718, enumerator_13493.current_propertyName (HERE), GALGAS_bool (true), var_hasSelector_13780  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 356)) ;
    {
    var_attributeMap_13434.setter_insertKey (enumerator_13493.current_propertyName (HERE), var_t_13718, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 361)) ;
    }
    enumerator_13493.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting_14003 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("type-sorted-list.galgas", 364)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_14072 = GALGAS_sortDescriptorListForGeneration::class_func_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 365)) ;
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_14124 (temp_4.readProperty_mSortDescriptorList (), EnumerationOrder::up) ;
  while (enumerator_14124.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_14243 ;
    var_attributeMap_13434.method_searchKey (enumerator_14124.current_mSortedAttributeName (HERE), var_type_14243, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 367)) ;
    var_sortDescriptorList_14072.addAssign_operation (var_type_14243, enumerator_14124.current_mSortedAttributeName (HERE).readProperty_string (), enumerator_14124.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 368)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_attributesUsedForSorting_14003.getter_hasKey (enumerator_14124.current_mSortedAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 369)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_14124.current_mSortedAttributeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_14124.current_mSortedAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 370)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 370)), fixItArray6  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 370)) ;
      }
    }
    var_attributesUsedForSorting_14003.addAssign_operation (enumerator_14124.current_mSortedAttributeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 372)) ;
    enumerator_14124.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_7 = this ;
  const GALGAS_sortedListDeclarationAST temp_8 = this ;
  const GALGAS_sortedListDeclarationAST temp_9 = this ;
  const GALGAS_sortedListDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (temp_7.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 376)), GALGAS_sortedListTypeForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 378)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (temp_9.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 379)), temp_10.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 379)), var_typedAttributeList_13367, var_sortDescriptorList_14072  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 377))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 375)) ;
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

GALGAS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (Compiler * inCompiler,
                                                                                         const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & /* in_ATTRIBUTE_5F_LIST */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_sortedlist {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedListGenerationTemplate sortedlistTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                     const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                     const GALGAS_sortDescriptorListForGeneration & in_SORT_5F_ATTRIBUTE_5F_LIST
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cSortedListElement {\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element mObject ;\n\n//--- Constructor\n  public: cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_566_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_566 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_566.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_566.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_566.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue ()) ;
      if (enumerator_566.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_566_.increment () ;
      enumerator_566.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cSortedListElement * copy (void) ;\n\n//--- Virtual method for comparing elements\n  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Description\n public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n\n//--- Virtual method that comparing element for sorting\n  public: virtual ComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\ncSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1638_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1638 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1638.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1638.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1638.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue ()) ;
      if (enumerator_1638.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1638_.increment () ;
      enumerator_1638.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncSortedListElement (THERE),\nmObject (") ;
  GALGAS_uint index_1931_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1931 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1931.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1931.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 47)).stringValue ()) ;
      if (enumerator_1931.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_1931_.increment () ;
      enumerator_1931.gotoNextObject () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mObject.isValid () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncSortedListElement * cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copy (void) {\n  cSortedListElement * result = nullptr ;\n  macroMyNew (result, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_2582_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2582 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2582.hasCurrentObject ()) {
      result.appendString ("mObject.mProperty_") ;
      result.appendString (enumerator_2582.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 65)).stringValue ()) ;
      if (enumerator_2582.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_2582_.increment () ;
      enumerator_2582.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString, const int32_t inIndentation) const {\n") ;
  GALGAS_uint index_3014_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3014 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3014.hasCurrentObject ()) {
      result.appendString ("  ioString.appendNewLine () ;\n  ioString.appendStringMultiple (\"| \", inIndentation) ;\n  ioString.appendCString (") ;
      result.appendString (enumerator_3014.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 79)).stringValue ()) ;
      result.appendString (" \":\") ;\n  mObject.mProperty_") ;
      result.appendString (enumerator_3014.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 80)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation) ;\n") ;
      index_3014_.increment () ;
      enumerator_3014.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::compare (const cCollectionElement * inOperand) const {\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * operand = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inOperand ;\n  macroValidSharedObject (operand, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return mObject.objectCompare (operand->mObject) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_sortedlist () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::compareForSorting (const cSortedListElement * inOperand) const {\n  ComparisonResult result = ComparisonResult::operandEqual ;\n  const cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * operand = (const cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inOperand ;\n  macroValidSharedObject (operand, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_4543_ (0) ;
  if (in_SORT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_sortDescriptorListForGeneration enumerator_4543 (in_SORT_5F_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4543.hasCurrentObject ()) {
      result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = ") ;
      const enumGalgasBool test_0 = enumerator_4543.current_mAscendingOrder (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("mObject.mProperty_") ;
        result.appendString (enumerator_4543.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue ()) ;
        result.appendString (".objectCompare (operand->mObject.mProperty_") ;
        result.appendString (enumerator_4543.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue ()) ;
        result.appendString (")") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("operand->mObject.mProperty_") ;
        result.appendString (enumerator_4543.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue ()) ;
        result.appendString (".objectCompare (mObject.mProperty_") ;
        result.appendString (enumerator_4543.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue ()) ;
        result.appendString (")") ;
        } break ;
      default :
        break ;
      }
      result.appendString (" ;\n  }\n") ;
      index_4543_.increment () ;
      enumerator_4543.gotoNextObject () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptySortedList (LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.createNewEmptySortedList (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_sortedListWithValue (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5620_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5620 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5620.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5620.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_5620_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue ()) ;
      if (enumerator_5620.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5620_IDX.increment () ;
      enumerator_5620.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = class_func_emptySortedList (THERE) ;\n  cSortedListElement * p = nullptr ;\n  macroMyNew (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_6028_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6028 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6028.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_6028_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 138)).stringValue ()) ;
      if (enumerator_6028.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_6028_IDX.increment () ;
      enumerator_6028.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n  capSortedListElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  result.appendObject (attributes) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6482_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6482 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6482.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6482.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_6482_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue ()) ;
      if (enumerator_6482.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6482_IDX.increment () ;
      enumerator_6482.gotoNextObject () ;
    }
  }
  result.appendString ("\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = nullptr ;\n    macroMyNew (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_6791_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6791 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6791.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_6791_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 162)).stringValue ()) ;
      if (enumerator_6791.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_6791_IDX.increment () ;
      enumerator_6791.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capSortedListElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7232_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7232 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7232.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7232.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 177)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_7232_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 177)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_7232_IDX.increment () ;
      enumerator_7232.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * /* inCompiler */\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = nullptr ;\n    macroMyNew (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_7555_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7555 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7555.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_7555_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 185)).stringValue ()) ;
      if (enumerator_7555.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7555_IDX.increment () ;
      enumerator_7555.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capSortedListElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid ()) {\n    appendSortedList (inOperand) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popSmallest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8405_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8405 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8405.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8405.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_8405_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8405_IDX.increment () ;
      enumerator_8405.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_8896_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8896 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8896.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_8896_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 220)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_8896_IDX.increment () ;
      enumerator_8896.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_9126_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9126 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9126.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_9126_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 226)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_9126.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 226)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_9126_IDX.increment () ;
      enumerator_9126.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popGreatest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9500_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9500 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9500.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9500.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 235)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_9500_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 235)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9500_IDX.increment () ;
      enumerator_9500.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_9991_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9991 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9991.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_9991_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 245)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_9991_IDX.increment () ;
      enumerator_9991.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_10221_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10221 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10221.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_10221_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 251)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_10221.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 251)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_10221_IDX.increment () ;
      enumerator_10221.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_smallest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10592_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10592 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10592.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_10592.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 260)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_10592_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 260)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10592_IDX.increment () ;
      enumerator_10592.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_11086_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11086 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11086.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11086_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 270)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_11086_IDX.increment () ;
      enumerator_11086.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_11316_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11316 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11316.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11316_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 276)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_11316.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 276)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_11316_IDX.increment () ;
      enumerator_11316.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_greatest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11667_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11667 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11667.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11667.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 285)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_11667_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 285)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11667_IDX.increment () ;
      enumerator_11667.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_12161_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12161 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12161.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12161_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 295)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_12161_IDX.increment () ;
      enumerator_12161.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_12391_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12391 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12391.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12391_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_12391.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_12391_IDX.increment () ;
      enumerator_12391.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject,\n                   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const EnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  const cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (const cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return p->mObject ;\n}\n\n") ;
  GALGAS_uint index_13420_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13420 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13420.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_13420.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 324)).stringValue ()) ;
      result.appendString (" cEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_13420.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 324)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  const cSortedListElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cSortedListElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cSortedListElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  return p->mObject.mProperty_") ;
      result.appendString (enumerator_13420.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 327)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_13420_IDX.increment () ;
      enumerator_13420.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                     GALGAS_string & outArgument_outHeader,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sortedListTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_16597 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 424)) ;
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, var_selfTypedefinition_16597.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 427)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 425))) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_16597.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 432)), var_selfTypedefinition_16597.readProperty_isConcrete (), var_selfTypedefinition_16597.readProperty_classFunctionMap (), var_selfTypedefinition_16597.readProperty_mGetterMap (), var_selfTypedefinition_16597.readProperty_mSetterMap (), var_selfTypedefinition_16597.readProperty_mInstanceMethodMap (), var_selfTypedefinition_16597.readProperty_classMethodMap (), var_selfTypedefinition_16597.readProperty_optionalMethodMap (), var_selfTypedefinition_16597.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_16597.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_16597.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_16597.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 430))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 430)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_string & outArgument_outImplementation,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sortedListTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_17803 (temp_0.readProperty_mTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_17803.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17803.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 454)) ;
    enumerator_17803.gotoNextObject () ;
  }
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 456)) ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 457)) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  const GALGAS_sortedListTypeForGeneration temp_4 = this ;
  const GALGAS_sortedListTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 459)), temp_4.readProperty_mTypedAttributeList (), temp_5.readProperty_mSortDescriptorList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 458))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForStruct'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForStruct (Compiler *
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("type-struct.galgas", 81)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-struct.galgas", 82)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-struct.galgas", 83)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-struct.galgas", 84)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForStruct = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForStruct ;

//--------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForStruct (class Compiler * inCompiler
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

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForStruct [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForStruct (Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
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
//
//Overriding extension method '@structDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structDeclarationAST temp_0 = this ;
  const GALGAS_structDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4142 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 104)), temp_1.readProperty_mStructTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 104)) ;
  {
  const GALGAS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4142, temp_2, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 105)) ;
  }
  const GALGAS_structDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4304 (temp_3.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_4304.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey_4343 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (enumerator_4304.current (HERE).readProperty_propertyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 107)), enumerator_4304.current (HERE).readProperty_propertyTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 107)) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4142, var_propertyKey_4343 COMMA_SOURCE_FILE ("type-struct.galgas", 108)) ;
    }
    enumerator_4304.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_structDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_structDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("struct @").add_operation (temp_0.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 115)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap var_optionalMethodMap_5280 = GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("type-struct.galgas", 126)) ;
  GALGAS_unifiedTypeMapEntry var_structTypeIndex_5401 ;
  {
  const GALGAS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mStructTypeName (), var_structTypeIndex_5401, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 128)) ;
  }
  GALGAS_propertyMap var_propertyMap_5479 = GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("type-struct.galgas", 130)) ;
  GALGAS_classFunctionMap var_classFunctionMap_5522 = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("type-struct.galgas", 131)) ;
  GALGAS_functionSignature var_constructorPropertyTypeList_5571 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-struct.galgas", 132)) ;
  GALGAS_typedPropertyList var_typedPropertyList_5631 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-struct.galgas", 133)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_5687 = GALGAS_unifiedTypeMapEntryList::class_func_emptyList (SOURCE_FILE ("type-struct.galgas", 134)) ;
  const GALGAS_structDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5751 (temp_1.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_5751.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_propertyTypeEntry_5841 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5751.current (HERE).readProperty_propertyTypeName (), var_propertyTypeEntry_5841, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 136)) ;
    }
    GALGAS_string temp_2 ;
    const enumGalgasBool test_3 = enumerator_5751.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = enumerator_5751.current (HERE).readProperty_propertyName ().readProperty_string () ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_lstring var_selector_5879 = temp_2.getter_nowhere (SOURCE_FILE ("type-struct.galgas", 137)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = enumerator_5751.current (HERE).readProperty_initialization ().getter_isNone (SOURCE_FILE ("type-struct.galgas", 138)).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_constructorPropertyTypeList_5571.addAssign_operation (var_selector_5879, var_propertyTypeEntry_5841, enumerator_5751.current (HERE).readProperty_propertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("type-struct.galgas", 139)) ;
      }
    }
    var_typesToIncludeInHeaderCompilation_5687.addAssign_operation (var_propertyTypeEntry_5841  COMMA_SOURCE_FILE ("type-struct.galgas", 141)) ;
    var_typedPropertyList_5631.addAssign_operation (var_propertyTypeEntry_5841, enumerator_5751.current (HERE).readProperty_propertyName (), enumerator_5751.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("type-struct.galgas", 145)), enumerator_5751.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("type-struct.galgas", 142)) ;
    {
    var_propertyMap_5479.setter_insertKey (enumerator_5751.current (HERE).readProperty_propertyName (), extensionGetter_accessControl (enumerator_5751.current (HERE).readProperty_accessControl (), var_structTypeIndex_5401, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 149)), enumerator_5751.current (HERE).readProperty_isConstant (), var_propertyTypeEntry_5841, enumerator_5751.current (HERE).readProperty_initialization (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 147)) ;
    }
    enumerator_5751.gotoNextObject () ;
  }
  {
  var_classFunctionMap_5522.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("new"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 156)), var_constructorPropertyTypeList_5571, GALGAS_bool (true), var_structTypeIndex_5401, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 155)) ;
  }
  GALGAS_getterMap var_getterMap_6830 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6830, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 162)) ;
  }
  GALGAS_setterMap var_setterMap_6875 = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("type-struct.galgas", 164)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6941 = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("type-struct.galgas", 166)) ;
  {
  const GALGAS_structDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_mStructTypeName (), GALGAS_bool (false), var_getterMap_6830, var_setterMap_6875, var_instanceMethodMap_6941, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 168)) ;
  }
  GALGAS_unifiedTypeMapEntry var_enumeratedType_7402 ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_structDeclarationAST temp_7 = this ;
    test_6 = GALGAS_bool (ComparisonKind::equal, temp_7.readProperty_mEnumeratedElementTypeName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_enumeratedType_7402 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-struct.galgas", 184)) ;
    }
  }
  if (kBoolFalse == test_6) {
    {
    const GALGAS_structDeclarationAST temp_8 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_8.readProperty_mEnumeratedElementTypeName (), var_enumeratedType_7402, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 186)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_7700 = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_7764 (var_typedPropertyList_5631, EnumerationOrder::up) ;
  bool bool_9 = GALGAS_bool (ComparisonKind::notEqual, var_defaultConstructorName_7700.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_7764.hasCurrentObject () && bool_9) {
    while (enumerator_7764.hasCurrentObject () && bool_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (enumerator_7764.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 194)).readProperty_defaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).operator_or (extensionGetter_definition (enumerator_7764.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 194)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("type-struct.galgas", 194)) COMMA_SOURCE_FILE ("type-struct.galgas", 194)).boolEnum () ;
        if (kBoolTrue == test_10) {
          var_defaultConstructorName_7700 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_7764.gotoNextObject () ;
      if (enumerator_7764.hasCurrentObject ()) {
        bool_9 = GALGAS_bool (ComparisonKind::notEqual, var_defaultConstructorName_7700.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_structDeclarationAST temp_11 = this ;
  const GALGAS_structDeclarationAST temp_12 = this ;
  const GALGAS_structDeclarationAST temp_13 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_8039 = GALGAS_unifiedTypeDefinition::class_func_new (temp_11.readProperty_mStructTypeName (), temp_12.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-struct.galgas", 203)), GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("type-struct.galgas", 204)), GALGAS_bool (false), var_typedPropertyList_5631, var_propertyMap_5479, var_typedPropertyList_5631, var_classFunctionMap_5522, var_getterMap_6830, var_setterMap_6875, var_instanceMethodMap_6941, GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("type-struct.galgas", 213)), var_optionalMethodMap_5280, GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("type-struct.galgas", 215)), GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-struct.galgas", 216)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("type-struct.galgas", 216)) COMMA_SOURCE_FILE ("type-struct.galgas", 216)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("type-struct.galgas", 217)), GALGAS_constantIndexMap::class_func_emptyMap (SOURCE_FILE ("type-struct.galgas", 218)), GALGAS_enumConstantList::class_func_emptyList (SOURCE_FILE ("type-struct.galgas", 219)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-struct.galgas", 220)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("type-struct.galgas", 221)), GALGAS_bool (false), var_enumeratedType_7402, var_defaultConstructorName_7700, GALGAS_string ("struct-").add_operation (temp_13.readProperty_mStructTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-struct.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 225)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-struct.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 199)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8039.readProperty_typeName (), var_typeDefinition_8039, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 228)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                         GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structDeclarationAST temp_0 = this ;
  GALGAS_lstring var_structNameForUsefulness_9851 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mStructTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 242)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_9851, var_structNameForUsefulness_9851, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 243)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_structDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mStructurePropertyListAST ().getter_count (SOURCE_FILE ("type-struct.galgas", 245)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructTypeName ().readProperty_location (), GALGAS_string ("a structure cannot be empty: it must have at least one property"), fixItArray4  COMMA_SOURCE_FILE ("type-struct.galgas", 246)) ;
    }
  }
  GALGAS_typedPropertyList var_typedPropertyList_10218 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-struct.galgas", 248)) ;
  GALGAS_typedPropertyList var_constructorArgumentList_10268 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("type-struct.galgas", 249)) ;
  GALGAS_propertyIndexMap var_propertyMap_10323 = GALGAS_propertyIndexMap::class_func_emptyMap (SOURCE_FILE ("type-struct.galgas", 250)) ;
  const GALGAS_structDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10404 (temp_5.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_10404.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_10467 = function_typeNameForUsefulEntitiesGraph (enumerator_10404.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 252)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_9851, var_propertyTypeNameForUsefulness_10467 COMMA_SOURCE_FILE ("type-struct.galgas", 253)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_10656 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_10404.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 254)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 255)).getter_hasKey (enumerator_10404.current_propertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-struct.galgas", 255)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_m_10800 = GALGAS_string ("an property cannot be named:") ;
        cEnumerator_stringset enumerator_10876 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 257)), EnumerationOrder::up) ;
        while (enumerator_10876.hasCurrentObject ()) {
          var_m_10800.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_10876.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 258)) ;
          enumerator_10876.gotoNextObject () ;
        }
        var_m_10800.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 260)) ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_10404.current_propertyName (HERE).readProperty_location (), var_m_10800, fixItArray7  COMMA_SOURCE_FILE ("type-struct.galgas", 261)) ;
      }
    }
    {
    var_propertyMap_10323.setter_insertKey (enumerator_10404.current_propertyName (HERE), var_t_10656, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 263)) ;
    }
    switch (enumerator_10404.current_initialization (HERE).enumValue ()) {
    case GALGAS_propertyInCollectionInitializationAST::kNotBuilt:
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_none:
      {
        var_constructorArgumentList_10268.addAssign_operation (var_t_10656, enumerator_10404.current_propertyName (HERE), enumerator_10404.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 269)), enumerator_10404.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 266)) ;
      }
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_some:
      {
      }
      break ;
    }
    var_typedPropertyList_10218.addAssign_operation (var_t_10656, enumerator_10404.current_propertyName (HERE), enumerator_10404.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 276)), enumerator_10404.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 273)) ;
    enumerator_10404.gotoNextObject () ;
  }
  GALGAS_string var_initializationCode_11457 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_11489 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("type-struct.galgas", 281)) ;
  GALGAS_uint var_temporaryVariableIndex_11532 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_stringset temp_8 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("type-struct.galgas", 283)) ;
  temp_8.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 283))  COMMA_SOURCE_FILE ("type-struct.galgas", 283)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_11567 = temp_8 ;
  const GALGAS_structDeclarationAST temp_9 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11671 (temp_9.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_11671.hasCurrentObject ()) {
    switch (enumerator_11671.current_initialization (HERE).enumValue ()) {
    case GALGAS_propertyInCollectionInitializationAST::kNotBuilt:
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_none:
      {
      }
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_some:
      {
        const cEnumAssociatedValues_propertyInCollectionInitializationAST_some * extractPtr_13082 = (const cEnumAssociatedValues_propertyInCollectionInitializationAST_some *) (enumerator_11671.current_initialization (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_11786_expressionAST = extractPtr_13082->mAssociatedValue0 ;
        GALGAS_localVarManager var_variableMap_11815 = GALGAS_localVarManager::class_func_new (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 288)) ;
        GALGAS_analysisContext var_analysisContext_11882 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("type-struct.galgas", 293)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 289)) ;
        GALGAS_unifiedTypeMapEntry var_propertyType_12092 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11671.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 297)) ;
        GALGAS_semanticExpressionForGeneration var_expression_12463 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_11786_expressionAST.ptr (), var_structNameForUsefulness_9851, ioArgument_ioUsefulEntitiesGraph, var_propertyType_12092, var_analysisContext_11882, ioArgument_ioTypeMap, var_variableMap_11815, var_expression_12463, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 298)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_propertyType_12092, var_expression_12463.readProperty_mResultType (), enumerator_11671.current_propertyName (HERE).readProperty_location (), var_expression_12463, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 308)) ;
        }
        GALGAS_string var_sourceVar_12889 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) var_expression_12463.ptr (), var_initializationCode_11457, var_inclusionSet_11489, var_temporaryVariableIndex_11532, var_unusedVariableCppNameSet_11567, var_sourceVar_12889, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 314)) ;
        var_initializationCode_11457.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (var_propertyType_12092, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 321)) ;
        var_initializationCode_11457.plusAssign_operation(GALGAS_string (" in_").add_operation (enumerator_11671.current_propertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 322)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 322)).add_operation (var_sourceVar_12889, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 322)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 322)) ;
      }
      break ;
    }
    enumerator_11671.gotoNextObject () ;
  }
  GALGAS_bool var_constructorNeedsCompilerVar_13123 = var_unusedVariableCppNameSet_11567.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 327)) COMMA_SOURCE_FILE ("type-struct.galgas", 327)).operator_not (SOURCE_FILE ("type-struct.galgas", 327)) ;
  const GALGAS_structDeclarationAST temp_10 = this ;
  const GALGAS_structDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (temp_10.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 329)), GALGAS_structTypeForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mStructTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 331)), var_typedPropertyList_10218, var_constructorArgumentList_10268, var_initializationCode_11457, var_constructorNeedsCompilerVar_13123  COMMA_SOURCE_FILE ("type-struct.galgas", 330))  COMMA_SOURCE_FILE ("type-struct.galgas", 328)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'structureGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structureGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structureGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_structureGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structureGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structureGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structureGenerationTemplate structTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (Compiler * inCompiler,
                                                                                    const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                    const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const GALGAS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                    const GALGAS_typedPropertyList & /* in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Properties\n") ;
  GALGAS_uint index_445_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_445 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_445.hasCurrentObject ()) {
      result.appendString ("  public: GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_445.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_445.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" ;\n  public: inline GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_445.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_445.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue ()) ;
      result.appendString (" (void) const {\n    return mProperty_") ;
      result.appendString (enumerator_445.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (" ;\n  }\n\n") ;
      index_445_.increment () ;
      enumerator_445.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Property setters\n") ;
  GALGAS_uint index_1200_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1200 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1200.hasCurrentObject ()) {
      result.appendString ("  public: inline void setter_set") ;
      result.appendString (enumerator_1200.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 26)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" (const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1200.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" & inValue COMMA_UNUSED_LOCATION_ARGS) {\n    mProperty_") ;
      result.appendString (enumerator_1200.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" = inValue ;\n  }\n\n") ;
      index_1200_.increment () ;
      enumerator_1200.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------- Virtual destructor (in debug mode)\n  public: virtual ~ GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1803_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1803 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1803.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1803.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1803.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 35)).stringValue ()) ;
      if (enumerator_1803.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1803_.increment () ;
      enumerator_1803.gotoNextObject () ;
    }
  }
  result.appendString (") ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structureGenerationTemplate structTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                const GALGAS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                                const GALGAS_typedPropertyList & in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST,
                                                                                                const GALGAS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                                const GALGAS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  GALGAS_uint index_248_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_248 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_248.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_248.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 6)).stringValue ()) ;
      result.appendString (" ()") ;
      if (enumerator_248.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_248_.increment () ;
      enumerator_248.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_751_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_751 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_751.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_751.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_751_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue ()) ;
      if (enumerator_751.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_751_IDX.increment () ;
      enumerator_751.gotoNextObject () ;
    }
  }
  result.appendString (") :\n") ;
  GALGAS_uint index_958_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_958 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_958.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_958.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (" (inOperand") ;
      result.appendString (index_958_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (")") ;
      if (enumerator_958.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_958_IDX.increment () ;
      enumerator_958.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_new (") ;
  columnMarker = result.currentColumn () ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 33)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    const enumGalgasBool test_1 = in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR.boolEnum () ;
    switch (test_1) {
    case kBoolTrue : {
      result.appendString ("Compiler * inCompiler\n") ;
      } break ;
    case kBoolFalse : {
      result.appendString ("Compiler * /* inCompiler */\n") ;
      } break ;
    default :
      break ;
    }
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n") ;
    } break ;
  case kBoolFalse : {
    GALGAS_uint index_1518_ (0) ;
    if (in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1518 (in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_1518.hasCurrentObject ()) {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1518.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 42)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_1518.current_mPropertyName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_1518_.increment () ;
        enumerator_1518.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_2 = in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR.boolEnum () ;
    switch (test_2) {
    case kBoolTrue : {
      result.appendString ("Compiler * inCompiler\n") ;
      } break ;
    case kBoolFalse : {
      result.appendString ("Compiler * /* inCompiler */\n") ;
      } break ;
    default :
      break ;
    }
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString (in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue ()) ;
  result.appendString ("  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (") ;
  GALGAS_uint index_1895_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1895 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1895.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1895.current_mPropertyName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (".isValid ()") ;
      if (enumerator_1895.hasNextObject ()) {
        result.appendString (" && ") ;
      }
      index_1895_.increment () ;
      enumerator_1895.gotoNextObject () ;
    }
  }
  result.appendString (") {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_2067_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2067 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2067.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_2067.current_mPropertyName (HERE).readProperty_string ().stringValue ()) ;
      if (enumerator_2067.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_2067_.increment () ;
      enumerator_2067.gotoNextObject () ;
    }
  }
  result.appendString (") ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::operandEqual ;\n") ;
  GALGAS_uint index_2504_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2504 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2504.hasCurrentObject ()) {
      result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = mProperty_") ;
      result.appendString (enumerator_2504.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 76)).stringValue ()) ;
      result.appendString (".objectCompare (inOperand.mProperty_") ;
      result.appendString (enumerator_2504.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 76)).stringValue ()) ;
      result.appendString (") ;\n  }\n") ;
      index_2504_.increment () ;
      enumerator_2504.gotoNextObject () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return ") ;
  GALGAS_uint index_3012_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3012 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3012.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_3012.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 87)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      if (enumerator_3012.hasNextObject ()) {
        result.appendString (" && ") ;
      }
      index_3012_.increment () ;
      enumerator_3012.gotoNextObject () ;
    }
  }
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n") ;
  GALGAS_uint index_3353_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3353 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3353.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_3353.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 97)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_3353_.increment () ;
      enumerator_3353.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"<struct @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (":\") ;\n  if (! isValid ()) {\n    ioString.appendCString (\" not built\") ;\n  }else{\n") ;
  GALGAS_uint index_3894_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3894 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3894.hasCurrentObject ()) {
      result.appendString ("    mProperty_") ;
      result.appendString (enumerator_3894.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 111)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation+1) ;\n") ;
      if (enumerator_3894.hasNextObject ()) {
        result.appendString ("    ioString.appendCString (\", \") ;\n") ;
      }
      index_3894_IDX.increment () ;
      enumerator_3894.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                 GALGAS_string & outArgument_outHeader,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_15061 (temp_0.readProperty_mTypedPropertyList (), EnumerationOrder::up) ;
  while (enumerator_15061.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_15061.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 380)) ;
    enumerator_15061.gotoNextObject () ;
  }
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_15156 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 382)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (inCompiler, var_selfTypedefinition_15156.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 385)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList () COMMA_SOURCE_FILE ("type-struct.galgas", 383))) ;
  const GALGAS_structTypeForGeneration temp_5 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_15156.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 391)), var_selfTypedefinition_15156.readProperty_isConcrete (), var_selfTypedefinition_15156.readProperty_classFunctionMap (), var_selfTypedefinition_15156.readProperty_mGetterMap (), var_selfTypedefinition_15156.readProperty_mSetterMap (), var_selfTypedefinition_15156.readProperty_mInstanceMethodMap (), var_selfTypedefinition_15156.readProperty_classMethodMap (), var_selfTypedefinition_15156.readProperty_optionalMethodMap (), var_selfTypedefinition_15156.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_15156.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_15156.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_15156.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-struct.galgas", 389))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 389)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outImplementation,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 413)) ;
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_16452 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 414)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  const GALGAS_structTypeForGeneration temp_5 = this ;
  const GALGAS_structTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (inCompiler, var_selfTypedefinition_16452.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 417)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), temp_6.readProperty_mConstructorNeedsCompilerVar () COMMA_SOURCE_FILE ("type-struct.galgas", 415))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typealiasDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typealiasDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_typealiasDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("typealias @").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 212)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typealiasDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typealiasDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & /* ioArgument_ioSemanticDeclarationList */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typealiasDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typealiasDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                   GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                   GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                   GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                   GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                   GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typealiasDeclarationAST temp_0 = this ;
  const GALGAS_typealiasDeclarationAST temp_1 = this ;
  GALGAS_lstring var_aliasKey_8409 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 229)), temp_1.readProperty_mAliasTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 229)) ;
  {
  const GALGAS_typealiasDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_aliasKey_8409, temp_2, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 230)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_3 = this ;
  const GALGAS_typealiasDeclarationAST temp_4 = this ;
  GALGAS_lstring var_referenceKey_8562 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mDefinedTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 231)), temp_4.readProperty_mDefinedTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 231)) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_aliasKey_8409, var_referenceKey_8562 COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 232)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typealiasDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typealiasDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                             const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                             const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_definedTypeEntry_9436 ;
  {
  const GALGAS_typealiasDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mDefinedTypeName ().readProperty_string (), var_definedTypeEntry_9436, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 243)) ;
  }
  switch (var_definedTypeEntry_9436.enumValue ()) {
  case GALGAS_unifiedTypeMapEntry::kNotBuilt:
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_null:
    {
      const GALGAS_typealiasDeclarationAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mDefinedTypeName ().readProperty_location (), GALGAS_string ("Undefined type"), fixItArray2  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 246)) ;
    }
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_element:
    {
      const cEnumAssociatedValues_unifiedTypeMapEntry_element * extractPtr_11439 = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) (var_definedTypeEntry_9436.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapElementClass_2D_weak extractedValue_9602_weakElement = extractPtr_11439->mAssociatedValue0 ;
      switch (extractedValue_9602_weakElement.bang_unifiedTypeMapElementClass_2D_weak (inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 248)).readProperty_mDefinition ().enumValue ()) {
      case GALGAS_typeDefinition::kNotBuilt:
        break ;
      case GALGAS_typeDefinition::kEnum_unsolved:
        {
          const GALGAS_typealiasDeclarationAST temp_3 = this ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mDefinedTypeName ().readProperty_location (), GALGAS_string ("Undefined type"), fixItArray4  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 250)) ;
        }
        break ;
      case GALGAS_typeDefinition::kEnum_solved:
        {
          const cEnumAssociatedValues_typeDefinition_solved * extractPtr_11431 = (const cEnumAssociatedValues_typeDefinition_solved *) (extractedValue_9602_weakElement.bang_unifiedTypeMapElementClass_2D_weak (inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 248)).readProperty_mDefinition ().unsafePointer ()) ;
          const GALGAS_unifiedTypeDefinition extractedValue_9778_def = extractPtr_11431->mAssociatedValue0 ;
          const GALGAS_typealiasDeclarationAST temp_5 = this ;
          GALGAS_unifiedTypeDefinition var_definition_9797 = GALGAS_unifiedTypeDefinition::class_func_new (extractedValue_9778_def.readProperty_typeName (), GALGAS_bool (false), extractedValue_9778_def.readProperty_isConcrete (), extractedValue_9778_def.readProperty_superType (), extractedValue_9778_def.readProperty_typeKind (), extractedValue_9778_def.readProperty_supportCollectionValue (), extractedValue_9778_def.readProperty_allTypedPropertyList (), extractedValue_9778_def.readProperty_propertyMap (), extractedValue_9778_def.readProperty_currentTypedPropertyList (), extractedValue_9778_def.readProperty_classFunctionMap (), extractedValue_9778_def.readProperty_mGetterMap (), extractedValue_9778_def.readProperty_mSetterMap (), extractedValue_9778_def.readProperty_mInstanceMethodMap (), extractedValue_9778_def.readProperty_classMethodMap (), extractedValue_9778_def.readProperty_optionalMethodMap (), extractedValue_9778_def.readProperty_mEnumerationDescriptor (), extractedValue_9778_def.readProperty_mHandledOperatorFlags (), extractedValue_9778_def.readProperty_mAddAssignOperatorArguments (), extractedValue_9778_def.readProperty_enumConstantMap (), extractedValue_9778_def.readProperty_enumConstantList (), extractedValue_9778_def.readProperty_mMapSearchMethodList (), extractedValue_9778_def.readProperty_mMapEntrySearchConstructorList (), extractedValue_9778_def.readProperty_mGenerateHeaderInSeparateFile (), extractedValue_9778_def.readProperty_mTypeForEnumeratedElement (), extractedValue_9778_def.readProperty_defaultConstructorName (), GALGAS_string ("typealias-").add_operation (temp_5.readProperty_mAliasTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 278)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 252)) ;
          {
          const GALGAS_typealiasDeclarationAST temp_6 = this ;
          extensionSetter_insertType (ioArgument_ioTypeMap, temp_6.readProperty_mAliasTypeName (), var_definition_9797, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 281)) ;
          }
        }
        break ;
      }
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typealiasDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typealiasDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                            const GALGAS_string /* constinArgument_inProductDirectory */,
                                                            const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                            GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typealiasDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_12179 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mAliasTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 296)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12179, var_nameForUsefulness_12179, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 297)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_1 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_12337 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mDefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 298)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12179, var_elementTypeNameForUsefulness_12337 COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 299)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_t_12576 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mDefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 301)) ;
  const GALGAS_typealiasDeclarationAST temp_3 = this ;
  const GALGAS_typealiasDeclarationAST temp_4 = this ;
  const GALGAS_typealiasDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("typealias ").add_operation (temp_3.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 303)), GALGAS_aliasTypeForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_mAliasTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 304)), temp_5.readProperty_mAliasTypeName ().readProperty_string (), var_t_12576  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 304))  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 302)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@aliasTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_aliasTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_aliasTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_mReferencedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 323)) ;
  const GALGAS_aliasTypeForGeneration temp_1 = this ;
  const GALGAS_aliasTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_typeAliasTypeHeader_31_ (inCompiler, temp_1.readProperty_mAliasTypeName ().getter_identifierRepresentation (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 325)), extensionGetter_identifierRepresentation (temp_2.readProperty_mReferencedType (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 326)) COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 324))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@aliasTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_aliasTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                       GALGAS_string & outArgument_outImplementation,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@aliasTypeForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_aliasTypeForGeneration::getter_appendTypeGenericImplementation (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_abstractExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  const GALGAS_abstractExtensionGetterAST temp_1 = this ;
  result_result = GALGAS_string ("abstract extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                      GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  const GALGAS_abstractExtensionGetterAST temp_1 = this ;
  const GALGAS_abstractExtensionGetterAST temp_2 = this ;
  GALGAS_lstring var_key_6959 = GALGAS_lstring::class_func_new (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 163)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 163)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 163)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 162)) ;
  {
  const GALGAS_abstractExtensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6959, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 166)) ;
  }
  {
  const GALGAS_abstractExtensionGetterAST temp_4 = this ;
  const GALGAS_abstractExtensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6959, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 167)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 167)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 167)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 169)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 169)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::class_func_emptyMap (SOURCE_FILE ("extension-abstract-getter.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 170)) ;
      }
    }
  }
  const GALGAS_abstractExtensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_7476 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 175)) ;
  if (nullptr != objectArray_7476) {
    macroValidSharedObject (objectArray_7476, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionGetterAST temp_10 = this ;
    const GALGAS_abstractExtensionGetterAST temp_11 = this ;
    const GALGAS_abstractExtensionGetterAST temp_12 = this ;
    objectArray_7476->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionGetterName (), temp_11.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_12.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("extension-abstract-getter.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 176)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9206 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 212)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_9206, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 214)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-getter.galgas", 214)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 214)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionGetterAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9206, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 216)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 216)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 216)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 215)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_9206, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 217)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionGetterAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9206, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 219)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 219)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 219)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)) ;
      }
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9820 = GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("extension-abstract-getter.galgas", 222)) ;
  const GALGAS_abstractExtensionGetterAST temp_7 = this ;
  cEnumerator_formalInputParameterListAST enumerator_9927 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), EnumerationOrder::up) ;
  while (enumerator_9927.hasCurrentObject ()) {
    var_formalParameterListForGeneration_9820.addAssign_operation (enumerator_9927.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9927.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 226)), enumerator_9927.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_9927.current_mFormalArgumentName (HERE), enumerator_9927.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 224)) ;
    enumerator_9927.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterAST temp_8 = this ;
  const GALGAS_abstractExtensionGetterAST temp_9 = this ;
  const GALGAS_abstractExtensionGetterAST temp_10 = this ;
  const GALGAS_abstractExtensionGetterAST temp_11 = this ;
  const GALGAS_abstractExtensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 233)), GALGAS_abstractExtensionGetterForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 236)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 236)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 236)), var_selfType_9206, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 239)), var_formalParameterListForGeneration_9820  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 234))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 232)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

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
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  const GALGAS_abstractExtensionGetterAST temp_1 = this ;
  ioArgument_ioAbstractExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 262)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 279)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_1 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_2 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 289)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 288))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 304)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 303)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 304)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 305))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 303)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 306)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 307)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_4 = this ;
  cEnumerator_formalInputParameterListForGeneration enumerator_14062 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_14062.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14062.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 309)) ;
    enumerator_14062.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_6 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_7 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 312)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_8.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 311))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                      GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  const GALGAS_abstractExtensionMethodAST temp_1 = this ;
  const GALGAS_abstractExtensionMethodAST temp_2 = this ;
  GALGAS_lstring var_key_5440 = GALGAS_lstring::class_func_new (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 122)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 122)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 122)), temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 121)) ;
  {
  const GALGAS_abstractExtensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5440, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 125)) ;
  }
  {
  const GALGAS_abstractExtensionMethodAST temp_4 = this ;
  const GALGAS_abstractExtensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5440, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 126)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 126)) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 126)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 128)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 128)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::class_func_emptyMap (SOURCE_FILE ("extension-abstract-method.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 129)) ;
      }
    }
  }
  const GALGAS_abstractExtensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_5957 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 134)) ;
  if (nullptr != objectArray_5957) {
    macroValidSharedObject (objectArray_5957, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionMethodAST temp_10 = this ;
    const GALGAS_abstractExtensionMethodAST temp_11 = this ;
    objectArray_5957->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionMethodName (), temp_11.readProperty_mAbstractExtensionMethodFormalParameterList (), GALGAS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("extension-abstract-method.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 135)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_abstractExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  const GALGAS_abstractExtensionMethodAST temp_1 = this ;
  result_result = GALGAS_string ("abstract extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_8244 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 180)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8244, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 182)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-method.galgas", 182)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 182)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionMethodAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_8244, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 183)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 183)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 183)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 183)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8244, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 184)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionMethodAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_8244, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 185)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 185)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 185)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 185)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8803 = GALGAS_formalParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("extension-abstract-method.galgas", 188)) ;
  const GALGAS_abstractExtensionMethodAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_8969 (temp_7.readProperty_mAbstractExtensionMethodFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_8969.hasCurrentObject ()) {
    var_formalParameterListForGeneration_8803.addAssign_operation (enumerator_8969.current_mFormalSelector (HERE), enumerator_8969.current_mFormalArgumentPassingMode (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8969.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 193)), enumerator_8969.current_mFormalArgumentName (HERE), enumerator_8969.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 190)) ;
    enumerator_8969.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodAST temp_8 = this ;
  const GALGAS_abstractExtensionMethodAST temp_9 = this ;
  const GALGAS_abstractExtensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (temp_8.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 199)), GALGAS_abstractExtensionMethodForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_8244, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 202)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 202)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 202)).add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 202)), var_selfType_8244, temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_8803  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 200))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 198)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

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
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  const GALGAS_abstractExtensionMethodAST temp_1 = this ;
  ioArgument_ioAbstractExtensionMethodListMapAST.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 226)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_1 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 247)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), temp_2.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 246))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 256)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 265)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 265)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 265)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 265))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 265)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 266)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_13134 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_13134.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13134.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 268)) ;
    enumerator_13134.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, temp_4.readProperty_mReceiverType (), temp_5.readProperty_mAbstractExtensionMethodName (), temp_6.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 270))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GALGAS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  const GALGAS_abstractExtensionSetterAST temp_1 = this ;
  const GALGAS_abstractExtensionSetterAST temp_2 = this ;
  GALGAS_lstring var_key_3910 = GALGAS_lstring::class_func_new (GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 80)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 80)), temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 80)) ;
  {
  const GALGAS_abstractExtensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3910, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 81)) ;
  }
  {
  const GALGAS_abstractExtensionSetterAST temp_4 = this ;
  const GALGAS_abstractExtensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3910, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 82)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 82)) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 82)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 84)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 84)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionSetterMapForType::class_func_emptyMap (SOURCE_FILE ("extension-abstract-setter.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 85)) ;
      }
    }
  }
  const GALGAS_abstractExtensionSetterAST temp_9 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_4415 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 90)) ;
  if (nullptr != objectArray_4415) {
    macroValidSharedObject (objectArray_4415, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionSetterAST temp_10 = this ;
    const GALGAS_abstractExtensionSetterAST temp_11 = this ;
    objectArray_4415->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionSetterName (), temp_11.readProperty_mAbstractExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 91)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_abstractExtensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  const GALGAS_abstractExtensionSetterAST temp_1 = this ;
  result_result = GALGAS_string ("abstract extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 103)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 103)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 103)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_6676 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 136)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_6676, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 138)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-setter.galgas", 138)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 138)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionSetterAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_6676, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 139)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 139)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 139)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 139)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_6676, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 140)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionSetterAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_6676, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 141)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 141)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 141)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 141)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_7236 = GALGAS_formalParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("extension-abstract-setter.galgas", 144)) ;
  const GALGAS_abstractExtensionSetterAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_7402 (temp_7.readProperty_mAbstractExtensionSetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_7402.hasCurrentObject ()) {
    var_formalParameterListForGeneration_7236.addAssign_operation (enumerator_7402.current_mFormalSelector (HERE), enumerator_7402.current_mFormalArgumentPassingMode (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_7402.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 149)), enumerator_7402.current_mFormalArgumentName (HERE), enumerator_7402.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 146)) ;
    enumerator_7402.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterAST temp_8 = this ;
  const GALGAS_abstractExtensionSetterAST temp_9 = this ;
  const GALGAS_abstractExtensionSetterAST temp_10 = this ;
  const GALGAS_abstractExtensionSetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (temp_8.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 155)), GALGAS_abstractExtensionSetterForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 158)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 158)).add_operation (temp_10.readProperty_mAbstractExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 158)), var_selfType_6676, temp_11.readProperty_mAbstractExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_7236  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 156))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 154)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

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
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  const GALGAS_abstractExtensionSetterAST temp_1 = this ;
  ioArgument_ioAbstractExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 183)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 201)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_1 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 210)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName (), temp_2.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 209))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 223)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 223)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 223)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 223))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 223)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 224)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_11322 (temp_3.readProperty_mAbstractExtensionSetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_11322.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11322.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 226)) ;
    enumerator_11322.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 229)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mAbstractExtensionSetterName (), temp_6.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 228))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_extensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  result_result = GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 179)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 179)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 179)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  const GALGAS_extensionGetterAST temp_2 = this ;
  GALGAS_lstring var_key_8188 = GALGAS_lstring::class_func_new (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 193)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 193)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 193)), temp_2.readProperty_mExtensionGetterName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 193)) ;
  {
  const GALGAS_extensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8188, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 194)) ;
  }
  {
  const GALGAS_extensionGetterAST temp_4 = this ;
  const GALGAS_extensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_8188, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 195)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 195)) COMMA_SOURCE_FILE ("extension-getter.galgas", 195)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-getter.galgas", 197)).operator_not (SOURCE_FILE ("extension-getter.galgas", 197)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::class_func_emptyMap (SOURCE_FILE ("extension-getter.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 198)) ;
      }
    }
  }
  const GALGAS_extensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_8677 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 203)) ;
  if (nullptr != objectArray_8677) {
    macroValidSharedObject (objectArray_8677, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_extensionGetterAST temp_10 = this ;
    const GALGAS_extensionGetterAST temp_11 = this ;
    const GALGAS_extensionGetterAST temp_12 = this ;
    objectArray_8677->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionGetterName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-getter.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 204)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  GALGAS_lstring var_nameForUsefulness_10327 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 240)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10327, var_nameForUsefulness_10327, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 241)) ;
  }
  const GALGAS_extensionGetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_10505 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 242)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_10505, var_nameForUsefulness_10327 COMMA_SOURCE_FILE ("extension-getter.galgas", 243)) ;
  }
  const GALGAS_extensionGetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_10698 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 245)) ;
  GALGAS_string var_selfObjectNameNew_10809 ;
  GALGAS_string var_selfObjectAccessorNew_10841 ;
  GALGAS_bool var_implementedAsFunctionNew_10875 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10698, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 250)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 250)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectNameNew_10809 = GALGAS_string ("this") ;
      var_selfObjectAccessorNew_10841 = GALGAS_string ("this->") ;
      var_implementedAsFunctionNew_10875 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameNew_10809 = GALGAS_string ("inObject") ;
    var_selfObjectAccessorNew_10841 = GALGAS_string ("inObject.") ;
    var_implementedAsFunctionNew_10875 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionGetterAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContextNew_11220 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_10809, GALGAS_selfAvailability::class_func_available (var_selfType_10698, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("extension-getter.galgas", 264)), var_selfObjectAccessorNew_10841, temp_5.readProperty_requiresSelfForAccessingProperty (), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 260)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_12151 ;
  GALGAS_unifiedTypeMapEntry var_returnType_12193 ;
  GALGAS_string var_returnVariableCppName_12213 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_12244 ;
  {
  const GALGAS_extensionGetterAST temp_6 = this ;
  GALGAS_typedPropertyList temp_7 ;
  const enumGalgasBool test_8 = extensionGetter_definition (var_selfType_10698, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 274)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 274)).operator_or (GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_10698, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 274)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-getter.galgas", 274)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 274)).operator_or (GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_10698, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 274)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_sharedMapEntryType (SOURCE_FILE ("extension-getter.galgas", 274)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 274)).boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = extensionGetter_definition (var_selfType_10698, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 275)).readProperty_allTypedPropertyList () ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("extension-getter.galgas", 276)) ;
  }
  const GALGAS_extensionGetterAST temp_9 = this ;
  const GALGAS_extensionGetterAST temp_10 = this ;
  const GALGAS_extensionGetterAST temp_11 = this ;
  const GALGAS_extensionGetterAST temp_12 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_10327, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_11220, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionGetterFormalInputParameterList (), temp_7, var_selfObjectAccessorNew_10841, temp_9.readProperty_mExtensionGetterInstructionList (), temp_10.readProperty_mExtensionGetterReturnedVariableName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_12151, var_returnType_12193, var_returnVariableCppName_12213, var_semanticInstructionListForGeneration_12244, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 268)) ;
  }
  const GALGAS_extensionGetterAST temp_13 = this ;
  const GALGAS_extensionGetterAST temp_14 = this ;
  const GALGAS_extensionGetterAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (temp_13.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 290)), GALGAS_extensionGetterForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_selfType_10698, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 293)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 293)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 293)).add_operation (temp_14.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 293)), var_selfType_10698, temp_15.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunctionNew_10875, var_returnType_12193, var_returnVariableCppName_12213, var_formalParameterListForGeneration_12151, extensionGetter_definition (var_selfType_10698, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 300)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_12244  COMMA_SOURCE_FILE ("extension-getter.galgas", 291))  COMMA_SOURCE_FILE ("extension-getter.galgas", 289)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

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
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  ioArgument_ioExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 322)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-getter.galgas", 345)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
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
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 354)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionGetterName (), temp_4.readProperty_mExtensionGetterFormalParameterList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 357)) COMMA_SOURCE_FILE ("extension-getter.galgas", 353))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionGetterForGeneration temp_6 = this ;
    const GALGAS_extensionGetterForGeneration temp_7 = this ;
    const GALGAS_extensionGetterForGeneration temp_8 = this ;
    const GALGAS_extensionGetterForGeneration temp_9 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 361)).readProperty_typeName ().readProperty_string (), temp_7.readProperty_mExtensionGetterName (), temp_8.readProperty_mExtensionGetterFormalParameterList (), temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 360))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionGetterForGeneration temp_0 = this ;
  cEnumerator_formalInputParameterListForGeneration enumerator_16620 (temp_0.readProperty_mExtensionGetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_16620.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16620.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 376)) ;
    enumerator_16620.gotoNextObject () ;
  }
  const GALGAS_extensionGetterForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 378)) ;
  const GALGAS_extensionGetterForGeneration temp_2 = this ;
  GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_16799 = temp_2.readProperty_mExtensionGetterFormalParameterList () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_extensionGetterForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_extensionGetterForGeneration temp_5 = this ;
      var_extensionReaderFormalParameterList_16799.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 382)), temp_5.readProperty_mReceiverType (), GALGAS_string ("inObject"), GALGAS_lstring::class_func_new (GALGAS_string ("self"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 385)), GALGAS_bool (true), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 381)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_6 = this ;
      const GALGAS_extensionGetterForGeneration temp_7 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 390)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 389)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 390)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 391))  COMMA_SOURCE_FILE ("extension-getter.galgas", 389)) ;
      GALGAS_string var_code_17654 ;
      {
      const GALGAS_extensionGetterForGeneration temp_8 = this ;
      const GALGAS_extensionGetterForGeneration temp_9 = this ;
      const GALGAS_extensionGetterForGeneration temp_10 = this ;
      const GALGAS_extensionGetterForGeneration temp_11 = this ;
      routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GALGAS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 393)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_16799, temp_9.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GALGAS_bool (false), GALGAS_bool (false), var_code_17654, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 392)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_12 = this ;
      const GALGAS_extensionGetterForGeneration temp_13 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 405)).readProperty_typeName ().readProperty_string (), temp_13.readProperty_mExtensionGetterName (), var_code_17654 COMMA_SOURCE_FILE ("extension-getter.galgas", 404))) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_extensionGetterForGeneration temp_14 = this ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 410)) ;
    const GALGAS_extensionGetterForGeneration temp_15 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_17980 = temp_15.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_18024 = GALGAS_bool (true) ;
    if (GALGAS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas", 413)).isValid ()) {
      uint32_t variant_18045 = GALGAS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas", 413)).uintValue () ;
      bool loop_18045 = true ;
      while (loop_18045) {
        loop_18045 = var_searching_18024.isValid () ;
        if (loop_18045) {
          loop_18045 = var_searching_18024.boolValue () ;
        }
        if (loop_18045 && (0 == variant_18045)) {
          loop_18045 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 413)) ;
        }
        if (loop_18045) {
          variant_18045 -- ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = extensionGetter_definition (var_baseType_17980, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 414)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-getter.galgas", 414)).operator_not (SOURCE_FILE ("extension-getter.galgas", 414)).boolEnum () ;
            if (kBoolTrue == test_16) {
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                const GALGAS_extensionGetterForGeneration temp_18 = this ;
                test_17 = extensionGetter_definition (extensionGetter_definition (var_baseType_17980, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 415)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 415)).readProperty_mGetterMap ().getter_hasKey (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas", 415)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  var_baseType_17980 = extensionGetter_definition (var_baseType_17980, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 416)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_17) {
                var_searching_18024 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_16) {
            var_searching_18024 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionGetterForGeneration temp_19 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_17980, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 425)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 424)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 425)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 426))  COMMA_SOURCE_FILE ("extension-getter.galgas", 424)) ;
    GALGAS_string var_extensionGetterCode_18979 ;
    {
    const GALGAS_extensionGetterForGeneration temp_20 = this ;
    const GALGAS_extensionGetterForGeneration temp_21 = this ;
    const GALGAS_extensionGetterForGeneration temp_22 = this ;
    const GALGAS_extensionGetterForGeneration temp_23 = this ;
    const GALGAS_extensionGetterForGeneration temp_24 = this ;
    routine_generateExtensionGetterNew_3F__26__3F__3F__3F__3F__3F__21_ (GALGAS_string ("cPtr_").add_operation (extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 428)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 428)).add_operation (GALGAS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 428)).add_operation (temp_21.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 428)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_16799, temp_22.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("Compiler"), temp_23.readProperty_mResultType (), temp_24.readProperty_mResultVarCppName (), var_extensionGetterCode_18979, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 427)) ;
    }
    const GALGAS_extensionGetterForGeneration temp_25 = this ;
    const GALGAS_extensionGetterForGeneration temp_26 = this ;
    const GALGAS_extensionGetterForGeneration temp_27 = this ;
    const GALGAS_extensionGetterForGeneration temp_28 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, extensionGetter_definition (temp_25.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 438)).readProperty_typeName ().readProperty_string (), temp_26.readProperty_mExtensionGetterName (), temp_27.readProperty_mExtensionGetterFormalParameterList (), var_extensionGetterCode_18979, temp_28.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 437))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_extensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  result_result = GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 136)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 136)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 136)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  const GALGAS_extensionMethodAST temp_2 = this ;
  GALGAS_lstring var_key_6588 = GALGAS_lstring::class_func_new (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 149)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 149)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 149)), temp_2.readProperty_mExtensionMethodName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 148)) ;
  {
  const GALGAS_extensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6588, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 152)) ;
  }
  {
  const GALGAS_extensionMethodAST temp_4 = this ;
  const GALGAS_extensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6588, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 153)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 153)) COMMA_SOURCE_FILE ("extension-method.galgas", 153)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-method.galgas", 155)).operator_not (SOURCE_FILE ("extension-method.galgas", 155)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::class_func_emptyMap (SOURCE_FILE ("extension-method.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 156)) ;
      }
    }
  }
  const GALGAS_extensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_7116 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 161)) ;
  if (nullptr != objectArray_7116) {
    macroValidSharedObject (objectArray_7116, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_extensionMethodAST temp_10 = this ;
    const GALGAS_extensionMethodAST temp_11 = this ;
    objectArray_7116->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mExtensionMethodName (), temp_11.readProperty_mExtensionMethodFormalParameterList (), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-method.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 162)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  GALGAS_lstring var_nameForUsefulness_8620 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 191)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8620, var_nameForUsefulness_8620, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 192)) ;
  }
  const GALGAS_extensionMethodAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_8802 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 193)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_8802, var_nameForUsefulness_8620 COMMA_SOURCE_FILE ("extension-method.galgas", 194)) ;
  }
  const GALGAS_extensionMethodAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9002 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 196)) ;
  GALGAS_string var_selfObjectNameNew_9078 ;
  GALGAS_string var_selfObjectAccessorNew_9112 ;
  GALGAS_bool var_implementedAsFunction_9148 ;
  GALGAS_bool var_isReferenceClass_9212 = GALGAS_bool (false) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_isReference_9308 ;
    const bool optionalResult9280 = extensionGetter_definition (var_selfType_9002, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 202)).readProperty_typeKind ().optional_classType (var_isReference_9308) ;
    if (!optionalResult9280) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      var_isReferenceClass_9212 = var_isReference_9308 ;
      var_selfObjectNameNew_9078 = GALGAS_string ("this") ;
      var_selfObjectAccessorNew_9112 = GALGAS_string ("this->") ;
      var_implementedAsFunction_9148 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameNew_9078 = GALGAS_string ("inObject") ;
    var_selfObjectAccessorNew_9112 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_9148 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionMethodAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContextNew_9642 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_9078, GALGAS_selfAvailability::class_func_available (var_selfType_9002, GALGAS_bool (false), var_isReferenceClass_9212  COMMA_SOURCE_FILE ("extension-method.galgas", 217)), var_selfObjectAccessorNew_9112, temp_5.readProperty_requiresSelfForAccessingProperty (), inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 213)) ;
  GALGAS_bool var_isRefClass_9983 = GALGAS_bool (false) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    GALGAS_bool var_reference_10073 ;
    const bool optionalResult10045 = extensionGetter_definition (var_selfType_9002, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 222)).readProperty_typeKind ().optional_classType (var_reference_10073) ;
    if (!optionalResult10045) {
      test_6 = kBoolFalse ;
    }
    if (kBoolTrue == test_6) {
      var_isRefClass_9983 = var_reference_10073 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_10134 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("extension-method.galgas", 225)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_10184 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("extension-method.galgas", 226)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_9002, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 227)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-method.galgas", 227)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_nonMutableProperties_10184 = extensionGetter_definition (var_selfType_9002, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 228)).readProperty_allTypedPropertyList () ;
    }
  }
  if (kBoolFalse == test_7) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_bool var_isReference_10433 ;
      const bool optionalResult10405 = extensionGetter_definition (var_selfType_9002, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 229)).readProperty_typeKind ().optional_classType (var_isReference_10433) ;
      if (!optionalResult10405) {
        test_8 = kBoolFalse ;
      }
      if (kBoolTrue == test_8) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_isReference_10433.boolEnum () ;
          if (kBoolTrue == test_9) {
            var_mutableProperties_10134 = extensionGetter_definition (var_selfType_9002, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 231)).readProperty_allTypedPropertyList () ;
          }
        }
        if (kBoolFalse == test_9) {
          var_nonMutableProperties_10184 = extensionGetter_definition (var_selfType_9002, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 233)).readProperty_allTypedPropertyList () ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11009 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_11057 ;
  {
  const GALGAS_extensionMethodAST temp_10 = this ;
  const GALGAS_extensionMethodAST temp_11 = this ;
  const GALGAS_extensionMethodAST temp_12 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_8620, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_9642, ioArgument_ioTypeMap, temp_10.readProperty_mExtensionMethodFormalParameterList (), var_nonMutableProperties_10184, var_mutableProperties_10134, temp_11.readProperty_mExtensionMethodInstructionList (), temp_12.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_11009, var_formalParameterListForGeneration_11057, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 236)) ;
  }
  const GALGAS_extensionMethodAST temp_13 = this ;
  const GALGAS_extensionMethodAST temp_14 = this ;
  const GALGAS_extensionMethodAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (temp_13.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 251)), GALGAS_extensionMethodForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_9002, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 254)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 254)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 254)).add_operation (temp_14.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 254)), var_selfType_9002, temp_15.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_9148, var_formalParameterListForGeneration_11057, extensionGetter_definition (var_selfType_9002, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 259)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_11009  COMMA_SOURCE_FILE ("extension-method.galgas", 252))  COMMA_SOURCE_FILE ("extension-method.galgas", 250)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

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
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  ioArgument_ioExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-method.galgas", 286)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-method.galgas", 305)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionMethodForGeneration temp_2 = this ;
      const GALGAS_extensionMethodForGeneration temp_3 = this ;
      const GALGAS_extensionMethodForGeneration temp_4 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 315)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionMethodName (), temp_4.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 314))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_5 = this ;
    const GALGAS_extensionMethodForGeneration temp_6 = this ;
    const GALGAS_extensionMethodForGeneration temp_7 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 321)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionMethodName (), temp_7.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 320))) ;
  }
}
