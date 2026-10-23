#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-28.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumDeclarationAST enterDeclarationInSemanticContext'
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
  GGS_classFunctionMap var_classFunctionMap_10922 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_10964 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_enumTypeEntry_11062 ;
  {
  const GGS_enumDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_enumTypeName (), var_enumTypeEntry_11062, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 299)) ;
  }
  GGS_constantIndexMap var_constantMap_11127 = GGS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  GGS_bool var_hasAssociatedValues_11159 = GGS_bool (false) ;
  const GGS_enumDeclarationAST temp_1 = this ;
  UpEnumerator_enumConstantList enumerator_11212 (temp_1.readProperty_mConstantList ()) ;
  while (enumerator_11212.hasCurrentObject ()) {
    GGS_associatedValueDescriptorList var_associatedTypeList_11270 = GGS_associatedValueDescriptorList::init (inCompiler COMMA_HERE) ;
    GGS_functionSignature var_argumentTypeList_11324 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_associatedValue_5D_ enumerator_11385 (enumerator_11212.current (HERE).readProperty_associatedValueTypeList ()) ;
    while (enumerator_11385.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_associatedTypeEntry_11474 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11385.current (HERE).readProperty_typeName (), var_associatedTypeEntry_11474, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 307)) ;
      }
      var_argumentTypeList_11324.addAssignOperation (enumerator_11385.current (HERE).readProperty_valueName (), var_associatedTypeEntry_11474, enumerator_11385.current (HERE).readProperty_typeName ().readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 308)) ;
      var_associatedTypeList_11270.addAssignOperation (var_associatedTypeEntry_11474, enumerator_11385.current (HERE).readProperty_valueName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 309)) ;
      var_hasAssociatedValues_11159 = GGS_bool (true) ;
      enumerator_11385.gotoNextObject () ;
    }
    {
    var_constantMap_11127.setter_insertKey (enumerator_11212.current (HERE).readProperty_name (), var_constantMap_11127.getter_count (SOURCE_FILE ("declaration-type-enum.galgas3", 312)), var_associatedTypeList_11270, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 312)) ;
    }
    {
    var_classFunctionMap_10922.setter_insertOrReplace (enumerator_11212.current (HERE).readProperty_name (), var_argumentTypeList_11324, GGS_bool (false), var_enumTypeEntry_11062 COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 313)) ;
    }
    enumerator_11212.gotoNextObject () ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_12007 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumDeclarationAST temp_2 = this ;
  UpEnumerator_enumConstantList enumerator_12056 (temp_2.readProperty_mConstantList ()) ;
  while (enumerator_12056.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_12056.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas3", 323)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_unifiedTypeMapEntryList var_associatedTypeList_12167 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
        GGS_formalParameterSignature var_argumentTypeList_12230 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_associatedValue_5D_ enumerator_12293 (enumerator_12056.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_12293.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_associatedTypeEntry_12384 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12293.current (HERE).readProperty_typeName (), var_associatedTypeEntry_12384, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 327)) ;
          }
          var_argumentTypeList_12230.addAssignOperation (enumerator_12293.current (HERE).readProperty_valueName (), var_associatedTypeEntry_12384, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-enum.galgas3", 328)), enumerator_12293.current (HERE).readProperty_typeName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 328)) ;
          var_associatedTypeList_12167.addAssignOperation (var_associatedTypeEntry_12384  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 329)) ;
          var_hasAssociatedValues_11159 = GGS_bool (true) ;
          enumerator_12293.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_12007.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("extract").add_operation (enumerator_12056.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas3", 333)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 333)), enumerator_12056.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-enum.galgas3", 334)), var_argumentTypeList_12230, enumerator_12056.current (HERE).readProperty_name ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-enum.galgas3", 338)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 332)) ;
        }
      }
    }
    enumerator_12056.gotoNextObject () ;
  }
  GGS_getterMap var_getterMap_13009 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_13009, inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 344)) ;
  }
  const GGS_enumDeclarationAST temp_4 = this ;
  UpEnumerator_enumConstantList enumerator_13045 (temp_4.readProperty_mConstantList ()) ;
  while (enumerator_13045.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_13045.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas3", 346)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_enumDeclarationAST temp_6 = this ;
        GGS_string var_associatedTypeName_13131 = function_makeEmbeddedTypeName (temp_6.readProperty_enumTypeName ().readProperty_string (), enumerator_13045.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 347)) ;
        GGS_string var_optionalTypeName_13235 = function_makeOptionalTypeName (var_associatedTypeName_13131, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 348)) ;
        {
        routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13009, ioArgument_ioTypeMap, GGS_string ("get").add_operation (enumerator_13045.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas3", 352)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 352)), GGS_string::makeEmptyString (), var_optionalTypeName_13235, GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 349)) ;
        }
      }
    }
    enumerator_13045.gotoNextObject () ;
  }
  const GGS_enumDeclarationAST temp_7 = this ;
  UpEnumerator_enumConstantList enumerator_13665 (temp_7.readProperty_mConstantList ()) ;
  while (enumerator_13665.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13009, ioArgument_ioTypeMap, GGS_string ("is").add_operation (enumerator_13665.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas3", 364)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 364)), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 361)) ;
    }
    enumerator_13665.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_13995 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_enumDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_enumTypeName (), GGS_bool (false), var_initializerMap_13995, var_getterMap_13009, var_setterMap_10964, var_instanceMethodMap_12007, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 372)) ;
  }
  GGS_typeFeatures var_features_14459 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-enum.galgas3", 388)) ;
  const GGS_enumDeclarationAST temp_9 = this ;
  switch (temp_9.readProperty_comparison ().enumValue ()) {
  case GGS_structComparison::Enumeration::invalid:
    break ;
  case GGS_structComparison::Enumeration::enum_none:
    break ;
  case GGS_structComparison::Enumeration::enum_equatable:
    {
      var_features_14459.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas3", 393)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 393)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_14459.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas3", 395)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas3", 395)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 395)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 395)) ;
    }
    break ;
  }
  {
  const GGS_enumDeclarationAST temp_10 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_10.readProperty_enumTypeName (), var_features_14459, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 397)) ;
  }
  const GGS_enumDeclarationAST temp_11 = this ;
  const GGS_enumDeclarationAST temp_12 = this ;
  const GGS_enumDeclarationAST temp_13 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_14927 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_11.readProperty_enumTypeName (), temp_12.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas3", 410)), GGS_typeKindEnum::class_func_enumType (var_constantMap_11127  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 411)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_13995, var_classFunctionMap_10922, var_getterMap_13009, var_setterMap_10964, var_instanceMethodMap_12007, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas3", 422)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_14459, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas3", 428)), GGS_string ("enum-").add_operation (temp_13.readProperty_enumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-enum.galgas3", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 429)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-enum.galgas3", 430)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14927.readProperty_typeName (), var_typeDefinition_14927, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 432)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumDeclarationAST semanticAnalysis'
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
  GGS_lstring var_nameForUsefulness_16659 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 446)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16659, var_nameForUsefulness_16659, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 447)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_enumDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_16659  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 449)) ;
    }
  }
  GGS__5B_unifiedTypeMapEntry_5D_ var_associatedValuesTypes_16952 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_constantList_16988 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_enumConstantListForGeneration var_enumConstantListForGeneration_17057 = GGS_enumConstantListForGeneration::init (inCompiler COMMA_HERE) ;
  GGS_constantIndexMap var_constantMap_17101 = GGS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumDeclarationAST temp_3 = this ;
  UpEnumerator_enumConstantList enumerator_17161 (temp_3.readProperty_mConstantList ()) ;
  while (enumerator_17161.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_17161.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas3", 457)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_enumDeclarationAST temp_5 = this ;
        GGS_string var_associatedTypeName_17247 = function_makeEmbeddedTypeName (temp_5.readProperty_enumTypeName ().readProperty_string (), enumerator_17161.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 458)) ;
        GGS_string var_optionalTypeName_17351 = function_makeOptionalTypeName (var_associatedTypeName_17247, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 459)) ;
        GGS_unifiedTypeMapEntry var_associatedType_17439 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (var_optionalTypeName_17351, enumerator_17161.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 460)) ;
        {
        var_associatedValuesTypes_16952.setter_append (var_associatedType_17439, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 461)) ;
        }
      }
    }
    var_constantList_16988.addAssignOperation (enumerator_17161.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 463)) ;
    GGS_associatedValueDescriptorList var_associatedTypeList_17676 = GGS_associatedValueDescriptorList::init (inCompiler COMMA_HERE) ;
    GGS_stringset var_associatedValueNameSet_17722 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_associatedValue_5D_ enumerator_17789 (enumerator_17161.current (HERE).readProperty_associatedValueTypeList ()) ;
    while (enumerator_17789.hasCurrentObject ()) {
      GGS_lstring var_propertyTypeNameForUsefulness_17828 = function_typeNameForUsefulEntitiesGraph (enumerator_17789.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 467)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16659, var_propertyTypeNameForUsefulness_17828 COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 468)) ;
      }
      GGS_unifiedTypeMapEntry var_associatedTypeEntry_18033 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_17789.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 469)) ;
      var_associatedTypeList_17676.addAssignOperation (var_associatedTypeEntry_18033, enumerator_17789.current (HERE).readProperty_valueName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 470)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_associatedValueNameSet_17722.getter_hasKey (enumerator_17789.current (HERE).readProperty_valueName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 471)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_17789.current (HERE).readProperty_valueName ().readProperty_location (), GGS_string ("duplicated name"), fixItArray7  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 472)) ;
        }
      }
      var_associatedValueNameSet_17722.plusPlusAssignOperation (enumerator_17789.current (HERE).readProperty_valueName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 474)) ;
      const GGS_enumDeclarationAST temp_8 = this ;
      switch (temp_8.readProperty_comparison ().enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GGS_unifiedTypeDefinition var_associatedType_18530 = extensionGetter_definition (var_associatedTypeEntry_18033, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 479)) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_associatedType_18530.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas3", 480)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 480)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas3", 480)).operator_and (var_associatedType_18530.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas3", 481)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 481)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas3", 481)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 480)).operator_and (var_associatedType_18530.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-enum.galgas3", 482)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 482)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas3", 482)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 481)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_17789.current (HERE).readProperty_typeName ().readProperty_location (), GGS_string ("the @").add_operation (enumerator_17789.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 483)).add_operation (GGS_string (" should be equatable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 483)), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 483)) ;
            }
          }
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GGS_unifiedTypeDefinition var_associatedType_18950 = extensionGetter_definition (var_associatedTypeEntry_18033, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 486)) ;
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = var_associatedType_18950.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas3", 487)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 487)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas3", 487)).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_17789.current (HERE).readProperty_typeName ().readProperty_location (), GGS_string ("the @").add_operation (enumerator_17789.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 488)).add_operation (GGS_string (" should be comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 488)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 488)) ;
            }
          }
        }
        break ;
      }
      enumerator_17789.gotoNextObject () ;
    }
    {
    var_constantMap_17101.setter_insertKey (enumerator_17161.current (HERE).readProperty_name (), var_constantMap_17101.getter_count (SOURCE_FILE ("declaration-type-enum.galgas3", 492)), var_associatedTypeList_17676, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 492)) ;
    }
    var_enumConstantListForGeneration_17057.addAssignOperation (enumerator_17161.current (HERE).readProperty_name ().readProperty_string (), var_associatedTypeList_17676  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 493)) ;
    enumerator_17161.gotoNextObject () ;
  }
  const GGS_enumDeclarationAST temp_13 = this ;
  GGS_unifiedTypeMapEntry var_selfType_19403 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_13.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 496)) ;
  const GGS_enumDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("enum ").add_operation (temp_14.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 498)), GGS_enumTypeForGeneration::init_21__21__21_ (var_selfType_19403, var_enumConstantListForGeneration_17057, var_associatedValuesTypes_16952, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 497)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GGS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_hasAssociatedValues_20686 = GGS_bool (false) ;
  const GGS_enumTypeForGeneration temp_0 = this ;
  UpEnumerator_enumConstantListForGeneration enumerator_20739 (temp_0.readProperty_constantList ()) ;
  bool bool_1 = var_hasAssociatedValues_20686.operator_not (SOURCE_FILE ("declaration-type-enum.galgas3", 530)).isValidAndTrue () ;
  if (enumerator_20739.hasCurrentObject () && bool_1) {
    while (enumerator_20739.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_20686 = GGS_bool (ComparisonKind::greaterThan, enumerator_20739.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas3", 531)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      enumerator_20739.gotoNextObject () ;
      if (enumerator_20739.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_20686.operator_not (SOURCE_FILE ("declaration-type-enum.galgas3", 530)).isValidAndTrue () ;
      }
    }
  }
  const GGS_enumTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_20872 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 533)) ;
  const GGS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, var_selfTypeDefinition_20872.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_20872.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas3", 536)), temp_3.readProperty_constantList (), var_hasAssociatedValues_20686 COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 534))) ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_20872.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_20872.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas3", 542)), var_selfTypeDefinition_20872.readProperty_isConcrete (), var_selfTypeDefinition_20872.readProperty_initializerMap (), var_selfTypeDefinition_20872.readProperty_classFunctionMap (), var_selfTypeDefinition_20872.readProperty_getterMap (), var_selfTypeDefinition_20872.readProperty_setterMap (), var_selfTypeDefinition_20872.readProperty_instanceMethodMap (), var_selfTypeDefinition_20872.readProperty_classMethodMap (), var_selfTypeDefinition_20872.readProperty_readSubscriptMap (), var_selfTypeDefinition_20872.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20872.readProperty_features (), var_selfTypeDefinition_20872.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_20872.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20872.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 540))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 540)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumTypeForGeneration temp_0 = this ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_22276 (temp_0.readProperty_associatedValuesTypes ()) ;
  while (enumerator_22276.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_22276.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 565)) ;
    enumerator_22276.gotoNextObject () ;
  }
  GGS_bool var_hasAssociatedValues_22371 = GGS_bool (false) ;
  const GGS_enumTypeForGeneration temp_1 = this ;
  UpEnumerator_enumConstantListForGeneration enumerator_22424 (temp_1.readProperty_constantList ()) ;
  bool bool_2 = var_hasAssociatedValues_22371.operator_not (SOURCE_FILE ("declaration-type-enum.galgas3", 568)).isValidAndTrue () ;
  if (enumerator_22424.hasCurrentObject () && bool_2) {
    while (enumerator_22424.hasCurrentObject () && bool_2) {
      var_hasAssociatedValues_22371 = GGS_bool (ComparisonKind::greaterThan, enumerator_22424.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas3", 569)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      enumerator_22424.gotoNextObject () ;
      if (enumerator_22424.hasCurrentObject ()) {
        bool_2 = var_hasAssociatedValues_22371.operator_not (SOURCE_FILE ("declaration-type-enum.galgas3", 568)).isValidAndTrue () ;
      }
    }
  }
  const GGS_enumTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 571)) ;
  const GGS_enumTypeForGeneration temp_4 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_22618 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 572)) ;
  const GGS_enumTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_22618.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_22618.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas3", 575)), temp_5.readProperty_constantList (), var_hasAssociatedValues_22371, extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_22618.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 578)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 573))) ;
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
        result.appendString ("    String s ;\n    s.appendCString (\"proc @") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (".") ;
        result.appendString (enumerator_1821.current_name (HERE).stringValue ()) ;
        result.appendString (" invoked with an invalid enum value\") ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const auto ptr = (GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_1821.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 64)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 64)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n") ;
        GGS_uint index_2969_idx (0) ;
        if (enumerator_1821.current_associatedValueTypeList (HERE).isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_2969 (enumerator_1821.current_associatedValueTypeList (HERE)) ;
          while (enumerator_2969.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue_") ;
            result.appendString (enumerator_2969.current_name (HERE).stringValue ()) ;
            result.appendString (" = ptr->mProperty_") ;
            result.appendString (enumerator_2969.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).stringValue ()) ;
            result.appendString (" ;\n") ;
            enumerator_2969.gotoNextObject () ;
            index_2969_idx.increment () ;
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
  GGS_uint index_3174_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator_enumConstantListForGeneration enumerator_3174 (in_CONSTANT_5F_LIST) ;
    while (enumerator_3174.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_3174.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3174.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).stringValue ()) ;
        result.appendString ("_3F_ GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::getter_get") ;
        result.appendString (enumerator_3174.current_name (HERE).getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).stringValue ()) ;
        result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3174.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 77)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 77)).stringValue ()) ;
        result.appendString ("_3F_ result ;\n  if (mEnum == Enumeration::enum_") ;
        result.appendString (enumerator_3174.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (") {\n    const auto ptr = (const GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3174.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n    result = GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3174.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 80)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 80)).stringValue ()) ;
        result.appendString (" (*ptr) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::getAssociatedValuesFor_") ;
        result.appendString (enumerator_3174.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 85)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_4419_idx (0) ;
        if (enumerator_3174.current_associatedValueTypeList (HERE).isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_4419 (enumerator_3174.current_associatedValueTypeList (HERE)) ;
          while (enumerator_4419.hasCurrentObject ()) {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_4419.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 87)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_4419.current_name (HERE).stringValue ()) ;
            enumerator_4419.gotoNextObject () ;
            if (enumerator_4419.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_4419_idx.increment () ;
          }
        }
        result.appendString (") const {\n  const auto ptr = (const GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3174.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 91)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 91)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n") ;
        GGS_uint index_4755_ (0) ;
        if (enumerator_3174.current_associatedValueTypeList (HERE).isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_4755 (enumerator_3174.current_associatedValueTypeList (HERE)) ;
          while (enumerator_4755.hasCurrentObject ()) {
            result.appendString ("  out_") ;
            result.appendString (enumerator_4755.current_name (HERE).stringValue ()) ;
            result.appendString (" = ptr->mProperty_") ;
            result.appendString (enumerator_4755.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 93)).stringValue ()) ;
            result.appendString (" ;\n") ;
            enumerator_4755.gotoNextObject () ;
            index_4755_.increment () ;
          }
        }
        result.appendString ("}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3174.gotoNextObject () ;
      index_3174_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nstatic const char * gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_CONSTANT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).stringValue ()) ;
  result.appendString ("] = {\n  \"(not built)\"") ;
  GGS_uint index_5156_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator_enumConstantListForGeneration enumerator_5156 (in_CONSTANT_5F_LIST) ;
    while (enumerator_5156.hasCurrentObject ()) {
      result.appendString (",\n  ") ;
      result.appendString (enumerator_5156.current_name (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 104)).stringValue ()) ;
      enumerator_5156.gotoNextObject () ;
      index_5156_.increment () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  GGS_uint index_5297_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator_enumConstantListForGeneration enumerator_5297 (in_CONSTANT_5F_LIST) ;
    while (enumerator_5297.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_is") ;
      result.appendString (enumerator_5297.current_name (HERE).getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 113)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_") ;
      result.appendString (enumerator_5297.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" == mEnum) ;\n}\n\n") ;
      enumerator_5297.gotoNextObject () ;
      index_5297_.increment () ;
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
      GGS_uint index_6953_ (0) ;
      if (in_CONSTANT_5F_LIST.isValid ()) {
        UpEnumerator_enumConstantListForGeneration enumerator_6953 (in_CONSTANT_5F_LIST) ;
        while (enumerator_6953.hasCurrentObject ()) {
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, enumerator_6953.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 152)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_9) {
          case GalgasBool::boolTrue : {
            result.appendString ("      case Enumeration::enum_") ;
            result.appendString (enumerator_6953.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 153)).stringValue ()) ;
            result.appendString (": {\n        const auto left = (GGS_") ;
            result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_6953.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).stringValue ()) ;
            result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n        const auto right = (GGS_") ;
            result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_6953.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue ()) ;
            result.appendString (" *) inOperand.mAssociatedValues.associatedValuesPointer () ;\n        result = left->objectCompare (*right) ;\n        }break ;\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_6953.gotoNextObject () ;
          index_6953_.increment () ;
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
//Overriding extension proc '@graphDeclarationAST enterDeclarationInGraph'
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
  GGS_lstring var_key_4728 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 118)), temp_1.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4728, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 119)) ;
  }
  {
  const GGS_graphDeclarationAST temp_3 = this ;
  const GGS_graphDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4728, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 122)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 120)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationAST enterDeclarationInSemanticContext'
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
  GGS_unifiedTypeMapEntry var_stringTypeEntry_5761 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringTypeEntry_5761, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 137)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringTypeEntry_5896 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstring"), var_lstringTypeEntry_5896, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 142)) ;
  }
  {
  const GGS_graphDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry joker_6004 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mGraphTypeName (), joker_6004, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 147)) ;
  }
  GGS_unifiedTypeMapEntry var_associatedListTypeEntry_6186 ;
  {
  const GGS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_6186, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 152)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringListTypeEntry_6338 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstringlist"), var_lstringListTypeEntry_6338, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 157)) ;
  }
  GGS_getterMap var_getterMap_6433 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6433, inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 162)) ;
  }
  GGS_setterMap var_setterMap_6464 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_6507 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_formalParameterList_6602 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6602.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas3", 168)), var_associatedListTypeEntry_6186, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas3", 170)), GGS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 167)) ;
  var_formalParameterList_6602.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas3", 173)), var_lstringListTypeEntry_6338, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas3", 175)), GGS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 172)) ;
  var_formalParameterList_6602.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas3", 178)), var_associatedListTypeEntry_6186, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas3", 180)), GGS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 177)) ;
  var_formalParameterList_6602.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas3", 183)), var_lstringListTypeEntry_6338, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas3", 185)), GGS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 182)) ;
  {
  var_instanceMethodMap_6507.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("topologicalSort"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 188)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas3", 189)), var_formalParameterList_6602, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 191)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas3", 193)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 187)) ;
  }
  {
  var_instanceMethodMap_6507.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("depthFirstTopologicalSort"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 197)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas3", 198)), var_formalParameterList_6602, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 200)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas3", 202)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 196)) ;
  }
  var_formalParameterList_6602 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6602.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas3", 208)), var_associatedListTypeEntry_6186, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas3", 210)), GGS_string ("outInformationList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 207)) ;
  var_formalParameterList_6602.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas3", 213)), var_lstringListTypeEntry_6338, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas3", 215)), GGS_string ("outLKeyList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 212)) ;
  {
  var_instanceMethodMap_6507.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("circularities"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 218)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas3", 219)), var_formalParameterList_6602, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 221)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas3", 223)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 217)) ;
  }
  {
  var_instanceMethodMap_6507.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nodesWithNoSuccessor"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 227)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas3", 228)), var_formalParameterList_6602, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 230)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas3", 232)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 226)) ;
  }
  {
  var_instanceMethodMap_6507.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nodesWithNoPredecessor"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 236)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas3", 237)), var_formalParameterList_6602, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 239)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas3", 241)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 235)) ;
  }
  {
  const GGS_graphDeclarationAST temp_2 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6433, ioArgument_ioTypeMap, GGS_string ("nodeList"), GGS_string::makeEmptyString (), temp_2.readProperty_mAssociatedListTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 245)) ;
  }
  {
  const GGS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6433, ioArgument_ioTypeMap, GGS_string ("reversedGraph"), GGS_string::makeEmptyString (), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 254)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6433, ioArgument_ioTypeMap, GGS_string ("undefinedNodeCount"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 263)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6433, ioArgument_ioTypeMap, GGS_string ("undefinedNodeKeyList"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 272)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6433, ioArgument_ioTypeMap, GGS_string ("undefinedNodeReferenceList"), GGS_string::makeEmptyString (), GGS_string ("lstringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 281)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6433, ioArgument_ioTypeMap, GGS_string ("graphviz"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 290)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6433, ioArgument_ioTypeMap, GGS_string ("isNodeDefined"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 299)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6433, ioArgument_ioTypeMap, GGS_string ("locationForKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 309)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6433, ioArgument_ioTypeMap, GGS_string ("keyList"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 319)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6433, ioArgument_ioTypeMap, GGS_string ("lkeyList"), GGS_string::makeEmptyString (), GGS_string ("lstringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 328)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6433, ioArgument_ioTypeMap, GGS_string ("edges"), GGS_string::makeEmptyString (), GGS_string ("2stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 337)) ;
  }
  {
  const GGS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6433, ioArgument_ioTypeMap, GGS_string ("subgraphFromNodes"), GGS_string::makeEmptyString (), GGS_string ("lstringlist"), GGS_string ("inStartNodeLStringList"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_string ("inNodesToExclude"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 346)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6433, ioArgument_ioTypeMap, GGS_string ("accessibleNodesFrom"), GGS_string::makeEmptyString (), GGS_string ("lstringlist"), GGS_string ("inStartNodeStringList"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_string ("inNodesToExclude"), GGS_string ("lstringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 360)) ;
  }
  var_formalParameterList_6602 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6602.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas3", 372)), var_lstringTypeEntry_5896, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas3", 374)), GGS_string ("inLKey")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 371)) ;
  UpEnumerator_functionSignature enumerator_12762 (extensionGetter_definition (var_associatedListTypeEntry_6186, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 376)).readProperty_addAssignOperatorArguments ()) ;
  while (enumerator_12762.hasCurrentObject ()) {
    var_formalParameterList_6602.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas3", 378)), enumerator_12762.current (HERE).readProperty_mFormalArgumentType (), GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas3", 380)), enumerator_12762.current (HERE).readProperty_mFormalArgumentName ()  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 377)) ;
    enumerator_12762.gotoNextObject () ;
  }
  const GGS_graphDeclarationAST temp_5 = this ;
  UpEnumerator_graphInsertModifierList enumerator_12980 (temp_5.readProperty_mInsertModifierList ()) ;
  while (enumerator_12980.hasCurrentObject ()) {
    {
    var_setterMap_6464.setter_insertOrReplace (enumerator_12980.current_mInsertModifierName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas3", 386)), var_formalParameterList_6602, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas3", 389)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 384)) ;
    }
    enumerator_12980.gotoNextObject () ;
  }
  {
  var_setterMap_6464.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeEdgesToDominators"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 395)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas3", 396)), GGS_formalParameterSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas3", 399)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 394)) ;
  }
  var_formalParameterList_6602 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6602.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas3", 404)), var_stringTypeEntry_5761, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas3", 404)), GGS_string ("inNodeName")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 404)) ;
  {
  var_setterMap_6464.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeEdgesToNode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 406)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas3", 407)), var_formalParameterList_6602, GGS_bool (true), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas3", 410)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 405)) ;
  }
  var_formalParameterList_6602 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6602.addAssignOperation (GGS_string ("from").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas3", 415)), var_lstringTypeEntry_5896, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas3", 415)), GGS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 415)) ;
  var_formalParameterList_6602.addAssignOperation (GGS_string ("to").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas3", 416)), var_lstringTypeEntry_5896, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas3", 416)), GGS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 416)) ;
  {
  var_setterMap_6464.setter_insertKey (GGS_string ("addEdge").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 418)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas3", 419)), var_formalParameterList_6602, GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas3", 422)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 417)) ;
  }
  var_formalParameterList_6602 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6602.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas3", 428)), var_lstringTypeEntry_5896, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas3", 430)), GGS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 427)) ;
  {
  var_setterMap_6464.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("noteNode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 433)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas3", 434)), var_formalParameterList_6602, GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas3", 437)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 432)) ;
  }
  GGS_initializerMap var_initializerMap_14781 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorPropertyTypeList_14829 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_graphDeclarationAST temp_6 = this ;
  var_initializerMap_14781.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_14829, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 444)), temp_6.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_14829, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 443)) ;
  }
  {
  const GGS_graphDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_mGraphTypeName (), GGS_bool (false), var_initializerMap_14781, var_getterMap_6433, var_setterMap_6464, var_instanceMethodMap_6507, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 448)) ;
  }
  GGS_typeFeatures var_features_15467 = GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-graph.galgas3", 463)) ;
  {
  const GGS_graphDeclarationAST temp_8 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_8.readProperty_mGraphTypeName (), var_features_15467, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 464)) ;
  }
  const GGS_graphDeclarationAST temp_9 = this ;
  const GGS_graphDeclarationAST temp_10 = this ;
  const GGS_graphDeclarationAST temp_11 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_15744 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_9.readProperty_mGraphTypeName (), temp_10.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas3", 477)), GGS_typeKindEnum::class_func_graphType (SOURCE_FILE ("declaration-type-graph.galgas3", 478)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_14781, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6433, var_setterMap_6464, var_instanceMethodMap_6507, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas3", 489)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_15467, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas3", 495)), GGS_string ("graph-").add_operation (temp_11.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-graph.galgas3", 496)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 496)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-graph.galgas3", 497)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_15744.readProperty_typeName (), var_typeDefinition_15744, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 499)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationAST semanticAnalysis'
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
  GGS_lstring var_nameForUsefulness_17571 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 513)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17571, var_nameForUsefulness_17571, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 514)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_graphDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_17571  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 516)) ;
    }
  }
  const GGS_graphDeclarationAST temp_3 = this ;
  GGS_lstring var_associatedTypeNameForUsefulness_17821 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 518)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17571, var_associatedTypeNameForUsefulness_17821 COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 519)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_graphDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_associatedTypeNameForUsefulness_17821  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 521)) ;
    }
  }
  const GGS_graphDeclarationAST temp_6 = this ;
  GGS_lstring var_initializerNameForUsefulness_18199 = function_initializerNameForUsefulEntitiesGraph (temp_6.readProperty_mGraphTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 526)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 524)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_18199, var_initializerNameForUsefulness_18199, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 528)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_graphDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_18199  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 530)) ;
    }
  }
  const GGS_graphDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_graphTypeEntry_18580 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 533)) ;
  const GGS_graphDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry var_associatedListTypeEntry_18658 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 534)) ;
  const GGS_graphDeclarationAST temp_11 = this ;
  GGS_unifiedTypeMapEntry var_associatedListElementTypeEntry_18754 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_11.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 536)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 535)) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_associatedListTypeEntry_18658, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 538)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-graph.galgas3", 538)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_graphDeclarationAST temp_13 = this ;
      const GGS_graphDeclarationAST temp_14 = this ;
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mAssociatedListTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_14.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 540)).add_operation (GGS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 540)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 539)) ;
    }
  }
  GGS_stringset temp_16 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 543)) ;
  temp_16.plusPlusAssignOperation (GGS_string ("noteNode")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 543)) ;
  temp_16.plusPlusAssignOperation (GGS_string ("addArc")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 543)) ;
  GGS_stringset var_reservedModifierNames_19138 = temp_16 ;
  const GGS_graphDeclarationAST temp_17 = this ;
  UpEnumerator_graphInsertModifierList enumerator_19215 (temp_17.readProperty_mInsertModifierList ()) ;
  while (enumerator_19215.hasCurrentObject ()) {
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = var_reservedModifierNames_19138.getter_hasKey (enumerator_19215.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 545)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_19215.current_mInsertModifierName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_19215.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 547)).add_operation (GGS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 547)), fixItArray19  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 546)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_19215.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 549)) ;
    }
    enumerator_19215.gotoNextObject () ;
  }
  const GGS_graphDeclarationAST temp_20 = this ;
  const GGS_graphDeclarationAST temp_21 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("graph ").add_operation (temp_20.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 553)), GGS_graphDeclarationForGeneration::init_21__21__21__21_ (var_graphTypeEntry_18580, var_associatedListTypeEntry_18658, var_associatedListElementTypeEntry_18754, temp_21.readProperty_mInsertModifierList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 552)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                       GGS_string & outArgument_outHeader,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_20655 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 579)) ;
  const GGS_graphDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, var_selfTypeDefinition_20655.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 582)) COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 580))) ;
  const GGS_graphDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_20655.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 586)), var_selfTypeDefinition_20655.readProperty_isConcrete (), var_selfTypeDefinition_20655.readProperty_initializerMap (), var_selfTypeDefinition_20655.readProperty_classFunctionMap (), var_selfTypeDefinition_20655.readProperty_getterMap (), var_selfTypeDefinition_20655.readProperty_setterMap (), var_selfTypeDefinition_20655.readProperty_instanceMethodMap (), var_selfTypeDefinition_20655.readProperty_classMethodMap (), var_selfTypeDefinition_20655.readProperty_readSubscriptMap (), var_selfTypeDefinition_20655.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20655.readProperty_features (), var_selfTypeDefinition_20655.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_20655.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20655.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 584))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 584)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 608)) ;
  const GGS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 609)) ;
  const GGS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 610)) ;
  const GGS_graphDeclarationForGeneration temp_3 = this ;
  const GGS_graphDeclarationForGeneration temp_4 = this ;
  const GGS_graphDeclarationForGeneration temp_5 = this ;
  const GGS_graphDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 613)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 611))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@optionalTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_optionalTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  result_result = GGS_string ("optional @").add_operation (temp_0.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 28)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeDeclarationAST enterDeclarationInGraph'
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
  GGS_lstring var_selfKey_2329 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 41)), temp_1.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_selfKey_2329, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 42)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_3 = this ;
  const GGS_optionalTypeDeclarationAST temp_4 = this ;
  GGS_lstring var_unwrappedKey_2480 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_unwrappedTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 43)), temp_4.readProperty_unwrappedTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_selfKey_2329, var_unwrappedKey_2480 COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 44)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeDeclarationAST enterDeclarationInSemanticContext'
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
  GGS_getterMap var_getterMap_3360 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_3360, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 58)) ;
  }
  GGS_unifiedTypeMapEntry var_boolTypeEntry_3438 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GGS_string ("bool").getter_nowhere (SOURCE_FILE ("declaration-type-optional.galgas3", 60)), var_boolTypeEntry_3438, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 60)) ;
  }
  GGS_propertyMap var_propertyMap_3474 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  var_propertyMap_3474.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("isSome"), temp_0.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_AccessControl::class_func_publicAccess (SOURCE_FILE ("declaration-type-optional.galgas3", 64)), GGS_bool (true), var_boolTypeEntry_3438, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 62)) ;
  }
  {
  const GGS_optionalTypeDeclarationAST temp_1 = this ;
  var_propertyMap_3474.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("isNil"), temp_1.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_AccessControl::class_func_publicAccess (SOURCE_FILE ("declaration-type-optional.galgas3", 70)), GGS_bool (true), var_boolTypeEntry_3438, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 68)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_3803 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_3846 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_3886 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_2 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_2.readProperty_optionalTypeName (), GGS_bool (false), var_initializerMap_3886, var_getterMap_3360, var_setterMap_3846, var_instanceMethodMap_3803, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 78)) ;
  }
  GGS_unifiedTypeMapEntry var_unwrappedType_4414 ;
  {
  const GGS_optionalTypeDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_unwrappedTypeName (), var_unwrappedType_4414, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 94)) ;
  }
  GGS_typeFeatures var_features_4454 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_unwrappedType_4414, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optional.galgas3", 97)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-optional.galgas3", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 97)).operator_or (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-optional.galgas3", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_features_4454.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optional.galgas3", 98)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 98)) ;
    }
  }
  {
  const GGS_optionalTypeDeclarationAST temp_5 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_5.readProperty_optionalTypeName (), var_features_4454, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 100)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_6 = this ;
  const GGS_optionalTypeDeclarationAST temp_7 = this ;
  const GGS_optionalTypeDeclarationAST temp_8 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_4845 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_6.readProperty_optionalTypeName (), temp_7.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas3", 113)), GGS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-optional.galgas3", 114)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_propertyMap_3474, GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_3886, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_3360, var_setterMap_3846, var_instanceMethodMap_3803, GGS_classMethodMap::init (inCompiler COMMA_HERE), var_unwrappedType_4414, GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_4454, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas3", 131)), GGS_string ("optional-").add_operation (temp_8.readProperty_optionalTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-optional.galgas3", 132)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 132)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-optional.galgas3", 133)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_4845.readProperty_typeName (), var_typeDefinition_4845, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 135)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeDeclarationAST semanticAnalysis'
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
  GGS_lstring var_nameForUsefulness_6613 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_optionalTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 155)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6613, var_nameForUsefulness_6613, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 156)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_unwrappedTypeNameForUsefulness_6773 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_unwrappedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 157)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_6613, var_unwrappedTypeNameForUsefulness_6773 COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 158)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_optionalTypeDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isUsefull ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_6613  COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 160)) ;
    }
  }
  const GGS_optionalTypeDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_optionalType_7066 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_optionalTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 163)) ;
  const GGS_optionalTypeDeclarationAST temp_5 = this ;
  GGS_unifiedTypeMapEntry var_unwrappedType_7144 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_unwrappedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 164)) ;
  GGS_lstring var_correspondingWeakTypeName_7224 = function_makeWeakTypeLName (extensionGetter_definition (var_unwrappedType_7144, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 165)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 165)) ;
  GGS_unifiedTypeMapEntry var_correspondingWeakTypeOrNull_7315 = extensionGetter_typeMapEntryOrNullForLKey (ioArgument_ioTypeMap, var_correspondingWeakTypeName_7224, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 166)) ;
  const GGS_optionalTypeDeclarationAST temp_6 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("optional type ").add_operation (temp_6.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 168)), GGS_optionalTypeForGeneration::init_21__21__21_ (var_optionalType_7066, var_unwrappedType_7144, var_correspondingWeakTypeOrNull_7315, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 167)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_string & outArgument_outHeader,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_unwrappedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 188)) ;
  const GGS_optionalTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_8427 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 189)) ;
  const GGS_optionalTypeForGeneration temp_2 = this ;
  const GGS_optionalTypeForGeneration temp_3 = this ;
  const GGS_optionalTypeForGeneration temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas3", 194)).boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_6) {
    const GGS_optionalTypeForGeneration temp_7 = this ;
    temp_5 = extensionGetter_identifierRepresentation (temp_7.readProperty_weakType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 194)) ;
  }
  outArgument_outHeader = GGS_string (filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeHeader_31_ (inCompiler, var_selfTypeDefinition_8427.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 192)), extensionGetter_identifierRepresentation (temp_3.readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 193)), temp_5 COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 190))) ;
  const GGS_optionalTypeForGeneration temp_8 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_8427.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 198)), var_selfTypeDefinition_8427.readProperty_isConcrete (), var_selfTypeDefinition_8427.readProperty_initializerMap (), var_selfTypeDefinition_8427.readProperty_classFunctionMap (), var_selfTypeDefinition_8427.readProperty_getterMap (), var_selfTypeDefinition_8427.readProperty_setterMap (), var_selfTypeDefinition_8427.readProperty_instanceMethodMap (), var_selfTypeDefinition_8427.readProperty_classMethodMap (), var_selfTypeDefinition_8427.readProperty_readSubscriptMap (), var_selfTypeDefinition_8427.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_8427.readProperty_features (), var_selfTypeDefinition_8427.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_8427.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_8427.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 196))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 196)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_string & outArgument_outImplementation,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_unwrappedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 220)) ;
  const GGS_optionalTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 221)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_optionalTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas3", 222)).operator_not (SOURCE_FILE ("declaration-type-optional.galgas3", 222)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_optionalTypeForGeneration temp_4 = this ;
      extensionMethod_addHeaderFileName (temp_4.readProperty_weakType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 223)) ;
    }
  }
  const GGS_optionalTypeForGeneration temp_5 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_10098 = extensionGetter_definition (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 225)) ;
  const GGS_optionalTypeForGeneration temp_6 = this ;
  const GGS_optionalTypeForGeneration temp_7 = this ;
  const GGS_optionalTypeForGeneration temp_8 = this ;
  GGS_string temp_9 ;
  const GalgasBool test_10 = temp_8.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas3", 231)).boolEnum () ;
  if (GalgasBool::boolTrue == test_10) {
    temp_9 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_10) {
    const GGS_optionalTypeForGeneration temp_11 = this ;
    temp_9 = extensionGetter_identifierRepresentation (temp_11.readProperty_weakType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 231)) ;
  }
  outArgument_outImplementation = GGS_string (filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_10098.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 228)), extensionGetter_identifierRepresentation (temp_7.readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 229)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_10098.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 230)), temp_9 COMMA_SOURCE_FILE ("declaration-type-optional.galgas3", 226))) ;
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
    result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmValue (),\nmState (OptionalState::invalid) {\n  if (inSource.isValid ()) {\n    const AbstractStrongPtrClass * p = inSource.ptr () ;\n    if (p == nullptr) {\n      mState = OptionalState::isNil ;\n    }else{\n      mValue = * ((GGS_") ;
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
//
//Overriding extension func '@functionPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_functionPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-function.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-function.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas3", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_functionPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GGS_classFunctionMap & outArgument_outMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("functionList"), GGS_string ("functionlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas3", 38)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("functionWithName"), GGS_string ("string"), GGS_string ("inName"), GGS_string ("function"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas3", 45)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isFunctionDefined"), GGS_string ("string"), GGS_string ("inFunctionName"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas3", 54)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_functionPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GGS_getterMap & outArgument_outMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas3", 69)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("name"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas3", 70)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("resultType"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas3", 78)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("formalParameterTypeList"), GGS_string::makeEmptyString (), GGS_string ("typelist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas3", 86)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("invoke"), GGS_string ("objectlist"), GGS_string ("inParameters"), GGS_string ("location"), GGS_string ("inErrorLocation"), GGS_string ("object"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas3", 94)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@functionPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_functionPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas3", 106))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@sint64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_sint_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 31)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 31)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 31)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 32)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 32)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 33)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 33)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 33)).operator_or (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 33)).operator_or (GGS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 34)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 34)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 34)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 34)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 34)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 35)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 35)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 35)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 35)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 37)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sint64PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_sint_36__34_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GGS_classFunctionMap & outArgument_outMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("sint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("min"), GGS_string ("sint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 52)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sint64PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_sint_36__34_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_getterMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 65)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("double"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 74)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 82)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 90)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 98)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 106)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 114)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 122)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("sint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 142)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("sint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 149)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("sint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 156)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("sint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 163)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@sint64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_sint_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas3", 175))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@sintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_sintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 30))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@sintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_sintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 37)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 37)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 37)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 38)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 38)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 39)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 39)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 39)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 39)).operator_or (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 40)).operator_or (GGS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 40)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 40)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 40)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 40)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 41)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 41)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 41)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 41)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 42)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 43)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 42)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 43)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 43)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sintPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("min"), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 59)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sintPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 72)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("double"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 81)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 97)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 113)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 121)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 129)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 140)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("sint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 149)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("sint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 156)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("sint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 163)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("sint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas3", 170)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeEmbeddedTypeLName (const GGS_lstring & constinArgument_inOuterTypeName,
                                            const GGS_lstring & constinArgument_inInnerTypeName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (function_makeEmbeddedTypeName (constinArgument_inOuterTypeName.readProperty_string (), constinArgument_inInnerTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 24)), constinArgument_inOuterTypeName.readProperty_location ().getter_union (constinArgument_inInnerTypeName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 25)), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeEmbeddedTypeLName [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeEmbeddedTypeLName (Compiler * inCompiler,
                                                                   const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_makeEmbeddedTypeLName (operand0,
                                         operand1,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeEmbeddedTypeLName ("makeEmbeddedTypeLName",
                                                                       functionWithGenericHeader_makeEmbeddedTypeLName,
                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                       2,
                                                                       functionArgs_makeEmbeddedTypeLName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeEmbeddedTypeName (const GGS_string & constinArgument_inOuterTypeName,
                                          const GGS_string & constinArgument_inInnerTypeName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inOuterTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 32)).add_operation (constinArgument_inInnerTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 32)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeEmbeddedTypeName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeEmbeddedTypeName (Compiler * inCompiler,
                                                                  const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                  const GGS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_string operand1 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_makeEmbeddedTypeName (operand0,
                                        operand1,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeEmbeddedTypeName ("makeEmbeddedTypeName",
                                                                      functionWithGenericHeader_makeEmbeddedTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      2,
                                                                      functionArgs_makeEmbeddedTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeOptionalTypeName (const GGS_string & constinArgument_inTypeName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inTypeName.add_operation (GGS_string ("\?"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 40)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeOptionalTypeName [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeOptionalTypeName (Compiler * inCompiler,
                                                                  const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                  const GGS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_makeOptionalTypeName (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeOptionalTypeName ("makeOptionalTypeName",
                                                                      functionWithGenericHeader_makeOptionalTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      1,
                                                                      functionArgs_makeOptionalTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeOptionalTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = constinArgument_inTypeName ;
  result_result.mProperty_string.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 47)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeOptionalTypeLName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeOptionalTypeLName (Compiler * inCompiler,
                                                                   const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_makeOptionalTypeLName (operand0,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeOptionalTypeLName ("makeOptionalTypeLName",
                                                                       functionWithGenericHeader_makeOptionalTypeLName,
                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                       1,
                                                                       functionArgs_makeOptionalTypeLName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedElementTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeEmbeddedElementTypeName (const GGS_string & constinArgument_inTypeName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = function_makeEmbeddedTypeName (constinArgument_inTypeName, GGS_string ("element"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 55)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeEmbeddedElementTypeName [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeEmbeddedElementTypeName (Compiler * inCompiler,
                                                                         const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_makeEmbeddedElementTypeName (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeEmbeddedElementTypeName ("makeEmbeddedElementTypeName",
                                                                             functionWithGenericHeader_makeEmbeddedElementTypeName,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_makeEmbeddedElementTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedElementTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeEmbeddedElementTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (function_makeEmbeddedElementTypeName (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 61)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeEmbeddedElementTypeLName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeEmbeddedElementTypeLName (Compiler * inCompiler,
                                                                          const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                          const GGS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_makeEmbeddedElementTypeLName (operand0,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeEmbeddedElementTypeLName ("makeEmbeddedElementTypeLName",
                                                                              functionWithGenericHeader_makeEmbeddedElementTypeLName,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              1,
                                                                              functionArgs_makeEmbeddedElementTypeLName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeArrayTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeArrayTypeName (const GGS_string & constinArgument_inTypeName,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("[").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 69)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 69)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeArrayTypeName [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeArrayTypeName (Compiler * inCompiler,
                                                               const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_makeArrayTypeName (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeArrayTypeName ("makeArrayTypeName",
                                                                   functionWithGenericHeader_makeArrayTypeName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_makeArrayTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeArrayTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeArrayTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (function_makeArrayTypeName (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 75)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeArrayTypeLName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeArrayTypeLName (Compiler * inCompiler,
                                                                const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_makeArrayTypeLName (operand0,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeArrayTypeLName ("makeArrayTypeLName",
                                                                    functionWithGenericHeader_makeArrayTypeLName,
                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                    1,
                                                                    functionArgs_makeArrayTypeLName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeWeakTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeWeakTypeName (const GGS_string & constinArgument_inTypeName,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = function_makeEmbeddedTypeName (constinArgument_inTypeName, GGS_string ("weak"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 83)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeWeakTypeName [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeWeakTypeName (Compiler * inCompiler,
                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                              const GGS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_makeWeakTypeName (operand0,
                                    inCompiler
                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeWeakTypeName ("makeWeakTypeName",
                                                                  functionWithGenericHeader_makeWeakTypeName,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_makeWeakTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeWeakTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeWeakTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (function_makeWeakTypeName (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 89)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_makeWeakTypeLName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_makeWeakTypeLName (Compiler * inCompiler,
                                                               const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_makeWeakTypeLName (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeWeakTypeLName ("makeWeakTypeLName",
                                                                   functionWithGenericHeader_makeWeakTypeLName,
                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                   1,
                                                                   functionArgs_makeWeakTypeLName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@mapDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_mapDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_mapDeclarationAST temp_0 = this ;
  result_result = GGS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 331)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_structAttributeList_12203 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_structAttributeList_12203.addAssignOperation (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-map.galgas3", 339)), GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 340)), GGS_string ("lkey").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 341)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas3", 342)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-map.galgas3", 344))  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 338)) ;
  const GGS_mapDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_12500 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_12500.hasCurrentObject ()) {
    var_structAttributeList_12203.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-type-map.galgas3", 347)), enumerator_12500.current_typeName (HERE), enumerator_12500.current_name (HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas3", 350)), enumerator_12500.current_hasSelector (HERE), enumerator_12500.current_initialization (HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 346)) ;
    enumerator_12500.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeName_12770 = function_makeEmbeddedElementTypeLName (temp_1.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 354)) ;
  const GGS_mapDeclarationAST temp_2 = this ;
  const GGS_mapDeclarationAST temp_3 = this ;
  GGS_structComparison temp_4 ;
  const GalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas3", 360)) ;
  }else if (GalgasBool::boolFalse == test_5) {
    temp_4 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-map.galgas3", 360)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_2.readProperty_isPredefined (), var_elementTypeName_12770, var_structAttributeList_12203, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 355)) ;
  {
  GGS_lstring joker_13202 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_13202, var_elementTypeName_12770, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 364)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapDeclarationAST enterDeclarationInGraph'
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
  GGS_lstring var_key_13979 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 377)), temp_1.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_13979, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 378)) ;
  }
  const GGS_mapDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_14135 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_14135.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_14135.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 380)), enumerator_14135.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 380)) ;
    }
    enumerator_14135.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapDeclarationAST enterDeclarationInSemanticContext'
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
  GGS_unifiedTypeMapEntry var_stringTypeIndex_14999 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringTypeIndex_14999, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 396)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringTypeIndex_15096 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstring"), var_lstringTypeIndex_15096, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 398)) ;
  }
  GGS_enumerationDescriptorList temp_0 = GGS_enumerationDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 400)) ;
  temp_0.plusPlusAssignOperation (GGS_enumerationDescriptorList_2E_element::init_21__21_ (var_lstringTypeIndex_15096, GGS_string ("lkey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 400)) ;
  GGS_enumerationDescriptorList var_enumerationDescriptor_15181 = temp_0 ;
  GGS_classFunctionMap var_classFunctionMap_15270 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_getterMap var_getterMap_15353 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_15353, inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 403)) ;
  }
  GGS_setterMap var_setterMap_15383 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_15426 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_1 = this ;
  const GGS_mapDeclarationAST temp_2 = this ;
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_15270, ioArgument_ioTypeMap, GGS_string ("mapWithMapToOverride"), temp_1.readProperty_mMapTypeName ().readProperty_string (), GGS_string ("inMap"), temp_2.readProperty_mMapTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 407)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15353, ioArgument_ioTypeMap, GGS_string ("levels"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 417)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15353, ioArgument_ioTypeMap, GGS_string ("hasKeyAtLevel"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("uint"), GGS_string ("inLevel"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 425)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15353, ioArgument_ioTypeMap, GGS_string ("keySet"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 436)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15353, ioArgument_ioTypeMap, GGS_string ("keyList"), GGS_string::makeEmptyString (), GGS_string ("lstringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 444)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15353, ioArgument_ioTypeMap, GGS_string ("hasKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 452)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15353, ioArgument_ioTypeMap, GGS_string ("locationForKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 461)) ;
  }
  {
  const GGS_mapDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15353, ioArgument_ioTypeMap, GGS_string ("overriddenMap"), GGS_string::makeEmptyString (), temp_3.readProperty_mMapTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 470)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15353, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 478)) ;
  }
  GGS_formalParameterSignature var_insertMethodFormalArgumentList_17507 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedPropertyList_17577 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_optionalMethodSignature var_optionalMethodSignature_17652 = GGS_optionalMethodSignature::init (inCompiler COMMA_HERE) ;
  var_optionalMethodSignature_17652.addAssignOperation (GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 492)), var_stringTypeIndex_14999, GGS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 490)) ;
  GGS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_17808 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_17808.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 497)), var_lstringTypeIndex_15096, GGS_string ("lkey"), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 496)) ;
  var_insertMethodFormalArgumentList_17507.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 502)), var_lstringTypeIndex_15096, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas3", 504)), GGS_string ("inLKey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 501)) ;
  GGS_formalParameterSignature var_removeMethodFormalArgumentList_18179 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_removeMethodFormalArgumentList_18179.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 508)), var_lstringTypeIndex_15096, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas3", 510)), GGS_string ("inLKey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 507)) ;
  GGS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_18401 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_4 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_18497 (temp_4.readProperty_mPropertyList ()) ;
  while (enumerator_18497.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = enumerator_18497.current_initialization (HERE).getter_isSome (SOURCE_FILE ("declaration-type-map.galgas3", 514)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_18497.current_name (HERE).readProperty_location (), GGS_string ("property initialization is not handled for a map"), fixItArray6  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 515)) ;
      }
    }
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_18719 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18497.current_typeName (HERE), var_attributeTypeIndex_18719, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 517)) ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_17808.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 518)), var_attributeTypeIndex_18719, enumerator_18497.current_name (HERE).readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 518)) ;
    var_typedPropertyList_17577.addAssignOperation (var_attributeTypeIndex_18719, enumerator_18497.current_name (HERE), enumerator_18497.current_initialization (HERE), GGS_bool (true), enumerator_18497.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 519)) ;
    var_typesToIncludeInHeaderCompilation_18401.addAssignOperation (var_attributeTypeIndex_18719  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 520)) ;
    var_enumerationDescriptor_15181.addAssignOperation (var_attributeTypeIndex_18719, enumerator_18497.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 521)) ;
    GGS_lstring temp_7 ;
    const GalgasBool test_8 = enumerator_18497.current_hasSelector (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      temp_7 = enumerator_18497.current_name (HERE) ;
    }else if (GalgasBool::boolFalse == test_8) {
      temp_7 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 523)) ;
    }
    var_insertMethodFormalArgumentList_17507.addAssignOperation (temp_7, var_attributeTypeIndex_18719, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas3", 525)), enumerator_18497.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 522)) ;
    GGS_lstring temp_9 ;
    const GalgasBool test_10 = enumerator_18497.current_hasSelector (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      temp_9 = enumerator_18497.current_name (HERE) ;
    }else if (GalgasBool::boolFalse == test_10) {
      temp_9 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 528)) ;
    }
    var_removeMethodFormalArgumentList_18179.addAssignOperation (temp_9, var_attributeTypeIndex_18719, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-map.galgas3", 530)), enumerator_18497.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 527)) ;
    GGS_lstring temp_11 ;
    const GalgasBool test_12 = enumerator_18497.current_hasSelector (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      temp_11 = enumerator_18497.current_name (HERE) ;
    }else if (GalgasBool::boolFalse == test_12) {
      temp_11 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 534)) ;
    }
    var_optionalMethodSignature_17652.addAssignOperation (GGS_bool (false), temp_11, var_attributeTypeIndex_18719, enumerator_18497.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 532)) ;
    enumerator_18497.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_13 = this ;
  UpEnumerator_insertSetterListAST enumerator_19726 (temp_13.readProperty_mInsertSetterList ()) ;
  while (enumerator_19726.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_setterMap_15383.getter_hasKey (enumerator_19726.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 540)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_19726.current_mInsertMethodName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_19726.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 541)).add_operation (GGS_string ("' insert proc is already declared"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 541)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 541)) ;
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      {
      var_setterMap_15383.setter_insertOrReplace (enumerator_19726.current_mInsertMethodName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas3", 545)), var_insertMethodFormalArgumentList_17507, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas3", 548)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 543)) ;
      }
    }
    enumerator_19726.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_16 = this ;
  GGS_lstring var_elementTypeName_20177 = function_makeEmbeddedElementTypeLName (temp_16.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 554)) ;
  GGS_unifiedTypeMapEntry var_elementTypeEntry_20327 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_elementTypeName_20177, var_elementTypeEntry_20327, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 555)) ;
  }
  const GGS_mapDeclarationAST temp_17 = this ;
  UpEnumerator_mapAccessorListAST enumerator_20403 (temp_17.readProperty_mReplaceSetterList ()) ;
  while (enumerator_20403.hasCurrentObject ()) {
    GGS_formalParameterSignature temp_18 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 562)) ;
    temp_18.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("with").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 562)), var_elementTypeEntry_20327, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas3", 562)), GGS_string ("inEntry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 562)) ;
    GGS_formalParameterSignature var_replaceSetterFormalArgumentList_20461 = temp_18 ;
    {
    var_setterMap_15383.setter_insertOrReplace (enumerator_20403.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas3", 566)), var_replaceSetterFormalArgumentList_20461, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas3", 569)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 564)) ;
    }
    enumerator_20403.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_19 = this ;
  UpEnumerator_mapAccessorListAST enumerator_20817 (temp_19.readProperty_mRemoveSetterList ()) ;
  while (enumerator_20817.hasCurrentObject ()) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = var_setterMap_15383.getter_hasKey (enumerator_20817.current (HERE).readProperty_mName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 575)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        GenericArray <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_20817.current (HERE).readProperty_mName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_20817.current (HERE).readProperty_mName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 577)).add_operation (GGS_string ("' proc is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 577)), fixItArray21  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 576)) ;
      }
    }
    if (GalgasBool::boolFalse == test_20) {
      {
      var_setterMap_15383.setter_insertOrReplace (enumerator_20817.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas3", 582)), var_removeMethodFormalArgumentList_18179, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas3", 585)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 580)) ;
      }
    }
    enumerator_20817.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_22 = this ;
  UpEnumerator_mapAccessorListAST enumerator_21356 (temp_22.readProperty_mSearchMethodList ()) ;
  while (enumerator_21356.hasCurrentObject ()) {
    {
    var_instanceMethodMap_15426.setter_insertKey (enumerator_21356.current_mName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas3", 594)), var_removeMethodFormalArgumentList_18179, enumerator_21356.current_mName (HERE).readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas3", 598)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 592)) ;
    }
    enumerator_21356.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_23 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_21699 (temp_23.readProperty_mPropertyList ()) ;
  while (enumerator_21699.hasCurrentObject ()) {
    GGS_lstring var_accessorName_21726 = GGS_lstring::init_21__21_ (enumerator_21699.current (HERE).readProperty_name ().readProperty_string ().add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 604)), enumerator_21699.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_21862 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21699.current (HERE).readProperty_typeName (), var_attributeTypeIndex_21862, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 605)) ;
    }
    {
    GGS_functionSignature temp_24 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 609)) ;
    temp_24.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 609)), var_stringTypeIndex_14999, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 609)) ;
    var_getterMap_15353.setter_insertOrReplace (var_accessorName_21726, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas3", 608)), temp_24, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 610)), GGS_bool (true), var_attributeTypeIndex_21862, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas3", 613)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 606)) ;
    }
    enumerator_21699.gotoNextObject () ;
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    const GGS_mapDeclarationAST temp_26 = this ;
    test_25 = GGS_bool (ComparisonKind::greaterOrEqual, temp_26.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("declaration-type-map.galgas3", 618)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      GGS_location var_insertOrReplaceLocation_22362 ;
      const GGS_mapDeclarationAST temp_27 = this ;
      temp_27.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_22362, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 619)) ;
      {
      var_setterMap_15383.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insertOrReplace"), var_insertOrReplaceLocation_22362, inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas3", 622)), var_insertMethodFormalArgumentList_17507, GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas3", 625)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 620)) ;
      }
    }
  }
  const GGS_mapDeclarationAST temp_28 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_22734 (temp_28.readProperty_mPropertyList ()) ;
  while (enumerator_22734.hasCurrentObject ()) {
    GGS_lstring var_accessorName_22761 = GGS_lstring::init_21__21_ (GGS_string ("set").add_operation (enumerator_22734.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-map.galgas3", 632)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 632)).add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 632)), enumerator_22734.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_22993 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_22734.current (HERE).readProperty_typeName (), var_attributeTypeIndex_22993, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 635)) ;
    }
    GGS_formalParameterSignature var_accessorFormalArgumentList_23056 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    var_accessorFormalArgumentList_23056.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 640)), var_attributeTypeIndex_22993, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas3", 640)), enumerator_22734.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 640)) ;
    var_accessorFormalArgumentList_23056.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 641)), var_stringTypeIndex_14999, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas3", 641)), GGS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 641)) ;
    {
    var_setterMap_15383.setter_insertOrReplace (var_accessorName_22761, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas3", 644)), var_accessorFormalArgumentList_23056, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas3", 647)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 642)) ;
    }
    enumerator_22734.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_23584 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_23632 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_29 = this ;
  var_initializerMap_23584.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_23632, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 655)), temp_29.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_23632, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 654)) ;
  }
  GGS_typeFeatures var_features_23813 = GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-map.galgas3", 659)).operator_or (GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-map.galgas3", 660)) COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 659)) ;
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    const GGS_mapDeclarationAST temp_31 = this ;
    test_30 = temp_31.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      var_features_23813.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas3", 662)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 662)) ;
    }
  }
  {
  const GGS_mapDeclarationAST temp_32 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_32.readProperty_mMapTypeName (), var_features_23813, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 664)) ;
  }
  {
  const GGS_mapDeclarationAST temp_33 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_33.readProperty_mMapTypeName (), GGS_bool (false), var_initializerMap_23584, var_getterMap_15353, var_setterMap_15383, var_instanceMethodMap_15426, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 672)) ;
  }
  GGS_lstring var_optionalElementTypeName_24660 = function_makeOptionalTypeLName (var_elementTypeName_20177, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 688)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_24831 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_24660, var_optionalElementTypeEntry_24831, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 689)) ;
  }
  GGS_subscriptMap var_readSubscriptMap_24908 = GGS_subscriptMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature temp_34 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 695)) ;
  temp_34.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 695)), var_stringTypeIndex_14999, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 695)) ;
  GGS_functionSignature var_argumentTypeList_24958 = temp_34 ;
  {
  var_readSubscriptMap_24908.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_24958, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 697)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 697)), inCompiler COMMA_HERE), var_argumentTypeList_24958, var_optionalElementTypeEntry_24831, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 696)) ;
  }
  const GGS_mapDeclarationAST temp_35 = this ;
  UpEnumerator_mapAccessorListAST enumerator_25204 (temp_35.readProperty_mSearchSubscriptList ()) ;
  while (enumerator_25204.hasCurrentObject ()) {
    GGS_functionSignature temp_36 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 702)) ;
    temp_36.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (enumerator_25204.current_mName (HERE), var_lstringTypeIndex_15096, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 702)) ;
    GGS_functionSignature var_subscriptArgumentTypeList_25269 = temp_36 ;
    {
    var_readSubscriptMap_24908.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_subscriptArgumentTypeList_25269, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 704)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-map.galgas3", 704)), inCompiler COMMA_HERE), var_subscriptArgumentTypeList_25269, var_elementTypeEntry_20327, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 703)) ;
    }
    enumerator_25204.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_37 = this ;
  const GGS_mapDeclarationAST temp_38 = this ;
  const GGS_mapDeclarationAST temp_39 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_25568 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_37.readProperty_mMapTypeName (), temp_38.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas3", 715)), GGS_typeKindEnum::class_func_mapType (SOURCE_FILE ("declaration-type-map.galgas3", 716)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), var_typedPropertyList_17577, var_initializerMap_23584, var_classFunctionMap_15270, var_getterMap_15353, var_setterMap_15383, var_instanceMethodMap_15426, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas3", 727)), var_readSubscriptMap_24908, var_enumerationDescriptor_15181, var_features_23813, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_elementTypeEntry_20327, GGS_string ("map-").add_operation (temp_39.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-map.galgas3", 734)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 734)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-map.galgas3", 735)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_25568.readProperty_typeName (), var_typeDefinition_25568, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 737)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapDeclarationAST semanticAnalysis'
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
  GGS_lstring var_nameForUsefulness_27275 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 752)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_27275, var_nameForUsefulness_27275, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 753)) ;
  }
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_27431 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_1.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 755)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 754)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_27275, var_elementTypeNameForUsefulness_27431 COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 757)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_mapDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_27275  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 759)) ;
    }
  }
  const GGS_mapDeclarationAST temp_4 = this ;
  GGS_lstring var_initializerNameForUsefulness_27821 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mMapTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 764)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 762)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_27821, var_initializerNameForUsefulness_27821, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 766)) ;
  }
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_27821, var_nameForUsefulness_27275 COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 767)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_mapDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_27821  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 769)) ;
    }
  }
  GGS_typedPropertyList var_typedAttributeList_28332 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_28383 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_7 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_28447 (temp_7.readProperty_mPropertyList ()) ;
  while (enumerator_28447.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_28498 = function_typeNameForUsefulEntitiesGraph (enumerator_28447.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 775)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_27275, var_propertyTypeNameForUsefulness_28498 COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 776)) ;
    }
    GGS_unifiedTypeMapEntry var_t_28712 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_28447.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 777)) ;
    GGS_bool var_hasSelector_28776 = GGS_bool (false) ;
    var_typedAttributeList_28332.addAssignOperation (var_t_28712, enumerator_28447.current_name (HERE), enumerator_28447.current_initialization (HERE), GGS_bool (true), var_hasSelector_28776  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 779)) ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 785)).getter_hasKey (enumerator_28447.current_name (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 785)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GGS_string var_m_29036 = GGS_string ("a property cannot be named:") ;
        UpEnumerator_stringset enumerator_29115 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 787))) ;
        while (enumerator_29115.hasCurrentObject ()) {
          var_m_29036.plusAssignOperation(GGS_string (" ").add_operation (enumerator_29115.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 788)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 788)) ;
          enumerator_29115.gotoNextObject () ;
        }
        var_m_29036.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 790)) ;
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_28447.current_name (HERE).readProperty_location (), var_m_29036, fixItArray9  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 791)) ;
      }
    }
    {
    var_attributeMap_28383.setter_insertKey (enumerator_28447.current_name (HERE), var_t_28712, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 793)) ;
    }
    enumerator_28447.gotoNextObject () ;
  }
  GGS_insertMethodMap var_insertMethodMap_29353 = GGS_insertMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_10 = this ;
  UpEnumerator_insertSetterListAST enumerator_29416 (temp_10.readProperty_mInsertSetterList ()) ;
  while (enumerator_29416.hasCurrentObject ()) {
    {
    var_insertMethodMap_29353.setter_insertKey (enumerator_29416.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 798)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_29416.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 799)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_29416.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 800)) ;
    }
    enumerator_29416.gotoNextObject () ;
  }
  GGS_searchMethodMap var_searchMethodMap_29691 = GGS_searchMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_11 = this ;
  UpEnumerator_mapAccessorListAST enumerator_29740 (temp_11.readProperty_mSearchMethodList ()) ;
  while (enumerator_29740.hasCurrentObject ()) {
    {
    var_searchMethodMap_29691.setter_insertKey (enumerator_29740.current_mName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 805)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_29740.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 806)) ;
    }
    enumerator_29740.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_12 = this ;
  UpEnumerator_mapAccessorListAST enumerator_29946 (temp_12.readProperty_mRemoveSetterList ()) ;
  while (enumerator_29946.hasCurrentObject ()) {
    {
    var_insertMethodMap_29353.setter_insertKey (enumerator_29946.current_mName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 810)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_29946.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 811)) ;
    }
    enumerator_29946.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_13 = this ;
  UpEnumerator_insertOrReplaceDeclarationListAST enumerator_30174 (temp_13.readProperty_mInsertOrReplaceDeclarationListAST ()) ;
  GGS_uint index_30169 (uint32_t (0)) ;
  while (enumerator_30174.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::greaterThan, index_30169.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_30174.current_mInsertOrReplaceDeclarationLocation (HERE), GGS_string ("the 'insertOrReplace' setter is already declared"), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 816)) ;
      }
    }
    enumerator_30174.gotoNextObject () ;
    index_30169.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 814)) ;
  }
  const GGS_mapDeclarationAST temp_16 = this ;
  GGS_bool var_hasInsertOrReplaceModifier_30420 = GGS_bool (ComparisonKind::greaterThan, temp_16.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("declaration-type-map.galgas3", 819)).objectCompare (GGS_uint (uint32_t (0U)))) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = var_hasInsertOrReplaceModifier_30420.operator_and (var_insertMethodMap_29353.getter_hasKey (GGS_string ("insertOrReplace") COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 820)) COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 820)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GGS_location var_insertOrReplaceDeclarationLocation_30642 ;
      const GGS_mapDeclarationAST temp_18 = this ;
      temp_18.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceDeclarationLocation_30642, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 821)) ;
      GenericArray <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_30642, GGS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray19  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 822)) ;
    }
  }
  const GGS_mapDeclarationAST temp_20 = this ;
  GGS_lstring var_elementTypeName_30907 = function_makeEmbeddedElementTypeLName (temp_20.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 826)) ;
  GGS_unifiedTypeMapEntry var_elementTypeEntry_30983 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_elementTypeName_30907, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 827)) ;
  GGS_lstring var_optionalElementTypeName_31059 = function_makeOptionalTypeLName (var_elementTypeName_30907, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 828)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_31148 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_31059, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 829)) ;
  const GGS_mapDeclarationAST temp_21 = this ;
  const GGS_mapDeclarationAST temp_22 = this ;
  const GGS_mapDeclarationAST temp_23 = this ;
  const GGS_mapDeclarationAST temp_24 = this ;
  const GGS_mapDeclarationAST temp_25 = this ;
  const GGS_mapDeclarationAST temp_26 = this ;
  const GGS_mapDeclarationAST temp_27 = this ;
  const GGS_mapDeclarationAST temp_28 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("map ").add_operation (temp_21.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 832)), GGS_mapTypeForGeneration::init_21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_22.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 834)), var_elementTypeEntry_30983, temp_23.readProperty_mMapTypeName (), var_typedAttributeList_28332, temp_24.readProperty_mInsertSetterList (), temp_25.readProperty_mSearchMethodList (), temp_26.readProperty_mSearchSubscriptList (), temp_27.readProperty_mRemoveSetterList (), temp_28.readProperty_mReplaceSetterList (), var_hasInsertOrReplaceModifier_30420, var_optionalElementTypeEntry_31148, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 831)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                              GGS_string & outArgument_outHeader,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_32924 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 872)) ;
  const GGS_mapTypeForGeneration temp_1 = this ;
  const GGS_mapTypeForGeneration temp_2 = this ;
  const GGS_mapTypeForGeneration temp_3 = this ;
  const GGS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_mapGenerationTemplate_mapTypeHeader_31_ (inCompiler, var_selfTypeDefinition_32924.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 875)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList (), var_selfTypeDefinition_32924.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_32924.readProperty_typeForEnumeratedElement (), extensionGetter_identifierRepresentation (temp_4.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 880)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_32924.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 881)) COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 873))) ;
  const GGS_mapTypeForGeneration temp_5 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_32924.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 885)), var_selfTypeDefinition_32924.readProperty_isConcrete (), var_selfTypeDefinition_32924.readProperty_initializerMap (), var_selfTypeDefinition_32924.readProperty_classFunctionMap (), var_selfTypeDefinition_32924.readProperty_getterMap (), var_selfTypeDefinition_32924.readProperty_setterMap (), var_selfTypeDefinition_32924.readProperty_instanceMethodMap (), var_selfTypeDefinition_32924.readProperty_classMethodMap (), var_selfTypeDefinition_32924.readProperty_readSubscriptMap (), var_selfTypeDefinition_32924.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_32924.readProperty_features (), var_selfTypeDefinition_32924.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_32924.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_32924.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 883))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 883)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_string & outArgument_outImplementation,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 907)) ;
  const GGS_mapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mOptionalElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 908)) ;
  const GGS_mapTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 909)) ;
  const GGS_mapTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_34710 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 910)) ;
  const GGS_mapTypeForGeneration temp_4 = this ;
  const GGS_mapTypeForGeneration temp_5 = this ;
  const GGS_mapTypeForGeneration temp_6 = this ;
  const GGS_mapTypeForGeneration temp_7 = this ;
  const GGS_mapTypeForGeneration temp_8 = this ;
  const GGS_mapTypeForGeneration temp_9 = this ;
  const GGS_mapTypeForGeneration temp_10 = this ;
  const GGS_mapTypeForGeneration temp_11 = this ;
  const GGS_mapTypeForGeneration temp_12 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_mapGenerationTemplate_mapTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_34710.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-map.galgas3", 912)), temp_4.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 914)), temp_6.readProperty_mInsertSetterList (), extensionGetter_identifierRepresentation (temp_7.readProperty_mOptionalElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 916)), temp_8.readProperty_mSearchMethodList (), temp_9.readProperty_mSearchSubscriptList (), temp_10.readProperty_mRemoveSetterList (), temp_11.readProperty_mReplaceSetterList (), temp_12.readProperty_mHasInsertOrReplaceModifier (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_34710.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 922)) COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 911))) ;
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
  GGS_uint index_8979_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8979 (in_PROPERTY_5F_LIST) ;
    while (enumerator_8979.hasCurrentObject ()) {
      result.appendString ("      element.mProperty_") ;
      result.appendString (enumerator_8979.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 229)).stringValue ()) ;
      result.appendString (" = info->mProperty_") ;
      result.appendString (enumerator_8979.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 229)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_8979.gotoNextObject () ;
      index_8979_.increment () ;
    }
  }
  result.appendString ("      result = element ;\n    }\n  }\n  return result ;\n}\n\n") ;
  GGS_uint index_9251_ (0) ;
  if (in_SEARCH_5F_SUBSCRIPT_5F_LIST.isValid ()) {
    UpEnumerator_mapAccessorListAST enumerator_9251 (in_SEARCH_5F_SUBSCRIPT_5F_LIST) ;
    while (enumerator_9251.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("\n::readSubscript__3F_") ;
      result.appendString (enumerator_9251.current_mName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 241)).stringValue ()) ;
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
      result.appendString (enumerator_9251.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 251)).stringValue ()) ;
      result.appendString (" ;\n      GenericUniqueArray <String> nearestKeyArray ;\n      findNearestKey (key, nearestKeyArray) ;\n      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kErrorMessage COMMA_THERE) ;\n    }\n  }\n  return result ;\n}\n\n") ;
      enumerator_9251.gotoNextObject () ;
      index_9251_.increment () ;
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
  GGS_uint index_11336_ (0) ;
  if (in_INSERT_5F_SETTER_5F_LIST.isValid ()) {
    UpEnumerator_insertSetterListAST enumerator_11336 (in_INSERT_5F_SETTER_5F_LIST) ;
    while (enumerator_11336.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_11336.current_mInsertMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inLKey") ;
      GGS_uint index_11598_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_11598 (in_PROPERTY_5F_LIST) ;
        while (enumerator_11598.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_11598.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 292)).stringValue ()) ;
          result.appendString (" inArgument") ;
          result.appendString (index_11598_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 292)).stringValue ()) ;
          enumerator_11598.gotoNextObject () ;
          index_11598_IDX.increment () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n  ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" element (inLKey") ;
      GGS_uint index_11840_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_11840 (in_PROPERTY_5F_LIST) ;
        while (enumerator_11840.hasCurrentObject ()) {
          result.appendString (", inArgument") ;
          result.appendString (index_11840_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 297)).stringValue ()) ;
          enumerator_11840.gotoNextObject () ;
          index_11840_IDX.increment () ;
        }
      }
      result.appendString (") ;\n  const char * kInsertErrorMessage = ") ;
      result.appendString (enumerator_11336.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 298)).stringValue ()) ;
      result.appendString (" ;\n") ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_11336.current_mShadowErrorMessage (HERE).readProperty_string ().getter_count (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 300)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  const char * kShadowErrorMessage = nullptr ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("  const char * kShadowErrorMessage = ") ;
        result.appendString (enumerator_11336.current_mShadowErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 303)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;\n}\n\n") ;
      enumerator_11336.gotoNextObject () ;
      index_11336_.increment () ;
    }
  }
  GGS_uint index_12345_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    UpEnumerator_mapAccessorListAST enumerator_12345 (in_SEARCH_5F_METHOD_5F_LIST) ;
    while (enumerator_12345.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::method_") ;
      result.appendString (enumerator_12345.current_mName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 313)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inLKey") ;
      GGS_uint index_12652_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_12652 (in_PROPERTY_5F_LIST) ;
        while (enumerator_12652.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_12652.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 315)).stringValue ()) ;
          result.appendString (" & outArgument") ;
          result.appendString (index_12652_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 315)).stringValue ()) ;
          enumerator_12652.gotoNextObject () ;
          index_12652_IDX.increment () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n       ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> info ;\n  if (isValid () && inLKey.isValid ()) {\n    const String key = inLKey.mProperty_string.stringValue () ;\n    info = infoForKey (key) ;\n    if (info.isNil ()) {\n      GenericUniqueArray <String> nearestKeyArray ;\n      findNearestKey (key, nearestKeyArray) ;\n      const char * kSearchErrorMessage = ") ;
      result.appendString (enumerator_12345.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 326)).stringValue ()) ;
      result.appendString (" ;\n      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;\n    }\n  }\n  if (info.isNil ()) {\n") ;
      GGS_uint index_13432_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_13432 (in_PROPERTY_5F_LIST) ;
        while (enumerator_13432.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_13432_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 332)).stringValue ()) ;
          result.appendString (".drop () ;\n") ;
          enumerator_13432.gotoNextObject () ;
          index_13432_IDX.increment () ;
        }
      }
      result.appendString ("  }else{\n") ;
      GGS_uint index_13549_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_13549 (in_PROPERTY_5F_LIST) ;
        while (enumerator_13549.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_13549_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 336)).stringValue ()) ;
          result.appendString (" = info->mProperty_") ;
          result.appendString (enumerator_13549.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 336)).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_13549.gotoNextObject () ;
          index_13549_IDX.increment () ;
        }
      }
      result.appendString ("  }\n}\n") ;
      enumerator_12345.gotoNextObject () ;
      index_12345_.increment () ;
    }
  }
  GGS_uint index_13731_ (0) ;
  if (in_REMOVE_5F_SETTER_5F_LIST.isValid ()) {
    UpEnumerator_mapAccessorListAST enumerator_13731 (in_REMOVE_5F_SETTER_5F_LIST) ;
    while (enumerator_13731.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_13731.current_mName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 345)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inLKey") ;
      GGS_uint index_14000_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_14000 (in_PROPERTY_5F_LIST) ;
        while (enumerator_14000.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_14000.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 347)).stringValue ()) ;
          result.appendString (" & outArgument") ;
          result.appendString (index_14000_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 347)).stringValue ()) ;
          enumerator_14000.gotoNextObject () ;
          index_14000_IDX.increment () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> info ;\n  if (isValid () && inLKey.isValid ()) {\n    const char * kRemoveErrorMessage = ") ;
      result.appendString (enumerator_13731.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 353)).stringValue ()) ;
      result.appendString (" ;\n    const String key = inLKey.mProperty_string.stringValue () ;\n    mSharedRoot.insulate (THERE) ;\n    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;\n    if (info.isNil ()) {\n      GenericUniqueArray <String> nearestKeyArray ;\n      findNearestKey (key, nearestKeyArray) ;\n      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;\n    }\n  }\n  if (info.isNil ()) {\n") ;
      GGS_uint index_14840_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_14840 (in_PROPERTY_5F_LIST) ;
        while (enumerator_14840.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_14840_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 365)).stringValue ()) ;
          result.appendString (".drop () ;\n") ;
          enumerator_14840.gotoNextObject () ;
          index_14840_IDX.increment () ;
        }
      }
      result.appendString ("  }else{\n") ;
      GGS_uint index_14957_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_14957 (in_PROPERTY_5F_LIST) ;
        while (enumerator_14957.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_14957_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 369)).stringValue ()) ;
          result.appendString (" = info->mProperty_") ;
          result.appendString (enumerator_14957.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 369)).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_14957.gotoNextObject () ;
          index_14957_IDX.increment () ;
        }
      }
      result.appendString ("  }\n}\n") ;
      enumerator_13731.gotoNextObject () ;
      index_13731_.increment () ;
    }
  }
  GGS_uint index_15141_ (0) ;
  if (in_REPLACE_5F_SETTER_5F_LIST.isValid ()) {
    UpEnumerator_mapAccessorListAST enumerator_15141 (in_REPLACE_5F_SETTER_5F_LIST) ;
    while (enumerator_15141.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_15141.current_mName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 380)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" inElement,\n       ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n       ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inElement.isValid ()) {\n    const char * kReplaceErrorMessage = ") ;
      result.appendString (enumerator_15141.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 384)).stringValue ()) ;
      result.appendString (" ;\n    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;\n    mSharedRoot.insulate (HERE) ;\n    OptionalSharedRef <GenericMapNode <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (">> node = mSharedRoot->searchNode (key) ;\n    if (node.isNil ()) {\n      GenericUniqueArray <String> nearestKeyArray ;\n      findNearestKey (key, nearestKeyArray) ;\n      inCompiler->semanticErrorWith_K_message (\n        inElement.mProperty_lkey,\n        nearestKeyArray,\n        kReplaceErrorMessage\n        COMMA_THERE\n      ) ;\n    }else{\n      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (">::make (inElement COMMA_THERE) ;\n    }\n  }\n}\n") ;
      enumerator_15141.gotoNextObject () ;
      index_15141_.increment () ;
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
    GGS_uint index_16568_IDX (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_16568 (in_PROPERTY_5F_LIST) ;
      while (enumerator_16568.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_16568.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 409)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_16568_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 409)).stringValue ()) ;
        enumerator_16568.gotoNextObject () ;
        index_16568_IDX.increment () ;
      }
    }
    result.appendString ("\n ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" element (inLKey") ;
    GGS_uint index_16786_IDX (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_16786 (in_PROPERTY_5F_LIST) ;
      while (enumerator_16786.hasCurrentObject ()) {
        result.appendString (", inArgument") ;
        result.appendString (index_16786_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 413)).stringValue ()) ;
        enumerator_16786.gotoNextObject () ;
        index_16786_IDX.increment () ;
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
  GGS_uint index_17156_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_17156 (in_PROPERTY_5F_LIST) ;
    while (enumerator_17156.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_17156.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 426)).stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_17156.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 426)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GGS_string & inKey,\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_17156.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 429)).stringValue ()) ;
      result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const String key = inKey.stringValue () ;\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> info = infoForKey (key) ;\n    if (info.isNil ()) {\n      String message = \"cannot read property in map: the '\" ;\n      message.appendString (key) ;\n      message.appendCString (\"' key does not exist\") ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      result = info->mProperty_") ;
      result.appendString (enumerator_17156.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 439)).stringValue ()) ;
      result.appendString (" ;\n    }\n  }\n  return result ;\n}\n") ;
      enumerator_17156.gotoNextObject () ;
      index_17156_IDX.increment () ;
    }
  }
  GGS_uint index_18188_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_18188 (in_PROPERTY_5F_LIST) ;
    while (enumerator_18188.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_set") ;
      result.appendString (enumerator_18188.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 449)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 449)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_18188.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 449)).stringValue ()) ;
      result.appendString (" inValue,\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_string inKey,\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    const String key = inKey.stringValue () ;\n    mSharedRoot.insulate (HERE) ;\n    OptionalSharedRef <GenericMapNode <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (">> node = mSharedRoot->searchNode (key) ;\n    if (node.isNil ()) {\n      String message = \"cannot write property in map: the '\" ;\n      message.appendString (key) ;\n      message.appendCString (\"' key does not exist\") ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      node->mSharedInfo->mProperty_") ;
      result.appendString (enumerator_18188.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 463)).stringValue ()) ;
      result.appendString (" = inValue ;\n    }\n  }\n}\n") ;
      enumerator_18188.gotoNextObject () ;
      index_18188_IDX.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nstatic void GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> & inArray,\n                                                        String & ioString,\n                                                        const int32_t inIndentation) {\n  const int32_t n = inArray.count () ;\n  ioString.appendString (\" (\") ;\n  ioString.appendSigned (n) ;\n  ioString.appendString (\" object\") ;\n  if (n > 1) {\n    ioString.appendString (\"s\") ;\n  }\n  ioString.appendString (\"):\") ;\n  for (int32_t i = 0 ; i < n ; i++) {\n    ioString.appendNewLine () ;\n    ioString.appendStringMultiple (\"| \", inIndentation) ;\n    ioString.appendString (\"|-at \") ;\n    ioString.appendSigned (i) ;\n    ioString.appendString (\": key '\") ;\n    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;\n    ioString.appendString (\"'\") ;\n") ;
  GGS_uint index_20241_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_20241 (in_PROPERTY_5F_LIST) ;
    while (enumerator_20241.hasCurrentObject ()) {
      result.appendString ("    ioString.appendNewLine () ;\n    ioString.appendStringMultiple (\"| \", inIndentation + 2) ;\n    ioString.appendString (\"") ;
      result.appendString (enumerator_20241.current_name (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (":\") ;\n    inArray (i COMMA_HERE)->mProperty_") ;
      result.appendString (enumerator_20241.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 496)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation + 1) ;\n") ;
      enumerator_20241.gotoNextObject () ;
      index_20241_.increment () ;
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
  GGS_uint index_23891_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_23891 (in_PROPERTY_5F_LIST) ;
    while (enumerator_23891.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_23891.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 577)).stringValue ()) ;
      result.appendString (" DownEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_23891.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 577)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE)->mProperty_") ;
      result.appendString (enumerator_23891.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 578)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_23891.gotoNextObject () ;
      index_23891_.increment () ;
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
  GGS_uint index_25239_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_25239 (in_PROPERTY_5F_LIST) ;
    while (enumerator_25239.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_25239.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 608)).stringValue ()) ;
      result.appendString (" UpEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_25239.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 608)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE)->mProperty_") ;
      result.appendString (enumerator_25239.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 609)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_25239.gotoNextObject () ;
      index_25239_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@charPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_charPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-char.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-char.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-char.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@charPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 37)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 38)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Length"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 46)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf32CharConstantRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 54)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 62)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isalnum"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 70)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isalpha"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 78)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("iscntrl"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 86)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isdigit"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 94)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("islower"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isupper"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 110)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isxdigit"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 118)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeLetter"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 126)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeMark"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 134)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeNumber"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 142)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeSeparator"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 150)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeCommand"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 158)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodePunctuation"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 166)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeSymbol"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 174)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeName"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 182)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeToLower"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 190)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeToUpper"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 198)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@charPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("replacementCharacter"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 213)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeCharacterWithUnsigned"), GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 220)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeCharacterFromRawKeyboard"), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 229)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@charPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_charPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas3", 241))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@uintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_uintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 30))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@uintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_uintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 37)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 37)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 37)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 38)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 38)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 38)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 38)).operator_or (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 39)).operator_or (GGS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 39)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 39)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 39)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 39)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 40)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 40)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 40)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 40)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 41)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 41)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 42)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@uintPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compilationMode"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 50)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("random"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 57)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 64)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("errorCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 71)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("warningCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 78)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("valueWithMask"), GGS_string ("uint"), GGS_string ("inLowerIndex"), GGS_string ("uint"), GGS_string ("inUpperIndex"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 85)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@uintPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("double"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 111)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 119)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 127)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 135)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lsbIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 143)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantBitCount"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 151)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("oneBitCount"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 159)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 167)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("alphaString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 175)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 183)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 191)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 202)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeValueAssigned"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 210)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isInRange"), GGS_string ("range"), GGS_string ("inRange"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 218)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("uint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 226)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("uint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 233)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("uint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 240)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("uint"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 247)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@uintPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_classMethodMap & outArgument_outClassMethodMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setRandomSeed"), GGS_string ("uint"), GGS_string ("inSeed"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas3", 261)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@filewrapperPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_filewrapperPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@filewrapperPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_filewrapperPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_setterMap & outArgument_outSetterMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inDirectoryPath"), GGS_string ("setCurrentDirectory"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 44)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_getterMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 58)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allTextFilePaths"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 59)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allBinaryFilePaths"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 67)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allDirectoryPaths"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 75)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("currentDirectory"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 83)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allFilePathsWithExtension"), GGS_string ("string"), GGS_string ("inExtension"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 91)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoryExistsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("bool"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 98)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileExistsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("bool"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("textFileContentsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binaryFileContentsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("data"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 119)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("absolutePathForPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 126)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoriesAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("stringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binaryFilesAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("stringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 140)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("textFilesAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("stringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas3", 147)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@objectPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_objectPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-object.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-object.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas3", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@objectPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_objectPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas3", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@objectPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_objectPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas3", 43)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("objectStaticType"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas3", 44)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("objectDynamicType"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas3", 52)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@doublePredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_doublePredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 31)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 31)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 31)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 31)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 32)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 32)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 32)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 33)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 33)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas3", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 34)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@doublePredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 41)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 42)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 50)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 58)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 74)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cos"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 82)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sin"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 90)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("tan"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 98)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("log10"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 106)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("log2"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 114)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("logn"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 122)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("exp"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 130)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cosDegree"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 138)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sinDegree"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 146)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("tanDegree"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 154)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sqrt"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 162)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("power"), GGS_string ("double"), GGS_string ("inExponant"), GGS_string ("double"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 170)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binaryImage"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 177)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@doublePredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GGS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("pi"), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 192)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doubleWithBinaryImage"), GGS_string ("uint64"), GGS_string ("inBinaryImage"), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 199)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@doublePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_doublePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas3", 213))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolsetDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                 GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                 GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_boolsetDeclarationAST temp_0 = this ;
  const GGS_boolsetDeclarationAST temp_1 = this ;
  GGS_lstring var_key_4793 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 127)), temp_1.readProperty_mBoolsetTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_boolsetDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4793, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 128)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@boolsetDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_boolsetDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_boolsetDeclarationAST temp_0 = this ;
  result_result = GGS_string ("boolset @").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 136)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolsetDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                           const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                           const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_slotNameSet_6086 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_boolsetDeclarationAST temp_0 = this ;
  UpEnumerator_lstringlist enumerator_6111 (temp_0.readProperty_mFlagList ()) ;
  while (enumerator_6111.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_slotNameSet_6086.getter_hasKey (enumerator_6111.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 154)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6111.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated slot name"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 155)) ;
      }
    }
    var_slotNameSet_6086.plusPlusAssignOperation (enumerator_6111.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 157)) ;
    enumerator_6111.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_boolsetTypeIndex_6354 ;
  {
  const GGS_boolsetDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mBoolsetTypeName (), var_boolsetTypeIndex_6354, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 160)) ;
  }
  GGS_getterMap var_getterMap_6444 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6444, inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 162)) ;
  }
  {
  const GGS_boolsetDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6444, ioArgument_ioTypeMap, GGS_string ("contains"), GGS_string::makeEmptyString (), temp_4.readProperty_mBoolsetTypeName ().readProperty_string (), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 163)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_6742 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  const GGS_boolsetDeclarationAST temp_5 = this ;
  UpEnumerator_lstringlist enumerator_6772 (temp_5.readProperty_mFlagList ()) ;
  while (enumerator_6772.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_classFunctionMap_6742.getter_hasKey (enumerator_6772.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 176)).operator_not (SOURCE_FILE ("declaration-type-boolset.galgas3", 176)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        {
        var_classFunctionMap_6742.setter_insertKey (enumerator_6772.current_mValue (HERE), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_boolsetTypeIndex_6354, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 177)) ;
        }
      }
    }
    enumerator_6772.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_7007 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_7053 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_boolsetDeclarationAST temp_7 = this ;
  var_initializerMap_7007.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_7053, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 184)), temp_7.readProperty_mBoolsetTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_7053, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 183)) ;
  }
  GGS_setterMap var_setterMap_7243 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_7284 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_boolsetDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mBoolsetTypeName (), GGS_bool (false), var_initializerMap_7007, var_getterMap_6444, var_setterMap_7243, var_instanceMethodMap_7284, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 190)) ;
  }
  GGS_typeFeatures var_features_7722 = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-type-boolset.galgas3", 206)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-type-boolset.galgas3", 206)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 206)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-type-boolset.galgas3", 206)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 206)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-type-boolset.galgas3", 207)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 206)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-boolset.galgas3", 208)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 207)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-type-boolset.galgas3", 208)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 208)).operator_or (GGS_typeFeatures::class_func_andAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-boolset.galgas3", 209)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 208)).operator_or (GGS_typeFeatures::class_func_orAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-boolset.galgas3", 210)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 209)).operator_or (GGS_typeFeatures::class_func_xorAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-boolset.galgas3", 211)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 210)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-boolset.galgas3", 212)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 211)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_boolsetDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isEquatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      var_features_7722.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-boolset.galgas3", 214)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 214)) ;
    }
  }
  {
  const GGS_boolsetDeclarationAST temp_11 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_11.readProperty_mBoolsetTypeName (), var_features_7722, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 216)) ;
  }
  const GGS_boolsetDeclarationAST temp_12 = this ;
  const GGS_boolsetDeclarationAST temp_13 = this ;
  const GGS_boolsetDeclarationAST temp_14 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8369 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_12.readProperty_mBoolsetTypeName (), temp_13.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-boolset.galgas3", 229)), GGS_typeKindEnum::class_func_boolsetType (SOURCE_FILE ("declaration-type-boolset.galgas3", 230)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_7007, var_classFunctionMap_6742, var_getterMap_6444, var_setterMap_7243, var_instanceMethodMap_7284, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-boolset.galgas3", 241)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_7722, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-boolset.galgas3", 247)), GGS_string ("boolset-").add_operation (temp_14.readProperty_mBoolsetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-boolset.galgas3", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 248)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-boolset.galgas3", 249)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8369.readProperty_typeName (), var_typeDefinition_8369, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 251)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolsetDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GGS_string /* constinArgument_inProductDirectory */,
                                                          const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                          const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_boolsetDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-boolset.galgas3", 269)).objectCompare (GGS_uint (uint32_t (64U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_boolsetDeclarationAST temp_2 = this ;
      GGS_location var_s_10121 = temp_2.readProperty_mFlagList ().getter_mValueAtIndex (GGS_uint (uint32_t (64U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 270)).readProperty_location () ;
      const GGS_boolsetDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_10121, GGS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-boolset.galgas3", 271)).getter_string (SOURCE_FILE ("declaration-type-boolset.galgas3", 271)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 271)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 271)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 271)) ;
    }
  }
  const GGS_boolsetDeclarationAST temp_5 = this ;
  GGS_lstring var_boolsetNameForUsefulness_10277 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 274)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_10277, var_boolsetNameForUsefulness_10277, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 275)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_boolsetDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_boolsetNameForUsefulness_10277  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 277)) ;
    }
  }
  const GGS_boolsetDeclarationAST temp_8 = this ;
  GGS_lstring var_initializerNameForUsefulness_10612 = function_initializerNameForUsefulEntitiesGraph (temp_8.readProperty_mBoolsetTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 282)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 280)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_10612, var_initializerNameForUsefulness_10612, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 284)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_boolsetDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_10612  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 286)) ;
    }
  }
  const GGS_boolsetDeclarationAST temp_11 = this ;
  const GGS_boolsetDeclarationAST temp_12 = this ;
  const GGS_boolsetDeclarationAST temp_13 = this ;
  const GGS_boolsetDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("boolset ").add_operation (temp_11.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 290)), GGS_boolsetTypeForGeneration::init_21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 292)), temp_13.readProperty_mFlagList (), temp_14.readProperty_isEquatable (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 289)) ;
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

GGS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (Compiler * inCompiler,
                                                                               const GGS_string & /* in_TYPE_5F_NAME */,
                                                                               const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const GGS_lstringlist & /* in_SLOT_5F_LIST */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 2)).add_operation (GGS_string (" boolset"), inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Properties\n  private: uint64_t mFlags ;\n  private: bool mIsValid ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Private constructor\n  private: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                           const GGS_string & in_TYPE_5F_NAME,
                                                                                           const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                           const GGS_lstringlist & in_SLOT_5F_LIST,
                                                                                           const GGS_bigint & in_FULL_5F_SET,
                                                                                           const GGS_bool & in_EQUATABLE
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmFlags (0),\nmIsValid (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) :\nAC_GALGAS_root (),\nmFlags (inFlags),\nmIsValid (true) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  return GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (0) ;\n}\n\n") ;
  GGS_uint index_713_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    UpEnumerator_lstringlist enumerator_713 (in_SLOT_5F_LIST) ;
    while (enumerator_713.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_713.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" (uint64_t (1) << ") ;
      result.appendString (index_713_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (") ;\n}\n\n") ;
      enumerator_713.gotoNextObject () ;
      index_713_idx.increment () ;
    }
  }
  const GalgasBool test_0 = in_EQUATABLE.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::invalid ;\n   if (mIsValid && inOperand.mIsValid) {\n     result = ComparisonResult::operandEqual ;\n     if (mFlags < inOperand.mFlags) {\n       result = ComparisonResult::firstOperandLowerThanSecond ;\n     }else if (mFlags > inOperand.mFlags) {\n       result = ComparisonResult::firstOperandGreaterThanSecond ;\n     }\n   }\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mIsValid ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_contains (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = GGS_bool ((mFlags & inOperand.mFlags) != 0) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::andAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags &= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::orAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags |= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::xorAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags ^= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::minusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * /* inCompiler */\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags &= ~ inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_or (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags | inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_and (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_xor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags ^ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::substract_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & ~ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_tilde (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid) {\n    result = GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (uint64_t (") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 155)).stringValue ()) ;
  result.appendString (") ^ mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<boolset @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (":\") ;\n  if (! isValid ()) {\n    ioString.appendCString (\" not built\") ;\n  }else{\n") ;
  GGS_uint index_6298_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    UpEnumerator_lstringlist enumerator_6298 (in_SLOT_5F_LIST) ;
    while (enumerator_6298.hasCurrentObject ()) {
      result.appendString ("    if ((mFlags & (uint64_t (1) << ") ;
      result.appendString (index_6298_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 170)).stringValue ()) ;
      result.appendString (")) != 0) {\n      ioString.appendCString (\" ") ;
      result.appendString (enumerator_6298.current_mValue (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") ;\n    }\n") ;
      enumerator_6298.gotoNextObject () ;
      index_6298_idx.increment () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolsetTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GGS_string & outArgument_outHeader,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_boolsetTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_12350 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 331)) ;
  const GGS_boolsetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, var_selfTypeDefinition_12350.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_12350.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-boolset.galgas3", 334)), temp_1.readProperty_mFlagList () COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 332))) ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_12350.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_12350.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-boolset.galgas3", 339)), var_selfTypeDefinition_12350.readProperty_isConcrete (), var_selfTypeDefinition_12350.readProperty_initializerMap (), var_selfTypeDefinition_12350.readProperty_classFunctionMap (), var_selfTypeDefinition_12350.readProperty_getterMap (), var_selfTypeDefinition_12350.readProperty_setterMap (), var_selfTypeDefinition_12350.readProperty_instanceMethodMap (), var_selfTypeDefinition_12350.readProperty_classMethodMap (), var_selfTypeDefinition_12350.readProperty_readSubscriptMap (), var_selfTypeDefinition_12350.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_12350.readProperty_features (), var_selfTypeDefinition_12350.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_12350.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_12350.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 337))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 337)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolsetTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_string & outArgument_outImplementation,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_boolsetTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 363)) ;
  const GGS_boolsetTypeForGeneration temp_1 = this ;
  const GGS_boolsetTypeForGeneration temp_2 = this ;
  const GGS_boolsetTypeForGeneration temp_3 = this ;
  const GGS_boolsetTypeForGeneration temp_4 = this ;
  const GGS_boolsetTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 365)).readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 366)), temp_3.readProperty_mFlagList (), GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 368)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-boolset.galgas3", 368)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 368)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 368)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 368)), temp_5.readProperty_equatable () COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 364))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@applicationPredefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum cPtr_applicationPredefinedTypeAST::getter_typeKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeKindEnum result_result ; // Returned variable
  result_result = GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-predefined-type-application.galgas3", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@applicationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_applicationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@applicationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_applicationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-application.galgas3", 42)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@applicationPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GGS_classFunctionMap & outArgument_outMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("system"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 50)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("verboseOutput"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 57)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("projectVersionString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 64)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("galgasVersionString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 71)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("commandLineArgumentCount"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 78)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("commandLineArgumentAtIndex"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 85)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionNameList"), GGS_string ("2stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 95)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionInvocationCharacter"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 102)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionInvocationString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 113)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionCommentString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 124)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("boolOptionValue"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 135)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionNameList"), GGS_string ("2stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 147)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionInvocationCharacter"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 154)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionInvocationString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 165)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionCommentString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 176)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintOptionValue"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 187)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionNameList"), GGS_string ("2stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 199)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionInvocationCharacter"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 206)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionInvocationString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 217)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionCommentString"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 228)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringOptionValue"), GGS_string ("string"), GGS_string ("inOptionComponentName"), GGS_string ("string"), GGS_string ("inOptionName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 239)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("keywordIdentifierSet"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 251)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("keywordListForIdentifier"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 258)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@applicationPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classMethodMap & outArgument_outClassMethodMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("exit"), GGS_string ("uint"), GGS_string ("inErrorCode"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 274)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setBoolOptionValue"), GGS_string ("string"), GGS_string ("inDomain"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("bool"), GGS_string ("inValue"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 282)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setUIntOptionValue"), GGS_string ("string"), GGS_string ("inDomain"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("uint"), GGS_string ("inValue"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 294)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setStringOptionValue"), GGS_string ("string"), GGS_string ("inDomain"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("string"), GGS_string ("inValue"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas3", 306)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@boolPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_boolPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 31)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 31)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@boolPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_boolPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 37))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 51)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 52)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("ocString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 68)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 76)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 84)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 92)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas3", 100)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@classDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_classDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_classDeclarationAST temp_0 = this ;
  result_result = GGS_string ("class @").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 201)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                               GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                               GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classDeclarationAST temp_0 = this ;
  const GGS_classDeclarationAST temp_1 = this ;
  GGS_lstring var_key_7176 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 214)), temp_1.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_classDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7176, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 215)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_classDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      const GGS_classDeclarationAST temp_5 = this ;
      const GGS_classDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7176, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 220)), temp_6.readProperty_mSuperClassName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 218)) ;
      }
    }
  }
  const GGS_classDeclarationAST temp_7 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_7634 (temp_7.readProperty_mPropertyList ()) ;
  while (enumerator_7634.hasCurrentObject ()) {
    const GGS_classDeclarationAST temp_8 = this ;
    GGS_lstring var_propertyKey_7661 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_7634.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 225)), temp_8.readProperty_mSuperClassName ().readProperty_location (), inCompiler COMMA_HERE) ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = GGS_bool (ComparisonKind::equal, enumerator_7634.current (HERE).readProperty_typeName ().readProperty_string ().getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 226)).objectCompare (GGS_char (utf32 (63)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (var_propertyKey_7661 COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 227)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      {
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7176, var_propertyKey_7661 COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 229)) ;
      }
    }
    enumerator_7634.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                         const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                         const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_getterMap var_getterMap_8623 ;
  GGS_setterMap var_setterMap_8652 ;
  GGS_instanceMethodMap var_instanceMethodMap_8689 ;
  GGS_typedPropertyList var_inheritedTypedPropertyList_8734 ;
  GGS_propertyMap var_attributeMap_8782 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_superClassIndex_8857 ;
  GGS_bool var_generateHeaderInSeparateFile_8887 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_classDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_superClassIndex_8857 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas3", 253)) ;
      {
      routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_8623, inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 254)) ;
      }
      var_setterMap_8652 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
      var_instanceMethodMap_8689 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
      var_inheritedTypedPropertyList_8734 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
      var_attributeMap_8782 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
      const GGS_classDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_8887 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_classDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperClassName (), var_superClassIndex_8857, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 261)) ;
    }
    const GGS_classDeclarationAST temp_4 = this ;
    GGS_unifiedTypeDefinition var_superTypeDefinition_9320 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 262)) ;
    var_inheritedTypedPropertyList_8734 = var_superTypeDefinition_9320.readProperty_allTypedPropertyList () ;
    var_attributeMap_8782 = var_superTypeDefinition_9320.readProperty_propertyMap () ;
    var_generateHeaderInSeparateFile_8887 = var_superTypeDefinition_9320.readProperty_generateHeaderInSeparateFile () ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_superTypeDefinition_9320.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("declaration-type-class.galgas3", 267)).operator_not (SOURCE_FILE ("declaration-type-class.galgas3", 267)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_classDeclarationAST temp_6 = this ;
        const GGS_classDeclarationAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperClassName ().readProperty_location (), GGS_string ("the @").add_operation (temp_7.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 268)).add_operation (GGS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 268)), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 268)) ;
      }
    }
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_superTypeDefinition_9320.readProperty_isFinal ().boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_classDeclarationAST temp_10 = this ;
        const GGS_classDeclarationAST temp_11 = this ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mSuperClassName ().readProperty_location (), GGS_string ("cannot inherit from the @").add_operation (temp_11.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 271)).add_operation (GGS_string (" final class"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 271)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 271)) ;
      }
    }
    var_setterMap_8652 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_setterMap enumerator_10064 (var_superTypeDefinition_9320.readProperty_setterMap ()) ;
    while (enumerator_10064.hasCurrentObject ()) {
      {
      var_setterMap_8652.setter_insertKey (enumerator_10064.current_lkey (HERE), enumerator_10064.current_mKind (HERE), enumerator_10064.current_mParameterList (HERE), enumerator_10064.current_mHasCompilerArgument (HERE), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas3", 281)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 276)) ;
      }
      enumerator_10064.gotoNextObject () ;
    }
    var_getterMap_8623 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_getterMap enumerator_10408 (var_superTypeDefinition_9320.readProperty_getterMap ()) ;
    while (enumerator_10408.hasCurrentObject ()) {
      {
      var_getterMap_8623.setter_insertKey (enumerator_10408.current (HERE).readProperty_lkey (), enumerator_10408.current (HERE).readProperty_mKind (), enumerator_10408.current (HERE).readProperty_mArgumentTypeList (), enumerator_10408.current (HERE).readProperty_mDeclarationLocation (), enumerator_10408.current (HERE).readProperty_mHasCompilerArgument (), enumerator_10408.current (HERE).readProperty_mReturnedType (), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas3", 295)), enumerator_10408.current (HERE).readProperty_mGetterNameThatObsoletesInvokationName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 288)) ;
      }
      enumerator_10408.gotoNextObject () ;
    }
    var_instanceMethodMap_8689 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_instanceMethodMap enumerator_10885 (var_superTypeDefinition_9320.readProperty_instanceMethodMap ()) ;
    while (enumerator_10885.hasCurrentObject ()) {
      {
      var_instanceMethodMap_8689.setter_insertKey (enumerator_10885.current (HERE).readProperty_lkey (), enumerator_10885.current (HERE).readProperty_mKind (), enumerator_10885.current (HERE).readProperty_mParameterList (), enumerator_10885.current (HERE).readProperty_mDeclarationLocation (), enumerator_10885.current (HERE).readProperty_mHasCompilerArgument (), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas3", 308)), enumerator_10885.current (HERE).readProperty_mErrorMessage (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 302)) ;
      }
      enumerator_10885.gotoNextObject () ;
    }
  }
  GGS_unifiedTypeMapEntry var_classIndex_11337 ;
  {
  const GGS_classDeclarationAST temp_13 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_13.readProperty_mClassTypeName (), var_classIndex_11337, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 314)) ;
  }
  GGS_functionSignature var_synthetizedInitializerArgumentList_11434 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  UpEnumerator_typedPropertyList enumerator_11495 (var_inheritedTypedPropertyList_8734) ;
  while (enumerator_11495.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::equal, enumerator_11495.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas3", 318)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GGS_lstring temp_15 ;
        const GalgasBool test_16 = enumerator_11495.current (HERE).readProperty_hasSelector ().boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          temp_15 = enumerator_11495.current (HERE).readProperty_name () ;
        }else if (GalgasBool::boolFalse == test_16) {
          temp_15 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas3", 320)) ;
        }
        var_synthetizedInitializerArgumentList_11434.addAssignOperation (temp_15, enumerator_11495.current (HERE).readProperty_typeEntry (), enumerator_11495.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 319)) ;
      }
    }
    enumerator_11495.gotoNextObject () ;
  }
  const GGS_classDeclarationAST temp_17 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_11813 (temp_17.readProperty_mPropertyList ()) ;
  while (enumerator_11813.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_11883 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11813.current (HERE).readProperty_typeName (), var_attributeTypeIndex_11883, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 327)) ;
    }
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = GGS_bool (ComparisonKind::equal, enumerator_11813.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas3", 328)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        GGS_lstring temp_19 ;
        const GalgasBool test_20 = enumerator_11813.current (HERE).readProperty_hasSelector ().boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          temp_19 = enumerator_11813.current (HERE).readProperty_name () ;
        }else if (GalgasBool::boolFalse == test_20) {
          temp_19 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas3", 330)) ;
        }
        var_synthetizedInitializerArgumentList_11434.addAssignOperation (temp_19, var_attributeTypeIndex_11883, enumerator_11813.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 329)) ;
      }
    }
    {
    var_attributeMap_8782.setter_insertKey (enumerator_11813.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_11813.current (HERE).readProperty_accessControl (), var_classIndex_11337, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 337)), enumerator_11813.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas3", 338)), var_attributeTypeIndex_11883, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 335)) ;
    }
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = var_getterMap_8623.getter_hasKey (enumerator_11813.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 341)).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_11813.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("'").add_operation (enumerator_11813.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 343)).add_operation (GGS_string ("' is the name of a prefefined or a user defined func"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 343)), fixItArray22  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 342)) ;
      }
    }
    enumerator_11813.gotoNextObject () ;
  }
  GGS_typedPropertyList var_currentClassTypedPropertyList_12621 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_allTypedAttributeList_12684 = var_inheritedTypedPropertyList_8734 ;
  const GGS_classDeclarationAST temp_23 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_12760 (temp_23.readProperty_mPropertyList ()) ;
  while (enumerator_12760.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_12830 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12760.current (HERE).readProperty_typeName (), var_attributeTypeIndex_12830, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 350)) ;
    }
    var_currentClassTypedPropertyList_12621.addAssignOperation (var_attributeTypeIndex_12830, enumerator_12760.current (HERE).readProperty_name (), enumerator_12760.current (HERE).readProperty_initialization (), enumerator_12760.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas3", 355)).operator_not (SOURCE_FILE ("declaration-type-class.galgas3", 355)), enumerator_12760.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 351)) ;
    var_allTypedAttributeList_12684.addAssignOperation (var_attributeTypeIndex_12830, enumerator_12760.current (HERE).readProperty_name (), enumerator_12760.current (HERE).readProperty_initialization (), enumerator_12760.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas3", 361)).operator_not (SOURCE_FILE ("declaration-type-class.galgas3", 361)), enumerator_12760.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 357)) ;
    enumerator_12760.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_13351 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_typeFeatures var_features_13394 = GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-class.galgas3", 366)) ;
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    const GGS_classDeclarationAST temp_25 = this ;
    test_24 = temp_25.readProperty_clonable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      var_features_13394.orAssignOperation(GGS_typeFeatures::class_func_clonable (SOURCE_FILE ("declaration-type-class.galgas3", 368)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 368)) ;
      GGS_functionSignature var_cloneInitializerArgumentList_13508 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
      var_cloneInitializerArgumentList_13508.addAssignOperation (GGS_string ("cloned").getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas3", 371)), var_classIndex_11337, GGS_string ("inObject"), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 370)) ;
      {
      const GGS_classDeclarationAST temp_26 = this ;
      var_initializerMap_13351.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_cloneInitializerArgumentList_13508, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 376)), temp_26.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_cloneInitializerArgumentList_13508, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 375)) ;
      }
    }
  }
  {
  const GGS_classDeclarationAST temp_27 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_27.readProperty_mClassTypeName (), GGS_bool (true), var_initializerMap_13351, var_getterMap_8623, var_setterMap_8652, var_instanceMethodMap_8689, GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 381)) ;
  }
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    const GGS_classDeclarationAST temp_29 = this ;
    GGS_bigint temp_30 ;
    const GalgasBool test_31 = temp_29.readProperty_clonable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      temp_30 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 397)) ;
    }else if (GalgasBool::boolFalse == test_31) {
      temp_30 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 397)) ;
    }
    test_28 = GGS_bool (ComparisonKind::equal, var_initializerMap_13351.getter_count (SOURCE_FILE ("declaration-type-class.galgas3", 397)).objectCompare (temp_30.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 397)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      var_features_13394.orAssignOperation(GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas3", 398)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 398)) ;
      {
      const GGS_classDeclarationAST temp_32 = this ;
      var_initializerMap_13351.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_synthetizedInitializerArgumentList_11434, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 400)), temp_32.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_synthetizedInitializerArgumentList_11434, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 399)) ;
      }
    }
  }
  {
  const GGS_classDeclarationAST temp_33 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_33.readProperty_mClassTypeName (), var_features_13394, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 404)) ;
  }
  const GGS_classDeclarationAST temp_34 = this ;
  const GGS_classDeclarationAST temp_35 = this ;
  const GGS_classDeclarationAST temp_36 = this ;
  const GGS_classDeclarationAST temp_37 = this ;
  const GGS_classDeclarationAST temp_38 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_14864 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_34.readProperty_mClassTypeName (), temp_35.readProperty_isPredefined (), temp_36.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("declaration-type-class.galgas3", 415)), temp_37.readProperty_mIsFinal (), var_superClassIndex_8857, GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("declaration-type-class.galgas3", 418)), GGS_bool (false), var_allTypedAttributeList_12684, var_attributeMap_8782, var_currentClassTypedPropertyList_12621, var_initializerMap_13351, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_8623, var_setterMap_8652, var_instanceMethodMap_8689, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas3", 429)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_13394, GGS_functionSignature::init (inCompiler COMMA_HERE), var_generateHeaderInSeparateFile_8887, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas3", 435)), GGS_string ("class-").add_operation (temp_38.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-class.galgas3", 436)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 436)), GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("declaration-type-class.galgas3", 437)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14864.readProperty_typeName (), var_typeDefinition_14864, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 439)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GGS_string /* constinArgument_inProductDirectory */,
                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                        GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classDeclarationAST temp_0 = this ;
  GGS_lstring var_classTypeNameForUsefulness_16589 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 452)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_16589, var_classTypeNameForUsefulness_16589, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 453)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_classDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_classTypeNameForUsefulness_16589  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 455)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_classDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_classDeclarationAST temp_5 = this ;
      GGS_lstring var_superClassNameForUsefulness_16923 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 458)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16589, var_superClassNameForUsefulness_16923 COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 459)) ;
      }
    }
  }
  const GGS_classDeclarationAST temp_6 = this ;
  GGS_lstring var_weakRefTypeNameForUsefulness_17131 = function_typeNameForUsefulEntitiesGraph (function_makeWeakTypeLName (temp_6.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 461)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 461)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16589, var_weakRefTypeNameForUsefulness_17131 COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 462)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_classDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_weakRefTypeNameForUsefulness_17131  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 464)) ;
    }
  }
  const GGS_classDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_selfType_17495 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 467)) ;
  const GGS_classDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry temp_11 ;
  const GalgasBool test_12 = GGS_bool (ComparisonKind::equal, temp_10.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_12) {
    temp_11 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas3", 470)) ;
  }else if (GalgasBool::boolFalse == test_12) {
    const GGS_classDeclarationAST temp_13 = this ;
    temp_11 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_13.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 471)) ;
  }
  GGS_unifiedTypeMapEntry var_superClassEntry_17613 = temp_11 ;
  GGS_typedPropertyList var_allAttributeList_17981 ;
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = GGS_bool (ComparisonKind::equal, var_superClassEntry_17613.objectCompare (GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas3", 477)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      var_allAttributeList_17981 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_14) {
    var_allAttributeList_17981 = extensionGetter_definition (var_superClassEntry_17613, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 480)).readProperty_allTypedPropertyList () ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      const GGS_classDeclarationAST temp_16 = this ;
      test_15 = temp_16.readProperty_mGenerateInSeparateFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        const GGS_classDeclarationAST temp_17 = this ;
        GenericArray <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (temp_17.readProperty_mClassTypeName ().readProperty_location (), GGS_string ("a class that has a super class does not accept any feature"), fixItArray18  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 482)) ;
      }
    }
  }
  GGS_typedPropertyList var_synthetizedInheritedInitializerArgumentList_18333 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_typedPropertyList enumerator_18403 (var_allAttributeList_17981) ;
  while (enumerator_18403.hasCurrentObject ()) {
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::equal, enumerator_18403.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas3", 487)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        var_synthetizedInheritedInitializerArgumentList_18333.addAssignOperation (enumerator_18403.current (HERE).readProperty_typeEntry (), enumerator_18403.current (HERE).readProperty_name (), enumerator_18403.current (HERE).readProperty_initialization (), enumerator_18403.current (HERE).readProperty_hasSetter (), enumerator_18403.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 488)) ;
      }
    }
    enumerator_18403.gotoNextObject () ;
  }
  GGS_typedPropertyList var_typedAttributeList_18773 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_18824 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_classDeclarationAST temp_20 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_18868 (temp_20.readProperty_mPropertyList ()) ;
  while (enumerator_18868.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_18895 = function_typeNameForUsefulEntitiesGraph (enumerator_18868.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 500)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16589, var_propertyTypeNameForUsefulness_18895 COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 501)) ;
    }
    GGS_unifiedTypeMapEntry var_t_19098 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_18868.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 502)) ;
    var_typedAttributeList_18773.addAssignOperation (var_t_19098, enumerator_18868.current (HERE).readProperty_name (), enumerator_18868.current (HERE).readProperty_initialization (), enumerator_18868.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas3", 507)).operator_not (SOURCE_FILE ("declaration-type-class.galgas3", 507)), enumerator_18868.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 503)) ;
    var_allAttributeList_17981.addAssignOperation (var_t_19098, enumerator_18868.current (HERE).readProperty_name (), enumerator_18868.current (HERE).readProperty_initialization (), enumerator_18868.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas3", 513)).operator_not (SOURCE_FILE ("declaration-type-class.galgas3", 513)), enumerator_18868.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 509)) ;
    {
    var_attributeMap_18824.setter_insertKey (enumerator_18868.current (HERE).readProperty_name (), var_t_19098, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 515)) ;
    }
    enumerator_18868.gotoNextObject () ;
  }
  GGS_typedPropertyList var_synthetizedInitialzerArgumentList_19682 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_typedPropertyList enumerator_19762 (extensionGetter_definition (var_selfType_17495, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 519)).readProperty_allTypedPropertyList ()) ;
  while (enumerator_19762.hasCurrentObject ()) {
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::equal, enumerator_19762.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas3", 520)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        var_synthetizedInitialzerArgumentList_19682.addAssignOperation (enumerator_19762.current (HERE).readProperty_typeEntry (), enumerator_19762.current (HERE).readProperty_name (), enumerator_19762.current (HERE).readProperty_initialization (), enumerator_19762.current (HERE).readProperty_hasSetter (), enumerator_19762.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 521)) ;
      }
    }
    enumerator_19762.gotoNextObject () ;
  }
  GGS_stringset var_unusedVariableCppNameSet_20254 ;
  GGS_string var_initializationCode_20290 ;
  const GGS_classDeclarationAST temp_22 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_22.readProperty_mPropertyList (), var_classTypeNameForUsefulness_16589, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_20254, var_initializationCode_20290, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 529)) ;
  GGS_bool var_constructorNeedsCompilerVar_20333 = var_unusedVariableCppNameSet_20254.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 539)) COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 539)).operator_not (SOURCE_FILE ("declaration-type-class.galgas3", 539)) ;
  const GGS_classDeclarationAST temp_23 = this ;
  const GGS_classDeclarationAST temp_24 = this ;
  const GGS_classDeclarationAST temp_25 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("class ").add_operation (temp_23.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 541)), GGS_classTypeForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21_ (var_selfType_17495, temp_24.readProperty_mIsAbstract (), var_superClassEntry_17613, var_allAttributeList_17981, var_typedAttributeList_18773, extensionGetter_definition (var_selfType_17495, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 548)).readProperty_generateHeaderInSeparateFile (), var_constructorNeedsCompilerVar_20333, var_initializationCode_20290, var_synthetizedInitialzerArgumentList_19682, var_synthetizedInheritedInitializerArgumentList_18333, extensionGetter_definition (var_selfType_17495, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 553)).readProperty_initializerMap (), temp_25.readProperty_clonable (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 540)) ;
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    test_26 = extensionGetter_definition (var_selfType_17495, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 557)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas3", 557)) COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 557)).boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      const GGS_classDeclarationAST temp_27 = this ;
      GGS_lstring var_initializerForUsefulness_21101 = function_initializerNameForUsefulEntitiesGraph (temp_27.readProperty_mClassTypeName (), extensionGetter_initializerSignature (var_synthetizedInitialzerArgumentList_19682, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 560)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 558)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerForUsefulness_21101, var_initializerForUsefulness_21101, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 562)) ;
      }
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_classDeclarationAST temp_29 = this ;
        test_28 = temp_29.readProperty_isPredefined ().boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerForUsefulness_21101  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 564)) ;
          {
          ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_21101, var_classTypeNameForUsefulness_16589 COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 565)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_28) {
        GalgasBool test_30 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_30) {
          const GGS_classDeclarationAST temp_31 = this ;
          test_30 = temp_31.readProperty_mIsAbstract ().boolEnum () ;
          if (GalgasBool::boolTrue == test_30) {
            ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerForUsefulness_21101  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 567)) ;
          }
        }
        if (GalgasBool::boolFalse == test_30) {
          {
          ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_21101, var_classTypeNameForUsefulness_16589 COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 569)) ;
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_classTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas3", 599)).operator_not (SOURCE_FILE ("declaration-type-class.galgas3", 599)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_classTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 600)) ;
    }
  }
  const GGS_classTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_23207 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 602)) ;
  const GGS_classTypeForGeneration temp_4 = this ;
  const GGS_classTypeForGeneration temp_5 = this ;
  GGS_string temp_6 ;
  const GalgasBool test_7 = temp_5.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas3", 606)).boolEnum () ;
  if (GalgasBool::boolTrue == test_7) {
    temp_6 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_7) {
    const GGS_classTypeForGeneration temp_8 = this ;
    temp_6 = extensionGetter_identifierRepresentation (temp_8.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 606)) ;
  }
  const GGS_classTypeForGeneration temp_9 = this ;
  const GGS_classTypeForGeneration temp_10 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_23207.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 605)), temp_6, temp_9.readProperty_mIsAbstract (), temp_10.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 603))) ;
  const GGS_classTypeForGeneration temp_11 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_23207.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_11.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 612)), var_selfTypeDefinition_23207.readProperty_isConcrete (), var_selfTypeDefinition_23207.readProperty_initializerMap (), var_selfTypeDefinition_23207.readProperty_classFunctionMap (), var_selfTypeDefinition_23207.readProperty_getterMap (), var_selfTypeDefinition_23207.readProperty_setterMap (), var_selfTypeDefinition_23207.readProperty_instanceMethodMap (), var_selfTypeDefinition_23207.readProperty_classMethodMap (), var_selfTypeDefinition_23207.readProperty_readSubscriptMap (), var_selfTypeDefinition_23207.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_23207.readProperty_features (), var_selfTypeDefinition_23207.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_23207.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_23207.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 610))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 610)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classTypeForGeneration appendDeclaration2'
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classTypeForGeneration temp_0 = this ;
  UpEnumerator_typedPropertyList enumerator_24640 (temp_0.readProperty_mCurrentTypedAttributeList ()) ;
  while (enumerator_24640.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_24640.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 635)) ;
    enumerator_24640.gotoNextObject () ;
  }
  const GGS_classTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_24742 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 637)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_classTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_generateHeaderInSeparateFile ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_classTypeForGeneration temp_4 = this ;
      const GGS_classTypeForGeneration temp_5 = this ;
      GGS_string temp_6 ;
      const GalgasBool test_7 = temp_5.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas3", 642)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        temp_6 = GGS_string::makeEmptyString () ;
      }else if (GalgasBool::boolFalse == test_7) {
        const GGS_classTypeForGeneration temp_8 = this ;
        temp_6 = extensionGetter_identifierRepresentation (temp_8.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 642)) ;
      }
      const GGS_classTypeForGeneration temp_9 = this ;
      const GGS_classTypeForGeneration temp_10 = this ;
      const GGS_classTypeForGeneration temp_11 = this ;
      const GGS_classTypeForGeneration temp_12 = this ;
      const GGS_classTypeForGeneration temp_13 = this ;
      const GGS_classTypeForGeneration temp_14 = this ;
      GGS_string var_part_31__24862 = GGS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_selfTypeDefinition_24742.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 641)), temp_6, temp_9.readProperty_mCurrentTypedAttributeList (), temp_10.readProperty_mAllTypedAttributeList (), temp_11.readProperty_mIsAbstract (), extensionGetter_definition (temp_12.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 646)).readProperty_getterMap (), extensionGetter_definition (temp_13.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 647)).readProperty_instanceMethodMap (), temp_14.readProperty_initializerMap () COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 639))) ;
      const GGS_classTypeForGeneration temp_15 = this ;
      const GGS_classTypeForGeneration temp_16 = this ;
      GGS_string temp_17 ;
      const GalgasBool test_18 = temp_16.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas3", 653)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        temp_17 = GGS_string::makeEmptyString () ;
      }else if (GalgasBool::boolFalse == test_18) {
        const GGS_classTypeForGeneration temp_19 = this ;
        temp_17 = extensionGetter_identifierRepresentation (temp_19.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 653)) ;
      }
      const GGS_classTypeForGeneration temp_20 = this ;
      const GGS_classTypeForGeneration temp_21 = this ;
      const GGS_classTypeForGeneration temp_22 = this ;
      const GGS_classTypeForGeneration temp_23 = this ;
      GGS_string var_part_32__25420 = GGS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_selfTypeDefinition_24742.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 652)), temp_17, temp_20.readProperty_mCurrentTypedAttributeList (), temp_21.readProperty_mAllTypedAttributeList (), temp_22.readProperty_mIsAbstract (), temp_23.readProperty_synthetizedInitializerArgumentList () COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 650))) ;
      const GGS_classTypeForGeneration temp_24 = this ;
      GGS_string var_headerFileName_25886 = GGS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 659)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 659)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 659)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GGS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 661)), var_headerFileName_25886, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_part_31__24862, GGS_string ("\n\n"), var_part_32__25420, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 660)) ;
      }
      outArgument_outHeader = GGS_string ("#include \"").add_operation (var_headerFileName_25886, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 671)).add_operation (GGS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 671)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_classTypeForGeneration temp_25 = this ;
    const GGS_classTypeForGeneration temp_26 = this ;
    GGS_string temp_27 ;
    const GalgasBool test_28 = temp_26.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas3", 676)).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      temp_27 = GGS_string::makeEmptyString () ;
    }else if (GalgasBool::boolFalse == test_28) {
      const GGS_classTypeForGeneration temp_29 = this ;
      temp_27 = extensionGetter_identifierRepresentation (temp_29.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 676)) ;
    }
    const GGS_classTypeForGeneration temp_30 = this ;
    const GGS_classTypeForGeneration temp_31 = this ;
    const GGS_classTypeForGeneration temp_32 = this ;
    const GGS_classTypeForGeneration temp_33 = this ;
    const GGS_classTypeForGeneration temp_34 = this ;
    const GGS_classTypeForGeneration temp_35 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_selfTypeDefinition_24742.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_25.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 675)), temp_27, temp_30.readProperty_mCurrentTypedAttributeList (), temp_31.readProperty_mAllTypedAttributeList (), temp_32.readProperty_mIsAbstract (), extensionGetter_definition (temp_33.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 680)).readProperty_getterMap (), extensionGetter_definition (temp_34.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 681)).readProperty_instanceMethodMap (), temp_35.readProperty_initializerMap () COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 673))) ;
    const GGS_classTypeForGeneration temp_36 = this ;
    const GGS_classTypeForGeneration temp_37 = this ;
    GGS_string temp_38 ;
    const GalgasBool test_39 = temp_37.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas3", 687)).boolEnum () ;
    if (GalgasBool::boolTrue == test_39) {
      temp_38 = GGS_string::makeEmptyString () ;
    }else if (GalgasBool::boolFalse == test_39) {
      const GGS_classTypeForGeneration temp_40 = this ;
      temp_38 = extensionGetter_identifierRepresentation (temp_40.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 687)) ;
    }
    const GGS_classTypeForGeneration temp_41 = this ;
    const GGS_classTypeForGeneration temp_42 = this ;
    const GGS_classTypeForGeneration temp_43 = this ;
    const GGS_classTypeForGeneration temp_44 = this ;
    outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_selfTypeDefinition_24742.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_36.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 686)), temp_38, temp_41.readProperty_mCurrentTypedAttributeList (), temp_42.readProperty_mAllTypedAttributeList (), temp_43.readProperty_mIsAbstract (), temp_44.readProperty_synthetizedInitializerArgumentList () COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 684))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 684)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_string & outArgument_outImplementation,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 701)) ;
  const GGS_classTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_27893 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 702)) ;
  const GGS_classTypeForGeneration temp_2 = this ;
  const GGS_classTypeForGeneration temp_3 = this ;
  const GGS_classTypeForGeneration temp_4 = this ;
  GGS_typedPropertyList var_at_27953 = temp_2.readProperty_mAllTypedAttributeList ().getter_subListWithRange (GGS_range::init_21__21_ (GGS_uint (uint32_t (0U)), temp_3.readProperty_mAllTypedAttributeList ().getter_count (SOURCE_FILE ("declaration-type-class.galgas3", 704)).substract_operation (temp_4.readProperty_mCurrentTypedAttributeList ().getter_count (SOURCE_FILE ("declaration-type-class.galgas3", 704)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 704)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 703)) ;
  const GGS_classTypeForGeneration temp_5 = this ;
  const GGS_classTypeForGeneration temp_6 = this ;
  GGS_string temp_7 ;
  const GalgasBool test_8 = temp_6.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas3", 709)).boolEnum () ;
  if (GalgasBool::boolTrue == test_8) {
    temp_7 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_8) {
    const GGS_classTypeForGeneration temp_9 = this ;
    temp_7 = extensionGetter_identifierRepresentation (temp_9.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 709)) ;
  }
  const GGS_classTypeForGeneration temp_10 = this ;
  const GGS_classTypeForGeneration temp_11 = this ;
  const GGS_classTypeForGeneration temp_12 = this ;
  const GGS_classTypeForGeneration temp_13 = this ;
  const GGS_classTypeForGeneration temp_14 = this ;
  const GGS_classTypeForGeneration temp_15 = this ;
  const GGS_classTypeForGeneration temp_16 = this ;
  const GGS_classTypeForGeneration temp_17 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_27893.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 708)), temp_7, temp_10.readProperty_mCurrentTypedAttributeList (), temp_11.readProperty_mAllTypedAttributeList (), var_at_27953, temp_12.readProperty_mIsAbstract (), temp_13.readProperty_initializerNeedsCompilerVariable (), temp_14.readProperty_propertyInitializationCode (), var_selfTypeDefinition_27893.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas3", 716)) COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 716)), temp_15.readProperty_synthetizedInitializerArgumentList (), temp_16.readProperty_inheritedSynthetizedInitializerArgumentList (), var_selfTypeDefinition_27893.readProperty_initializerMap (), temp_17.readProperty_clonable () COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 706))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_generateClassGetterDeclaration (const GGS_lstring & constinArgument_inGetterName,
                                                    const GGS_functionSignature & constinArgument_inArgumentTypeList,
                                                    const GGS_bool & constinArgument_inHasCompilerArgument,
                                                    const GGS_unifiedTypeMapEntry & constinArgument_inReturnedType,
                                                    const GGS_methodQualifier & constinArgument_inQualifier,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  GGS_bool var_generateMethodDeclaration_29511 = GGS_bool (true) ;
  GGS_string var_suffix_29550 = GGS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GGS_methodQualifier::Enumeration::invalid:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualAbstract:
    {
      var_suffix_29550 = GGS_string (" = 0") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtual:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isBasic:
  case GGS_methodQualifier::Enumeration::enum_isBasicFinal:
    {
      var_generateMethodDeclaration_29511 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isInherited:
    {
      var_generateMethodDeclaration_29511 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverriding:
    {
      var_suffix_29550 = GGS_string (" override") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract:
    {
      var_suffix_29550 = GGS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_29511.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//--- Extension func ").add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 754)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 754)) ;
      result_result.plusAssignOperation(GGS_string ("  public: virtual class GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inReturnedType, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 755)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 755)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 755)) ;
      result_result.plusAssignOperation(GGS_string (" getter_").add_operation (constinArgument_inGetterName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-class.galgas3", 756)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 756)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 756)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 756)) ;
      GGS_bool var_first_30198 = GGS_bool (true) ;
      UpEnumerator_functionSignature enumerator_30237 (constinArgument_inArgumentTypeList) ;
      while (enumerator_30237.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_first_30198.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_first_30198 = GGS_bool (false) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          result_result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 763)) ;
        }
        result_result.plusAssignOperation(GGS_string ("const class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_30237.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 765)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 765)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 765)) ;
        result_result.plusAssignOperation(GGS_string (" ").add_operation (enumerator_30237.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 766)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 766)) ;
        enumerator_30237.gotoNextObject () ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_first_30198.operator_not (SOURCE_FILE ("declaration-type-class.galgas3", 769)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              result_result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 770)) ;
            }
          }
          result_result.plusAssignOperation(GGS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 772)) ;
          var_first_30198 = GGS_bool (false) ;
        }
      }
      GGS_string temp_4 ;
      const GalgasBool test_5 = var_first_30198.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        temp_4 = GGS_string ("LOCATION_ARGS") ;
      }else if (GalgasBool::boolFalse == test_5) {
        temp_4 = GGS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssignOperation(temp_4.add_operation (GGS_string (") const"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 775)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 775)) ;
      result_result.plusAssignOperation(var_suffix_29550.add_operation (GGS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 776)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 776)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_generateClassGetterDeclaration [6] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_functionSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_unifiedTypeMapEntry,
  & kTypeDescriptor_GALGAS_methodQualifier,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_generateClassGetterDeclaration (Compiler * inCompiler,
                                                                            const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                            const GGS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_functionSignature operand1 = GGS_functionSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                               inCompiler
                                                                               COMMA_THERE) ;
  const GGS_bool operand2 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_unifiedTypeMapEntry operand3 = GGS_unifiedTypeMapEntry::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                   inCompiler
                                                                                   COMMA_THERE) ;
  const GGS_methodQualifier operand4 = GGS_methodQualifier::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
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

GGS_string function_generateClassInstanceMethodDeclaration (const GGS_lstring & constinArgument_inMethodName,
                                                            const GGS_formalParameterSignature & constinArgument_inArgumentTypeList,
                                                            const GGS_bool & constinArgument_inHasCompilerArgument,
                                                            const GGS_methodQualifier & constinArgument_inQualifier,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  GGS_bool var_generateMethodDeclaration_31253 = GGS_bool (true) ;
  GGS_string var_suffix_31292 = GGS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GGS_methodQualifier::Enumeration::invalid:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualAbstract:
    {
      var_suffix_31292 = GGS_string (" = 0") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtual:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isBasic:
  case GGS_methodQualifier::Enumeration::enum_isBasicFinal:
    {
      var_generateMethodDeclaration_31253 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isInherited:
    {
      var_generateMethodDeclaration_31253 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverriding:
    {
      var_suffix_31292 = GGS_string (" override") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract:
    {
      var_suffix_31292 = GGS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_31253.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(GGS_string ("//--- Extension proc ").add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 805)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 805)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 805)) ;
      result_result.plusAssignOperation(GGS_string ("  public: virtual void method_").add_operation (constinArgument_inMethodName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-class.galgas3", 806)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 806)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 806)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 806)) ;
      GGS_bool var_first_31876 = GGS_bool (true) ;
      UpEnumerator_formalParameterSignature enumerator_31915 (constinArgument_inArgumentTypeList) ;
      while (enumerator_31915.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_first_31876.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_first_31876 = GGS_bool (false) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          result_result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 813)) ;
        }
        switch (enumerator_31915.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            result_result.plusAssignOperation(GGS_string ("const class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_31915.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 817)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 817)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 817)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
          {
            result_result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_31915.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 819)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 819)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 819)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 819)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          {
            result_result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_31915.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 821)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 821)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 821)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 821)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            result_result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_31915.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 823)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 823)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 823)) ;
          }
          break ;
        }
        result_result.plusAssignOperation(GGS_string (" arg_").add_operation (enumerator_31915.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 825)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 825)) ;
        enumerator_31915.gotoNextObject () ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_first_31876.operator_not (SOURCE_FILE ("declaration-type-class.galgas3", 828)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              result_result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 829)) ;
            }
          }
          result_result.plusAssignOperation(GGS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 831)) ;
          var_first_31876 = GGS_bool (false) ;
        }
      }
      GGS_string temp_4 ;
      const GalgasBool test_5 = var_first_31876.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        temp_4 = GGS_string ("LOCATION_ARGS") ;
      }else if (GalgasBool::boolFalse == test_5) {
        temp_4 = GGS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssignOperation(temp_4.add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 834)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 834)) ;
      result_result.plusAssignOperation(var_suffix_31292.add_operation (GGS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 835)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 835)) ;
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
                                                                                    const GALGAS_ObjectArray & inEffectiveParameterArray,
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

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_classGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_classGenerationTemplate_0,
  0,
  gWrapperAllDirectories_classGenerationTemplate_0
) ;


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
    result.appendString ("AbstractStrongPtrClass") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (void) const override ;\n  #endif\n\n//--------------------------------- Initializers\n") ;
  GGS_uint index_638_ (0) ;
  if (in_INITIALIZER_5F_MAP.isValid ()) {
    UpEnumerator_initializerMap enumerator_638 (in_INITIALIZER_5F_MAP) ;
    while (enumerator_638.hasCurrentObject ()) {
      result.appendString ("  public: void ") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_638.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_819_IDX (0) ;
      if (enumerator_638.current_mArgumentTypeList (HERE).isValid ()) {
        UpEnumerator_functionSignature enumerator_819 (enumerator_638.current_mArgumentTypeList (HERE)) ;
        while (enumerator_819.hasCurrentObject ()) {
          const GalgasBool test_1 = enumerator_819.current_isConstant (HERE).boolEnum () ;
          switch (test_1) {
          case GalgasBool::boolTrue : {
            result.appendString ("const class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_819.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_819_IDX.getter_string (SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_819.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" inOperand") ;
            result.appendString (index_819_IDX.getter_string (SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_819.gotoNextObject () ;
          index_819_IDX.increment () ;
        }
      }
      result.appendString ("Compiler * inCompiler) ;\n") ;
      enumerator_638.gotoNextObject () ;
      index_638_.increment () ;
    }
  }
  result.appendString ("\n\n") ;
  GGS_uint index_1238_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    UpEnumerator_getterMap enumerator_1238 (in_GETTER_5F_MAP) ;
    while (enumerator_1238.hasCurrentObject ()) {
      const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_1238.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString (function_generateClassGetterDeclaration (enumerator_1238.current_lkey (HERE), enumerator_1238.current_mArgumentTypeList (HERE), enumerator_1238.current_mHasCompilerArgument (HERE), enumerator_1238.current_mReturnedType (HERE), enumerator_1238.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 28)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1238.gotoNextObject () ;
      index_1238_.increment () ;
    }
  }
  GGS_uint index_1480_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    UpEnumerator_instanceMethodMap enumerator_1480 (in_INSTANCE_5F_METHOD_5F_MAP) ;
    while (enumerator_1480.hasCurrentObject ()) {
      result.appendString (function_generateClassInstanceMethodDeclaration (enumerator_1480.current_lkey (HERE), enumerator_1480.current_mParameterList (HERE), enumerator_1480.current_mHasCompilerArgument (HERE), enumerator_1480.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 32)).stringValue ()) ;
      enumerator_1480.gotoNextObject () ;
      index_1480_.increment () ;
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
    result.appendString ("//--- Duplication\n  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;\n\n") ;
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
  GGS_uint index_4030_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4030 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_4030.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4030.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 100)).stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::readProperty_") ;
      result.appendString (enumerator_4030.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 100)).stringValue ()) ;
      result.appendString (" (void) const {\n  if (nullptr == mObjectPtr) {\n    return GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4030.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (" () ;\n  }else{\n    cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    return p->mProperty_") ;
      result.appendString (enumerator_4030.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 106)).stringValue ()) ;
      result.appendString (" ;\n  }\n}\n\n") ;
      const GalgasBool test_5 = enumerator_4030.current_hasSetter (HERE).boolEnum () ;
      switch (test_5) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setProperty_") ;
        result.appendString (enumerator_4030.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 111)).stringValue ()) ;
        result.appendString (" (const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_4030.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 111)).stringValue ()) ;
        result.appendString (" & inValue) {\n  if (nullptr != mObjectPtr) {\n    cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" * p = (cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (") ;\n    p->mProperty_") ;
        result.appendString (enumerator_4030.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 115)).stringValue ()) ;
        result.appendString (" = inValue ;\n  }\n}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_4030.gotoNextObject () ;
      index_4030_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 122)).add_operation (GGS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 122)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 125)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) :\n") ;
    const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    switch (test_7) {
    case GalgasBool::boolTrue : {
      result.appendString ("AbstractStrongPtrClass") ;
      } break ;
    case GalgasBool::boolFalse : {
      result.appendString ("cPtr_") ;
      result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString (" (inCompiler COMMA_THERE)") ;
    GGS_uint index_5874_ (0) ;
    if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_5874 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
      while (enumerator_5874.hasCurrentObject ()) {
        result.appendString (",\nmProperty_") ;
        result.appendString (enumerator_5874.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 133)).stringValue ()) ;
        result.appendString (" ()") ;
        enumerator_5874.gotoNextObject () ;
        index_5874_.increment () ;
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
  GGS_uint index_6247_ (0) ;
  if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6247 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_6247.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6247.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 142)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_6247.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 142)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_6247.gotoNextObject () ;
      index_6247_.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\n") ;
  const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("AbstractStrongPtrClass") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" (") ;
  GGS_uint index_6668_ (0) ;
  if (in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6668 (in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_6668.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_6668.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 150)).stringValue ()) ;
      result.appendString (", ") ;
      enumerator_6668.gotoNextObject () ;
      index_6668_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE)") ;
  GGS_uint index_6848_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6848 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_6848.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_6848.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 154)).stringValue ()) ;
      result.appendString (" ()") ;
      enumerator_6848.gotoNextObject () ;
      index_6848_.increment () ;
    }
  }
  result.appendString (" {\n") ;
  result.appendString (in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue ()) ;
  GGS_uint index_7020_ (0) ;
  if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7020 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_7020.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_7020.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 159)).stringValue ()) ;
      result.appendString (" = in_") ;
      result.appendString (enumerator_7020.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 159)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_7020.gotoNextObject () ;
      index_7020_.increment () ;
    }
  }
  result.appendString ("}\n\n") ;
  const GalgasBool test_9 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 164)).boolEnum () ;
  switch (test_9) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nconst GALGAS_TypeDescriptor * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::classDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n}\n\n") ;
    const GalgasBool test_10 = GGS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 169)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
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
      GGS_uint index_8014_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_8014 (in_ALL_5F_PROPERTY_5F_LIST) ;
        while (enumerator_8014.hasCurrentObject ()) {
          result.appendString ("  mProperty_") ;
          result.appendString (enumerator_8014.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 179)).stringValue ()) ;
          result.appendString (".description (ioString, inIndentation+1) ;\n") ;
          enumerator_8014.gotoNextObject () ;
          if (enumerator_8014.hasCurrentObject ()) {
            result.appendString ("  ioString.appendCString (\", \") ;\n") ;
          }
          index_8014_.increment () ;
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
  const GalgasBool test_11 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 187)).boolEnum () ;
  switch (test_11) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nAbstractPtrClass * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {\n  AbstractPtrClass * ptr = nullptr ;\n  macroMyNew (ptr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GGS_uint index_8657_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_8657 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_8657.hasCurrentObject ()) {
        result.appendString ("mProperty_") ;
        result.appendString (enumerator_8657.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 194)).stringValue ()) ;
        result.appendString (", ") ;
        enumerator_8657.gotoNextObject () ;
        index_8657_.increment () ;
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
  const GalgasBool test_12 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_12) {
  case GalgasBool::boolTrue : {
    result.appendString ("  AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("  cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::printNonNullClassInstanceProperties () ;\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_9260_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9260 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_9260.hasCurrentObject ()) {
      result.appendString ("    mProperty_") ;
      result.appendString (enumerator_9260.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 212)).stringValue ()) ;
      result.appendString (".printNonNullClassInstanceProperties (\"") ;
      result.appendString (enumerator_9260.current_name (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") ;\n") ;
      enumerator_9260.gotoNextObject () ;
      index_9260_.increment () ;
    }
  }
  result.appendString ("  }\n#endif\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@predefinedTypeAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                             GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                             GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_predefinedTypeAST temp_0 = this ;
  GGS_lstring var_key_2886 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 58)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas3", 58)), inCompiler COMMA_HERE) ;
  {
  const GGS_predefinedTypeAST temp_1 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2886, temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 59)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@predefinedTypeAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                       const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                       const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classFunctionMap var_constructorMap_3738 ;
  const GGS_predefinedTypeAST temp_0 = this ;
  callExtensionMethod_getClassFunctionMap ((cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioTypeMap, var_constructorMap_3738, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 72)) ;
  GGS_getterMap var_getterMap_3805 ;
  const GGS_predefinedTypeAST temp_1 = this ;
  callExtensionMethod_getGetterMap ((cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioTypeMap, var_getterMap_3805, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 73)) ;
  GGS_setterMap var_setterMap_3867 ;
  const GGS_predefinedTypeAST temp_2 = this ;
  callExtensionMethod_getSetterMap ((cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioTypeMap, var_setterMap_3867, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 74)) ;
  GGS_instanceMethodMap var_instanceMethodMap_3945 ;
  const GGS_predefinedTypeAST temp_3 = this ;
  callExtensionMethod_getInstanceMethodMap ((cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioTypeMap, var_instanceMethodMap_3945, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 75)) ;
  GGS_classMethodMap var_classMethodMap_4025 ;
  const GGS_predefinedTypeAST temp_4 = this ;
  callExtensionMethod_getClassMethodMap ((cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioTypeMap, var_classMethodMap_4025, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 76)) ;
  GGS_functionSignature var_addAssignArgumentList_4112 ;
  const GGS_predefinedTypeAST temp_5 = this ;
  callExtensionMethod_getAddAssignArgumentList ((cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioTypeMap, var_addAssignArgumentList_4112, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 77)) ;
  GGS_enumerationDescriptorList var_enumerationList_4220 ;
  GGS_string var_enumeratedTypeName_4255 ;
  const GGS_predefinedTypeAST temp_6 = this ;
  callExtensionMethod_getEnumerationList ((cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioTypeMap, var_enumerationList_4220, var_enumeratedTypeName_4255, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 78)) ;
  {
  const GGS_predefinedTypeAST temp_7 = this ;
  GGS_unifiedTypeMapEntry joker_4343 ; // Joker input parameter
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_7.readProperty_mPredefinedTypeName (), joker_4343, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 83)) ;
  }
  GGS_unifiedTypeMapEntry var_enumeratedTypeEntry_4396 ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::equal, var_enumeratedTypeName_4255.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      var_enumeratedTypeEntry_4396 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type.galgas3", 87)) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    {
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, var_enumeratedTypeName_4255, var_enumeratedTypeEntry_4396, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 89)) ;
    }
  }
  GGS_initializerMap var_initializerMap_4652 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GGS_predefinedTypeAST temp_9 = this ;
  UpEnumerator__5B_formalInputParameterListAST_5D_ enumerator_4701 (callExtensionGetter_initializers ((const cPtr_predefinedTypeAST *) temp_9.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 93))) ;
  while (enumerator_4701.hasCurrentObject ()) {
    GGS_functionSignature var_formalParameterList_4746 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalInputParameterListAST enumerator_4845 (enumerator_4701.current (HERE)) ;
    while (enumerator_4845.hasCurrentObject ()) {
      var_formalParameterList_4746.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (enumerator_4845.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_4845.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 98)), enumerator_4845.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_4845.current_mIsConstant (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 96)) ;
      enumerator_4845.gotoNextObject () ;
    }
    {
    var_initializerMap_4652.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (enumerator_4701.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 103)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas3", 103)), inCompiler COMMA_HERE), var_formalParameterList_4746, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 103)) ;
    }
    enumerator_4701.gotoNextObject () ;
  }
  {
  const GGS_predefinedTypeAST temp_10 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (temp_10.readProperty_mPredefinedTypeName (), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas3", 112)), inCompiler COMMA_HERE), GGS_bool (false), var_initializerMap_4652, var_getterMap_3805, var_setterMap_3867, var_instanceMethodMap_3945, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 105)) ;
  }
  const GGS_predefinedTypeAST temp_11 = this ;
  const GGS_predefinedTypeAST temp_12 = this ;
  const GGS_predefinedTypeAST temp_13 = this ;
  const GGS_predefinedTypeAST temp_14 = this ;
  const GGS_predefinedTypeAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_5660 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (GGS_lstring::init_21__21_ (temp_11.readProperty_mPredefinedTypeName (), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas3", 122)), inCompiler COMMA_HERE), temp_12.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type.galgas3", 126)), callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_13.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 127)), callExtensionGetter_supportsCollectionValue ((const cPtr_predefinedTypeAST *) temp_14.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 128)), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_4652, var_constructorMap_3738, var_getterMap_3805, var_setterMap_3867, var_instanceMethodMap_3945, var_classMethodMap_4025, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type.galgas3", 138)), GGS_subscriptMap::init (inCompiler COMMA_HERE), var_enumerationList_4220, callExtensionGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_15.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 141)), var_addAssignArgumentList_4112, GGS_bool (false), var_enumeratedTypeEntry_4396, GGS_string ("predefined-types"), GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("declaration-predefined-type.galgas3", 146)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_5660.readProperty_typeName (), var_typeDefinition_5660, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 148)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@predefinedTypeAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GGS_string /* constinArgument_inProductDirectory */,
                                                      const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                      GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_predefinedTypeAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7308 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (temp_0.readProperty_mPredefinedTypeName (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 161)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 161)) ;
  const GGS_predefinedTypeAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_7426 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (temp_1.readProperty_mPredefinedTypeName (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 163)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 163)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7426, var_nameForUsefulness_7426, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 164)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_7426  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 165)) ;
  UpEnumerator_initializerMap enumerator_7753 (extensionGetter_definition (var_selfType_7308, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 167)).readProperty_initializerMap ()) ;
  while (enumerator_7753.hasCurrentObject ()) {
    const GGS_predefinedTypeAST temp_2 = this ;
    GGS_lstring var_initializerNameForUsefulness_7781 = function_initializerNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (temp_2.readProperty_mPredefinedTypeName (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 169)), inCompiler COMMA_HERE), extensionGetter_initializerSignature (enumerator_7753.current (HERE).readProperty_mArgumentTypeList (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 170)), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 168)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_7781, var_initializerNameForUsefulness_7781, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 172)) ;
    }
    ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_7781  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 173)) ;
    enumerator_7753.gotoNextObject () ;
  }
  const GGS_predefinedTypeAST temp_3 = this ;
  const GGS_predefinedTypeAST temp_4 = this ;
  const GGS_predefinedTypeAST temp_5 = this ;
  const GGS_predefinedTypeAST temp_6 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("Predefined type ").add_operation (temp_3.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 177)), GGS_primitiveTypeForGeneration::init_21__21__21__21_isPackage (var_selfType_7308, temp_4.readProperty_mPredefinedTypeName (), callExtensionGetter_cppDeclarationString ((const cPtr_predefinedTypeAST *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 181)), GGS_bool (ComparisonKind::equal, callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_6.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 182)).objectCompare (GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-predefined-type.galgas3", 182)))), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 176)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedListTypeAST&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedListTypeAST_26__3F__26_ (GGS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                      const GGS_string constinArgument_inElementTypeName,
                                                      GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_attributeList_11359 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_attributeList_11359.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas3", 260)), GGS_lstring::init_21__21_ (constinArgument_inElementTypeName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 261)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (GGS_string ("mValue"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 262)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas3", 263)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas3", 265))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 259)) ;
  ioArgument_ioDeclarationListASTs.addAssignOperation (GGS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList_21_equatable (GGS_bool (true), GGS_lstring::init_21__21_ (constinArgument_inElementTypeName.add_operation (GGS_string ("list"), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 268)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 268)), inCompiler COMMA_HERE), var_attributeList_11359, GGS_bool (true), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 266)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, constinArgument_inElementTypeName.add_operation (GGS_string ("list"), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 273)), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 273)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2StringListTypeAST&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_StringListTypeAST_26__26_ (GGS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                            GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_attributeList_12200 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_attributeList_12200.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas3", 282)), GGS_lstring::init_21__21_ (GGS_string ("string"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 283)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (GGS_string ("mValue0"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 284)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas3", 285)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas3", 287))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 281)) ;
  var_attributeList_12200.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas3", 289)), GGS_lstring::init_21__21_ (GGS_string ("string"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 290)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (GGS_string ("mValue1"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 291)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas3", 292)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas3", 294))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 288)) ;
  ioArgument_ioDeclarationListASTs.addAssignOperation (GGS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList_21_equatable (GGS_bool (true), GGS_lstring::init_21__21_ (GGS_string ("2stringlist"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 298)), inCompiler COMMA_HERE), var_attributeList_12200, GGS_bool (true), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 296)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GGS_string ("2stringlist"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 303)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation_26__3F__26_ (GGS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                             const GGS_string constinArgument_inElementTypeName,
                                                             GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_attributeList_13323 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_attributeList_13323.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas3", 313)), GGS_lstring::init_21__21_ (constinArgument_inElementTypeName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 314)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (constinArgument_inElementTypeName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 315)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas3", 316)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas3", 318))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 312)) ;
  var_attributeList_13323.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas3", 320)), GGS_lstring::init_21__21_ (GGS_string ("location"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 321)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (GGS_string ("location"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 322)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas3", 323)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas3", 325))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 319)) ;
  GGS_structDeclarationAST var_type_13813 = GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (true), GGS_lstring::init_21__21_ (GGS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 328)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 328)), inCompiler COMMA_HERE), var_attributeList_13323, GGS_string::makeEmptyString (), GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-predefined-type.galgas3", 331)), GGS_bool (true), inCompiler COMMA_HERE) ;
  ioArgument_ioDeclarationListASTs.addAssignOperation (var_type_13813  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 334)) ;
  GGS_lstring var_typeUsefulnessName_14117 = function_typeNameForUsefulEntitiesGraph (var_type_13813.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 336)) ;
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_typeUsefulnessName_14117  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 337)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType_26__26_ (GGS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                  GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_attributeList_14565 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_attributeList_14565.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas3", 346)), GGS_lstring::init_21__21_ (GGS_string ("uint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 347)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (GGS_string ("start"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 348)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas3", 349)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas3", 351))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 345)) ;
  var_attributeList_14565.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-predefined-type.galgas3", 353)), GGS_lstring::init_21__21_ (GGS_string ("uint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 354)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (GGS_string ("length"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 355)), inCompiler COMMA_HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas3", 356)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas3", 358))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 352)) ;
  ioArgument_ioDeclarationListASTs.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (true), GGS_lstring::init_21__21_ (GGS_string ("range"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 361)), inCompiler COMMA_HERE), var_attributeList_14565, GGS_string ("uint"), GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-predefined-type.galgas3", 364)), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 359)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'insertInUsefulnessEntities&?'
//
//--------------------------------------------------------------------------------------------------

void routine_insertInUsefulnessEntities_26__3F_ (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                 const GGS_string constinArgument_inTypeName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_typeUsefulnessName_15478 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (constinArgument_inTypeName, GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas3", 374)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 374)) ;
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_typeUsefulnessName_15478  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 375)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'insertPredefinedType&&?'
//
//--------------------------------------------------------------------------------------------------

void routine_insertPredefinedType_26__26__3F_ (GGS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                               GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                               const GGS_predefinedTypeAST constinArgument_inPredefinedTypeAST,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarationListASTs.addAssignOperation (constinArgument_inPredefinedTypeAST  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 385)) ;
  GGS_lstring var_typeUsefulnessName_15985 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (constinArgument_inPredefinedTypeAST.readProperty_mPredefinedTypeName (), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas3", 387)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 386)) ;
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_typeUsefulnessName_15985  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 390)) ;
  UpEnumerator__5B_formalInputParameterListAST_5D_ enumerator_16257 (callExtensionGetter_initializers ((const cPtr_predefinedTypeAST *) constinArgument_inPredefinedTypeAST.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 392))) ;
  while (enumerator_16257.hasCurrentObject ()) {
    GGS_lstring var_initializerNameForUsefulness_16281 = function_initializerNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (constinArgument_inPredefinedTypeAST.readProperty_mPredefinedTypeName (), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas3", 394)), inCompiler COMMA_HERE), extensionGetter_initializerSignature (enumerator_16257.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 395)), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 393)) ;
    ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_16281  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 397)) ;
    enumerator_16257.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs_26__26_ (GGS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_applicationPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("application"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 405)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_bigintPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("bigint"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 410)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_binarysetPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("binaryset"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 415)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_boolPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("bool"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 420)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_charPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("char"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 425)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_dataPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("data"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 430)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_doublePredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("double"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 435)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_filewrapperPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("filewrapper"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 440)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_functionPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("function"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 445)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_locationPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("location"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 450)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_objectPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("object"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 455)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_sintPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("sint"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 460)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_sint_36__34_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("sint64"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 465)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_stringPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("string"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 470)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_stringsetPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("stringset"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 475)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_timerPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("timer"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 480)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_typePredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("type"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 485)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_uintPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("uint"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 490)) ;
  }
  {
  routine_insertPredefinedType_26__26__3F_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, GGS_uint_36__34_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("uint64"), inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 495)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("function"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 501)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("luint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 502)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("lstring"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 503)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("object"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 504)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 505)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("type"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 506)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 507)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 508)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 509)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("lbigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 510)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("bool"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 512)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 513)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("char"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 514)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("double"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 515)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("sint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 516)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("sint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 517)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 518)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 519)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GGS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 520)) ;
  }
  {
  routine_appendPredefined_32_StringListTypeAST_26__26_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 522)) ;
  }
  {
  routine_appendStructASTForRangeType_26__26_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas3", 524)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_predefinedTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_predefinedTypeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n#include \"CollectionElementPtr.h\"\n#include \"Compiler.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement::cMapElement (const GGS_lstring & inLKey\n                          COMMA_LOCATION_ARGS) :\nCollectionElementPtr (THERE),\nmProperty_lkey (inLKey) {\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"AC_GALGAS_root.h\"\n#include \"GALGAS_TypeDescriptor.h\"\n#include \"ComparisonResult.h\"\n#include \"ComparisonKind.h\"\n#include \"EnumerationOrder.h\"\n#include \"CollectionElementArray.h\"\n#include \"Enumerator_range.h\"\n#include \"String-class.h\"\n#include \"Timer.h\"\n#include \"AC_GALGAS_reference_class.h\"\n#include \"AC_GALGAS_value_class.h\"\n#include \"AC_GALGAS_enumAssociatedValues.h\"\n#include \"AC_GALGAS_graph.h\"\n#include \"AbstractStrongPtrClass.h\"\n#include \"PtrWeakReferenceProxy.h\"\n#include \"AC_GALGAS_weak_reference.h\"\n#include \"BoolCommandLineOption.h\"\n#include \"UIntCommandLineOption.h\"\n#include \"StringCommandLineOption.h\"\n#include \"StringListCommandLineOption.h\"\n#include \"PrologueEpilogue.h\"\n#include \"BigSigned.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass Compiler ;\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#include \"CollectionElementPtr.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement : public CollectionElementPtr {\n//--- Attribut\n  public: GGS_lstring mProperty_lkey ;\n\n//--- Default constructor\n  public: cMapElement (const GGS_lstring & inLKey\n                       COMMA_LOCATION_ARGS) ;\n\n//--- No copy\n  private: cMapElement (const cMapElement &) ;\n  private: cMapElement & operator = (const cMapElement &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"C_galgas_function_descriptor.h\"\n#include \"GALGAS_ObjectArray.h\"\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @sint type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_sint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int32_t mSIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int32_t intValue (void) const { return mSIntValue ; }\n\n//--------------------------------- Default constructor\n  public: GGS_sint (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_sint (const int32_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @sint64 type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_sint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int64_t mSInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int64_t int64Value (void) const { return mSInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GGS_sint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_sint_36__34_ (const int64_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate object_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @object type\n//--------------------------------------------------------------------------------------------------\n\nclass PtrObject ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_object : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: PtrObject * mSharedObject ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedObject != nullptr ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GGS_object (void) ;\n\n//--------------------------------- Constructor from pointer\n  public: GGS_object (AC_GALGAS_root * inObjectPointer\n                      COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GGS_object (void) ;\n\n//--------------------------------- Handle copy\n  public: GGS_object (const GGS_object & inSource) ;\n  public: GGS_object & operator = (const GGS_object & inSource) ;\n\n//--------------------------------- Embedded Object\n  public: const AC_GALGAS_root * embeddedObject (void) const ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @uint type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_uint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint32_t mUIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint32_t uintValue (void) const { return mUIntValue ; }\n  public: inline void increment (void) { mUIntValue += 1 ; }\n\n//--------------------------------- Default constructor\n  public: GGS_uint (void) ;\n\n//--------------------------------- Native constructors\n  public: GGS_uint (const uint32_t inValue) ;\n  public: GGS_uint (const bool inValid, const uint32_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  @uint64 type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_uint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint64_t mUInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint64_t uint64Value (void) const { return mUInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GGS_uint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_uint_36__34_ (const uint64_t inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bool_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  @bool type\n//--------------------------------------------------------------------------------------------------\n\nenum class GalgasBool {boolNotValid, boolFalse, boolTrue} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_bool : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: bool mBoolValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n  public: inline bool boolValue (void) const { return mBoolValue ; }\n  public: GalgasBool boolEnum (void) const ;\n\n//--------------------------------- Drop\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GGS_bool (void) ;\n\n//--------------------------------- Native constructors\n  public: GGS_bool (const bool inValue) ; // Is built\n  public: GGS_bool (const bool inBuilt, const bool inValue) ;\n\n//--------------------------------- Constructor for comparison result\n  public: GGS_bool (const ComparisonKind inComparisonKind,\n                    const ComparisonResult inComparisonResult) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// @binaryset type\n//--------------------------------------------------------------------------------------------------\n\n#include \"BinaryDecisionDiagram.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_binaryset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: BinaryDecisionDiagram mBDD ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline BinaryDecisionDiagram bddValue (void) const { return mBDD ; }\n\n//--------------------------------- Default constructor\n  public: GGS_binaryset (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_binaryset (const BinaryDecisionDiagram & inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate function_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @function type\n//--------------------------------------------------------------------------------------------------\n\nclass C_galgas_function_descriptor ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_function : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: const C_galgas_function_descriptor * mFunctionDescriptor ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mFunctionDescriptor ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mFunctionDescriptor = nullptr ; }\n  public: VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GGS_function (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GGS_function (void) ;\n\n//--------------------------------- Handle copy\n  public: GGS_function (const GGS_function & inSource) ;\n  public: GGS_function & operator = (const GGS_function & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GGS_function (const C_galgas_function_descriptor * inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate type_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @type type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_type : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const GALGAS_TypeDescriptor * mTypeDescriptor ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return nullptr != mTypeDescriptor ; }\n  public: inline void drop (void) override { mTypeDescriptor = nullptr ; }\n  public: inline const GALGAS_TypeDescriptor * typeValue (void) const { return mTypeDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GGS_type (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GGS_type (void) ;\n\n//--------------------------------- Handle copy\n  public: GGS_type (const GGS_type & inSource) ;\n  public: GGS_type & operator = (const GGS_type & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GGS_type (const GALGAS_TypeDescriptor * inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate location_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @location type\n//--------------------------------------------------------------------------------------------------\n\n#include \"LocationInSource.h\"\n#include \"SourceTextInString.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_location : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: class InternalLocation * mInternalLocation ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: LocationInSource startLocation (void) const ;\n  public: LocationInSource endLocation (void) const ;\n  public: SourceTextInString sourceText (void) const ;\n\n//--------------------------------- Default constructor\n  public: GGS_location (void) ;\n\n//--------------------------------- Handle copy\n  public: GGS_location (const GGS_location & inSource) ;\n  public: GGS_location & operator = (const GGS_location & inSource) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GGS_location (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_location (const LocationInSource & inStartLocationInSource,\n                        const LocationInSource & inEndLocationInSource,\n                        const SourceTextInString & inSourceText) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate data_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   Phase 1: @data enumerator\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_data final {\n  public: UpEnumerator_data (const class GGS_data & inEnumeratedObject) ;\n\n  public: bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }\n\n  public: void gotoNextObject (void) { mIndex += 1 ; }\n\n//--- Current element access\n  public: class GGS_uint current_data (LOCATION_ARGS) const ;\n  public: class GGS_uint current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: U8Data mArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: UpEnumerator_data (const UpEnumerator_data &) = delete ;\n  private: UpEnumerator_data & operator = (const UpEnumerator_data &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_data final {\n\n  public: DownEnumerator_data (const class GGS_data & inEnumeratedObject) ;\n\n  public: bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: void gotoNextObject (void) { mIndex -= 1 ; }\n\n//--- Current element access\n  public: class GGS_uint current_data (LOCATION_ARGS) const ;\n  public: class GGS_uint current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: U8Data mArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: DownEnumerator_data (const DownEnumerator_data &) = delete ;\n  private: DownEnumerator_data & operator = (const DownEnumerator_data &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//   @data type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_data : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: U8Data mData ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline U8Data dataValue (void) const { return mData ; }\n\n//--------------------------------- Default constructor\n  public: GGS_data (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_data (const U8Data & inData) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate char_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @char type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_char : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: utf32 mCharValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline utf32 charValue (void) const { return mCharValue ; }\n\n//--------------------------------- Default constructor\n  public: GGS_char (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_char (const utf32 inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate double_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  @double type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_double : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: double mDoubleValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline double doubleValue (void) const { return mDoubleValue ; }\n\n//--------------------------------- Default constructor\n  public: GGS_double (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_double (const double inValue) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate string_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @string type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_string : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: String mString ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: inline String stringValue (void) const { return mString ; }\n\n//--------------------------------- Default constructor\n  public: GGS_string (void) ;\n\n//--------------------------------- Constructor for making an empty string\n  public: static GGS_string makeEmptyString (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_string (const String & inValue) ;\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (const char * inPropertyName) const override ;\n  #endif\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// Phase 1: @stringset\n//--------------------------------------------------------------------------------------------------\n\n//--------------------------------------------------------------------------------------------------\n//  SharedStringMapNode\n//--------------------------------------------------------------------------------------------------\n\nclass SharedStringMapNode final : public SharedObject {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private: OptionalSharedRef <SharedStringMapNode> mInfPtr ;\n  private: OptionalSharedRef <SharedStringMapNode> mSupPtr ;\n  private: int32_t mBalance ;\n  public: const String mKey ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  public: SharedStringMapNode (const String & inKey\n                               COMMA_LOCATION_ARGS) ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  public: virtual ~SharedStringMapNode (void) = default ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  public: SharedStringMapNode (const OptionalSharedRef <SharedStringMapNode> & inNodePtr\n                               COMMA_LOCATION_ARGS) ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // No copy\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private: SharedStringMapNode (const SharedStringMapNode &) = delete ;\n  private: SharedStringMapNode & operator = (const SharedStringMapNode &) = delete ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private: static void populateStringArray (const OptionalSharedRef <SharedStringMapNode> & inNode,\n                                            GenericArray <String> & ioStringArray) ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  friend class SharedStringMapRoot ;\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//  SharedStringMap\n//--------------------------------------------------------------------------------------------------\n\nclass SharedStringMapRoot ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass SharedStringMap final {\n//--------------------------------- Private data members\n  private: OptionalSharedRef <SharedStringMapRoot> mSharedRoot ;\n\n//--------------------------------- Build\n  public: static SharedStringMap build (LOCATION_ARGS) ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const { return mSharedRoot.isNotNil () ; }\n\n//--------------------------------- Drop\n  public: void drop (void) ;\n\n//--------------------------------- Default constructor\n  public: SharedStringMap () ;\n\n//--------------------------------- Destructor\n  public: ~ SharedStringMap (void) ;\n\n//--------------------------------- Insulate\n  private: void insulate (LOCATION_ARGS) ;\n\n//--------------------------------- Handle copy\n  public: SharedStringMap (const SharedStringMap & inSource) ;\n  public: SharedStringMap & operator = (const SharedStringMap & inSource) ;\n\n//--------------------------------- Insert\n  public: void insert (OptionalSharedRef <SharedStringMapNode> & ioObject\n                       COMMA_LOCATION_ARGS) ;\n\n  public: void removeAndReturnRemovedNode (const String & inKey,\n                           OptionalSharedRef <SharedStringMapNode> & outRemovedNode\n                           COMMA_LOCATION_ARGS) ;\n\n  public: bool hasKey (const String & inKey) const ;\n\n  public: int32_t count (void) const ;\n\n  public: String rootNodeKey (void) const ;\n\n  public: GenericArray <String> sortedKeyArray (void) const ;\n\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_stringset final {\n  public: UpEnumerator_stringset (const class GGS_stringset & inEnumeratedObject) ;\n\n  public: bool hasCurrentObject (void) const { return mIndex < mStringArray.count () ; }\n\n  public: void gotoNextObject (void) { mIndex += 1 ; }\n\n//--- Current element access\n  public: class GGS_string current_key (LOCATION_ARGS) const ;\n  public: class GGS_string current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: const GenericArray <String> mStringArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: UpEnumerator_stringset (const UpEnumerator_stringset &) = delete ;\n  private: UpEnumerator_stringset & operator = (const UpEnumerator_stringset &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_stringset final {\n\n  public: DownEnumerator_stringset (const class GGS_stringset & inEnumeratedObject) ;\n\n  public: bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: void gotoNextObject (void) { mIndex -= 1 ; }\n\n//--- Current element access\n  public: class GGS_string current_key (LOCATION_ARGS) const ;\n  public: class GGS_string current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: const GenericArray <String> mStringArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: DownEnumerator_stringset (const DownEnumerator_stringset &) = delete ;\n  private: DownEnumerator_stringset & operator = (const DownEnumerator_stringset &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//   @stringset type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_stringset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: SharedStringMap mSharedMap ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedMap.isValid () ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mSharedMap.drop () ; }\n\n//--------------------------------- Default constructor\n  public: GGS_stringset (void) ;\n\n//--------------------------------- Virtual constructor\n  public: virtual ~ GGS_stringset (void) = default ;\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @filewrapper type\n//--------------------------------------------------------------------------------------------------\n\nclass cRegularFileWrapper {\n  public: const char * mName ;\n  public: const char * mExtension ;\n  public: const bool mIsTextFile ; // True: text file, false: binary file\n  public: const uint32_t mFileLength ;\n  public: const char * mContents ;\n\n//--- Constructor\n  public: cRegularFileWrapper (const char * inName,\n                                const char * inExtension,\n                                const bool inIsTextFile,\n                                const uint32_t inFileLength,\n                                const char * inContents) ;\n\n//--- No copy\n  private: cRegularFileWrapper (const cRegularFileWrapper &) ;\n  private: cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass cDirectoryWrapper {\n  public: const char * mDirectoryName ;\n  public: const uint32_t mFileCount ;\n  public: const cRegularFileWrapper * * const mFiles ;\n  public: const uint32_t mDirectoryCount ;\n  public: const cDirectoryWrapper * * mDirectories ;\n\n//--- Constructor\n  public: cDirectoryWrapper (const char * inDirectoryName,\n                              const uint32_t inFileCount,\n                              const cRegularFileWrapper * * const inFiles,\n                              const uint32_t inDirectoryCount,\n                              const cDirectoryWrapper * * inDirectories) ;\n\n//--- No copy\n  private: cDirectoryWrapper (const cDirectoryWrapper &) ;\n  private: cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_filewrapper : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const cDirectoryWrapper * mRootDirectoryPtr ;\n  private: String mCurrentDirectory ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mRootDirectoryPtr ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mRootDirectoryPtr = nullptr ; }\n\n//--------------------------------- Default constructor\n  public: GGS_filewrapper (void) ;\n\n//--------------------------------- Native constructor\n  public: GGS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n\n//--------------------------------- Handle copy\n  public: GGS_filewrapper (const GGS_filewrapper & inSource) ;\n  public: GGS_filewrapper & operator = (const GGS_filewrapper & inSource) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate application_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("@application package").stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_application final {\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @bigint type\n//--------------------------------------------------------------------------------------------------\n \nclass GGS_bigint : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: BigSigned mValue ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: inline BigSigned bigintValue (void) const { return mValue ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GGS_bigint (void) ;\n\n//--------------------------------- Constructor\n  public: GGS_bigint (const BigSigned & inValue) ;\n  public: GGS_bigint (const char * inDecimalString, Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GGS_bigint (void) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate timer_type'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   @timer type\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_timer : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: Timer mTimer ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GGS_timer (void) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dictDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_dictDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_dictDeclarationAST temp_0 = this ;
  result_result = GGS_string ("dict @").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 32)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_structAttributeList_4609 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GGS_dictDeclarationAST temp_0 = this ;
  var_structAttributeList_4609.addAssignOperation (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-dict.galgas3", 129)), temp_0.readProperty_mKeyTypeName (), GGS_string ("key").getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 131)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-dict.galgas3", 132)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-dict.galgas3", 134))  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 128)) ;
  const GGS_dictDeclarationAST temp_1 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_4861 (temp_1.readProperty_mPropertyList ()) ;
  while (enumerator_4861.hasCurrentObject ()) {
    var_structAttributeList_4609.addAssignOperation (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-dict.galgas3", 137)), enumerator_4861.current_typeName (HERE), enumerator_4861.current_name (HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-dict.galgas3", 140)), enumerator_4861.current_hasSelector (HERE), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-dict.galgas3", 142))  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 136)) ;
    enumerator_4861.gotoNextObject () ;
  }
  const GGS_dictDeclarationAST temp_2 = this ;
  GGS_lstring var_elementTypeName_5092 = function_makeEmbeddedElementTypeLName (temp_2.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 144)) ;
  const GGS_dictDeclarationAST temp_3 = this ;
  const GGS_dictDeclarationAST temp_4 = this ;
  GGS_structComparison temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-dict.galgas3", 150)) ;
  }else if (GalgasBool::boolFalse == test_6) {
    temp_5 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-dict.galgas3", 150)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_3.readProperty_isPredefined (), var_elementTypeName_5092, var_structAttributeList_4609, GGS_string::makeEmptyString (), temp_5, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 145)) ;
  {
  GGS_lstring joker_5505 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_5505, var_elementTypeName_5092, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 154)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictDeclarationAST enterDeclarationInGraph'
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
  GGS_lstring var_key_6404 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 170)), temp_1.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_dictDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6404, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 171)) ;
  }
  {
  const GGS_dictDeclarationAST temp_3 = this ;
  const GGS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 172)), temp_4.readProperty_mKeyTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 172)) ;
  }
  const GGS_dictDeclarationAST temp_5 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6651 (temp_5.readProperty_mPropertyList ()) ;
  while (enumerator_6651.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_6651.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 174)), enumerator_6651.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 174)) ;
    }
    enumerator_6651.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictDeclarationAST enterDeclarationInSemanticContext'
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
  GGS_unifiedTypeMapEntry var_keyTypeIndex_7620 ;
  {
  const GGS_dictDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_7620, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 191)) ;
  }
  GGS_enumerationDescriptorList var_enumerationDescriptor_7670 = GGS_enumerationDescriptorList::class_func_listWithValue (var_keyTypeIndex_7620, GGS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 193)) ;
  GGS_getterMap var_getterMap_7822 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7822, inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 195)) ;
  }
  GGS_setterMap var_setterMap_7851 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_7892 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictDeclarationAST temp_1 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7822, ioArgument_ioTypeMap, GGS_string ("hasKey"), GGS_string::makeEmptyString (), temp_1.readProperty_mKeyTypeName ().readProperty_string (), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 199)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7822, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 207)) ;
  }
  GGS_formalParameterSignature var_insertSetterFormalArgumentList_8390 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedPropertyList_8452 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_8501 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_8501.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 219)), var_keyTypeIndex_7620, GGS_string ("key"), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 219)) ;
  var_insertSetterFormalArgumentList_8390.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 221)), var_keyTypeIndex_7620, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas3", 223)), GGS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 220)) ;
  GGS_formalParameterSignature var_removeMethodFormalArgumentList_8795 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_removeMethodFormalArgumentList_8795.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 227)), var_keyTypeIndex_7620, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas3", 229)), GGS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 226)) ;
  GGS_optionalMethodSignature var_optionalMethodSignature_8971 = GGS_optionalMethodSignature::init (inCompiler COMMA_HERE) ;
  var_optionalMethodSignature_8971.addAssignOperation (GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 234)), var_keyTypeIndex_7620, GGS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 232)) ;
  GGS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_9093 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GGS_dictDeclarationAST temp_2 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_9192 (temp_2.readProperty_mPropertyList ()) ;
  while (enumerator_9192.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_9275 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_9192.current_typeName (HERE), var_attributeTypeIndex_9275, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 239)) ;
    }
    GGS_bool var_hasSetter_9303 = GGS_bool (true) ;
    GGS_bool var_hasSelector_9328 = GGS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_8501.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 242)), var_attributeTypeIndex_9275, enumerator_9192.current_name (HERE).readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 242)) ;
    var_typedPropertyList_8452.addAssignOperation (var_attributeTypeIndex_9275, enumerator_9192.current_name (HERE), enumerator_9192.current_initialization (HERE), var_hasSetter_9303, var_hasSelector_9328  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 243)) ;
    var_typesToIncludeInHeaderCompilation_9093.addAssignOperation (var_attributeTypeIndex_9275  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 244)) ;
    var_enumerationDescriptor_7670.addAssignOperation (var_attributeTypeIndex_9275, enumerator_9192.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 245)) ;
    var_insertSetterFormalArgumentList_8390.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 247)), var_attributeTypeIndex_9275, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas3", 249)), enumerator_9192.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 246)) ;
    var_removeMethodFormalArgumentList_8795.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 252)), var_attributeTypeIndex_9275, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-dict.galgas3", 254)), enumerator_9192.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 251)) ;
    var_optionalMethodSignature_8971.addAssignOperation (GGS_bool (false), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 258)), var_attributeTypeIndex_9275, enumerator_9192.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 256)) ;
    enumerator_9192.gotoNextObject () ;
  }
  {
  const GGS_dictDeclarationAST temp_3 = this ;
  var_setterMap_7851.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insert"), temp_3.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas3", 265)), var_insertSetterFormalArgumentList_8390, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas3", 268)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 263)) ;
  }
  {
  const GGS_dictDeclarationAST temp_4 = this ;
  var_setterMap_7851.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("removeKey"), temp_4.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas3", 274)), var_removeMethodFormalArgumentList_8795, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas3", 277)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 272)) ;
  }
  {
  const GGS_dictDeclarationAST temp_5 = this ;
  const GGS_dictDeclarationAST temp_6 = this ;
  var_instanceMethodMap_7892.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("searchKey"), temp_5.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas3", 283)), var_removeMethodFormalArgumentList_8795, temp_6.readProperty_mDictTypeName ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas3", 287)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 281)) ;
  }
  const GGS_dictDeclarationAST temp_7 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_11013 (temp_7.readProperty_mPropertyList ()) ;
  while (enumerator_11013.hasCurrentObject ()) {
    GGS_lstring var_accessorName_11049 = GGS_lstring::init_21__21_ (enumerator_11013.current_name (HERE).readProperty_string ().add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 292)), enumerator_11013.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_11175 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11013.current_typeName (HERE), var_attributeTypeIndex_11175, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 293)) ;
    }
    {
    GGS_functionSignature temp_8 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 297)) ;
    temp_8.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 297)), var_keyTypeIndex_7620, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 297)) ;
    var_getterMap_7822.setter_insertOrReplace (var_accessorName_11049, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas3", 296)), temp_8, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 298)), GGS_bool (true), var_attributeTypeIndex_11175, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas3", 301)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 294)) ;
    }
    enumerator_11013.gotoNextObject () ;
  }
  const GGS_dictDeclarationAST temp_9 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_11590 (temp_9.readProperty_mPropertyList ()) ;
  while (enumerator_11590.hasCurrentObject ()) {
    GGS_lstring var_accessorName_11626 = GGS_lstring::init_21__21_ (GGS_string ("set").add_operation (enumerator_11590.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-dict.galgas3", 308)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 308)).add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 308)), enumerator_11590.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_11837 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11590.current_typeName (HERE), var_attributeTypeIndex_11837, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 311)) ;
    }
    GGS_formalParameterSignature var_accessorFormalArgumentList_11870 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    var_accessorFormalArgumentList_11870.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 316)), var_attributeTypeIndex_11837, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas3", 316)), enumerator_11590.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 316)) ;
    var_accessorFormalArgumentList_11870.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 317)), var_keyTypeIndex_7620, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas3", 317)), GGS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 317)) ;
    {
    var_setterMap_7851.setter_insertOrReplace (var_accessorName_11626, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas3", 320)), var_accessorFormalArgumentList_11870, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas3", 323)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 318)) ;
    }
    enumerator_11590.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_12394 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_12440 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictDeclarationAST temp_10 = this ;
  var_initializerMap_12394.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_12440, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 331)), temp_10.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_12440, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 330)) ;
  }
  {
  const GGS_dictDeclarationAST temp_11 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_11.readProperty_mDictTypeName (), GGS_bool (false), var_initializerMap_12394, var_getterMap_7822, var_setterMap_7851, var_instanceMethodMap_7892, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 335)) ;
  }
  const GGS_dictDeclarationAST temp_12 = this ;
  GGS_lstring var_elementTypeName_13030 = function_makeEmbeddedElementTypeLName (temp_12.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 351)) ;
  GGS_unifiedTypeMapEntry var_elementTypeEntry_13175 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_elementTypeName_13030, var_elementTypeEntry_13175, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 352)) ;
  }
  GGS_typeFeatures var_features_13217 = GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-dict.galgas3", 357)).operator_or (GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-dict.galgas3", 357)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 357)) ;
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    const GGS_dictDeclarationAST temp_14 = this ;
    test_13 = temp_14.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      var_features_13217.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-dict.galgas3", 359)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 359)) ;
    }
  }
  {
  const GGS_dictDeclarationAST temp_15 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_15.readProperty_mDictTypeName (), var_features_13217, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 361)) ;
  }
  GGS_lstring var_optionalElementTypeName_13587 = function_makeOptionalTypeLName (var_elementTypeName_13030, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 369)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_13752 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_13587, var_optionalElementTypeEntry_13752, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 370)) ;
  }
  GGS_subscriptMap var_readSubscriptMap_13823 = GGS_subscriptMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature temp_16 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 376)) ;
  temp_16.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 376)), var_keyTypeIndex_7620, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 376)) ;
  GGS_functionSignature var_argumentTypeList_13871 = temp_16 ;
  {
  var_readSubscriptMap_13823.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_13871, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 378)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-dict.galgas3", 378)), inCompiler COMMA_HERE), var_argumentTypeList_13871, var_optionalElementTypeEntry_13752, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 377)) ;
  }
  const GGS_dictDeclarationAST temp_17 = this ;
  const GGS_dictDeclarationAST temp_18 = this ;
  const GGS_dictDeclarationAST temp_19 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_14107 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_17.readProperty_mDictTypeName (), temp_18.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dict.galgas3", 388)), GGS_typeKindEnum::class_func_mapType (SOURCE_FILE ("declaration-type-dict.galgas3", 389)), GGS_bool (true), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), var_typedPropertyList_8452, var_initializerMap_12394, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_7822, var_setterMap_7851, var_instanceMethodMap_7892, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dict.galgas3", 400)), var_readSubscriptMap_13823, var_enumerationDescriptor_7670, var_features_13217, var_argumentTypeListForAddAssignWithFieldExpressionList_8501, GGS_bool (false), var_elementTypeEntry_13175, GGS_string ("dict-").add_operation (temp_19.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-dict.galgas3", 407)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 407)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-dict.galgas3", 408)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14107.readProperty_typeName (), var_typeDefinition_14107, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 410)) ;
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
  UpEnumerator_stringlist enumerator_15583 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GGS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 418))) ;
  while (enumerator_15583.hasCurrentObject ()) {
    GGS_stringlist var_explodedArray_15608 = enumerator_15583.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GGS_string ("%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 419)) ;
    {
    GGS_string joker_15707 ; // Joker input parameter
    var_explodedArray_15608.setter_popFirst (joker_15707, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 420)) ;
    }
    UpEnumerator_stringlist enumerator_15720 (var_explodedArray_15608) ;
    while (enumerator_15720.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_15720.current_mValue (HERE).getter_count (SOURCE_FILE ("declaration-type-dict.galgas3", 422)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_char var_c_15797 = enumerator_15720.current_mValue (HERE).getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 423)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_c_15797.objectCompare (GGS_char (utf32 (75)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GGS_string ("only '%K' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 425)) ;
            }
          }
        }
      }
      enumerator_15720.gotoNextObject () ;
    }
    enumerator_15583.gotoNextObject () ;
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
  UpEnumerator_stringlist enumerator_16274 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GGS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 435))) ;
  while (enumerator_16274.hasCurrentObject ()) {
    GGS_stringlist var_explodedArray_16299 = enumerator_16274.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GGS_string ("%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 436)) ;
    {
    GGS_string joker_16398 ; // Joker input parameter
    var_explodedArray_16299.setter_popFirst (joker_16398, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 437)) ;
    }
    UpEnumerator_stringlist enumerator_16411 (var_explodedArray_16299) ;
    while (enumerator_16411.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_16411.current_mValue (HERE).getter_count (SOURCE_FILE ("declaration-type-dict.galgas3", 439)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_char var_c_16488 = enumerator_16411.current_mValue (HERE).getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 440)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_c_16488.objectCompare (GGS_char (utf32 (75)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_c_16488.objectCompare (GGS_char (utf32 (76)))) COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 441)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GGS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 442)) ;
            }
          }
        }
      }
      enumerator_16411.gotoNextObject () ;
    }
    enumerator_16274.gotoNextObject () ;
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
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 452)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 452)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("description")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 452)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 452)) ;
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
                                                                        const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
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
//Overriding extension proc '@dictDeclarationAST semanticAnalysis'
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
  GGS_unifiedTypeMapEntry var_keyType_17542 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 467)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_keyType_17542, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 468)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-dict.galgas3", 468)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 468)).operator_not (SOURCE_FILE ("declaration-type-dict.galgas3", 468)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_dictDeclarationAST temp_2 = this ;
      const GGS_dictDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mKeyTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 469)).add_operation (GGS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 469)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 469)) ;
    }
  }
  const GGS_dictDeclarationAST temp_5 = this ;
  GGS_lstring var_nameForUsefulness_17797 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 472)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17797, var_nameForUsefulness_17797, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 473)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_dictDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_17797  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 475)) ;
    }
  }
  const GGS_dictDeclarationAST temp_8 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_18035 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_8.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 478)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 477)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17797, var_elementTypeNameForUsefulness_18035 COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 480)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_dictDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_elementTypeNameForUsefulness_18035  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 482)) ;
    }
  }
  const GGS_dictDeclarationAST temp_11 = this ;
  GGS_lstring var_initializerNameForUsefulness_18421 = function_initializerNameForUsefulEntitiesGraph (temp_11.readProperty_mDictTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 487)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 485)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_18421, var_initializerNameForUsefulness_18421, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 489)) ;
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_dictDeclarationAST temp_13 = this ;
    test_12 = temp_13.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_18421  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 491)) ;
    }
  }
  GGS_typedPropertyList var_typedAttributeList_18820 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_18869 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_dictDeclarationAST temp_14 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_18934 (temp_14.readProperty_mPropertyList ()) ;
  while (enumerator_18934.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_18983 = function_typeNameForUsefulEntitiesGraph (enumerator_18934.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 497)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17797, var_propertyTypeNameForUsefulness_18983 COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 498)) ;
    }
    GGS_unifiedTypeMapEntry var_t_19185 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_18934.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 499)) ;
    GGS_bool var_hasSetter_19239 = GGS_bool (true) ;
    var_typedAttributeList_18820.addAssignOperation (var_t_19185, enumerator_18934.current_name (HERE), enumerator_18934.current_initialization (HERE), var_hasSetter_19239, enumerator_18934.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 501)) ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 507)).getter_hasKey (enumerator_18934.current_name (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 507)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_string var_m_19485 = GGS_string ("a property cannot be named:") ;
        UpEnumerator_stringset enumerator_19562 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 509))) ;
        while (enumerator_19562.hasCurrentObject ()) {
          var_m_19485.plusAssignOperation(GGS_string (" ").add_operation (enumerator_19562.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 510)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 510)) ;
          enumerator_19562.gotoNextObject () ;
        }
        var_m_19485.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 512)) ;
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_18934.current_name (HERE).readProperty_location (), var_m_19485, fixItArray16  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 513)) ;
      }
    }
    {
    var_attributeMap_18869.setter_insertKey (enumerator_18934.current_name (HERE), var_t_19185, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 515)) ;
    }
    enumerator_18934.gotoNextObject () ;
  }
  const GGS_dictDeclarationAST temp_17 = this ;
  GGS_lstring var_elementTypeName_19772 = function_makeEmbeddedElementTypeLName (temp_17.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 518)) ;
  GGS_lstring var_optionalElementTypeName_19847 = function_makeOptionalTypeLName (var_elementTypeName_19772, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 519)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_19934 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_19847, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 520)) ;
  const GGS_dictDeclarationAST temp_18 = this ;
  const GGS_dictDeclarationAST temp_19 = this ;
  const GGS_dictDeclarationAST temp_20 = this ;
  const GGS_dictDeclarationAST temp_21 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("dict ").add_operation (temp_18.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 523)), GGS_dictTypeForGeneration::init_21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_19.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 525)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_elementTypeName_19772, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 526)), temp_20.readProperty_mDictTypeName (), var_typedAttributeList_18820, temp_21.readProperty_mKeyTypeName (), var_optionalElementTypeEntry_19934, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 522)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                               GGS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 549)) ;
  const GGS_dictTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_1.readProperty_mOptionalElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 550)) ;
  const GGS_dictTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_21300 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 551)) ;
  const GGS_dictTypeForGeneration temp_3 = this ;
  const GGS_dictTypeForGeneration temp_4 = this ;
  const GGS_dictTypeForGeneration temp_5 = this ;
  const GGS_dictTypeForGeneration temp_6 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_dictGenerationTemplate_dictTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21300.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 554)), temp_4.readProperty_mTypedAttributeList (), var_selfTypeDefinition_21300.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_21300.readProperty_typeForEnumeratedElement (), temp_5.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-dict.galgas3", 558)), extensionGetter_identifierRepresentation (temp_6.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 559)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 552))) ;
  const GGS_dictTypeForGeneration temp_7 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_21300.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_7.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 563)), var_selfTypeDefinition_21300.readProperty_isConcrete (), var_selfTypeDefinition_21300.readProperty_initializerMap (), var_selfTypeDefinition_21300.readProperty_classFunctionMap (), var_selfTypeDefinition_21300.readProperty_getterMap (), var_selfTypeDefinition_21300.readProperty_setterMap (), var_selfTypeDefinition_21300.readProperty_instanceMethodMap (), var_selfTypeDefinition_21300.readProperty_classMethodMap (), var_selfTypeDefinition_21300.readProperty_readSubscriptMap (), var_selfTypeDefinition_21300.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_21300.readProperty_features (), var_selfTypeDefinition_21300.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_21300.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_21300.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 561))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 561)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 586)) ;
  const GGS_dictTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_22946 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 587)) ;
  const GGS_dictTypeForGeneration temp_2 = this ;
  const GGS_dictTypeForGeneration temp_3 = this ;
  const GGS_dictTypeForGeneration temp_4 = this ;
  const GGS_dictTypeForGeneration temp_5 = this ;
  const GGS_dictTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_dictGenerationTemplate_dictTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 589)), temp_3.readProperty_mTypedAttributeList (), var_selfTypeDefinition_22946.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_22946.readProperty_typeForEnumeratedElement (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-dict.galgas3", 593)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_22946.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 594)), extensionGetter_identifierRepresentation (temp_5.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 595)), extensionGetter_identifierRepresentation (temp_6.readProperty_mOptionalElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 596)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 588))) ;
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
  GGS_uint index_2760_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_2760 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_2760.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2760.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 72)).stringValue ()) ;
      result.appendString (" & inArgument") ;
      result.appendString (index_2760_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 72)).stringValue ()) ;
      enumerator_2760.gotoNextObject () ;
      index_2760_IDX.increment () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (inKey") ;
  GGS_uint index_3027_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3027 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_3027.hasCurrentObject ()) {
      result.appendString (", inArgument") ;
      result.appendString (index_3027_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 78)).stringValue ()) ;
      enumerator_3027.gotoNextObject () ;
      index_3027_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  if (isValid () && inKey.isValid ()) {\n    insertOrReplace (inKey, newElement COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GGS_uint index_3418_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3418 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_3418.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_3418.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 90)).stringValue ()) ;
      result.appendString (" inArgument") ;
      result.appendString (index_3418_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 90)).stringValue ()) ;
      enumerator_3418.gotoNextObject () ;
      index_3418_IDX.increment () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (inKey") ;
  GGS_uint index_3683_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3683 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_3683.hasCurrentObject ()) {
      result.appendString (", inArgument") ;
      result.appendString (index_3683_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 96)).stringValue ()) ;
      enumerator_3683.gotoNextObject () ;
      index_3683_IDX.increment () ;
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
  GGS_uint index_4437_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4437 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_4437.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4437.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 119)).stringValue ()) ;
      result.appendString (" & outArgument") ;
      result.appendString (index_4437_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 119)).stringValue ()) ;
      enumerator_4437.gotoNextObject () ;
      index_4437_IDX.increment () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNil ()) {\n    //--- Build error message\n      const String message = \"cannot search in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    //--- Drop out arguments\n") ;
  GGS_uint index_5049_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5049 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5049.hasCurrentObject ()) {
      result.appendString ("      outArgument") ;
      result.appendString (index_5049_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 133)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_5049.gotoNextObject () ;
      index_5049_IDX.increment () ;
    }
  }
  result.appendString ("    }else{\n") ;
  GGS_uint index_5174_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5174 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5174.hasCurrentObject ()) {
      result.appendString ("      outArgument") ;
      result.appendString (index_5174_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (" = object->mProperty_") ;
      result.appendString (enumerator_5174.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_5174.gotoNextObject () ;
      index_5174_IDX.increment () ;
    }
  }
  result.appendString ("    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GGS_uint index_5551_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5551 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5551.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5551.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 147)).stringValue ()) ;
      result.appendString (" & outArgument") ;
      result.appendString (index_5551_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 147)).stringValue ()) ;
      enumerator_5551.gotoNextObject () ;
      index_5551_IDX.increment () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> removedObject\n                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;\n    if (removedObject.isNil ()) { // Not found\n    //--- Build error message\n      const String message = \"cannot remove in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    //--- Drop output arguments\n") ;
  GGS_uint index_6235_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6235 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_6235.hasCurrentObject ()) {
      result.appendString ("      outArgument") ;
      result.appendString (index_6235_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 162)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_6235.gotoNextObject () ;
      index_6235_IDX.increment () ;
    }
  }
  result.appendString ("    }else{\n    //--- Assign output arguments\n") ;
  GGS_uint index_6394_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6394 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_6394.hasCurrentObject ()) {
      result.appendString ("      outArgument") ;
      result.appendString (index_6394_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 168)).stringValue ()) ;
      result.appendString (" = removedObject->mProperty_") ;
      result.appendString (enumerator_6394.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 168)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_6394.gotoNextObject () ;
      index_6394_IDX.increment () ;
    }
  }
  result.appendString ("    }\n  }\n}\n\n") ;
  GGS_uint index_6594_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6594 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_6594.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6594.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_6594.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GGS_") ;
      result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" & inKey,\n                                                 ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                                                 ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6594.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 179)).stringValue ()) ;
      result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNil ()) { // Not found\n    //--- Build error message\n      const String message = \"cannot get ") ;
      result.appendString (enumerator_6594.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 184)).stringValue ()) ;
      result.appendString (" ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      result = object->mProperty_") ;
      result.appendString (enumerator_6594.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 188)).stringValue ()) ;
      result.appendString (" ;\n    }\n  }\n  return result ;\n}\n") ;
      enumerator_6594.gotoNextObject () ;
      index_6594_.increment () ;
    }
  }
  GGS_uint index_7737_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7737 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_7737.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_set") ;
      result.appendString (enumerator_7737.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 197)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 197)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7737.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 197)).stringValue ()) ;
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
      result.appendString (enumerator_7737.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 205)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 205)).stringValue ()) ;
      result.appendString ("ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      modifiedNode->mSharedInfo->mProperty_") ;
      result.appendString (enumerator_7737.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 209)).stringValue ()) ;
      result.appendString (" = inPropertyValue ;\n    }\n  }\n}\n\n") ;
      enumerator_7737.gotoNextObject () ;
      index_7737_.increment () ;
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
  GGS_uint index_9352_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_9352 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_9352.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9352.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 228)).stringValue ()) ;
      result.appendString (" UpEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_9352.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 228)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_HERE)->mProperty_") ;
      result.appendString (enumerator_9352.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 229)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_9352.gotoNextObject () ;
      index_9352_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 236)).stringValue ()) ;
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
  GGS_uint index_10552_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_10552 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_10552.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_10552.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 253)).stringValue ()) ;
      result.appendString (" DownEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_10552.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 253)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_HERE)->mProperty_") ;
      result.appendString (enumerator_10552.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 254)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_10552.gotoNextObject () ;
      index_10552_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 262)).stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (UNUSED_LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_HERE).value () ;\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dataPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ cPtr_dataPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterListAST_5D_ result_result ; // Returned variable
  GGS__5B_formalInputParameterListAST_5D_ temp_0 = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 30)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 30)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptyData"), GGS_string ("data"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 38)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("dataWithContentsOfFile"), GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("data"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 45)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dataPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_dataPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-data.galgas3", 59)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-data.galgas3", 59)) COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 59)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getEnumerationList'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getEnumerationList (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                            GGS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                            GGS_string & outArgument_outEnumeratedType,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_uintTypeIndex_2935 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), var_uintTypeIndex_2935, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 67)) ;
  }
  outArgument_outEnumerationList = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumerationList.addAssignOperation (var_uintTypeIndex_2935, GGS_string ("data")  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 69)) ;
  outArgument_outEnumeratedType = GGS_string ("uint") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 78)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 86)) ;
  }
  GGS_formalParameterSignature var_argList_3831 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_3921 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_t_3921, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 95)) ;
  }
  var_argList_3831.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-data.galgas3", 96)), var_t_3921, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-data.galgas3", 96)), GGS_string ("inFilePath")  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 96)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_t_3921, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 97)) ;
  }
  var_argList_3831.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-data.galgas3", 98)), var_t_3921, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-data.galgas3", 98)), GGS_string ("outFileModified")  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 98)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("writeToFileWhenDifferentContents"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 100)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-data.galgas3", 101)), var_argList_3831, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 103)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-data.galgas3", 105)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 99)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 114)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 115)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cStringRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 123)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_setterMap & outArgument_outSetterMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendByte"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 138)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendShortBE"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 146)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendShortLE"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 154)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendUIntBE"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 162)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inValue"), GGS_string ("appendUIntLE"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 170)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inValue"), GGS_string ("appendUTF8String"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 178)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("data"), GGS_string ("inValue"), GGS_string ("appendData"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 186)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dataPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_dataPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas3", 199))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedListDeclarationAST enterDeclarationInGraph'
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
  GGS_lstring var_key_5990 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 164)), temp_1.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_sortedListDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5990, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 165)) ;
  }
  const GGS_sortedListDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6160 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_6160.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_6160.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 167)), enumerator_6160.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 167)) ;
    }
    enumerator_6160.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedListDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_structAttributeList_6534 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6625 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_6625.hasCurrentObject ()) {
    var_structAttributeList_6534.addAssignOperation (enumerator_6625.current_mutability (HERE), enumerator_6625.current_typeName (HERE), enumerator_6625.current_name (HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 181)), enumerator_6625.current_hasSelector (HERE), enumerator_6625.current_initialization (HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 177)) ;
    enumerator_6625.gotoNextObject () ;
  }
  const GGS_sortedListDeclarationAST temp_1 = this ;
  const GGS_sortedListDeclarationAST temp_2 = this ;
  const GGS_sortedListDeclarationAST temp_3 = this ;
  GGS_structComparison temp_4 ;
  const GalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 190)) ;
  }else if (GalgasBool::boolFalse == test_5) {
    temp_4 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 190)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_1.readProperty_isPredefined (), function_makeEmbeddedElementTypeLName (temp_2.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 187)), var_structAttributeList_6534, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 185)) ;
}

