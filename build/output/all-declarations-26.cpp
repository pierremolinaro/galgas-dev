#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST enterDeclarationInSemanticContext'
//
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
  GGS_unifiedTypeMapEntry var_listTypeIndex_8118 ;
  {
  const GGS_sortedListDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mSortedListTypeName (), var_listTypeIndex_8118, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 212)) ;
  }
  GGS_unifiedTypeMapEntry var_listElementTypeIndex_8274 ;
  {
  const GGS_sortedListDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_1.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 215)), var_listElementTypeIndex_8274, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 214)) ;
  }
  GGS_enumerationDescriptorList var_enumerationDescriptor_8361 = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorAttributeTypeList_8413 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterFormalOutputArgumentList_8479 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterFormalInputArgumentList_8547 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedAttributeList_8607 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_2 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_8674 (temp_2.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_8674.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_8765 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8674.current_typeName (HERE), var_attributeTypeIndex_8765, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 225)) ;
    }
    GGS_bool var_hasSelector_8793 = GGS_bool (false) ;
    var_typedAttributeList_8607.addAssign_operation (var_attributeTypeIndex_8765, enumerator_8674.current_name (HERE), enumerator_8674.current_initialization (HERE), GGS_bool (true), var_hasSelector_8793  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 227)) ;
    var_enumerationDescriptor_8361.addAssign_operation (var_attributeTypeIndex_8765, enumerator_8674.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 228)) ;
    var_constructorAttributeTypeList_8413.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-list.galgas", 229)), var_attributeTypeIndex_8765, enumerator_8674.current_name (HERE).readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 229)) ;
    var_setterFormalOutputArgumentList_8479.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-list.galgas", 230)), var_attributeTypeIndex_8765, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-sorted-list.galgas", 230)), enumerator_8674.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 230)) ;
    var_setterFormalInputArgumentList_8547.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-list.galgas", 231)), var_attributeTypeIndex_8765, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-sorted-list.galgas", 231)), enumerator_8674.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 231)) ;
    enumerator_8674.gotoNextObject () ;
  }
  GGS_classFunctionMap var_classFunctionMap_9370 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_sortedListDeclarationAST temp_3 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_9370, ioArgument_ioTypeMap, GGS_string ("emptySortedList"), temp_3.readProperty_mSortedListTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 235)) ;
  }
  {
  var_classFunctionMap_9370.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("sortedListWithValue"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 243)), inCompiler COMMA_HERE), var_constructorAttributeTypeList_8413, GGS_bool (false), var_listTypeIndex_8118, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 242)) ;
  }
  GGS_getterMap var_getterMap_9804 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_9804, inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 249)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_9804, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("length"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 250)) ;
  }
  GGS_setterMap var_setterMap_10034 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  var_setterMap_10034.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popGreatest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 261)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas", 262)), var_setterFormalOutputArgumentList_8479, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas", 265)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 260)) ;
  }
  {
  var_setterMap_10034.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popSmallest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 269)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas", 270)), var_setterFormalOutputArgumentList_8479, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas", 273)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 268)) ;
  }
  {
  var_setterMap_10034.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insert"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 277)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas", 278)), var_setterFormalInputArgumentList_8547, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas", 281)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 276)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_10744 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_10744.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("greatest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 287)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas", 288)), var_setterFormalOutputArgumentList_8479, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 290)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas", 292)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 286)) ;
  }
  {
  var_instanceMethodMap_10744.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("smallest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 296)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas", 297)), var_setterFormalOutputArgumentList_8479, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 299)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas", 301)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 295)) ;
  }
  GGS_initializerMap var_initializerMap_11301 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_11346 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_sortedListDeclarationAST temp_4 = this ;
  var_initializerMap_11301.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_11346, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 308)), temp_4.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_11346, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 307)) ;
  }
  {
  const GGS_sortedListDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_mSortedListTypeName (), GGS_bool (false), var_initializerMap_11301, var_getterMap_9804, var_setterMap_10034, var_instanceMethodMap_10744, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 312)) ;
  }
  GGS_typeFeatures var_features_11942 = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-sorted-list.galgas", 328)).operator_or (GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-sorted-list.galgas", 328)) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 328)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GGS_sortedListDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_equatable ().boolEnum () ;
    if (kBoolTrue == test_6) {
      var_features_11942.orAssign_operation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-sorted-list.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 330)) ;
    }
  }
  {
  const GGS_sortedListDeclarationAST temp_8 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_8.readProperty_mSortedListTypeName (), var_features_11942, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 332)) ;
  }
  const GGS_sortedListDeclarationAST temp_9 = this ;
  const GGS_sortedListDeclarationAST temp_10 = this ;
  const GGS_sortedListDeclarationAST temp_11 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12293 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_9.readProperty_mSortedListTypeName (), temp_10.readProperty_isPredefined (), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-list.galgas", 344)), GGS_typeKindEnum::class_func_sortedListType (SOURCE_FILE ("declaration-type-sorted-list.galgas", 345)), GGS_bool (true), var_typedAttributeList_8607, GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_11301, var_classFunctionMap_9370, var_getterMap_9804, var_setterMap_10034, var_instanceMethodMap_10744, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-list.galgas", 356)), GGS_subscriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_8361, var_features_11942, var_constructorAttributeTypeList_8413, GGS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GGS_bool (false), var_listElementTypeIndex_8274, GGS_string ("-sortedlist-").add_operation (temp_11.readProperty_mSortedListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-sorted-list.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 364)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-sorted-list.galgas", 365)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12293.readProperty_typeName (), var_typeDefinition_12293, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 367)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_string /* constinArgument_inProductDirectory */,
                                                             const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                             GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedListDeclarationAST temp_0 = this ;
  GGS_lstring var_sortedListNameForUsefulness_14098 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 384)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_14098, var_sortedListNameForUsefulness_14098, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 385)) ;
  }
  const GGS_sortedListDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_14287 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_1.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 386)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_14098, var_elementTypeNameForUsefulness_14287 COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 387)) ;
  }
  GGS_typedPropertyList var_typedAttributeList_14525 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_14592 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_2 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_14653 (temp_2.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_14653.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_14702 = function_typeNameForUsefulEntitiesGraph (enumerator_14653.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 392)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_14098, var_propertyTypeNameForUsefulness_14702 COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 393)) ;
    }
    GGS_unifiedTypeMapEntry var_t_14891 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_14653.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 394)) ;
    GGS_bool var_hasSelector_14953 = GGS_bool (true) ;
    var_typedAttributeList_14525.addAssign_operation (var_t_14891, enumerator_14653.current_name (HERE), enumerator_14653.current_initialization (HERE), GGS_bool (true), var_hasSelector_14953  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 396)) ;
    {
    var_attributeMap_14592.setter_insertKey (enumerator_14653.current_name (HERE), var_t_14891, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 402)) ;
    }
    enumerator_14653.gotoNextObject () ;
  }
  GGS_stringset var_attributesUsedForSorting_15198 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_sortDescriptorListForGeneration var_sortDescriptorList_15267 = GGS_sortDescriptorListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_15319 (temp_3.readProperty_mSortDescriptorList (), EnumerationOrder::up) ;
  while (enumerator_15319.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_type_15438 ;
    var_attributeMap_14592.method_searchKey (enumerator_15319.current_mSortedAttributeName (HERE), var_type_15438, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 408)) ;
    var_sortDescriptorList_15267.addAssign_operation (var_type_15438, enumerator_15319.current_mSortedAttributeName (HERE).readProperty_string (), enumerator_15319.current_mAscending (HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 409)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_attributesUsedForSorting_15198.getter_hasKey (enumerator_15319.current_mSortedAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 410)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_15319.current_mSortedAttributeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_15319.current_mSortedAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 411)).add_operation (GGS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 411)), fixItArray5  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 411)) ;
      }
    }
    var_attributesUsedForSorting_15198.addAssign_operation (enumerator_15319.current_mSortedAttributeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 413)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = extensionGetter_definition (var_type_15438, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 414)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-sorted-list.galgas", 414)) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 414)).operator_not (SOURCE_FILE ("declaration-type-sorted-list.galgas", 414)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_15319.current_mSortedAttributeName (HERE).readProperty_location (), GGS_string ("the @").add_operation (extensionGetter_definition (var_type_15438, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 415)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 415)).add_operation (GGS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 415)), fixItArray7  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 415)) ;
      }
    }
    enumerator_15319.gotoNextObject () ;
  }
  const GGS_sortedListDeclarationAST temp_8 = this ;
  const GGS_sortedListDeclarationAST temp_9 = this ;
  const GGS_sortedListDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("sorted list ").add_operation (temp_8.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 420)), GGS_sortedListTypeForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 422)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_10.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 423)), var_typedAttributeList_14525, var_sortDescriptorList_15267, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 419)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                     GGS_string & outArgument_outHeader,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedListTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_17334 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 452)) ;
  const GGS_sortedListTypeForGeneration temp_1 = this ;
  const GGS_sortedListTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, var_selfTypeDefinition_17334.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 455)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 453))) ;
  const GGS_sortedListTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_17334.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 460)), var_selfTypeDefinition_17334.readProperty_isConcrete (), var_selfTypeDefinition_17334.readProperty_initializerMap (), var_selfTypeDefinition_17334.readProperty_classFunctionMap (), var_selfTypeDefinition_17334.readProperty_getterMap (), var_selfTypeDefinition_17334.readProperty_setterMap (), var_selfTypeDefinition_17334.readProperty_instanceMethodMap (), var_selfTypeDefinition_17334.readProperty_classMethodMap (), var_selfTypeDefinition_17334.readProperty_readSubscriptMap (), var_selfTypeDefinition_17334.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_17334.readProperty_features (), var_selfTypeDefinition_17334.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_17334.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_17334.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 458))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 458)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_string & outArgument_outImplementation,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedListTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_18610 (temp_0.readProperty_mTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_18610.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18610.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 484)) ;
    enumerator_18610.gotoNextObject () ;
  }
  const GGS_sortedListTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 486)) ;
  const GGS_sortedListTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 487)) ;
  const GGS_sortedListTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_t_18825 = extensionGetter_definition (temp_3.readProperty_mListElementTypeIndex (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 488)) ;
  const GGS_sortedListTypeForGeneration temp_4 = this ;
  const GGS_sortedListTypeForGeneration temp_5 = this ;
  const GGS_sortedListTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 490)), temp_5.readProperty_mTypedAttributeList (), temp_6.readProperty_mSortDescriptorList (), var_t_18825.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-sorted-list.galgas", 493)), extensionGetter_generateCppObjectComparison (var_t_18825.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 494)) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 489))) ;
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
                                                                                      const GGS_typedPropertyList & /* in_ATTRIBUTE_5F_LIST */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).add_operation (GGS_string (" sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_sortedlist {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n") ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).add_operation (GGS_string ("' sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cSortedListElement {\n  public: GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" mObject ;\n\n//--- Constructors\n  public: cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_563_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_563 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_563.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_563.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_563.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue ()) ;
      if (enumerator_563.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_563_.increment () ;
      enumerator_563.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n  public: cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inObject\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cSortedListElement * copy (void) ;\n\n//--- Virtual method for comparing elements\n") ;
  const enumGalgasBool test_0 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--- Description\n public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n\n//--- Virtual method that comparing element for sorting\n  public: virtual ComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\ncSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_1805_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1805 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1805.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1805.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 42)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1805.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 42)).stringValue ()) ;
      if (enumerator_1805.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1805_.increment () ;
      enumerator_1805.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncSortedListElement (THERE),\nmObject (") ;
  GGS_uint index_2097_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2097 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2097.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_2097.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 50)).stringValue ()) ;
      if (enumerator_2097.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_2097_.increment () ;
      enumerator_2097.gotoNextObject () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::\ncSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inObject\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncSortedListElement (THERE),\nmObject (inObject) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mObject.isValid () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncSortedListElement * cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copy (void) {\n  cSortedListElement * result = nullptr ;\n  macroMyNew (result, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_3077_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3077 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3077.hasCurrentObject ()) {
      result.appendString ("mObject.mProperty_") ;
      result.appendString (enumerator_3077.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 77)).stringValue ()) ;
      if (enumerator_3077.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_3077_.increment () ;
      enumerator_3077.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString, const int32_t inIndentation) const {\n") ;
  GGS_uint index_3511_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3511 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3511.hasCurrentObject ()) {
      result.appendString ("  ioString.appendNewLine () ;\n  ioString.appendStringMultiple (\"| \", inIndentation) ;\n  ioString.appendCString (") ;
      result.appendString (enumerator_3511.current_name (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 91)).stringValue ()) ;
      result.appendString (" \":\") ;\n  mObject.mProperty_") ;
      result.appendString (enumerator_3511.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 92)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation) ;\n") ;
      index_3511_.increment () ;
      enumerator_3511.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n") ;
  const enumGalgasBool test_1 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult cSortedListElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::compare (const cCollectionElement * inOperand) const {\n  cSortedListElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * operand = (cSortedListElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" *) inOperand ;\n  macroValidSharedObject (operand, cSortedListElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (") ;\n  return mObject.objectCompare (operand->mObject) ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_sortedlist () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterElement (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cSortedListElement * p = nullptr ;\n  macroMyNew (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inValue COMMA_THERE)) ;\n  capSortedListElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  appendObject (attributes) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::compareForSorting (const cSortedListElement * inOperand) const {\n  ComparisonResult result = ComparisonResult::operandEqual ;\n  const cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * operand = (const cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inOperand ;\n  macroValidSharedObject (operand, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GGS_uint index_5584_ (0) ;
  if (in_SORT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_sortDescriptorListForGeneration enumerator_5584 (in_SORT_5F_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5584.hasCurrentObject ()) {
      result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = ") ;
      const enumGalgasBool test_2 = enumerator_5584.current_mAscendingOrder (HERE).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("mObject.mProperty_") ;
        result.appendString (enumerator_5584.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 133)).stringValue ()) ;
        result.appendString (".objectCompare (operand->mObject.mProperty_") ;
        result.appendString (enumerator_5584.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 133)).stringValue ()) ;
        result.appendString (")") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("operand->mObject.mProperty_") ;
        result.appendString (enumerator_5584.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 135)).stringValue ()) ;
        result.appendString (".objectCompare (mObject.mProperty_") ;
        result.appendString (enumerator_5584.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 135)).stringValue ()) ;
        result.appendString (")") ;
        } break ;
      default :
        break ;
      }
      result.appendString (" ;\n  }\n") ;
      index_5584_.increment () ;
      enumerator_5584.gotoNextObject () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptySortedList (LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.createNewEmptySortedList (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.createNewEmptySortedList (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_sortedListWithValue (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_6936_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6936 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6936.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6936.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 163)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_6936_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 163)).stringValue ()) ;
      if (enumerator_6936.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6936_IDX.increment () ;
      enumerator_6936.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = class_func_emptySortedList (THERE) ;\n  cSortedListElement * p = nullptr ;\n  macroMyNew (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_7340_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7340 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7340.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_7340_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 171)).stringValue ()) ;
      if (enumerator_7340.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7340_IDX.increment () ;
      enumerator_7340.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n  capSortedListElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  result.appendObject (attributes) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_7791_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7791 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7791.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7791.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 186)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_7791_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 186)).stringValue ()) ;
      if (enumerator_7791.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7791_IDX.increment () ;
      enumerator_7791.gotoNextObject () ;
    }
  }
  result.appendString ("\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = nullptr ;\n    macroMyNew (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_8097_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8097 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8097.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_8097_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 195)).stringValue ()) ;
      if (enumerator_8097.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_8097_IDX.increment () ;
      enumerator_8097.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capSortedListElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_8535_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8535 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8535.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8535.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_8535_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8535_IDX.increment () ;
      enumerator_8535.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * /* inCompiler */\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = nullptr ;\n    macroMyNew (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_8855_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8855 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8855.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_8855_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 218)).stringValue ()) ;
      if (enumerator_8855.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_8855_IDX.increment () ;
      enumerator_8855.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capSortedListElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid ()) {\n    appendSortedList (inOperand) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popSmallest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_9698_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9698 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9698.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9698.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 243)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_9698_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 243)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9698_IDX.increment () ;
      enumerator_9698.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GGS_uint index_10188_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10188 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10188.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_10188_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 253)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_10188_IDX.increment () ;
      enumerator_10188.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GGS_uint index_10420_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10420 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10420.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_10420_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 259)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_10420.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 259)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_10420_IDX.increment () ;
      enumerator_10420.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popGreatest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_10793_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10793 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10793.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_10793.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 268)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_10793_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 268)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10793_IDX.increment () ;
      enumerator_10793.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GGS_uint index_11283_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11283 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11283.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11283_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 278)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_11283_IDX.increment () ;
      enumerator_11283.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GGS_uint index_11515_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11515 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11515.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11515_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 284)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_11515.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 284)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_11515_IDX.increment () ;
      enumerator_11515.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_smallest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_11885_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11885 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11885.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11885.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 293)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_11885_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 293)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11885_IDX.increment () ;
      enumerator_11885.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GGS_uint index_12378_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12378 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12378.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12378_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 303)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_12378_IDX.increment () ;
      enumerator_12378.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GGS_uint index_12610_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12610 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12610.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12610_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 309)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_12610.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 309)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_12610_IDX.increment () ;
      enumerator_12610.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_greatest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_12957_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12957 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12957.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_12957.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 318)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_12957_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 318)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12957_IDX.increment () ;
      enumerator_12957.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GGS_uint index_13450_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13450 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13450.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13450_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 328)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_13450_IDX.increment () ;
      enumerator_13450.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GGS_uint index_13682_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13682 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13682.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13682_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 334)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_13682.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 334)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_13682_IDX.increment () ;
      enumerator_13682.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject,\n                   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const EnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  const cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (const cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return p->mObject ;\n}\n\n") ;
  GGS_uint index_14704_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14704 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14704.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_14704.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 357)).stringValue ()) ;
      result.appendString (" cEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_14704.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 357)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  const cSortedListElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cSortedListElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cSortedListElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  return p->mObject.mProperty_") ;
      result.appendString (enumerator_14704.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_14704_IDX.increment () ;
      enumerator_14704.gotoNextObject () ;
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
  result_result = GGS_stringset::init (inCompiler COMMA_HERE) ;
  result_result.addAssign_operation (GGS_string ("description")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 106)) ;
  result_result.addAssign_operation (GGS_string ("object")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 107)) ;
  result_result.addAssign_operation (GGS_string ("dynamicType")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 108)) ;
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

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForStruct [1] = {
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
//
//Overriding extension method '@structDeclarationAST enterDeclarationInGraph'
//
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
  GGS_lstring var_key_5034 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 139)), temp_1.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5034, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 140)) ;
  }
  const GGS_structDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5190 (temp_3.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_5190.hasCurrentObject ()) {
    GGS_lstring var_propertyKey_5229 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_5190.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 142)), enumerator_5190.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5034, var_propertyKey_5229 COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 143)) ;
    }
    enumerator_5190.gotoNextObject () ;
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
  result_result = GGS_string ("struct @").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 150)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structDeclarationAST enterDeclarationInSemanticContext'
//
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
  GGS_unifiedTypeMapEntry var_structTypeIndex_6301 ;
  {
  const GGS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), var_structTypeIndex_6301, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 164)) ;
  }
  GGS_propertyMap var_propertyMap_6379 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  GGS_classFunctionMap var_classFunctionMap_6422 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorPropertyTypeList_6471 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedPropertyList_6531 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_6587 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6651 (temp_1.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_6651.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_propertyTypeEntry_6733 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6651.current (HERE).readProperty_typeName (), var_propertyTypeEntry_6733, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 172)) ;
    }
    GGS_string temp_2 ;
    const enumGalgasBool test_3 = enumerator_6651.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = enumerator_6651.current (HERE).readProperty_name ().readProperty_string () ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GGS_string::makeEmptyString () ;
    }
    GGS_lstring var_selector_6762 = temp_2.getter_nowhere (SOURCE_FILE ("declaration-type-struct.galgas", 173)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = enumerator_6651.current (HERE).readProperty_initialization ().getter_isNone (SOURCE_FILE ("declaration-type-struct.galgas", 174)).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_constructorPropertyTypeList_6471.addAssign_operation (var_selector_6762, var_propertyTypeEntry_6733, enumerator_6651.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 175)) ;
      }
    }
    var_typesToIncludeInHeaderCompilation_6587.addAssign_operation (var_propertyTypeEntry_6733  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 177)) ;
    var_typedPropertyList_6531.addAssign_operation (var_propertyTypeEntry_6733, enumerator_6651.current (HERE).readProperty_name (), enumerator_6651.current (HERE).readProperty_initialization (), enumerator_6651.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas", 182)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 182)), enumerator_6651.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 178)) ;
    {
    var_propertyMap_6379.setter_insertKey (enumerator_6651.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_6651.current (HERE).readProperty_accessControl (), var_structTypeIndex_6301, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 186)), enumerator_6651.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas", 187)), var_propertyTypeEntry_6733, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 184)) ;
    }
    enumerator_6651.gotoNextObject () ;
  }
  {
  var_classFunctionMap_6422.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("new"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 192)), inCompiler COMMA_HERE), var_constructorPropertyTypeList_6471, GGS_bool (true), var_structTypeIndex_6301, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 191)) ;
  }
  GGS_getterMap var_getterMap_7725 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7725, inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 198)) ;
  }
  GGS_setterMap var_setterMap_7777 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_7816 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_7863 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_structTypeName (), GGS_bool (false), var_initializerMap_7816, var_getterMap_7725, var_setterMap_7777, var_instanceMethodMap_7863, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 203)) ;
  }
  GGS_typeFeatures var_features_8314 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-struct.galgas", 218)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, var_initializerMap_7816.getter_count (SOURCE_FILE ("declaration-type-struct.galgas", 220)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_features_8314.orAssign_operation(GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 221)) ;
      {
      const GGS_structDeclarationAST temp_7 = this ;
      var_initializerMap_7816.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_6471, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 223)), temp_7.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_6471, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 222)) ;
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
      var_features_8314.orAssign_operation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 231)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_8314.orAssign_operation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas", 233)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas", 233)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 233)) ;
    }
    break ;
  }
  {
  const GGS_structDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_structTypeName (), var_features_8314, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 235)) ;
  }
  GGS_unifiedTypeMapEntry var_enumeratedType_9146 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GGS_structDeclarationAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_enumeratedElementTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      var_enumeratedType_9146 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas", 245)) ;
    }
  }
  if (kBoolFalse == test_10) {
    {
    const GGS_structDeclarationAST temp_12 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_12.readProperty_enumeratedElementTypeName (), var_enumeratedType_9146, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 247)) ;
    }
  }
  const GGS_structDeclarationAST temp_13 = this ;
  const GGS_structDeclarationAST temp_14 = this ;
  const GGS_structDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_9376 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_structTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas", 254)), GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("declaration-type-struct.galgas", 255)), GGS_bool (false), var_typedPropertyList_6531, var_propertyMap_6379, var_typedPropertyList_6531, var_initializerMap_7816, var_classFunctionMap_6422, var_getterMap_7725, var_setterMap_7777, var_instanceMethodMap_7863, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas", 266)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_8314, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GGS_bool (false), var_enumeratedType_9146, GGS_string ("struct-").add_operation (temp_15.readProperty_structTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-struct.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 274)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-struct.galgas", 275)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_9376.readProperty_typeName (), var_typeDefinition_9376, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 277)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structDeclarationAST semanticAnalysis'
//
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
  GGS_lstring var_structNameForUsefulness_11049 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 291)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_11049, var_structNameForUsefulness_11049, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 292)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_structDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isUsefull ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_structNameForUsefulness_11049  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 294)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GGS_structDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mStructurePropertyListAST ().getter_count (SOURCE_FILE ("declaration-type-struct.galgas", 297)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_structDeclarationAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_structTypeName ().readProperty_location (), GGS_string ("a structure cannot be empty: it must have at least one property"), fixItArray6  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 298)) ;
    }
  }
  GGS_typedPropertyList var_typedPropertyList_11508 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_constructorArgumentList_11558 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_propertyMap_11613 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_7 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11655 (temp_7.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_11655.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_11694 = function_typeNameForUsefulEntitiesGraph (enumerator_11655.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 304)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_11049, var_propertyTypeNameForUsefulness_11694 COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 305)) ;
    }
    GGS_unifiedTypeMapEntry var_t_11884 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11655.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 306)) ;
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 307)).getter_hasKey (enumerator_11655.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 307)).boolEnum () ;
      if (kBoolTrue == test_8) {
        GGS_string var_m_12030 = GGS_string ("an property cannot be named:") ;
        cEnumerator_stringset enumerator_12106 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 309)), EnumerationOrder::up) ;
        while (enumerator_12106.hasCurrentObject ()) {
          var_m_12030.plusAssign_operation(GGS_string (" ").add_operation (enumerator_12106.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 310)) ;
          enumerator_12106.gotoNextObject () ;
        }
        var_m_12030.plusAssign_operation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 312)) ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_11655.current (HERE).readProperty_name ().readProperty_location (), var_m_12030, fixItArray9  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 313)) ;
      }
    }
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = enumerator_11655.current (HERE).readProperty_mutability ().getter_isWeakProperty (SOURCE_FILE ("declaration-type-struct.galgas", 315)).boolEnum () ;
      if (kBoolTrue == test_10) {
        switch (extensionGetter_definition (var_t_11884, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 316)).readProperty_unwrappedType ().enumValue ()) {
        case GGS_unifiedTypeMapEntry::Enumeration::invalid:
          break ;
        case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
          {
            TC_Array <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_11655.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the weak property type should be an optional class"), fixItArray11  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 318)) ;
          }
          break ;
        case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
          {
            GGS_unifiedTypeMapElementClass_2E_weak extractedValue_12453_aWeakType_0 ;
            extensionGetter_definition (var_t_11884, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 316)).readProperty_unwrappedType ().getAssociatedValuesFor_element (extractedValue_12453_aWeakType_0) ;
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              const GGS_unifiedTypeMapElementClass var_aType_12483 = extractedValue_12453_aWeakType_0.unwrappedValue () ;
              if (!extractedValue_12453_aWeakType_0.isValuated ()) {
                test_12 = kBoolFalse ;
              }
              if (kBoolTrue == test_12) {
                const GGS_typeKindEnum_2E_classType var_ref_12506 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) var_aType_12483.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 320)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("declaration-type-struct.galgas", 320)).unwrappedValue () ;
                if (!callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) var_aType_12483.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 320)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("declaration-type-struct.galgas", 320)).isValuated ()) {
                  test_12 = kBoolFalse ;
                }
                if (kBoolTrue == test_12) {
                  enumGalgasBool test_13 = kBoolTrue ;
                  if (kBoolTrue == test_13) {
                    test_13 = var_ref_12506.readProperty_isReference ().operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 321)).boolEnum () ;
                    if (kBoolTrue == test_13) {
                      TC_Array <FixItDescription> fixItArray14 ;
                      inCompiler->emitSemanticError (enumerator_11655.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the weak property type should be an optional refclass"), fixItArray14  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 322)) ;
                    }
                  }
                }
              }
            }
            if (kBoolFalse == test_12) {
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_11655.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the weak property type should be an optional class"), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 325)) ;
            }
          }
          break ;
        }
      }
    }
    {
    var_propertyMap_11613.setter_insertKey (enumerator_11655.current (HERE).readProperty_name (), var_t_11884, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 329)) ;
    }
    switch (enumerator_11655.current (HERE).readProperty_initialization ().enumValue ()) {
    case GGS_propertyInCollectionInitializationAST::Enumeration::invalid:
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_none:
      {
        var_constructorArgumentList_11558.addAssign_operation (var_t_11884, enumerator_11655.current (HERE).readProperty_name (), enumerator_11655.current (HERE).readProperty_initialization (), enumerator_11655.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas", 336)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 336)), enumerator_11655.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 332)) ;
      }
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_some:
      break ;
    }
    var_typedPropertyList_11508.addAssign_operation (var_t_11884, enumerator_11655.current (HERE).readProperty_name (), enumerator_11655.current (HERE).readProperty_initialization (), enumerator_11655.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas", 344)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 344)), enumerator_11655.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 340)) ;
    const GGS_structDeclarationAST temp_16 = this ;
    switch (temp_16.readProperty_comparison ().enumValue ()) {
    case GGS_structComparison::Enumeration::invalid:
      break ;
    case GGS_structComparison::Enumeration::enum_none:
      break ;
    case GGS_structComparison::Enumeration::enum_equatable:
      {
        GGS_typeFeatures var_propertyFeatures_13515 = extensionGetter_definition (var_t_11884, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 350)).readProperty_features () ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_propertyFeatures_13515.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas", 351)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 351)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 351)).operator_and (var_propertyFeatures_13515.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas", 352)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 352)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 352)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 351)).operator_and (var_propertyFeatures_13515.getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-struct.galgas", 353)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 353)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 353)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 352)).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_11655.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not equatable, because '").add_operation (enumerator_11655.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 355)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 355)), fixItArray18  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 354)) ;
          }
        }
      }
      break ;
    case GGS_structComparison::Enumeration::enum_comparable:
      {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = extensionGetter_definition (var_t_11884, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 358)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas", 358)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 358)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 358)).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_11655.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not comparable, because '").add_operation (enumerator_11655.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 360)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 360)), fixItArray20  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 359)) ;
          }
        }
      }
      break ;
    }
    enumerator_11655.gotoNextObject () ;
  }
  GGS_stringset var_unusedVariableCppNameSet_14361 ;
  GGS_string var_initializationCode_14397 ;
  const GGS_structDeclarationAST temp_21 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_21.readProperty_mStructurePropertyListAST (), var_structNameForUsefulness_11049, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_14361, var_initializationCode_14397, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 365)) ;
  GGS_bool var_constructorNeedsCompilerVar_14437 = var_unusedVariableCppNameSet_14361.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 375)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 375)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 375)) ;
  const GGS_structDeclarationAST temp_22 = this ;
  GGS_unifiedTypeMapEntry var_structType_14533 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_22.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 376)) ;
  const GGS_structDeclarationAST temp_23 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("struct ").add_operation (temp_23.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 378)), GGS_structTypeForGeneration::init_21__21__21__21__21__21_ (var_structType_14533, var_typedPropertyList_11508, var_constructorArgumentList_11558, var_initializationCode_14397, var_constructorNeedsCompilerVar_14437, extensionGetter_definition (var_structType_14533, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 385)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas", 385)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 385)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 377)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                 GGS_string & outArgument_outHeader,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_15830 (temp_0.readProperty_mTypedPropertyList (), EnumerationOrder::up) ;
  while (enumerator_15830.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_15830.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 408)) ;
    enumerator_15830.gotoNextObject () ;
  }
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_15931 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 410)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (inCompiler, var_selfTypeDefinition_15931.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 413)), temp_3.readProperty_mTypedPropertyList () COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 411))) ;
  const GGS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_15931.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 418)), var_selfTypeDefinition_15931.readProperty_isConcrete (), var_selfTypeDefinition_15931.readProperty_initializerMap (), var_selfTypeDefinition_15931.readProperty_classFunctionMap (), var_selfTypeDefinition_15931.readProperty_getterMap (), var_selfTypeDefinition_15931.readProperty_setterMap (), var_selfTypeDefinition_15931.readProperty_instanceMethodMap (), var_selfTypeDefinition_15931.readProperty_classMethodMap (), var_selfTypeDefinition_15931.readProperty_readSubscriptMap (), var_selfTypeDefinition_15931.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_15931.readProperty_features (), var_selfTypeDefinition_15931.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_15931.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_15931.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 416))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 416)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_string & outArgument_outImplementation,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 442)) ;
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_17264 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 443)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  const GGS_structTypeForGeneration temp_4 = this ;
  const GGS_structTypeForGeneration temp_5 = this ;
  const GGS_structTypeForGeneration temp_6 = this ;
  const GGS_structTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_17264.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 446)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), temp_6.readProperty_mConstructorNeedsCompilerVar (), temp_7.readProperty_synthetizeAnInitializer (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_17264.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 452)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 444))) ;
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

GGS_string filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (Compiler * inCompiler,
                                                                                 const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                 const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const GGS_typedPropertyList & in_PROPERTY_5F_LIST
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).add_operation (GGS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Properties\n") ;
  GGS_uint index_444_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_444 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_444.hasCurrentObject ()) {
      result.appendString ("  public: GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_444.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_444.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" ;\n  public: inline GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_444.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_444.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue ()) ;
      result.appendString (" (void) const {\n    return mProperty_") ;
      result.appendString (enumerator_444.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (" ;\n  }\n\n") ;
      index_444_.increment () ;
      enumerator_444.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Property setters\n") ;
  GGS_uint index_1189_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1189 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1189.hasCurrentObject ()) {
      result.appendString ("  public: inline void setter_set") ;
      result.appendString (enumerator_1189.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 26)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" (const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1189.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" & inValue COMMA_UNUSED_LOCATION_ARGS) {\n    mProperty_") ;
      result.appendString (enumerator_1189.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" = inValue ;\n  }\n\n") ;
      index_1189_.increment () ;
      enumerator_1189.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------- Virtual destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Set initialized properties\n  private: void setInitializedProperties (Compiler * inCompiler) ;\n\n//--------------------------------- Native constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_1897_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1897 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1897.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1897.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 38)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1897.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 38)).stringValue ()) ;
      if (enumerator_1897.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1897_.increment () ;
      enumerator_1897.gotoNextObject () ;
    }
  }
  result.appendString (") ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structureGenerationTemplate structTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (Compiler * inCompiler,
                                                                                             const GGS_string & in_TYPE_5F_NAME,
                                                                                             const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                             const GGS_typedPropertyList & in_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                             const GGS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                             const GGS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR,
                                                                                             const GGS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER,
                                                                                             const GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  GGS_uint index_244_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_244 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_244.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_244.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 6)).stringValue ()) ;
      result.appendString (" ()") ;
      if (enumerator_244.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_244_.increment () ;
      enumerator_244.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n}\n\n") ;
  const enumGalgasBool test_0 = in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("//---Synthetized initializer -----------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GGS_uint index_827_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_827 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_827.hasCurrentObject ()) {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_827.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 22)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_827.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 22)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_827_.increment () ;
        enumerator_827.gotoNextObject () ;
      }
    }
    result.appendString ("Compiler * inCompiler\n          ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  result.setInitializedProperties (inCompiler) ;\n") ;
    GGS_uint index_1146_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1146 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_1146.hasCurrentObject ()) {
        result.appendString ("  result.mProperty_") ;
        result.appendString (enumerator_1146.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 30)).stringValue ()) ;
        result.appendString (" = in_") ;
        result.appendString (enumerator_1146.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 30)).stringValue ()) ;
        result.appendString (" ;\n") ;
        index_1146_.increment () ;
        enumerator_1146.gotoNextObject () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setInitializedProperties (") ;
  const enumGalgasBool test_1 = in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR.boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("Compiler * inCompiler") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("Compiler * /* inCompiler */") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") {\n") ;
  result.appendString (in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue ()) ;
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_1835_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1835 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1835.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1835.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_1835_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 51)).stringValue ()) ;
      if (enumerator_1835.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1835_IDX.increment () ;
      enumerator_1835.gotoNextObject () ;
    }
  }
  result.appendString (") :\n") ;
  GGS_uint index_2041_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2041 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2041.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_2041.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (" (inOperand") ;
      result.appendString (index_2041_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (")") ;
      if (enumerator_2041.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_2041_IDX.increment () ;
      enumerator_2041.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_new (") ;
  columnMarker = result.currentColumn () ;
  const enumGalgasBool test_2 = GGS_bool (ComparisonKind::equal, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 64)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n") ;
    } break ;
  case kBoolFalse : {
    GGS_uint index_2514_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_2514 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_2514.hasCurrentObject ()) {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2514.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 69)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_2514.current_name (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_2514_.increment () ;
        enumerator_2514.gotoNextObject () ;
      }
    }
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.setInitializedProperties (inCompiler) ;\n") ;
  GGS_uint index_2839_ (0) ;
  if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2839 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2839.hasCurrentObject ()) {
      result.appendString ("  result.mProperty_") ;
      result.appendString (enumerator_2839.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 79)).stringValue ()) ;
      result.appendString (" = in_") ;
      result.appendString (enumerator_2839.current_name (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" ;\n") ;
      index_2839_.increment () ;
      enumerator_2839.gotoNextObject () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n") ;
  const enumGalgasBool test_3 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::operandEqual ;\n") ;
    GGS_uint index_3347_ (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3347 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3347.hasCurrentObject ()) {
        result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = mProperty_") ;
        result.appendString (enumerator_3347.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 90)).stringValue ()) ;
        result.appendString (".objectCompare (inOperand.mProperty_") ;
        result.appendString (enumerator_3347.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 90)).stringValue ()) ;
        result.appendString (") ;\n  }\n") ;
        index_3347_.increment () ;
        enumerator_3347.gotoNextObject () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return ") ;
  GGS_uint index_3859_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3859 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3859.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_3859.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 101)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      if (enumerator_3859.hasNextObject ()) {
        result.appendString (" && ") ;
      }
      index_3859_.increment () ;
      enumerator_3859.gotoNextObject () ;
    }
  }
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n") ;
  GGS_uint index_4199_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4199 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4199.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_4199.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 111)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_4199_.increment () ;
      enumerator_4199.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"<struct @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (":\") ;\n  if (! isValid ()) {\n    ioString.appendCString (\" not built\") ;\n  }else{\n") ;
  GGS_uint index_4739_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4739 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4739.hasCurrentObject ()) {
      result.appendString ("    mProperty_") ;
      result.appendString (enumerator_4739.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 125)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation+1) ;\n") ;
      if (enumerator_4739.hasNextObject ()) {
        result.appendString ("    ioString.appendCString (\", \") ;\n") ;
      }
      index_4739_IDX.increment () ;
      enumerator_4739.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_abstractExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  const GGS_abstractExtensionGetterAST temp_1 = this ;
  result_result = GGS_string ("abstract extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 152)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 152)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 152)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  const GGS_abstractExtensionGetterAST temp_1 = this ;
  const GGS_abstractExtensionGetterAST temp_2 = this ;
  GGS_lstring var_key_6802 = GGS_lstring::init_21__21_ (GGS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 167)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 167)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 167)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6802, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 170)) ;
  }
  {
  const GGS_abstractExtensionGetterAST temp_4 = this ;
  const GGS_abstractExtensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6802, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 171)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 171)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GGS_abstractExtensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 173)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 173)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GGS_abstractExtensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 174)) ;
      }
    }
  }
  const GGS_abstractExtensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_7337 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 179)) ;
  if (nullptr != objectArray_7337) {
    macroValidSharedObject (objectArray_7337, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GGS_abstractExtensionGetterAST temp_10 = this ;
    const GGS_abstractExtensionGetterAST temp_11 = this ;
    const GGS_abstractExtensionGetterAST temp_12 = this ;
    objectArray_7337->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionGetterName (), temp_11.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_12.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("extension-abstract-getter.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 180)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GGS_string /* constinArgument_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8954 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 214)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8954, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 216)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-getter.galgas", 216)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 216)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_abstractExtensionGetterAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an extension getter: '@").add_operation (extensionGetter_definition (var_selfType_8954, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 217)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8954, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 219)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_abstractExtensionGetterAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_8954, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 221)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 221)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 221)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 220)) ;
      }
    }
  }
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9588 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_abstractExtensionGetterAST temp_7 = this ;
  cEnumerator_formalInputParameterListAST enumerator_9697 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), EnumerationOrder::up) ;
  while (enumerator_9697.hasCurrentObject ()) {
    var_formalParameterListForGeneration_9588.addAssign_operation (enumerator_9697.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9697.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 228)), enumerator_9697.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_9697.current_mFormalArgumentName (HERE), enumerator_9697.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 226)) ;
    enumerator_9697.gotoNextObject () ;
  }
  const GGS_abstractExtensionGetterAST temp_8 = this ;
  const GGS_abstractExtensionGetterAST temp_9 = this ;
  const GGS_abstractExtensionGetterAST temp_10 = this ;
  const GGS_abstractExtensionGetterAST temp_11 = this ;
  const GGS_abstractExtensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("abstract extension getter ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 235)), GGS_abstractExtensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GGS_bool (true), GGS_string ("getter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 238)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 238)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 238)), var_selfType_8954, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 241)), var_formalParameterListForGeneration_9588, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 234)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionGetterListMap,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  const GGS_abstractExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 263)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_abstractExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 283)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_1 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_2 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 292)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 291))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("getter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 305)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 304)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 305)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 306))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 304)) ;
  const GGS_abstractExtensionGetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 307)) ;
  const GGS_abstractExtensionGetterForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 308)) ;
  const GGS_abstractExtensionGetterForGeneration temp_4 = this ;
  cEnumerator_formalInputParameterListForGeneration enumerator_13909 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_13909.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13909.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 310)) ;
    enumerator_13909.gotoNextObject () ;
  }
  const GGS_abstractExtensionGetterForGeneration temp_5 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_6 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_7 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 313)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_8.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 312))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  const GGS_abstractExtensionMethodAST temp_1 = this ;
  const GGS_abstractExtensionMethodAST temp_2 = this ;
  GGS_lstring var_key_5717 = GGS_lstring::init_21__21_ (GGS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 139)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 139)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 139)), temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5717, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 142)) ;
  }
  {
  const GGS_abstractExtensionMethodAST temp_4 = this ;
  const GGS_abstractExtensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5717, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 143)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 143)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GGS_abstractExtensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 145)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 145)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GGS_abstractExtensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 146)) ;
      }
    }
  }
  const GGS_abstractExtensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_6252 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 151)) ;
  if (nullptr != objectArray_6252) {
    macroValidSharedObject (objectArray_6252, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GGS_abstractExtensionMethodAST temp_10 = this ;
    const GGS_abstractExtensionMethodAST temp_11 = this ;
    objectArray_6252->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionMethodName (), temp_11.readProperty_mAbstractExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("extension-abstract-method.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 152)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_abstractExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  const GGS_abstractExtensionMethodAST temp_1 = this ;
  result_result = GGS_string ("abstract extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 163)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 163)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 163)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GGS_string /* constinArgument_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8284 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 193)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8284, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 195)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-method.galgas", 195)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 195)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_abstractExtensionMethodAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_8284, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 196)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 196)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 196)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 196)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8284, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 197)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_abstractExtensionMethodAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_8284, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 198)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 198)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 198)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 198)) ;
      }
    }
  }
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_8859 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_abstractExtensionMethodAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_9027 (temp_7.readProperty_mAbstractExtensionMethodFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_9027.hasCurrentObject ()) {
    var_formalParameterListForGeneration_8859.addAssign_operation (enumerator_9027.current_mFormalSelector (HERE), enumerator_9027.current_mFormalArgumentPassingMode (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9027.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 206)), enumerator_9027.current_mFormalArgumentName (HERE), enumerator_9027.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 203)) ;
    enumerator_9027.gotoNextObject () ;
  }
  const GGS_abstractExtensionMethodAST temp_8 = this ;
  const GGS_abstractExtensionMethodAST temp_9 = this ;
  const GGS_abstractExtensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("abstract extension method ").add_operation (temp_8.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 212)), GGS_abstractExtensionMethodForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_bool (true), GGS_string ("method-").add_operation (extensionGetter_definition (var_selfType_8284, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 215)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 215)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 215)).add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 215)), var_selfType_8284, temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_8859, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 211)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionMethodListMapAST,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  const GGS_abstractExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionMethodListMapAST, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 240)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_1 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 265)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), temp_2.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 264))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_abstractExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 274)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("method-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 283)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 282)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 283)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 284))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 282)) ;
  const GGS_abstractExtensionMethodForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 285)) ;
  const GGS_abstractExtensionMethodForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_13078 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_13078.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13078.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 287)) ;
    enumerator_13078.gotoNextObject () ;
  }
  const GGS_abstractExtensionMethodForGeneration temp_4 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_5 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, temp_4.readProperty_mReceiverType (), temp_5.readProperty_mAbstractExtensionMethodName (), temp_6.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 289))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                                      GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionSetterAST temp_0 = this ;
  const GGS_abstractExtensionSetterAST temp_1 = this ;
  const GGS_abstractExtensionSetterAST temp_2 = this ;
  GGS_lstring var_key_5237 = GGS_lstring::init_21__21_ (GGS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 119)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 119)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 119)), temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5237, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 120)) ;
  }
  {
  const GGS_abstractExtensionSetterAST temp_4 = this ;
  const GGS_abstractExtensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5237, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GGS_abstractExtensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 123)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GGS_abstractExtensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionSetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 124)) ;
      }
    }
  }
  const GGS_abstractExtensionSetterAST temp_9 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_5754 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 129)) ;
  if (nullptr != objectArray_5754) {
    macroValidSharedObject (objectArray_5754, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GGS_abstractExtensionSetterAST temp_10 = this ;
    const GGS_abstractExtensionSetterAST temp_11 = this ;
    objectArray_5754->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionSetterName (), temp_11.readProperty_mAbstractExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 130)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_abstractExtensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_abstractExtensionSetterAST temp_0 = this ;
  const GGS_abstractExtensionSetterAST temp_1 = this ;
  result_result = GGS_string ("abstract extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 140)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 140)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 140)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GGS_string /* constinArgument_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionSetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7760 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 171)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7760, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 173)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-setter.galgas", 173)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 173)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_abstractExtensionSetterAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GGS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7760, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 174)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 174)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 174)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 174)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7760, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 175)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_abstractExtensionSetterAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7760, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 176)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 176)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 176)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 176)) ;
      }
    }
  }
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_8336 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_abstractExtensionSetterAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_8504 (temp_7.readProperty_mAbstractExtensionSetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_8504.hasCurrentObject ()) {
    var_formalParameterListForGeneration_8336.addAssign_operation (enumerator_8504.current_mFormalSelector (HERE), enumerator_8504.current_mFormalArgumentPassingMode (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8504.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 184)), enumerator_8504.current_mFormalArgumentName (HERE), enumerator_8504.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 181)) ;
    enumerator_8504.gotoNextObject () ;
  }
  const GGS_abstractExtensionSetterAST temp_8 = this ;
  const GGS_abstractExtensionSetterAST temp_9 = this ;
  const GGS_abstractExtensionSetterAST temp_10 = this ;
  const GGS_abstractExtensionSetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string (" abstract extension setter ").add_operation (temp_8.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 190)), GGS_abstractExtensionSetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_bool (true), GGS_string ("setter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 193)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 193)).add_operation (temp_10.readProperty_mAbstractExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 193)), var_selfType_7760, temp_11.readProperty_mAbstractExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_8336, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 189)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionSetterListMap,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_abstractExtensionSetterAST temp_0 = this ;
  const GGS_abstractExtensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 217)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_abstractExtensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 236)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionSetterForGeneration temp_0 = this ;
  const GGS_abstractExtensionSetterForGeneration temp_1 = this ;
  const GGS_abstractExtensionSetterForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 244)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName (), temp_2.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 243))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionSetterForGeneration temp_0 = this ;
  const GGS_abstractExtensionSetterForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("setter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 257)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 257)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 257)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 257))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 257)) ;
  const GGS_abstractExtensionSetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 258)) ;
  const GGS_abstractExtensionSetterForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_12429 (temp_3.readProperty_mAbstractExtensionSetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_12429.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12429.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 260)) ;
    enumerator_12429.gotoNextObject () ;
  }
  const GGS_abstractExtensionSetterForGeneration temp_4 = this ;
  const GGS_abstractExtensionSetterForGeneration temp_5 = this ;
  const GGS_abstractExtensionSetterForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 263)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mAbstractExtensionSetterName (), temp_6.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 262))) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_equatableExtensionMap_2E_element var_node_3222 = ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GGS_location var_location_3280 = ioArgument_ioEquatableExtensionMap.getter_locationForKey (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 84)) ;
      {
      GGS_equatableComparableExtension joker_3397 ; // Joker input parameter
      ioArgument_ioEquatableExtensionMap.setter_removeKey (constinArgument_inTypeName, joker_3397, inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 85)) ;
      }
      GGS_bool var_currentlyEquatable_3409 = ioArgument_ioFeatures.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas", 86)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 86)) ;
      GGS_bool var_currentlyComparable_3472 = ioArgument_ioFeatures.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas", 87)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 87)) ;
      switch (var_node_3222.readProperty_mExtension ().enumValue ()) {
      case GGS_equatableComparableExtension::Enumeration::invalid:
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_equatable:
        {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_currentlyComparable_3472.boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (var_location_3280, GGS_string ("useless extension, the type is already declared comparable"), fixItArray2  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 91)) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_currentlyEquatable_3409.boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (var_location_3280, GGS_string ("useless extension, the type is already declared equatable"), fixItArray4  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 93)) ;
              }
            }
            if (kBoolFalse == test_3) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = constinArgument_inAcceptEquatable.boolEnum () ;
                if (kBoolTrue == test_5) {
                  ioArgument_ioFeatures.orAssign_operation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 95)) ;
                }
              }
              if (kBoolFalse == test_5) {
                TC_Array <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (var_location_3280, GGS_string ("useless extension, the type does not support %equatable"), fixItArray6  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 97)) ;
                TC_Array <FixItDescription> fixItArray7 ;
                inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type declaration is here"), fixItArray7  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 98)) ;
              }
            }
          }
        }
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_comparable:
        {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_currentlyComparable_3472.boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_location_3280, GGS_string ("useless extension, the type is already declared comparable"), fixItArray9  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 102)) ;
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = constinArgument_inAcceptComparable.boolEnum () ;
              if (kBoolTrue == test_10) {
                ioArgument_ioFeatures.orAssign_operation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas", 104)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas", 104)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 104)) ;
              }
            }
            if (kBoolFalse == test_10) {
              TC_Array <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (var_location_3280, GGS_string ("useless extension, the type does not support %comparable"), fixItArray11  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 106)) ;
              TC_Array <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type declaration is here"), fixItArray12  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 107)) ;
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
//Overriding extension getter '@equatableExtensionAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_equatableExtensionAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_equatableExtensionAST temp_0 = this ;
  result_result = function_equatableNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 137)).readProperty_string () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@equatableExtensionAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_equatableExtensionAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                 GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                 GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_equatableExtensionAST temp_0 = this ;
  const GGS_equatableExtensionAST temp_1 = this ;
  GGS_lstring var_key_6188 = GGS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_equatableExtensionAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 150)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_equatableExtensionAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6188, temp_2, inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 151)) ;
  }
  {
  const GGS_equatableExtensionAST temp_3 = this ;
  const GGS_equatableExtensionAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6188, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 152)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 152)) ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GGS_equatableExtensionAST temp_6 = this ;
    const GGS_equatableExtensionMap_2E_element var_node_6428 = ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (temp_6.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (temp_6.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_5 = kBoolFalse ;
    }
    if (kBoolTrue == test_5) {
      const GGS_equatableExtensionAST temp_7 = this ;
      switch (temp_7.readProperty_mExtension ().enumValue ()) {
      case GGS_equatableComparableExtension::Enumeration::invalid:
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_equatable:
        {
          switch (var_node_6428.readProperty_mExtension ().enumValue ()) {
          case GGS_equatableComparableExtension::Enumeration::invalid:
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_equatable:
            {
              const GGS_equatableExtensionAST temp_8 = this ;
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (temp_8.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is already equatable"), fixItArray9  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 159)) ;
              const GGS_equatableExtensionAST temp_10 = this ;
              TC_Array <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_10.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 160)), GGS_string ("equatable extension declaration is here"), fixItArray11  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 160)) ;
            }
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_comparable:
            {
              const GGS_equatableExtensionAST temp_12 = this ;
              TC_Array <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mTypeName ().readProperty_location (), GGS_string ("useless declaration, this type is already comparable"), fixItArray13  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 162)) ;
              const GGS_equatableExtensionAST temp_14 = this ;
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_14.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 163)), GGS_string ("comparable extension declaration is here"), fixItArray15  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 163)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_comparable:
        {
          switch (var_node_6428.readProperty_mExtension ().enumValue ()) {
          case GGS_equatableComparableExtension::Enumeration::invalid:
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_equatable:
            {
              const GGS_equatableExtensionAST temp_16 = this ;
              TC_Array <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_16.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 168)), GGS_string ("useless declaration, this type is already comparable"), fixItArray17  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 168)) ;
              const GGS_equatableExtensionAST temp_18 = this ;
              TC_Array <FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (temp_18.readProperty_mTypeName ().readProperty_location (), GGS_string ("comparable extension declaration is here"), fixItArray19  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 169)) ;
            }
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_comparable:
            {
              const GGS_equatableExtensionAST temp_20 = this ;
              TC_Array <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_20.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is already comparable"), fixItArray21  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 171)) ;
              const GGS_equatableExtensionAST temp_22 = this ;
              TC_Array <FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_22.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 172)), GGS_string ("comparable extension declaration is here"), fixItArray23  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 172)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_5) {
    {
    const GGS_equatableExtensionAST temp_24 = this ;
    const GGS_equatableExtensionAST temp_25 = this ;
    ioArgument_ioEquatableExtensionMap.setter_insertKey (temp_24.readProperty_mTypeName (), temp_25.readProperty_mExtension (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas", 176)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@equatableExtensionAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_equatableExtensionAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                           const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                           const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                           const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                           const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                           GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                           GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@equatableExtensionAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_equatableExtensionAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                          GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                          const GGS_string /* constinArgument_inProductDirectory */,
                                                          const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                          const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GGS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  result_result = GGS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 205)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 205)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 205)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  const GGS_extensionGetterAST temp_2 = this ;
  GGS_lstring var_key_8796 = GGS_lstring::init_21__21_ (GGS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 218)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 218)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 218)), temp_2.readProperty_mExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8796, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 219)) ;
  }
  {
  const GGS_extensionGetterAST temp_4 = this ;
  const GGS_extensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_8796, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 220)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-getter.galgas", 220)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GGS_extensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-getter.galgas", 222)).operator_not (SOURCE_FILE ("extension-getter.galgas", 222)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GGS_extensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 223)) ;
      }
    }
  }
  const GGS_extensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_9294 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 228)) ;
  if (nullptr != objectArray_9294) {
    macroValidSharedObject (objectArray_9294, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GGS_extensionGetterAST temp_10 = this ;
    const GGS_extensionGetterAST temp_11 = this ;
    const GGS_extensionGetterAST temp_12 = this ;
    objectArray_9294->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionGetterName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-getter.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 229)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_11067 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 268)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11067, var_nameForUsefulness_11067, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 269)) ;
  }
  const GGS_extensionGetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_11245 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 270)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_11245, var_nameForUsefulness_11067 COMMA_SOURCE_FILE ("extension-getter.galgas", 271)) ;
  }
  const GGS_extensionGetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_11438 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 273)) ;
  GGS_string var_selfObjectNameNew_11549 ;
  GGS_string var_selfObjectAccessorNew_11581 ;
  GGS_bool var_implementedAsFunctionNew_11615 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_11438, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 278)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 278)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectNameNew_11549 = GGS_string ("this") ;
      var_selfObjectAccessorNew_11581 = GGS_string ("this->") ;
      var_implementedAsFunctionNew_11615 = GGS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameNew_11549 = GGS_string ("inObject") ;
    var_selfObjectAccessorNew_11581 = GGS_string ("inObject.") ;
    var_implementedAsFunctionNew_11615 = GGS_bool (true) ;
  }
  const GGS_extensionGetterAST temp_5 = this ;
  GGS_analysisContext var_analysisContextNew_11960 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_11549, GGS_selfAvailability::class_func_available (var_selfType_11438, GGS_selfMutability::class_func_none (SOURCE_FILE ("extension-getter.galgas", 292))  COMMA_SOURCE_FILE ("extension-getter.galgas", 292)), var_selfObjectAccessorNew_11581, temp_5.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_12936 ;
  GGS_unifiedTypeMapEntry var_returnType_12978 ;
  GGS_string var_returnVariableCppName_12998 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_13029 ;
  {
  const GGS_extensionGetterAST temp_6 = this ;
  GGS_typedPropertyList temp_7 ;
  const enumGalgasBool test_8 = extensionGetter_definition (var_selfType_11438, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 302)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 302)).operator_or (GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_11438, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 302)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-getter.galgas", 302)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 302)).operator_or (GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_11438, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 302)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_sharedMapEntryType (SOURCE_FILE ("extension-getter.galgas", 302)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 302)).boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = extensionGetter_definition (var_selfType_11438, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 303)).readProperty_allTypedPropertyList () ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  }
  const GGS_extensionGetterAST temp_9 = this ;
  const GGS_extensionGetterAST temp_10 = this ;
  const GGS_extensionGetterAST temp_11 = this ;
  const GGS_extensionGetterAST temp_12 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_11067, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_11960, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionGetterFormalInputParameterList (), temp_7, var_selfObjectAccessorNew_11581, temp_9.readProperty_mExtensionGetterInstructionList (), temp_10.readProperty_mExtensionGetterReturnedVariableName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_12936, var_returnType_12978, var_returnVariableCppName_12998, var_semanticInstructionListForGeneration_13029, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 296)) ;
  }
  const GGS_extensionGetterAST temp_13 = this ;
  const GGS_extensionGetterAST temp_14 = this ;
  const GGS_extensionGetterAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("extension getter ").add_operation (temp_13.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 318)), GGS_extensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("getter-").add_operation (extensionGetter_definition (var_selfType_11438, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 321)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 321)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 321)).add_operation (temp_14.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 321)), var_selfType_11438, temp_15.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunctionNew_11615, var_returnType_12978, var_returnVariableCppName_12998, var_formalParameterListForGeneration_12936, extensionGetter_definition (var_selfType_11438, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 328)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_13029, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 317)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & ioArgument_ioExtensionGetterListMap,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 351)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-getter.galgas", 371)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_extensionGetterForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_extensionGetterForGeneration temp_2 = this ;
      const GGS_extensionGetterForGeneration temp_3 = this ;
      const GGS_extensionGetterForGeneration temp_4 = this ;
      const GGS_extensionGetterForGeneration temp_5 = this ;
      outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 380)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionGetterName (), temp_4.readProperty_mExtensionGetterFormalParameterList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 383)) COMMA_SOURCE_FILE ("extension-getter.galgas", 379))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_extensionGetterForGeneration temp_6 = this ;
    const GGS_extensionGetterForGeneration temp_7 = this ;
    const GGS_extensionGetterForGeneration temp_8 = this ;
    const GGS_extensionGetterForGeneration temp_9 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 387)).readProperty_typeName ().readProperty_string (), temp_7.readProperty_mExtensionGetterName (), temp_8.readProperty_mExtensionGetterFormalParameterList (), temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 386))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionGetterForGeneration temp_0 = this ;
  cEnumerator_formalInputParameterListForGeneration enumerator_17265 (temp_0.readProperty_mExtensionGetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_17265.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17265.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 401)) ;
    enumerator_17265.gotoNextObject () ;
  }
  const GGS_extensionGetterForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 403)) ;
  const GGS_extensionGetterForGeneration temp_2 = this ;
  GGS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_17452 = temp_2.readProperty_mExtensionGetterFormalParameterList () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GGS_extensionGetterForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GGS_extensionGetterForGeneration temp_5 = this ;
      var_extensionReaderFormalParameterList_17452.setter_insertAtIndex (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 407)), temp_5.readProperty_mReceiverType (), GGS_string ("inObject"), GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 410)), inCompiler COMMA_HERE), GGS_bool (true), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 406)) ;
      }
      const GGS_extensionGetterForGeneration temp_6 = this ;
      const GGS_extensionGetterForGeneration temp_7 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("getter-").add_operation (extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 415)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 414)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 415)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 416))  COMMA_SOURCE_FILE ("extension-getter.galgas", 414)) ;
      GGS_string var_code_18349 ;
      {
      const GGS_extensionGetterForGeneration temp_8 = this ;
      const GGS_extensionGetterForGeneration temp_9 = this ;
      const GGS_extensionGetterForGeneration temp_10 = this ;
      const GGS_extensionGetterForGeneration temp_11 = this ;
      routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 418)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_17452, temp_9.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GGS_bool (false), GGS_bool (false), var_code_18349, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 417)) ;
      }
      const GGS_extensionGetterForGeneration temp_12 = this ;
      const GGS_extensionGetterForGeneration temp_13 = this ;
      outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 430)).readProperty_typeName ().readProperty_string (), temp_13.readProperty_mExtensionGetterName (), var_code_18349 COMMA_SOURCE_FILE ("extension-getter.galgas", 429))) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GGS_extensionGetterForGeneration temp_14 = this ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 435)) ;
    const GGS_extensionGetterForGeneration temp_15 = this ;
    GGS_unifiedTypeMapEntry var_baseType_18693 = temp_15.readProperty_mReceiverType () ;
    GGS_bool var_searching_18739 = GGS_bool (true) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas", 438)).isValid ()) {
      uint32_t variant_18762 = GGS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas", 438)).uintValue () ;
      bool loop_18762 = true ;
      while (loop_18762) {
        loop_18762 = var_searching_18739.isValid () ;
        if (loop_18762) {
          loop_18762 = var_searching_18739.boolValue () ;
        }
        if (loop_18762 && (0 == variant_18762)) {
          loop_18762 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 438)) ;
        }
        if (loop_18762) {
          variant_18762 -- ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = extensionGetter_definition (var_baseType_18693, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 439)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-getter.galgas", 439)).operator_not (SOURCE_FILE ("extension-getter.galgas", 439)).boolEnum () ;
            if (kBoolTrue == test_16) {
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                const GGS_extensionGetterForGeneration temp_18 = this ;
                test_17 = extensionGetter_definition (extensionGetter_definition (var_baseType_18693, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 440)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 440)).readProperty_getterMap ().getter_hasKey (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas", 440)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  var_baseType_18693 = extensionGetter_definition (var_baseType_18693, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 441)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_17) {
                var_searching_18739 = GGS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_16) {
            var_searching_18739 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionGetterForGeneration temp_19 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_18693, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 450)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 449)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 450)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 451))  COMMA_SOURCE_FILE ("extension-getter.galgas", 449)) ;
    GGS_string var_extensionGetterCode_19735 ;
    {
    const GGS_extensionGetterForGeneration temp_20 = this ;
    const GGS_extensionGetterForGeneration temp_21 = this ;
    const GGS_extensionGetterForGeneration temp_22 = this ;
    const GGS_extensionGetterForGeneration temp_23 = this ;
    const GGS_extensionGetterForGeneration temp_24 = this ;
    routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 453)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 453)).add_operation (GGS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 453)).add_operation (temp_21.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 453)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_17452, temp_22.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_23.readProperty_mResultType (), temp_24.readProperty_mResultVarCppName (), var_extensionGetterCode_19735, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 452)) ;
    }
    const GGS_extensionGetterForGeneration temp_25 = this ;
    const GGS_extensionGetterForGeneration temp_26 = this ;
    const GGS_extensionGetterForGeneration temp_27 = this ;
    const GGS_extensionGetterForGeneration temp_28 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, extensionGetter_definition (temp_25.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 463)).readProperty_typeName ().readProperty_string (), temp_26.readProperty_mExtensionGetterName (), temp_27.readProperty_mExtensionGetterFormalParameterList (), var_extensionGetterCode_19735, temp_28.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 462))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  result_result = GGS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 155)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 155)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 155)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  const GGS_extensionMethodAST temp_2 = this ;
  GGS_lstring var_key_6960 = GGS_lstring::init_21__21_ (GGS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 169)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 169)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 169)), temp_2.readProperty_mExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6960, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 172)) ;
  }
  {
  const GGS_extensionMethodAST temp_4 = this ;
  const GGS_extensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6960, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 173)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-method.galgas", 173)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GGS_extensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-method.galgas", 175)).operator_not (SOURCE_FILE ("extension-method.galgas", 175)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GGS_extensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 176)) ;
      }
    }
  }
  const GGS_extensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_7477 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 181)) ;
  if (nullptr != objectArray_7477) {
    macroValidSharedObject (objectArray_7477, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GGS_extensionMethodAST temp_10 = this ;
    const GGS_extensionMethodAST temp_11 = this ;
    objectArray_7477->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mExtensionMethodName (), temp_11.readProperty_mExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-method.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 182)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_9111 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 213)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9111, var_nameForUsefulness_9111, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 214)) ;
  }
  const GGS_extensionMethodAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_9293 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 215)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9293, var_nameForUsefulness_9111 COMMA_SOURCE_FILE ("extension-method.galgas", 216)) ;
  }
  const GGS_extensionMethodAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_9493 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 218)) ;
  GGS_string var_selfObjectNameString_9569 ;
  GGS_string var_selfObjectPropertyAccessorString_9606 ;
  GGS_bool var_implementedAsFunction_9653 ;
  GGS_bool var_isReferenceClass_9717 = GGS_bool (false) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GGS_typeKindEnum_2E_classType var_selfClassType_9753 = extensionGetter_definition (var_selfType_9493, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 224)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-method.galgas", 224)).unwrappedValue () ;
    if (!extensionGetter_definition (var_selfType_9493, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 224)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-method.galgas", 224)).isValuated ()) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      var_isReferenceClass_9717 = var_selfClassType_9753.readProperty_isReference () ;
      var_selfObjectNameString_9569 = GGS_string ("this") ;
      var_selfObjectPropertyAccessorString_9606 = GGS_string ("this->") ;
      var_implementedAsFunction_9653 = GGS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameString_9569 = GGS_string ("inObject") ;
    var_selfObjectPropertyAccessorString_9606 = GGS_string ("inObject.") ;
    var_implementedAsFunction_9653 = GGS_bool (true) ;
  }
  GGS_selfMutability temp_5 ;
  const enumGalgasBool test_6 = var_isReferenceClass_9717.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-method.galgas", 239)) ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GGS_selfMutability::class_func_none (SOURCE_FILE ("extension-method.galgas", 239)) ;
  }
  const GGS_extensionMethodAST temp_7 = this ;
  GGS_analysisContext var_analysisContextNew_10178 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_9569, GGS_selfAvailability::class_func_available (var_selfType_9493, temp_5  COMMA_SOURCE_FILE ("extension-method.galgas", 239)), var_selfObjectPropertyAccessorString_9606, temp_7.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GGS_bool var_isRefClass_10631 = GGS_bool (false) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GGS_typeKindEnum_2E_classType var_classType_10661 = extensionGetter_definition (var_selfType_9493, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 244)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-method.galgas", 244)).unwrappedValue () ;
    if (!extensionGetter_definition (var_selfType_9493, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 244)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-method.galgas", 244)).isValuated ()) {
      test_8 = kBoolFalse ;
    }
    if (kBoolTrue == test_8) {
      var_isRefClass_10631 = var_classType_10661.readProperty_isReference () ;
    }
  }
  GGS_typedPropertyList var_mutableProperties_10781 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_nonMutableProperties_10831 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_9493, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 249)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-method.galgas", 249)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_nonMutableProperties_10831 = extensionGetter_definition (var_selfType_9493, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 250)).readProperty_allTypedPropertyList () ;
    }
  }
  if (kBoolFalse == test_9) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GGS_typeKindEnum_2E_classType var_classType_11020 = extensionGetter_definition (var_selfType_9493, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 251)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-method.galgas", 251)).unwrappedValue () ;
      if (!extensionGetter_definition (var_selfType_9493, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 251)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-method.galgas", 251)).isValuated ()) {
        test_10 = kBoolFalse ;
      }
      if (kBoolTrue == test_10) {
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = var_classType_11020.readProperty_isReference ().boolEnum () ;
          if (kBoolTrue == test_11) {
            var_mutableProperties_10781 = extensionGetter_definition (var_selfType_9493, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 253)).readProperty_allTypedPropertyList () ;
          }
        }
        if (kBoolFalse == test_11) {
          var_nonMutableProperties_10831 = extensionGetter_definition (var_selfType_9493, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)).readProperty_allTypedPropertyList () ;
        }
      }
    }
  }
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11651 ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_11699 ;
  {
  const GGS_extensionMethodAST temp_12 = this ;
  const GGS_extensionMethodAST temp_13 = this ;
  const GGS_extensionMethodAST temp_14 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_9111, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_10178, ioArgument_ioTypeMap, temp_12.readProperty_mExtensionMethodFormalParameterList (), var_nonMutableProperties_10831, var_mutableProperties_10781, temp_13.readProperty_mExtensionMethodInstructionList (), temp_14.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_11651, var_formalParameterListForGeneration_11699, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 258)) ;
  }
  const GGS_extensionMethodAST temp_15 = this ;
  const GGS_extensionMethodAST temp_16 = this ;
  const GGS_extensionMethodAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("extension method ").add_operation (temp_15.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 273)), GGS_extensionMethodForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("method-").add_operation (extensionGetter_definition (var_selfType_9493, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 276)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 276)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 276)).add_operation (temp_16.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 276)), var_selfType_9493, temp_17.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_9653, var_formalParameterListForGeneration_11699, extensionGetter_definition (var_selfType_9493, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 281)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_11651, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 272)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                             GGS_genericExtensionMethodListMap & ioArgument_ioExtensionMethodListMap,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 309)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-method.galgas", 328)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_extensionMethodForGeneration temp_2 = this ;
      const GGS_extensionMethodForGeneration temp_3 = this ;
      const GGS_extensionMethodForGeneration temp_4 = this ;
      outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 338)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionMethodName (), temp_4.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 337))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_extensionMethodForGeneration temp_5 = this ;
    const GGS_extensionMethodForGeneration temp_6 = this ;
    const GGS_extensionMethodForGeneration temp_7 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 344)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionMethodName (), temp_7.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 343))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_extensionMethodForGeneration temp_2 = this ;
      GGS_formalParameterListForGeneration var_extensionMethodFormalParameterList_15896 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GGS_extensionMethodForGeneration temp_3 = this ;
      var_extensionMethodFormalParameterList_15896.setter_insertAtIndex (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 361)), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 362)), temp_3.readProperty_mReceiverType (), GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 364)), inCompiler COMMA_HERE), GGS_string ("inObject"), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 360)) ;
      }
      const GGS_extensionMethodForGeneration temp_4 = this ;
      const GGS_extensionMethodForGeneration temp_5 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("method-").add_operation (extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 368)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 368)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 368)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 368))  COMMA_SOURCE_FILE ("extension-method.galgas", 368)) ;
      GGS_string var_code_16845 ;
      {
      const GGS_extensionMethodForGeneration temp_6 = this ;
      const GGS_extensionMethodForGeneration temp_7 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), GGS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 371)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_15896, temp_7.readProperty_mSemanticInstructionListForGeneration (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_16845, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 369)) ;
      }
      const GGS_extensionMethodForGeneration temp_8 = this ;
      const GGS_extensionMethodForGeneration temp_9 = this ;
      outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 383)).readProperty_typeName ().readProperty_string (), temp_9.readProperty_mExtensionMethodName (), var_code_16845 COMMA_SOURCE_FILE ("extension-method.galgas", 382))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_extensionMethodForGeneration temp_10 = this ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 388)) ;
    const GGS_extensionMethodForGeneration temp_11 = this ;
    cEnumerator_formalParameterListForGeneration enumerator_17177 (temp_11.readProperty_mExtensionMethodFormalParameterList (), EnumerationOrder::up) ;
    while (enumerator_17177.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_17177.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 390)) ;
      enumerator_17177.gotoNextObject () ;
    }
    const GGS_extensionMethodForGeneration temp_12 = this ;
    GGS_unifiedTypeMapEntry var_baseType_17327 = temp_12.readProperty_mReceiverType () ;
    GGS_bool var_searching_17371 = GGS_bool (true) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas", 394)).isValid ()) {
      uint32_t variant_17392 = GGS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas", 394)).uintValue () ;
      bool loop_17392 = true ;
      while (loop_17392) {
        loop_17392 = var_searching_17371.isValid () ;
        if (loop_17392) {
          loop_17392 = var_searching_17371.boolValue () ;
        }
        if (loop_17392 && (0 == variant_17392)) {
          loop_17392 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 394)) ;
        }
        if (loop_17392) {
          variant_17392 -- ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = extensionGetter_definition (var_baseType_17327, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 395)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-method.galgas", 395)).operator_not (SOURCE_FILE ("extension-method.galgas", 395)).boolEnum () ;
            if (kBoolTrue == test_13) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                const GGS_extensionMethodForGeneration temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_17327, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 396)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 396)).readProperty_instanceMethodMap ().getter_hasKey (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas", 396)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  var_baseType_17327 = extensionGetter_definition (var_baseType_17327, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 397)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_14) {
                var_searching_17371 = GGS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_13) {
            var_searching_17371 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionMethodForGeneration temp_16 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("method-").add_operation (extensionGetter_definition (var_baseType_17327, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 406)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 406)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 406)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 407))  COMMA_SOURCE_FILE ("extension-method.galgas", 405)) ;
    GGS_string var_methodImplementation_18164 ;
    {
    const GGS_extensionMethodForGeneration temp_17 = this ;
    const GGS_extensionMethodForGeneration temp_18 = this ;
    const GGS_extensionMethodForGeneration temp_19 = this ;
    const GGS_extensionMethodForGeneration temp_20 = this ;
    routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_17.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_18164, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 408)) ;
    }
    const GGS_extensionMethodForGeneration temp_21 = this ;
    const GGS_extensionMethodForGeneration temp_22 = this ;
    const GGS_extensionMethodForGeneration temp_23 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, extensionGetter_definition (temp_21.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 417)).readProperty_typeName ().readProperty_string (), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_18164 COMMA_SOURCE_FILE ("extension-method.galgas", 416))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  result_result = GGS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 163)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 163)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 163)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                              GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  const GGS_extensionSetterAST temp_2 = this ;
  GGS_lstring var_key_7459 = GGS_lstring::init_21__21_ (GGS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 179)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 179)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 179)), temp_2.readProperty_mExtensionSetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7459, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 182)) ;
  }
  {
  const GGS_extensionSetterAST temp_4 = this ;
  const GGS_extensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7459, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 183)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-setter.galgas", 183)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GGS_extensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-setter.galgas", 185)).operator_not (SOURCE_FILE ("extension-setter.galgas", 185)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GGS_extensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionSetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 186)) ;
      }
    }
  }
  const GGS_extensionSetterAST temp_9 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_7952 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-setter.galgas", 191)) ;
  if (nullptr != objectArray_7952) {
    macroValidSharedObject (objectArray_7952, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GGS_extensionSetterAST temp_10 = this ;
    const GGS_extensionSetterAST temp_11 = this ;
    objectArray_7952->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionSetterName (), temp_11.readProperty_mExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 192)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_9662 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 227)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9662, var_nameForUsefulness_9662, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 228)) ;
  }
  const GGS_extensionSetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_9840 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 229)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9840, var_nameForUsefulness_9662 COMMA_SOURCE_FILE ("extension-setter.galgas", 230)) ;
  }
  const GGS_extensionSetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_10033 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 232)) ;
  GGS_string var_selfObjectName_10106 ;
  GGS_string var_selfObjectAccessor_10135 ;
  GGS_bool var_implementedAsFunction_10166 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10033, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 237)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-setter.galgas", 237)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectName_10106 = GGS_string ("object") ;
      var_selfObjectAccessor_10135 = GGS_string ("object->") ;
      var_implementedAsFunction_10166 = GGS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_10106 = GGS_string ("ioObject") ;
    var_selfObjectAccessor_10135 = GGS_string ("ioObject.") ;
    var_implementedAsFunction_10166 = GGS_bool (true) ;
  }
  const GGS_extensionSetterAST temp_5 = this ;
  GGS_analysisContext var_analysisContext_10526 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_10106, GGS_selfAvailability::class_func_available (var_selfType_10033, GGS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-setter.galgas", 251))  COMMA_SOURCE_FILE ("extension-setter.galgas", 251)), var_selfObjectAccessor_10135, temp_5.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11243 ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_11289 ;
  {
  const GGS_extensionSetterAST temp_6 = this ;
  const GGS_extensionSetterAST temp_7 = this ;
  const GGS_extensionSetterAST temp_8 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_9662, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10526, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionSetterFormalParameterList (), GGS_typedPropertyList::init (inCompiler COMMA_HERE), extensionGetter_definition (var_selfType_10033, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 262)).readProperty_allTypedPropertyList (), temp_7.readProperty_mExtensionSetterInstructionList (), temp_8.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_11243, var_formalParameterListForGeneration_11289, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 255)) ;
  }
  const GGS_extensionSetterAST temp_9 = this ;
  const GGS_extensionSetterAST temp_10 = this ;
  const GGS_extensionSetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("extension setter ").add_operation (temp_9.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 270)), GGS_extensionSetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("setter-").add_operation (extensionGetter_definition (var_selfType_10033, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 273)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 273)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 273)).add_operation (temp_10.readProperty_mExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 273)), var_selfType_10033, temp_11.readProperty_mExtensionSetterName ().readProperty_string (), var_implementedAsFunction_10166, var_formalParameterListForGeneration_11289, extensionGetter_definition (var_selfType_10033, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 278)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_11243, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 269)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & ioArgument_ioExtensionSetterListMap,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 303)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-setter.galgas", 325)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_extensionSetterForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_extensionSetterForGeneration temp_2 = this ;
      const GGS_extensionSetterForGeneration temp_3 = this ;
      const GGS_extensionSetterForGeneration temp_4 = this ;
      outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 335)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionSetterName (), temp_4.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 334))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_extensionSetterForGeneration temp_5 = this ;
    const GGS_extensionSetterForGeneration temp_6 = this ;
    const GGS_extensionSetterForGeneration temp_7 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 341)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionSetterName (), temp_7.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 340))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterForGeneration temp_0 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_15323 (temp_0.readProperty_mExtensionSetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_15323.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15323.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 356)) ;
    enumerator_15323.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_extensionSetterForGeneration temp_2 = this ;
    test_1 = temp_2.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_extensionSetterForGeneration temp_3 = this ;
      GGS_formalParameterListForGeneration var_extensionSetterFormalParameterList_15486 = temp_3.readProperty_mExtensionSetterFormalParameterList () ;
      {
      const GGS_extensionSetterForGeneration temp_4 = this ;
      var_extensionSetterFormalParameterList_15486.setter_insertAtIndex (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas", 361)), GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.galgas", 362)), temp_4.readProperty_mReceiverType (), GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 364)), inCompiler COMMA_HERE), GGS_string ("ioObject"), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 360)) ;
      }
      const GGS_extensionSetterForGeneration temp_5 = this ;
      const GGS_extensionSetterForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 368)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 368)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 368)).add_operation (temp_6.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 368))  COMMA_SOURCE_FILE ("extension-setter.galgas", 368)) ;
      GGS_string var_code_16431 ;
      {
      const GGS_extensionSetterForGeneration temp_7 = this ;
      const GGS_extensionSetterForGeneration temp_8 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), GGS_string ("extensionSetter_").add_operation (temp_7.readProperty_mExtensionSetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 371)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_15486, temp_8.readProperty_mSemanticInstructionListForGeneration (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_16431, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 369)) ;
      }
      const GGS_extensionSetterForGeneration temp_9 = this ;
      const GGS_extensionSetterForGeneration temp_10 = this ;
      outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_9.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 383)).readProperty_typeName ().readProperty_string (), temp_10.readProperty_mExtensionSetterName (), var_code_16431 COMMA_SOURCE_FILE ("extension-setter.galgas", 382))) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GGS_extensionSetterForGeneration temp_11 = this ;
    GGS_unifiedTypeMapEntry var_baseType_16697 = temp_11.readProperty_mReceiverType () ;
    GGS_bool var_searching_16741 = GGS_bool (true) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("extension-setter.galgas", 390)).isValid ()) {
      uint32_t variant_16762 = GGS_uint::class_func_max (SOURCE_FILE ("extension-setter.galgas", 390)).uintValue () ;
      bool loop_16762 = true ;
      while (loop_16762) {
        loop_16762 = var_searching_16741.isValid () ;
        if (loop_16762) {
          loop_16762 = var_searching_16741.boolValue () ;
        }
        if (loop_16762 && (0 == variant_16762)) {
          loop_16762 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas", 390)) ;
        }
        if (loop_16762) {
          variant_16762 -- ;
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = extensionGetter_definition (var_baseType_16697, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 391)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-setter.galgas", 391)).operator_not (SOURCE_FILE ("extension-setter.galgas", 391)).boolEnum () ;
            if (kBoolTrue == test_12) {
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                const GGS_extensionSetterForGeneration temp_14 = this ;
                test_13 = extensionGetter_definition (extensionGetter_definition (var_baseType_16697, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 392)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 392)).readProperty_setterMap ().getter_hasKey (temp_14.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-setter.galgas", 392)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_baseType_16697 = extensionGetter_definition (var_baseType_16697, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 393)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_13) {
                var_searching_16741 = GGS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_12) {
            var_searching_16741 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionSetterForGeneration temp_15 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("setter-").add_operation (extensionGetter_definition (var_baseType_16697, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 401)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 401)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 401)).add_operation (temp_15.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 401))  COMMA_SOURCE_FILE ("extension-setter.galgas", 401)) ;
    extensionMethod_addHeaderFileName (var_baseType_16697, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 402)) ;
    GGS_string var_setterImplementation_17601 ;
    {
    const GGS_extensionSetterForGeneration temp_16 = this ;
    const GGS_extensionSetterForGeneration temp_17 = this ;
    const GGS_extensionSetterForGeneration temp_18 = this ;
    const GGS_extensionSetterForGeneration temp_19 = this ;
    routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 404)).readProperty_typeName ().readProperty_string (), GGS_string::makeEmptyString (), temp_17.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionSetterFormalParameterList (), temp_19.readProperty_mSemanticInstructionListForGeneration (), var_setterImplementation_17601, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 403)) ;
    }
    const GGS_extensionSetterForGeneration temp_20 = this ;
    const GGS_extensionSetterForGeneration temp_21 = this ;
    const GGS_extensionSetterForGeneration temp_22 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (inCompiler, extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 413)).readProperty_typeName ().readProperty_string (), temp_21.readProperty_mExtensionSetterName (), temp_22.readProperty_mExtensionSetterFormalParameterList (), var_setterImplementation_17601 COMMA_SOURCE_FILE ("extension-setter.galgas", 412))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@initializerAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_initializerAST::getter_keyRepresentation (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_initializerAST temp_0 = this ;
  const GGS_initializerAST temp_1 = this ;
  result_result = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 139)).readProperty_string () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                          GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                          GGS_extensionInitializerForBuildingContext & ioArgument_ioExtensionInitializerForBuildingContext,
                                                          GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                          GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                          GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                          GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerAST temp_0 = this ;
  const GGS_initializerAST temp_1 = this ;
  GGS_lstring var_key_6120 = GGS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_initializerAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 155)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_initializerAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6120, temp_2, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 156)) ;
  }
  {
  const GGS_initializerAST temp_3 = this ;
  const GGS_initializerAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6120, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 157)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-initializer.galgas", 157)) ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GGS_initializerAST temp_6 = this ;
    test_5 = ioArgument_ioExtensionInitializerForBuildingContext.getter_hasKey (temp_6.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-initializer.galgas", 159)).operator_not (SOURCE_FILE ("extension-initializer.galgas", 159)).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      const GGS_initializerAST temp_7 = this ;
      ioArgument_ioExtensionInitializerForBuildingContext.setter_insertKey (temp_7.readProperty_mTypeName (), GGS_extensionInitializerMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 160)) ;
      }
    }
  }
  const GGS_initializerAST temp_8 = this ;
  cMapElement_extensionInitializerForBuildingContext * objectArray_6554 = (cMapElement_extensionInitializerForBuildingContext *) ioArgument_ioExtensionInitializerForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_8.readProperty_mTypeName (), kSearchErrorMessage_extensionInitializerForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-initializer.galgas", 165)) ;
  if (nullptr != objectArray_6554) {
    macroValidSharedObject (objectArray_6554, cMapElement_extensionInitializerForBuildingContext) ;
    {
    const GGS_initializerAST temp_9 = this ;
    const GGS_initializerAST temp_10 = this ;
    const GGS_initializerAST temp_11 = this ;
    objectArray_6554->mProperty_mExtensionInitializerMapForType.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (temp_9.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 167)), temp_10.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE), temp_11.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 166)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                    const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                    const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                    const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                    const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                    GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                    GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                   const GGS_string /* constinArgument_inProductDirectory */,
                                                   const GGS_semanticContext constinArgument_inSemanticContext,
                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                   const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                   GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerAST temp_0 = this ;
  const GGS_initializerAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_8139 = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 196)) ;
  const GGS_initializerAST temp_2 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8329 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 201)) ;
  GGS_string var_selfObjectNameString_8404 ;
  GGS_string var_selfObjectAccessorString_8441 ;
  GGS_bool var_isReferenceClass_8508 = GGS_bool (false) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GGS_typeKindEnum_2E_classType var_classType_8544 = extensionGetter_definition (var_selfType_8329, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 206)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-initializer.galgas", 206)).unwrappedValue () ;
    if (!extensionGetter_definition (var_selfType_8329, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 206)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-initializer.galgas", 206)).isValuated ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      var_isReferenceClass_8508 = var_classType_8544.readProperty_isReference () ;
      var_selfObjectNameString_8404 = GGS_string ("<< this >>") ;
      var_selfObjectAccessorString_8441 = GGS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_3) {
    var_selfObjectNameString_8404 = GGS_string ("result") ;
    var_selfObjectAccessorString_8441 = GGS_string ("result.") ;
  }
  GGS_analysisContext var_analysisContextNew_8870 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_8404, GGS_selfAvailability::class_func_available (var_selfType_8329, GGS_selfMutability::class_func_initializer (SOURCE_FILE ("extension-initializer.galgas", 219))  COMMA_SOURCE_FILE ("extension-initializer.galgas", 219)), var_selfObjectAccessorString_8441, GGS_bool (true), inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9455 ;
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9503 ;
  {
  const GGS_initializerAST temp_4 = this ;
  const GGS_initializerAST temp_5 = this ;
  const GGS_initializerAST temp_6 = this ;
  routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_8139, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_8870, ioArgument_ioTypeMap, temp_4.readProperty_mFormalParameterList (), temp_5.readProperty_mInstructionList (), temp_6.readProperty_mEndOfInitializerLocation (), var_semanticInstructionListForGeneration_9455, var_formalParameterListForGeneration_9503, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 223)) ;
  }
  const GGS_initializerAST temp_7 = this ;
  GGS_string var_initializerName_9557 = extensionGetter_initializerSignature (temp_7.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 235)) ;
  const GGS_initializerAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("initializer @").add_operation (temp_8.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 237)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 237)).add_operation (var_initializerName_9557, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 237)), GGS_extensionInitializerForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_bool (false), GGS_string ("initializer-").add_operation (extensionGetter_definition (var_selfType_8329, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 240)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-initializer.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 240)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 240)).add_operation (var_initializerName_9557.getter_fileNameRepresentation (SOURCE_FILE ("extension-initializer.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 240)), var_selfType_8329, var_initializerName_9557, var_formalParameterListForGeneration_9503, extensionGetter_definition (var_selfType_8329, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 244)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9455, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas", 236)) ;
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
                                                                         const GGS_semanticInstructionListAST constinArgument_inInstructionList,
                                                                         const GGS_location constinArgument_inEndOfMethodLocation,
                                                                         GGS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                                                         GGS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_11096 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_11199 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("extension-initializer.galgas", 266)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("extension-initializer.galgas", 266)).isValuated ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_11322 (extensionGetter_definition (var_selfAvailable_11199.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 267)).readProperty_allTypedPropertyList (), EnumerationOrder::up) ;
      while (enumerator_11322.hasCurrentObject ()) {
        GGS_bool temp_1 ;
        const enumGalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_selfAvailable_11199.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("extension-initializer.galgas", 268)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = GGS_bool (ComparisonKind::notEqual, enumerator_11322.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("extension-initializer.galgas", 269)))) ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GGS_bool (true) ;
        }
        GGS_bool var_initialized_11356 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_11096, enumerator_11322.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_11322.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_11322.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 277)), var_initialized_11356, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 272)) ;
        }
        enumerator_11322.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  cEnumerator_formalInputParameterListAST enumerator_11865 (constinArgument_inFormalArgumentListAST, EnumerationOrder::up) ;
  while (enumerator_11865.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_11900 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11865.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 285)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = enumerator_11865.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string var_cppName_12035 = GGS_string ("constinArgument_").add_operation (enumerator_11865.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 287)) ;
        outArgument_outSignatureForGeneration.addAssign_operation (enumerator_11865.current (HERE).readProperty_mFormalSelector (), var_parameterType_11900, var_cppName_12035, enumerator_11865.current (HERE).readProperty_mFormalArgumentName (), enumerator_11865.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 288)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = enumerator_11865.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_11096, enumerator_11865.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_11900, var_cppName_12035, var_cppName_12035, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 295)) ;
            }
          }
        }
        if (kBoolFalse == test_4) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_11096, enumerator_11865.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_11900, var_cppName_12035, var_cppName_12035, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 297)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_3) {
      GGS_string var_cppName_12652 = GGS_string ("inArgument_").add_operation (enumerator_11865.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 300)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_11865.current (HERE).readProperty_mFormalSelector (), var_parameterType_11900, var_cppName_12652, enumerator_11865.current (HERE).readProperty_mFormalArgumentName (), enumerator_11865.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 301)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = enumerator_11865.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_11096, enumerator_11865.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_11900, var_cppName_12652, var_cppName_12652, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 308)) ;
          }
        }
      }
      if (kBoolFalse == test_5) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_11096, enumerator_11865.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_11900, var_cppName_12652, var_cppName_12652, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 310)) ;
        }
      }
    }
    enumerator_11865.gotoNextObject () ;
  }
  outArgument_outSemanticInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  cEnumerator_semanticInstructionListAST enumerator_13358 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_13358.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_13358.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_11096, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 317)) ;
    enumerator_13358.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_11096, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 327)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionInitializerForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionInitializerForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-initializer.galgas", 365)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionInitializerForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionInitializerForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_string & outArgument_outImplementation,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionInitializerForGeneration temp_0 = this ;
  cEnumerator_formalInputParameterListForGeneration enumerator_16137 (temp_0.readProperty_formalParameterList (), EnumerationOrder::up) ;
  while (enumerator_16137.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16137.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 374)) ;
    enumerator_16137.gotoNextObject () ;
  }
  GGS_string var_methodImplementation_16444 ;
  {
  const GGS_extensionInitializerForGeneration temp_1 = this ;
  const GGS_extensionInitializerForGeneration temp_2 = this ;
  const GGS_extensionInitializerForGeneration temp_3 = this ;
  const GGS_extensionInitializerForGeneration temp_4 = this ;
  routine_generateInitializer_3F__3F__26__3F__3F__21_ (temp_1.readProperty_mReceiverType (), temp_2.readProperty_initializerName (), ioArgument_ioInclusionSet, temp_3.readProperty_formalParameterList (), temp_4.readProperty_semanticInstructionListForGeneration (), var_methodImplementation_16444, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 376)) ;
  }
  const GGS_extensionInitializerForGeneration temp_5 = this ;
  const GGS_extensionInitializerForGeneration temp_6 = this ;
  const GGS_extensionInitializerForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 385)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_initializerName (), temp_7.readProperty_formalParameterList (), var_methodImplementation_16444 COMMA_SOURCE_FILE ("extension-initializer.galgas", 384))) ;
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
  GGS_string var_className_17473 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 406)).readProperty_typeName ().readProperty_string () ;
  GGS_stringset var_unusedVariableCppNameSet_17577 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_17577.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 409))  COMMA_SOURCE_FILE ("extension-initializer.galgas", 409)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_17676 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_17676.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_17577.addAssign_operation (enumerator_17676.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 411)) ;
    enumerator_17676.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_17803 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_17844 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_17844.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 416)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_17904 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_17904.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_17904.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_17803, var_unusedVariableCppNameSet_17577, GGS_bool (false), var_routineBody_17844, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 418)) ;
    enumerator_17904.gotoNextObject () ;
  }
  {
  var_routineBody_17844.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 426)) ;
  }
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 428)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_18290 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_18290.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18290.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 430)) ;
    enumerator_18290.gotoNextObject () ;
  }
  GGS_bool var_isStruct_18418 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 433)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-initializer.galgas", 433)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_isStruct_18418.boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode = GGS_string ("GGS_").add_operation (var_className_17473.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 436)).add_operation (GGS_string (" GGS_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 436)).add_operation (var_className_17473.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 437)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 437)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 438)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 438)) ;
      GGS_uint var_colRef_18735 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("extension-initializer.galgas", 439)) ;
      cEnumerator_formalInputParameterListForGeneration enumerator_18805 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
      while (enumerator_18805.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = enumerator_18805.current (HERE).readProperty_mIsConstant ().boolEnum () ;
          if (kBoolTrue == test_1) {
            outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_18805.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 443)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 443)) ;
          }
        }
        if (kBoolFalse == test_1) {
          outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_18805.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 445)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 445)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 445)) ;
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_unusedVariableCppNameSet_17577.getter_hasKey (enumerator_18805.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("extension-initializer.galgas", 447)).boolEnum () ;
          if (kBoolTrue == test_2) {
            outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("/* ").add_operation (enumerator_18805.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 448)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 448)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 448)) ;
          }
        }
        if (kBoolFalse == test_2) {
          outArgument_outGeneratedCode.plusAssign_operation(enumerator_18805.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 450)) ;
        }
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 452)) ;
        {
        outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_18735, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 453)) ;
        }
        enumerator_18805.gotoNextObject () ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("Compiler * ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_18735, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 457)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 458)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 459)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  GGS_").add_operation (var_className_17473.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 460)).add_operation (GGS_string (" result ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 460)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 460)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  result.setInitializedProperties (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 461)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 461)) ;
      outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_17844, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 462)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 463)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 464)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGeneratedCode = GGS_string ("GGS_").add_operation (var_className_17473.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 466)).add_operation (GGS_string (" GGS_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 466)).add_operation (var_className_17473.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 467)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 467)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 468)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 468)) ;
    GGS_uint var_colRef_20184 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("extension-initializer.galgas", 469)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_20254 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
    while (enumerator_20254.hasCurrentObject ()) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = enumerator_20254.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20254.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 473)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 473)) ;
        }
      }
      if (kBoolFalse == test_3) {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20254.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 475)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 475)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_20254.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 477)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 478)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_20184, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 479)) ;
      }
      enumerator_20254.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("Compiler * ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 482)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 482)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_20184, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 483)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("COMMA_LOCATION_ARGS) {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 484)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  cPtr_").add_operation (var_className_17473.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 485)).add_operation (GGS_string (" * object = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 485)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  macroMyNew (object, cPtr_").add_operation (var_className_17473.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 486)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 487)).add_operation (GGS_string (" COMMA_THERE)) ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 487)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  object->").add_operation (var_className_17473.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 488)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 488)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 489)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 488)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_21335 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
    while (enumerator_21335.hasCurrentObject ()) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_21335.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 491)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 492)) ;
      enumerator_21335.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 494)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 494)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  const GGS_").add_operation (var_className_17473.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 495)).add_operation (GGS_string (" result (object) ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 495)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  macroDetachSharedObject (object) ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 496)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 497)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 498)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("void cPtr_").add_operation (var_className_17473.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 499)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 499)).add_operation (var_className_17473.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 500)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 500)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 501)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 499)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_21975 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
    while (enumerator_21975.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = enumerator_21975.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (kBoolTrue == test_4) {
          outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("const "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 504)) ;
        }
      }
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_21975.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 506)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 506)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 506)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_unusedVariableCppNameSet_17577.getter_hasKey (enumerator_21975.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("extension-initializer.galgas", 507)).boolEnum () ;
        if (kBoolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("/* ").add_operation (enumerator_21975.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 508)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 508)) ;
        }
      }
      if (kBoolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssign_operation(enumerator_21975.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 510)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 512)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_20184, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 513)) ;
      }
      enumerator_21975.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 516)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_unusedVariableCppNameSet_17577.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 517)) COMMA_SOURCE_FILE ("extension-initializer.galgas", 517)).boolEnum () ;
      if (kBoolTrue == test_6) {
        outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 518)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 518)) ;
      }
    }
    if (kBoolFalse == test_6) {
      outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 520)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 522)) ;
    outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_17844, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 523)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 524)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingAbstractExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  result_result = GGS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 161)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 161)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 161)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                                GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 176)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_overridingAbstractExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 178)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 178)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GGS_overridingAbstractExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 179)) ;
      }
    }
  }
  const GGS_overridingAbstractExtensionGetterAST temp_4 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_7449 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 184)) ;
  if (nullptr != objectArray_7449) {
    macroValidSharedObject (objectArray_7449, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GGS_overridingAbstractExtensionGetterAST temp_5 = this ;
    const GGS_overridingAbstractExtensionGetterAST temp_6 = this ;
    const GGS_overridingAbstractExtensionGetterAST temp_7 = this ;
    objectArray_7449->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mAbstractExtensionGetterName (), temp_6.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 185)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                          const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                          const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                          const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GGS_string /* constinArgument_inProductDirectory */,
                                                                         const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GGS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_9565 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 226)) ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_returnType_9647 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 228)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_selfType_9565, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_overridingAbstractExtensionGetterAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9565, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)), fixItArray4  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = extensionGetter_definition (var_selfType_9565, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 232)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_5) {
        const GGS_overridingAbstractExtensionGetterAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9565, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 233)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 233)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 233)), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 233)) ;
      }
    }
  }
  GGS_string var_baseTypeName_10238 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_10283 = extensionGetter_definition (var_selfType_9565, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 237)).readProperty_superType () ;
  GGS_functionSignature var_inheritedSignature_10352 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_inheritedReturnType_10403 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 239)) ;
  GGS_location var_inheritedDeclarationLocation_10447 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 240)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 241)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 241)).isValid ()) {
    uint32_t variant_10495 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 241)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 241)).uintValue () ;
    bool loop_10495 = true ;
    while (loop_10495) {
      loop_10495 = var_superType_10283.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 242)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 242)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_10238.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 242)).isValid () ;
      if (loop_10495) {
        loop_10495 = var_superType_10283.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 242)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 242)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_10238.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 242)).boolValue () ;
      }
      if (loop_10495 && (0 == variant_10495)) {
        loop_10495 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 241)) ;
      }
      if (loop_10495) {
        variant_10495 -- ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          const GGS_overridingAbstractExtensionGetterAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_superType_10283, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 243)).readProperty_getterMap ().getter_hasKey (temp_9.readProperty_mAbstractExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 243)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GGS_methodQualifier var_qualifier_10902 ;
            const GGS_overridingAbstractExtensionGetterAST temp_10 = this ;
            GGS_methodKind joker_10780 ; // Joker input parameter
            GGS_bool joker_10857 ; // Joker input parameter
            GGS_string joker_10920 ; // Joker input parameter
            extensionGetter_definition (var_superType_10283, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 244)).readProperty_getterMap ().method_searchKey (temp_10.readProperty_mAbstractExtensionGetterName (), joker_10780, var_inheritedSignature_10352, var_inheritedDeclarationLocation_10447, joker_10857, var_inheritedReturnType_10403, var_qualifier_10902, joker_10920, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 244)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_10902.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 254)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_baseTypeName_10238 = extensionGetter_definition (var_superType_10283, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 255)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_10283 = extensionGetter_definition (var_superType_10283, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 258)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, var_baseTypeName_10238.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GGS_overridingAbstractExtensionGetterAST temp_13 = this ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("this getter is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 261)) ;
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_10238.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_11308 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_overridingAbstractExtensionGetterAST temp_16 = this ;
      cEnumerator_formalInputParameterListAST enumerator_11456 (temp_16.readProperty_mAbstractExtensionGetterFormalInputParameterList (), EnumerationOrder::up) ;
      while (enumerator_11456.hasCurrentObject ()) {
        var_formalParameterListForGeneration_11308.addAssign_operation (enumerator_11456.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11456.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 269)), enumerator_11456.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_11456.current_mFormalArgumentName (HERE), enumerator_11456.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 267)) ;
        enumerator_11456.gotoNextObject () ;
      }
      {
      const GGS_overridingAbstractExtensionGetterAST temp_17 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_11308, var_returnType_9647, temp_17.readProperty_mAbstractExtensionGetterName ().readProperty_location (), var_inheritedSignature_10352, var_inheritedReturnType_10403, var_inheritedDeclarationLocation_10447, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 274)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionGetterListMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 305)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingAbstractExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_1 = this ;
  result_result = GGS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 138)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 138)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 138)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                                GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                                GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 154)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_overridingAbstractExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 156)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 156)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GGS_overridingAbstractExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 157)) ;
      }
    }
  }
  const GGS_overridingAbstractExtensionMethodAST temp_4 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_6679 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 162)) ;
  if (nullptr != objectArray_6679) {
    macroValidSharedObject (objectArray_6679, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GGS_overridingAbstractExtensionMethodAST temp_5 = this ;
    const GGS_overridingAbstractExtensionMethodAST temp_6 = this ;
    objectArray_6679->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 163)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                          const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                          const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                          const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GGS_string /* constinArgument_inProductDirectory */,
                                                                         const GGS_semanticContext constinArgument_inSemanticContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GGS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8878 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 204)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8878, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 206)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 206)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 206)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_overridingAbstractExtensionMethodAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_8878, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 207)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 207)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 207)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 207)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8878, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 208)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_overridingAbstractExtensionMethodAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_8878, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 209)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 209)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 209)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 209)) ;
      }
    }
  }
  GGS_string var_baseTypeName_9440 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_9485 = extensionGetter_definition (var_selfType_8878, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 213)).readProperty_superType () ;
  GGS_formalParameterSignature var_inheritedSignature_9535 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_9601 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 215)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 216)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 216)).isValid ()) {
    uint32_t variant_9649 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 216)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 216)).uintValue () ;
    bool loop_9649 = true ;
    while (loop_9649) {
      loop_9649 = var_superType_9485.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 217)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 217)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_9440.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 217)).isValid () ;
      if (loop_9649) {
        loop_9649 = var_superType_9485.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 217)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 217)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_9440.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 217)).boolValue () ;
      }
      if (loop_9649 && (0 == variant_9649)) {
        loop_9649 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 216)) ;
      }
      if (loop_9649) {
        variant_9649 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GGS_overridingAbstractExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_9485, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 218)).readProperty_instanceMethodMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 218)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GGS_methodQualifier var_qualifier_10047 ;
            const GGS_overridingAbstractExtensionMethodAST temp_9 = this ;
            GGS_methodKind joker_9954 ; // Joker input parameter
            GGS_bool joker_10031 ; // Joker input parameter
            GGS_string joker_10065 ; // Joker input parameter
            extensionGetter_definition (var_superType_9485, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 219)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_9954, var_inheritedSignature_9535, var_inheritedDeclarationLocation_9601, joker_10031, var_qualifier_10047, joker_10065, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 219)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_10047.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 228)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_9440 = extensionGetter_definition (var_superType_9485, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 229)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_9485 = extensionGetter_definition (var_superType_9485, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 232)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_9440.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GGS_overridingAbstractExtensionMethodAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 235)) ;
    }
  }
  GGS_localVarManager var_variableMap_10437 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_10631 ;
  {
  const GGS_overridingAbstractExtensionMethodAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), var_variableMap_10437, var_formalParameterListForGeneration_10631, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 239)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_9440.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GGS_overridingAbstractExtensionMethodAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_10631, temp_16.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_9535, var_inheritedDeclarationLocation_9601, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 248)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionMethodListMap,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 278)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingAbstractExtensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingAbstractExtensionSetterAST temp_0 = this ;
  const GGS_overridingAbstractExtensionSetterAST temp_1 = this ;
  result_result = GGS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                                GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionSetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 143)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                          const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                          const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                          const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GGS_string /* constinArgument_inProductDirectory */,
                                                                         const GGS_semanticContext constinArgument_inSemanticContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GGS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionSetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7552 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 174)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7552, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 176)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 176)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 176)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_overridingAbstractExtensionSetterAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GGS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7552, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 177)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 177)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 177)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 177)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7552, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 178)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_overridingAbstractExtensionSetterAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7552, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 179)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 179)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 179)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 179)) ;
      }
    }
  }
  GGS_string var_baseTypeName_8130 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_8177 = extensionGetter_definition (var_selfType_7552, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 183)).readProperty_superType () ;
  GGS_formalParameterSignature var_inheritedSignature_8229 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_8287 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 185)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 186)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 186)).isValid ()) {
    uint32_t variant_8337 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 186)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 186)).uintValue () ;
    bool loop_8337 = true ;
    while (loop_8337) {
      loop_8337 = var_superType_8177.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 187)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 187)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_8130.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 187)).isValid () ;
      if (loop_8337) {
        loop_8337 = var_superType_8177.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 187)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 187)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_8130.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 187)).boolValue () ;
      }
      if (loop_8337 && (0 == variant_8337)) {
        loop_8337 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 186)) ;
      }
      if (loop_8337) {
        variant_8337 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GGS_overridingAbstractExtensionSetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_8177, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 188)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 188)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GGS_methodQualifier var_qualifier_8647 ;
            const GGS_overridingAbstractExtensionSetterAST temp_9 = this ;
            GGS_methodKind joker_8616 ; // Joker input parameter
            GGS_bool joker_8639 ; // Joker input parameter
            GGS_string joker_8657 ; // Joker input parameter
            extensionGetter_definition (var_superType_8177, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 189)).readProperty_setterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_8616, var_inheritedSignature_8229, joker_8639, var_qualifier_8647, joker_8657, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 189)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8647.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 190)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_8130 = extensionGetter_definition (var_superType_8177, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 191)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_8177 = extensionGetter_definition (var_superType_8177, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 194)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_8130.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GGS_overridingAbstractExtensionSetterAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GGS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 197)) ;
    }
  }
  GGS_localVarManager var_variableMap_9043 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_9249 ;
  {
  const GGS_overridingAbstractExtensionSetterAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionSetterFormalParameterList (), var_variableMap_9043, var_formalParameterListForGeneration_9249, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 201)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_8130.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GGS_overridingAbstractExtensionSetterAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_9249, temp_16.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_8229, var_inheritedDeclarationLocation_8287, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 210)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionSetterListMap,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingAbstractExtensionSetterAST temp_0 = this ;
  const GGS_overridingAbstractExtensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 237)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 225)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_overridingExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 227)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 227)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GGS_overridingExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 228)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_4 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_9050 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 233)) ;
  if (nullptr != objectArray_9050) {
    macroValidSharedObject (objectArray_9050, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GGS_overridingExtensionGetterAST temp_5 = this ;
    const GGS_overridingExtensionGetterAST temp_6 = this ;
    const GGS_overridingExtensionGetterAST temp_7 = this ;
    objectArray_9050->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionGetterName (), temp_6.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_7.readProperty_mOverridingExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-getter.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 234)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  result_result = GGS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 248)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 248)).add_operation (temp_1.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 248)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_11325 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 279)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11325, var_nameForUsefulness_11325, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 280)) ;
  }
  const GGS_overridingExtensionGetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_11513 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 281)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_11513, var_nameForUsefulness_11325 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 282)) ;
  }
  const GGS_overridingExtensionGetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_11706 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 284)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_11706, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 286)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 286)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 286)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_overridingExtensionGetterAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_11706, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 287)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 287)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 287)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 287)) ;
    }
  }
  GGS_string var_baseTypeName_12049 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_12094 = extensionGetter_definition (var_selfType_11706, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 291)).readProperty_superType () ;
  GGS_functionSignature var_inheritedSignature_12163 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_inheritedReturnType_12193 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-getter.galgas", 293)) ;
  GGS_location var_inheritedDeclarationLocation_12257 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 294)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 295)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 295)).isValid ()) {
    uint32_t variant_12305 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 295)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 295)).uintValue () ;
    bool loop_12305 = true ;
    while (loop_12305) {
      loop_12305 = var_superType_12094.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 296)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 296)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_12049.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 296)).isValid () ;
      if (loop_12305) {
        loop_12305 = var_superType_12094.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 296)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 296)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_12049.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 296)).boolValue () ;
      }
      if (loop_12305 && (0 == variant_12305)) {
        loop_12305 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas", 295)) ;
      }
      if (loop_12305) {
        variant_12305 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GGS_overridingExtensionGetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_12094, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 297)).readProperty_getterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 297)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GGS_methodQualifier var_qualifier_12733 ;
            const GGS_overridingExtensionGetterAST temp_9 = this ;
            GGS_methodKind joker_12594 ; // Joker input parameter
            GGS_bool joker_12671 ; // Joker input parameter
            GGS_string joker_12751 ; // Joker input parameter
            extensionGetter_definition (var_superType_12094, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 298)).readProperty_getterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionGetterName (), joker_12594, var_inheritedSignature_12163, var_inheritedDeclarationLocation_12257, joker_12671, var_inheritedReturnType_12193, var_qualifier_12733, joker_12751, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 298)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_12733.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas", 308)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_12049 = extensionGetter_definition (var_superType_12094, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 309)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_12094 = extensionGetter_definition (var_superType_12094, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 312)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_12049.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GGS_overridingExtensionGetterAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 315)) ;
    }
  }
  const GGS_overridingExtensionGetterAST temp_14 = this ;
  GGS_analysisContext var_analysisContext_13119 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("this"), GGS_selfAvailability::class_func_available (var_selfType_11706, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-getter.galgas", 322))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 322)), GGS_string ("object."), temp_14.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_14080 ;
  GGS_unifiedTypeMapEntry var_returnType_14143 ;
  GGS_string var_returnVariableCppName_14171 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_14240 ;
  {
  const GGS_overridingExtensionGetterAST temp_15 = this ;
  GGS_typedPropertyList temp_16 ;
  const enumGalgasBool test_17 = extensionGetter_definition (var_selfType_11706, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 332)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 332)).operator_or (GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_11706, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 332)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-overriding-getter.galgas", 332)))) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 332)).boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = extensionGetter_definition (var_selfType_11706, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 333)).readProperty_allTypedPropertyList () ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  }
  const GGS_overridingExtensionGetterAST temp_18 = this ;
  const GGS_overridingExtensionGetterAST temp_19 = this ;
  const GGS_overridingExtensionGetterAST temp_20 = this ;
  const GGS_overridingExtensionGetterAST temp_21 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_11325, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_13119, ioArgument_ioTypeMap, temp_15.readProperty_mOverridingExtensionGetterFormalInputParameterList (), temp_16, GGS_string ("this->"), temp_18.readProperty_mOverridingExtensionGetterInstructionList (), temp_19.readProperty_mOverridingExtensionGetterReturnedVariableName (), temp_20.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_21.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_14080, var_returnType_14143, var_returnVariableCppName_14171, var_semanticInstructionListForGeneration_14240, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 326)) ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_12049.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      const GGS_overridingExtensionGetterAST temp_23 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_14080, var_returnType_14143, temp_23.readProperty_mOverridingExtensionGetterName ().readProperty_location (), var_inheritedSignature_12163, var_inheritedReturnType_12193, var_inheritedDeclarationLocation_12257, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 348)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_24 = this ;
  const GGS_overridingExtensionGetterAST temp_25 = this ;
  const GGS_overridingExtensionGetterAST temp_26 = this ;
  const GGS_overridingExtensionGetterAST temp_27 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("override extension getter ").add_operation (temp_24.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 359)), GGS_overrideExtensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_bool (false), GGS_string ("getter-").add_operation (temp_25.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 362)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 362)).add_operation (temp_26.readProperty_mOverridingExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 362)), var_selfType_11706, var_baseTypeName_12049, temp_27.readProperty_mOverridingExtensionGetterName ().readProperty_string (), var_returnType_14143, var_returnVariableCppName_14171, var_formalParameterListForGeneration_14080, extensionGetter_definition (var_selfType_11706, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 369)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_14240, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 358)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionGetterListMap,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 394)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overrideExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_overrideExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas", 418)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overrideExtensionGetterForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overrideExtensionGetterForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("class-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 427)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 427))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 427)) ;
  GGS_string var_extensionGetterCode_18698 ;
  {
  const GGS_overrideExtensionGetterForGeneration temp_1 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_2 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_3 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_4 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_5 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_6 = this ;
  routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_1.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 429)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 429)).add_operation (GGS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 429)).add_operation (temp_2.readProperty_mOverridingExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 429)), ioArgument_ioInclusionSet, temp_3.readProperty_mOverridingExtensionGetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_5.readProperty_mResultType (), temp_6.readProperty_mResultVarCppName (), var_extensionGetterCode_18698, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 428)) ;
  }
  const GGS_overrideExtensionGetterForGeneration temp_7 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_8 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_9 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 439)).readProperty_typeName ().readProperty_string (), temp_8.readProperty_mOverridingExtensionGetterName (), var_extensionGetterCode_18698, temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 438))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  const GGS_overridingExtensionMethodAST temp_1 = this ;
  result_result = GGS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 165)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 165)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 165)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 181)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_overridingExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 183)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 183)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GGS_overridingExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 184)) ;
      }
    }
  }
  const GGS_overridingExtensionMethodAST temp_4 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_7879 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 189)) ;
  if (nullptr != objectArray_7879) {
    macroValidSharedObject (objectArray_7879, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GGS_overridingExtensionMethodAST temp_5 = this ;
    const GGS_overridingExtensionMethodAST temp_6 = this ;
    objectArray_7879->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-method.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 190)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  const GGS_overridingExtensionMethodAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_9658 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 225)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9658, var_nameForUsefulness_9658, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 226)) ;
  }
  const GGS_overridingExtensionMethodAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_9846 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 227)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9846, var_nameForUsefulness_9658 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 228)) ;
  }
  const GGS_overridingExtensionMethodAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_10039 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 230)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 232)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-method.galgas", 232)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 232)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_overridingExtensionMethodAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_10039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 233)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 233)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 233)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 233)) ;
    }
  }
  GGS_string var_baseTypeName_10382 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_10427 = extensionGetter_definition (var_selfType_10039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 237)).readProperty_superType () ;
  GGS_formalParameterSignature var_inheritedSignature_10477 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_10543 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 239)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 240)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 240)).isValid ()) {
    uint32_t variant_10591 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 240)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 240)).uintValue () ;
    bool loop_10591 = true ;
    while (loop_10591) {
      loop_10591 = var_superType_10427.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 241)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 241)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_10382.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 241)).isValid () ;
      if (loop_10591) {
        loop_10591 = var_superType_10427.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 241)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 241)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_10382.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 241)).boolValue () ;
      }
      if (loop_10591 && (0 == variant_10591)) {
        loop_10591 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas", 240)) ;
      }
      if (loop_10591) {
        variant_10591 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GGS_overridingExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_10427, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 242)).readProperty_instanceMethodMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 242)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GGS_methodQualifier var_qualifier_10989 ;
            const GGS_overridingExtensionMethodAST temp_9 = this ;
            GGS_methodKind joker_10896 ; // Joker input parameter
            GGS_bool joker_10973 ; // Joker input parameter
            GGS_string joker_11007 ; // Joker input parameter
            extensionGetter_definition (var_superType_10427, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 243)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_10896, var_inheritedSignature_10477, var_inheritedDeclarationLocation_10543, joker_10973, var_qualifier_10989, joker_11007, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 243)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_10989.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas", 252)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_10382 = extensionGetter_definition (var_superType_10427, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 253)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_10427 = extensionGetter_definition (var_superType_10427, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 256)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_10382.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GGS_overridingExtensionMethodAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("this method is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 259)) ;
    }
  }
  const GGS_overridingExtensionMethodAST temp_14 = this ;
  GGS_analysisContext var_analysisContext_11374 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("this"), GGS_selfAvailability::class_func_available (var_selfType_10039, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-method.galgas", 266))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 266)), GGS_string ("this->"), temp_14.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GGS_bool var_isRefClass_11730 = GGS_bool (false) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    const GGS_typeKindEnum_2E_classType var_classType_11758 = extensionGetter_definition (var_selfType_10039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 271)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-overriding-method.galgas", 271)).unwrappedValue () ;
    if (!extensionGetter_definition (var_selfType_10039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 271)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-overriding-method.galgas", 271)).isValuated ()) {
      test_15 = kBoolFalse ;
    }
    if (kBoolTrue == test_15) {
      var_isRefClass_11730 = var_classType_11758.readProperty_isReference () ;
    }
  }
  GGS_typedPropertyList var_mutableProperties_11872 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_nonMutableProperties_11920 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_10039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 276)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-overriding-method.galgas", 276)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      var_nonMutableProperties_11920 = extensionGetter_definition (var_selfType_10039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 277)).readProperty_allTypedPropertyList () ;
    }
  }
  if (kBoolFalse == test_16) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      const GGS_typeKindEnum_2E_classType var_classType_12103 = extensionGetter_definition (var_selfType_10039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 278)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-overriding-method.galgas", 278)).unwrappedValue () ;
      if (!extensionGetter_definition (var_selfType_10039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 278)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("extension-overriding-method.galgas", 278)).isValuated ()) {
        test_17 = kBoolFalse ;
      }
      if (kBoolTrue == test_17) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = var_classType_12103.readProperty_isReference ().boolEnum () ;
          if (kBoolTrue == test_18) {
            var_mutableProperties_11872 = extensionGetter_definition (var_selfType_10039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 280)).readProperty_allTypedPropertyList () ;
          }
        }
        if (kBoolFalse == test_18) {
          var_nonMutableProperties_11920 = extensionGetter_definition (var_selfType_10039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 282)).readProperty_allTypedPropertyList () ;
        }
      }
    }
  }
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_12717 ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_12763 ;
  {
  const GGS_overridingExtensionMethodAST temp_19 = this ;
  const GGS_overridingExtensionMethodAST temp_20 = this ;
  const GGS_overridingExtensionMethodAST temp_21 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_9658, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_11374, ioArgument_ioTypeMap, temp_19.readProperty_mOverridingExtensionMethodFormalParameterList (), var_nonMutableProperties_11920, var_mutableProperties_11872, temp_20.readProperty_mOverridingExtensionMethodInstructionList (), temp_21.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_12717, var_formalParameterListForGeneration_12763, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 285)) ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_10382.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      const GGS_overridingExtensionMethodAST temp_23 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_12763, temp_23.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_10477, var_inheritedDeclarationLocation_10543, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 300)) ;
      }
    }
  }
  const GGS_overridingExtensionMethodAST temp_24 = this ;
  const GGS_overridingExtensionMethodAST temp_25 = this ;
  const GGS_overridingExtensionMethodAST temp_26 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("override extension method ").add_operation (temp_24.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 309)), GGS_overridingExtensionMethodForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_bool (false), GGS_string ("method-").add_operation (extensionGetter_definition (var_selfType_10039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 312)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 312)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 312)).add_operation (temp_25.readProperty_mOverridingExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 312)), var_selfType_10039, var_baseTypeName_10382, temp_26.readProperty_mOverridingExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_12763, extensionGetter_definition (var_selfType_10039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 317)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_12717, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 308)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionMethodListMap,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  const GGS_overridingExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 342)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_overridingExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-method.galgas", 364)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                                       GGS_string & outArgument_outImplementation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_methodImplementation_16746 ;
  {
  const GGS_overridingExtensionMethodForGeneration temp_0 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_1 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_2 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_3 = this ;
  routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_0.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_1.readProperty_mExtensionMethodName (), temp_2.readProperty_mExtensionMethodFormalParameterList (), temp_3.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_16746, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 373)) ;
  }
  const GGS_overridingExtensionMethodForGeneration temp_4 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 382)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mExtensionMethodName (), var_methodImplementation_16746 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 381))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionSetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 113)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingExtensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingExtensionSetterAST temp_0 = this ;
  const GGS_overridingExtensionSetterAST temp_1 = this ;
  result_result = GGS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 121)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 121)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 121)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionSetterAST temp_0 = this ;
  const GGS_overridingExtensionSetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_7033 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 152)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7033, var_nameForUsefulness_7033, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 153)) ;
  }
  const GGS_overridingExtensionSetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7221 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 154)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7221, var_nameForUsefulness_7033 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 155)) ;
  }
  const GGS_overridingExtensionSetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7414 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 157)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_7414, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 159)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-setter.galgas", 159)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 159)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_overridingExtensionSetterAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GGS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7414, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 160)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 160)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 160)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 160)) ;
    }
  }
  GGS_string var_baseTypeName_7757 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_7802 = extensionGetter_definition (var_selfType_7414, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 164)).readProperty_superType () ;
  GGS_formalParameterSignature var_inheritedSignature_7852 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_7918 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 166)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 167)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 167)).isValid ()) {
    uint32_t variant_7966 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 167)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 167)).uintValue () ;
    bool loop_7966 = true ;
    while (loop_7966) {
      loop_7966 = var_superType_7802.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 168)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 168)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7757.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 168)).isValid () ;
      if (loop_7966) {
        loop_7966 = var_superType_7802.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 168)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 168)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7757.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 168)).boolValue () ;
      }
      if (loop_7966 && (0 == variant_7966)) {
        loop_7966 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 167)) ;
      }
      if (loop_7966) {
        variant_7966 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GGS_overridingExtensionSetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_7802, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 169)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 169)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GGS_methodQualifier var_qualifier_8270 ;
            const GGS_overridingExtensionSetterAST temp_9 = this ;
            GGS_methodKind joker_8239 ; // Joker input parameter
            GGS_bool joker_8262 ; // Joker input parameter
            GGS_string joker_8280 ; // Joker input parameter
            extensionGetter_definition (var_superType_7802, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 170)).readProperty_setterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_8239, var_inheritedSignature_7852, joker_8262, var_qualifier_8270, joker_8280, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 170)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8270.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-setter.galgas", 171)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_7757 = extensionGetter_definition (var_superType_7802, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 172)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_7802 = extensionGetter_definition (var_superType_7802, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 175)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_7757.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GGS_overridingExtensionSetterAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GGS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 178)) ;
    }
  }
  const GGS_overridingExtensionSetterAST temp_14 = this ;
  GGS_analysisContext var_analysisContext_8640 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("object"), GGS_selfAvailability::class_func_available (var_selfType_7414, GGS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-overriding-setter.galgas", 185))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 185)), GGS_string ("object->"), temp_14.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9382 ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_9428 ;
  {
  const GGS_overridingExtensionSetterAST temp_15 = this ;
  const GGS_overridingExtensionSetterAST temp_16 = this ;
  const GGS_overridingExtensionSetterAST temp_17 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_7033, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8640, ioArgument_ioTypeMap, temp_15.readProperty_mOverridingExtensionSetterFormalParameterList (), GGS_typedPropertyList::init (inCompiler COMMA_HERE), extensionGetter_definition (var_selfType_7414, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 196)).readProperty_allTypedPropertyList (), temp_16.readProperty_mOverridingExtensionSetterInstructionList (), temp_17.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_9382, var_formalParameterListForGeneration_9428, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 189)) ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_7757.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      {
      const GGS_overridingExtensionSetterAST temp_19 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_9428, temp_19.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_7852, var_inheritedDeclarationLocation_7918, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 204)) ;
      }
    }
  }
  const GGS_overridingExtensionSetterAST temp_20 = this ;
  const GGS_overridingExtensionSetterAST temp_21 = this ;
  const GGS_overridingExtensionSetterAST temp_22 = this ;
  const GGS_overridingExtensionSetterAST temp_23 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string (" overriding extension setter ").add_operation (temp_20.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 213)), GGS_overridingExtensionSetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_bool (false), GGS_string ("setter-").add_operation (temp_21.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 216)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 216)).add_operation (temp_22.readProperty_mOverridingExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 216)), var_selfType_7414, var_baseTypeName_7757, temp_23.readProperty_mOverridingExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_9428, extensionGetter_definition (var_selfType_7414, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 221)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9382, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 212)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionSetterListMap,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingExtensionSetterAST temp_0 = this ;
  const GGS_overridingExtensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 247)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_overridingExtensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-setter.galgas", 269)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                                       GGS_string & outArgument_outImplementation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_methodImplementation_13267 ;
  {
  const GGS_overridingExtensionSetterForGeneration temp_0 = this ;
  const GGS_overridingExtensionSetterForGeneration temp_1 = this ;
  const GGS_overridingExtensionSetterForGeneration temp_2 = this ;
  const GGS_overridingExtensionSetterForGeneration temp_3 = this ;
  const GGS_overridingExtensionSetterForGeneration temp_4 = this ;
  routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 279)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mBaseTypeName (), temp_2.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_3.readProperty_mExtensionSetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_13267, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 278)) ;
  }
  const GGS_overridingExtensionSetterForGeneration temp_5 = this ;
  GGS_unifiedTypeMapEntry var_baseType_13319 = temp_5.readProperty_mReceiverType () ;
  GGS_bool var_searching_13361 = GGS_bool (true) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("extension-overriding-setter.galgas", 289)).isValid ()) {
    uint32_t variant_13380 = GGS_uint::class_func_max (SOURCE_FILE ("extension-overriding-setter.galgas", 289)).uintValue () ;
    bool loop_13380 = true ;
    while (loop_13380) {
      loop_13380 = var_searching_13361.isValid () ;
      if (loop_13380) {
        loop_13380 = var_searching_13361.boolValue () ;
      }
      if (loop_13380 && (0 == variant_13380)) {
        loop_13380 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 289)) ;
      }
      if (loop_13380) {
        variant_13380 -- ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = extensionGetter_definition (var_baseType_13319, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 290)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 290)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 290)).boolEnum () ;
          if (kBoolTrue == test_6) {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              const GGS_overridingExtensionSetterForGeneration temp_8 = this ;
              test_7 = extensionGetter_definition (extensionGetter_definition (var_baseType_13319, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 291)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 291)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 291)).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_baseType_13319 = extensionGetter_definition (var_baseType_13319, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 292)).readProperty_superType () ;
              }
            }
            if (kBoolFalse == test_7) {
              var_searching_13361 = GGS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_6) {
          var_searching_13361 = GGS_bool (false) ;
        }
      }
    }
  }
  const GGS_overridingExtensionSetterForGeneration temp_9 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("setter-").add_operation (extensionGetter_definition (var_baseType_13319, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 300)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 300)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 300)).add_operation (temp_9.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 300))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 300)) ;
  const GGS_overridingExtensionSetterForGeneration temp_10 = this ;
  extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 301)) ;
  const GGS_overridingExtensionSetterForGeneration temp_11 = this ;
  const GGS_overridingExtensionSetterForGeneration temp_12 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_11.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 303)).readProperty_typeName ().readProperty_string (), temp_12.readProperty_mExtensionSetterName (), var_methodImplementation_13267 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 302))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputActualParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 115)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                 const GGS_string constinArgument_inSelector,
                                                                 Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  GGS_bool test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas", 122)))) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("actual-parameters.galgas", 122)))) ;
  }
  result_result = test_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = result_result.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_outputActualParameterAST temp_2 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & ioArgument_ioActualOutputArgumentList,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputActualParameterAST temp_0 = this ;
  const GGS_outputActualParameterAST temp_1 = this ;
  const GGS_outputActualParameterAST temp_2 = this ;
  ioArgument_ioActualOutputArgumentList.addAssign_operation (temp_0.readProperty_mActualSelector (), temp_1.readProperty_mOutputActualParameterExpression (), temp_2.readProperty_mEndOfExpressionLocation ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 131)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       const GGS_lstring constinArgument_inFormalSelector,
                                                                       const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                       const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                       GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                       GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("actual-parameters.galgas", 151)))).operator_and (GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas", 152)))) COMMA_SOURCE_FILE ("actual-parameters.galgas", 151)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_outputActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 154)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 154)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 155)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 156)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 153)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GGS_outputActualParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string temp_5 ;
        const enumGalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 159)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_7922 = GGS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 159)) ;
        const GGS_outputActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_7922) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_7922, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)) ;
      }
    }
    GGS_semanticExpressionForGeneration var_expression_8444 ;
    const GGS_outputActualParameterAST temp_9 = this ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mOutputActualParameterExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8444, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 162)) ;
    {
    const GGS_outputActualParameterAST temp_10 = this ;
    routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inFormalArgumentType, var_expression_8444.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_expression_8444, inCompiler  COMMA_SOURCE_FILE ("actual-parameters.galgas", 172)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GGS_outputActualParameterForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_expression_8444, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 179)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputInputActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                      const GGS_string constinArgument_inSelector,
                                                                      Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 206)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_outputInputActualParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputActualParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 215)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            const GGS_lstring constinArgument_inFormalSelector,
                                                                            const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                            const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                            GGS_localVarManager & ioArgument_ioVariableMap,
                                                                            GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                            GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                            GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 232)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_outputInputActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 234)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 234)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 235)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 236)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 233)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GGS_outputInputActualParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string temp_5 ;
        const enumGalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 238)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_11636 = GGS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 238)) ;
        const GGS_outputInputActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_11636) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11636, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)) ;
      }
    }
  }
  GGS_unifiedTypeMapEntry var_parameterType_11986 ;
  GGS_string var_variableCppName_12011 ;
  {
  const GGS_outputInputActualParameterAST temp_9 = this ;
  GGS_string joker_12033 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mOutputInputActualParameterName (), var_parameterType_11986, var_variableCppName_12011, joker_12033, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 242)) ;
  }
  GGS_unifiedTypeMapEntryList var_typeList_12050 = GGS_unifiedTypeMapEntryList::class_func_listWithValue (var_parameterType_11986  COMMA_SOURCE_FILE ("actual-parameters.galgas", 248)) ;
  const GGS_outputInputActualParameterAST temp_10 = this ;
  cEnumerator_lstringlist enumerator_12126 (temp_10.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_12126.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_12175 = extensionGetter_definition (var_parameterType_11986, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 250)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_12285 ;
    GGS_bool var_isConstant_12312 ;
    var_propertyMap_12175.method_searchKey (enumerator_12126.current_mValue (HERE), var_accessControl_12285, var_isConstant_12312, var_parameterType_11986, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 251)) ;
    extensionMethod_checkSetAccess (var_accessControl_12285, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_12126.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 257)) ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_isConstant_12312.boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_12126.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 259)) ;
      }
    }
    var_typeList_12050.addAssign_operation (var_parameterType_11986  COMMA_SOURCE_FILE ("actual-parameters.galgas", 261)) ;
    enumerator_12126.gotoNextObject () ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_11986)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GGS_outputInputActualParameterAST temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mOutputInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_11986, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 266)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 266)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 266)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 268)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 267)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 268)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 265)) ;
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GGS_outputInputActualParameterAST temp_17 = this ;
    test_16 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_17.readProperty_mOutputInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 271)).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GGS_outputInputActualParameterAST temp_18 = this ;
      TC_Array <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mOutputInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray19  COMMA_SOURCE_FILE ("actual-parameters.galgas", 272)) ;
    }
  }
  const GGS_outputInputActualParameterAST temp_20 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_20.readProperty_mOutputInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 275)) ;
  const GGS_outputInputActualParameterAST temp_21 = this ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GGS_outputInputActualParameterForGeneration::init_21__21__21__21_ (var_parameterType_11986, var_variableCppName_12011, temp_21.readProperty_mStructAttributeList (), var_typeList_12050, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 277)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputJokerParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_expression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 298)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputJokerParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputInputJokerParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                     const GGS_string constinArgument_inSelector,
                                                                     Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 305)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_outputInputJokerParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputJokerParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 314)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_checkAgainstFormalArgument (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           const GGS_lstring constinArgument_inFormalSelector,
                                                                           const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                           GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                           GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 331)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_outputInputJokerParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 333)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 333)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 334)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 335)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 332)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GGS_outputInputJokerParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string temp_5 ;
        const enumGalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 337)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_16250 = GGS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 337)) ;
        const GGS_outputInputJokerParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_16250) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_16250, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 338)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 338)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 338)) ;
      }
    }
  }
  GGS_semanticExpressionForGeneration var_expressionGeneration_16757 ;
  const GGS_outputInputJokerParameterAST temp_9 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_expression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionGeneration_16757, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 341)) ;
  {
  const GGS_outputInputJokerParameterAST temp_10 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inFormalArgumentType, var_expressionGeneration_16757.readProperty_mResultType (), temp_10.readProperty_mActualSelector ().readProperty_location (), var_expressionGeneration_16757, inCompiler  COMMA_SOURCE_FILE ("actual-parameters.galgas", 351)) ;
  }
  const GGS_outputInputJokerParameterAST temp_11 = this ;
  GGS_string var_cppVarName_17041 = GGS_string ("joker_").add_operation (temp_11.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 358)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 358)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, GGS_bool (false), var_cppVarName_17041, var_expressionGeneration_16757, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 359)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GGS_outputInputActualParameterForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_17041, GGS_lstringlist::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas", 369)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 365)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSelfParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputSelfParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputInputSelfParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                    const GGS_string constinArgument_inSelector,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 391)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_outputInputSelfParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSelfParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputSelfParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 400)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSelfParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          const GGS_lstring constinArgument_inFormalSelector,
                                                                          const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                          GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                          GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                          GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 417)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_outputInputSelfParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 419)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 419)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 420)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 421)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 418)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GGS_outputInputSelfParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string temp_5 ;
        const enumGalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 423)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_20189 = GGS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 423)) ;
        const GGS_outputInputSelfParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_20189) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_20189, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 424)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 424)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 424)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_20411 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas", 427)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas", 427)).isValuated ()) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfAvailable_20411.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 428)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 428)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GGS_outputInputSelfParameterAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mActualSelector ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 429)) ;
        }
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfAvailable_20411.readProperty_type ())).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GGS_outputInputSelfParameterAST temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_20411.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 434)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 434)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 434)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 436)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 435)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 436)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 433)) ;
        }
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GGS_outputInputActualParameterForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, GGS_string ("ioObject"), GGS_lstringlist::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas", 442)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 438)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GGS_outputInputSelfParameterAST temp_16 = this ;
    TC_Array <FixItDescription> fixItArray17 ;
    inCompiler->emitSemanticError (temp_16.readProperty_mActualSelector ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray17  COMMA_SOURCE_FILE ("actual-parameters.galgas", 445)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualExistingVariableParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualExistingVariableParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                                const GGS_string constinArgument_inSelector,
                                                                                Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 469)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_inputActualExistingVariableParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualExistingVariableParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 478)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      const GGS_lstring constinArgument_inFormalSelector,
                                                                                      const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                      const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                      GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                      GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                      GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 495)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_inputActualExistingVariableParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 497)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 497)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 498)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 498)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 496)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GGS_inputActualExistingVariableParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string temp_5 ;
        const enumGalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 500)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_23814 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 500)) ;
        const GGS_inputActualExistingVariableParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_23814) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_23814, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 501)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 501)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 501)) ;
      }
    }
  }
  GGS_unifiedTypeMapEntry var_parameterType_24241 ;
  GGS_string var_targetVariableCppName_24266 ;
  {
  const GGS_inputActualExistingVariableParameterAST temp_9 = this ;
  GGS_string joker_24294 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mInputActualParameterName (), var_parameterType_24241, var_targetVariableCppName_24266, joker_24294, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 504)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_24241)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GGS_inputActualExistingVariableParameterAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_24241, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 513)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 513)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 513)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 514)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 514)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 514)), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 512)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GGS_inputActualExistingVariableParameterAST temp_14 = this ;
    test_13 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_14.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 517)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GGS_inputActualExistingVariableParameterAST temp_15 = this ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray16  COMMA_SOURCE_FILE ("actual-parameters.galgas", 518)) ;
    }
  }
  const GGS_inputActualExistingVariableParameterAST temp_17 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_17.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 521)) ;
  GGS__32_stringlist var_poisonedVarCppNameList_25018 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualExistingVariableParameterAST temp_18 = this ;
  cEnumerator_lstringlist enumerator_25055 (temp_18.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
  while (enumerator_25055.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_25181 ;
    GGS_string var_nameForCheckingFormalParameterUsing_25216 ;
    {
    GGS_unifiedTypeMapEntry joker_25165 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_25055.current_mValue (HERE), joker_25165, var_targetVariableCppName_25181, var_nameForCheckingFormalParameterUsing_25216, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 525)) ;
    }
    var_poisonedVarCppNameList_25018.addAssign_operation (var_targetVariableCppName_25181, var_nameForCheckingFormalParameterUsing_25216  COMMA_SOURCE_FILE ("actual-parameters.galgas", 531)) ;
    enumerator_25055.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_parameterType_24241, var_targetVariableCppName_24266, var_poisonedVarCppNameList_25018, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 533)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualSelfPropertyParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualSelfPropertyParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                            const GGS_string constinArgument_inSelector,
                                                                            Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 560)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_inputActualSelfPropertyParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualSelfPropertyParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 569)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  const GGS_lstring constinArgument_inFormalSelector,
                                                                                  const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                  const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                  GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                  GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                  GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 587)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_inputActualSelfPropertyParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 589)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 589)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 590)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 590)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 588)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GGS_inputActualSelfPropertyParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string temp_5 ;
        const enumGalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 592)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_28004 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 592)) ;
        const GGS_inputActualSelfPropertyParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_28004) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_28004, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 593)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 593)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 593)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_28206 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas", 596)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas", 596)).isValuated ()) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = extensionGetter_propertiesAreMutable (var_selfAvailable_28206.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 597)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 597)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GGS_inputActualSelfPropertyParameterAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 598)) ;
        }
      }
      GGS_propertyMap var_propertyMap_28454 = extensionGetter_definition (var_selfAvailable_28206.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 600)).readProperty_propertyMap () ;
      GGS_unifiedTypeMapEntry var_parameterType_28585 ;
      const GGS_inputActualSelfPropertyParameterAST temp_13 = this ;
      GGS_AccessControl joker_28576_2 ; // Joker input parameter
      GGS_bool joker_28576_1 ; // Joker input parameter
      var_propertyMap_28454.method_searchKey (temp_13.readProperty_mInputActualSelfPropertyName (), joker_28576_2, joker_28576_1, var_parameterType_28585, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 601)) ;
      const GGS_inputActualSelfPropertyParameterAST temp_14 = this ;
      GGS_string var_targetVariableCppName_28610 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 602)).add_operation (temp_14.readProperty_mInputActualSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 603)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_28585)).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GGS_inputActualSelfPropertyParameterAST temp_16 = this ;
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_28585, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 607)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 607)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 607)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 608)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 608)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 608)), fixItArray17  COMMA_SOURCE_FILE ("actual-parameters.galgas", 606)) ;
        }
      }
      GGS__32_stringlist var_poisonedVarCppNameList_29195 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
      const GGS_inputActualSelfPropertyParameterAST temp_18 = this ;
      cEnumerator_lstringlist enumerator_29234 (temp_18.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_29234.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_29368 ;
        GGS_string var_nameForCheckingFormalParameterUsing_29405 ;
        {
        GGS_unifiedTypeMapEntry joker_29350 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_29234.current_mValue (HERE), joker_29350, var_targetVariableCppName_29368, var_nameForCheckingFormalParameterUsing_29405, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 613)) ;
        }
        var_poisonedVarCppNameList_29195.addAssign_operation (var_targetVariableCppName_29368, var_nameForCheckingFormalParameterUsing_29405  COMMA_SOURCE_FILE ("actual-parameters.galgas", 619)) ;
        enumerator_29234.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_parameterType_28585, var_targetVariableCppName_28610, var_poisonedVarCppNameList_29195, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 621)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GGS_inputActualSelfPropertyParameterAST temp_19 = this ;
    TC_Array <FixItDescription> fixItArray20 ;
    inCompiler->emitSemanticError (temp_19.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray20  COMMA_SOURCE_FILE ("actual-parameters.galgas", 628)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualSelfParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualSelfParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                    const GGS_string constinArgument_inSelector,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 652)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_inputActualSelfParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualSelfParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 661)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          const GGS_lstring constinArgument_inFormalSelector,
                                                                          const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GGS_localVarManager & ioArgument_ioVariableMap,
                                                                          GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                          GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                          GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 679)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_inputActualSelfParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 681)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 681)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 681)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 682)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 682)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 680)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GGS_inputActualSelfParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string temp_5 ;
        const enumGalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 684)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_32292 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 684)) ;
        const GGS_inputActualSelfParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_32292) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_32292, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 685)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 685)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 685)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_32494 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas", 688)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas", 688)).isValuated ()) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfAvailable_32494.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 689)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 689)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GGS_inputActualSelfParameterAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mSelfLocation (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 690)) ;
        }
      }
      GGS_string var_targetVariableCppName_32720 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfAvailable_32494.readProperty_type ())).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GGS_inputActualSelfParameterAST temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mSelfLocation (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_32494.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 696)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 696)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 696)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 698)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 697)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 698)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 695)) ;
        }
      }
      GGS__32_stringlist var_poisonedVarCppNameList_33195 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
      const GGS_inputActualSelfParameterAST temp_16 = this ;
      cEnumerator_lstringlist enumerator_33234 (temp_16.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_33234.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_33368 ;
        GGS_string var_nameForCheckingFormalParameterUsing_33405 ;
        {
        GGS_unifiedTypeMapEntry joker_33350 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_33234.current_mValue (HERE), joker_33350, var_targetVariableCppName_33368, var_nameForCheckingFormalParameterUsing_33405, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 703)) ;
        }
        var_poisonedVarCppNameList_33195.addAssign_operation (var_targetVariableCppName_33368, var_nameForCheckingFormalParameterUsing_33405  COMMA_SOURCE_FILE ("actual-parameters.galgas", 709)) ;
        enumerator_33234.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_selfAvailable_32494.readProperty_type (), var_targetVariableCppName_32720, var_poisonedVarCppNameList_33195, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 711)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GGS_inputActualSelfParameterAST temp_17 = this ;
    TC_Array <FixItDescription> fixItArray18 ;
    inCompiler->emitSemanticError (temp_17.readProperty_mSelfLocation (), GGS_string ("'self' not available in this context"), fixItArray18  COMMA_SOURCE_FILE ("actual-parameters.galgas", 718)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualNewVariableParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualNewVariableParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 743)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_inputActualNewVariableParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualNewVariableParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 752)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 771)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_inputActualNewVariableParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 773)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 773)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 773)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 775)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 774)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 775)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 772)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GGS_inputActualNewVariableParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string temp_5 ;
        const enumGalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 777)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_36368 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 777)) ;
        const GGS_inputActualNewVariableParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_36368) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_36368, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 778)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 778)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 778)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GGS_inputActualNewVariableParameterAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GGS_inputActualNewVariableParameterAST temp_11 = this ;
      GGS_unifiedTypeMapEntry var_parameterType_36656 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 782)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_36656)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GGS_inputActualNewVariableParameterAST temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_36656, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 785)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 785)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 785)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 787)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 786)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 787)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas", 784)) ;
        }
      }
    }
  }
  const GGS_inputActualNewVariableParameterAST temp_15 = this ;
  const GGS_inputActualNewVariableParameterAST temp_16 = this ;
  GGS_string var_targetVariableCppName_37124 = GGS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 791)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 791)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 791)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 791)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 791)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 791)) ;
  {
  const GGS_inputActualNewVariableParameterAST temp_17 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_17.readProperty_mInputActualParameterName (), GGS_bool (true), constinArgument_inFormalArgumentType, var_targetVariableCppName_37124, var_targetVariableCppName_37124, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 792)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GGS_localVariableDeclarationForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_37124, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 800)) ;
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GGS_inputActualNewVariableParameterAST temp_19 = this ;
    test_18 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_19.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 804)).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GGS_inputActualNewVariableParameterAST temp_20 = this ;
      TC_Array <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray21  COMMA_SOURCE_FILE ("actual-parameters.galgas", 805)) ;
    }
  }
  const GGS_inputActualNewVariableParameterAST temp_22 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_22.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 808)) ;
  GGS__32_stringlist var_poisonedVarCppNameList_38054 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualNewVariableParameterAST temp_23 = this ;
  cEnumerator_lstringlist enumerator_38091 (temp_23.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
  while (enumerator_38091.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_38217 ;
    GGS_string var_nameForCheckingFormalParameterUsing_38252 ;
    {
    GGS_unifiedTypeMapEntry joker_38201 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_38091.current_mValue (HERE), joker_38201, var_targetVariableCppName_38217, var_nameForCheckingFormalParameterUsing_38252, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 812)) ;
    }
    var_poisonedVarCppNameList_38054.addAssign_operation (var_targetVariableCppName_38217, var_nameForCheckingFormalParameterUsing_38252  COMMA_SOURCE_FILE ("actual-parameters.galgas", 818)) ;
    enumerator_38091.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GGS_inputActualParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_37124, var_poisonedVarCppNameList_38054, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 820)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualNewConstantParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualNewConstantParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 849)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_inputActualNewConstantParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualNewConstantParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 858)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 877)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_inputActualNewConstantParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 879)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 879)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 879)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 881)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 880)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 881)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 878)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GGS_inputActualNewConstantParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string temp_5 ;
        const enumGalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 883)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_41177 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 883)) ;
        const GGS_inputActualNewConstantParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_41177) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_41177, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 884)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 884)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 884)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GGS_inputActualNewConstantParameterAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GGS_inputActualNewConstantParameterAST temp_11 = this ;
      GGS_unifiedTypeMapEntry var_parameterType_41465 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 888)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_41465)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GGS_inputActualNewConstantParameterAST temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_41465, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 891)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 891)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 891)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 892)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 892)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 892)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas", 890)) ;
        }
      }
    }
  }
  const GGS_inputActualNewConstantParameterAST temp_15 = this ;
  const GGS_inputActualNewConstantParameterAST temp_16 = this ;
  GGS_string var_targetVariableCppName_41925 = GGS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 896)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 896)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 896)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 896)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 896)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 896)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GGS_inputActualNewConstantParameterAST temp_18 = this ;
    test_17 = temp_18.readProperty_mMarkedAsUnused ().boolEnum () ;
    if (kBoolTrue == test_17) {
      {
      const GGS_inputActualNewConstantParameterAST temp_19 = this ;
      extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, temp_19.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_41925, var_targetVariableCppName_41925, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 898)) ;
      }
    }
  }
  if (kBoolFalse == test_17) {
    {
    const GGS_inputActualNewConstantParameterAST temp_20 = this ;
    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_20.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_41925, var_targetVariableCppName_41925, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 905)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GGS_localVariableDeclarationForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_41925, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 913)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GGS_inputActualNewConstantParameterAST temp_22 = this ;
    test_21 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_22.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 918)).boolEnum () ;
    if (kBoolTrue == test_21) {
      const GGS_inputActualNewConstantParameterAST temp_23 = this ;
      TC_Array <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray24  COMMA_SOURCE_FILE ("actual-parameters.galgas", 919)) ;
    }
  }
  const GGS_inputActualNewConstantParameterAST temp_25 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_25.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 922)) ;
  GGS__32_stringlist var_poisonedVarCppNameList_43078 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualNewConstantParameterAST temp_26 = this ;
  cEnumerator_lstringlist enumerator_43115 (temp_26.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
  while (enumerator_43115.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_43241 ;
    GGS_string var_nameForCheckingFormalParameterUsing_43276 ;
    {
    GGS_unifiedTypeMapEntry joker_43225 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_43115.current_mValue (HERE), joker_43225, var_targetVariableCppName_43241, var_nameForCheckingFormalParameterUsing_43276, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 926)) ;
    }
    var_poisonedVarCppNameList_43078.addAssign_operation (var_targetVariableCppName_43241, var_nameForCheckingFormalParameterUsing_43276  COMMA_SOURCE_FILE ("actual-parameters.galgas", 932)) ;
    enumerator_43115.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GGS_inputActualParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_41925, var_poisonedVarCppNameList_43078, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 934)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputSingleJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputSingleJokerActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 960)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_inputSingleJokerActualParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputSingleJokerActualParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 969)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 986)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_inputSingleJokerActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 988)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 988)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 988)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 990)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 989)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 990)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 987)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GGS_inputSingleJokerActualParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GGS_string temp_5 ;
        const enumGalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 992)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_46060 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 992)) ;
        const GGS_inputSingleJokerActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_46060) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_46060, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 993)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 993)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 993)) ;
      }
    }
    if (kBoolFalse == test_3) {
      const GGS_inputSingleJokerActualParameterAST temp_9 = this ;
      GGS_string var_cppVarName_46261 = GGS_string ("joker_").add_operation (temp_9.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 995)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 995)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 995)) ;
      GGS__32_stringlist var_poisonedVarCppNameList_46394 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
      const GGS_inputSingleJokerActualParameterAST temp_10 = this ;
      cEnumerator_lstringlist enumerator_46433 (temp_10.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_46433.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_46567 ;
        GGS_string var_nameForCheckingFormalParameterUsing_46604 ;
        {
        GGS_unifiedTypeMapEntry joker_46549 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_46433.current_mValue (HERE), joker_46549, var_targetVariableCppName_46567, var_nameForCheckingFormalParameterUsing_46604, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 999)) ;
        }
        var_poisonedVarCppNameList_46394.addAssign_operation (var_targetVariableCppName_46567, var_nameForCheckingFormalParameterUsing_46604  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1005)) ;
        enumerator_46433.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GGS_inputJokerParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_46261, var_poisonedVarCppNameList_46394, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1007)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputJokerActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                     const GGS_string /* constinArgument_inSelector */,
                                                                     Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1034)))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputJokerActualParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mQualifierLocation (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1043)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                           GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                           const GGS_lstring /* constinArgument_inFormalSelector */,
                                                                           const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                           GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                           GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                           GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1060)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_inputJokerActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1062)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1062)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1062)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1063)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1063)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1063)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1061)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_inputJokerActualParameterAST temp_3 = this ;
    const GGS_inputJokerActualParameterAST temp_4 = this ;
    GGS_string var_cppVarName_49336 = GGS_string ("joker_").add_operation (temp_3.readProperty_mQualifierLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1065)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 1065)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1065)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1065)).add_operation (temp_4.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("actual-parameters.galgas", 1065)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1065)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GGS_inputJokerParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_49336, GGS__32_stringlist::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1067)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externProcedureDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                         GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                         GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                         GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externProcedureDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 110)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externProcedureDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_externProcedureDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_externProcedureDeclarationAST temp_0 = this ;
  const GGS_externProcedureDeclarationAST temp_1 = this ;
  result_result = GGS_string ("routine ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 116)).add_operation (extensionGetter_keyRepresentation (temp_1.readProperty_mFormalArgumentListAST (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 116)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externProcedureDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                   const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_routineSignature_5706 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  const GGS_externProcedureDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_5779 (temp_0.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_5779.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_5873 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5779.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_5873, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 132)) ;
    }
    var_routineSignature_5706.addAssign_operation (enumerator_5779.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_5873, enumerator_5779.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_5779.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 133)) ;
    enumerator_5779.gotoNextObject () ;
  }
  {
  const GGS_externProcedureDeclarationAST temp_1 = this ;
  const GGS_externProcedureDeclarationAST temp_2 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_routineMap, temp_1.readProperty_mRoutineName (), var_routineSignature_5706, temp_2.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 140)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externProcedureDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string /* constinArgument_inProductDirectory */,
                                                                  const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterListForGeneration var_formalArgumentList_6942 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_routineSignature_7008 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  const GGS_externProcedureDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_7081 (temp_0.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_7081.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_7117 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_7081.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 160)) ;
    var_formalArgumentList_6942.addAssign_operation (enumerator_7081.current (HERE).readProperty_mFormalSelector (), enumerator_7081.current (HERE).readProperty_mFormalArgumentPassingMode (), var_parameterType_7117, enumerator_7081.current (HERE).readProperty_mFormalArgumentName (), enumerator_7081.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 161)) ;
    var_routineSignature_7008.addAssign_operation (enumerator_7081.current (HERE).readProperty_mFormalSelector (), var_parameterType_7117, enumerator_7081.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_7081.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 167)) ;
    enumerator_7081.gotoNextObject () ;
  }
  const GGS_externProcedureDeclarationAST temp_1 = this ;
  GGS_lstring var_mangledName_7601 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_7008, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 173)) ;
  GGS_lstring var_nameForUsefulness_7710 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_7601, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 175)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7710, var_nameForUsefulness_7710, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 176)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_externProcedureDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_7710  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 178)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("proc ").add_operation (var_mangledName_7601.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 182)), GGS_routinePrototypeDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (GGS_bool (true), GGS_string ("proc-").add_operation (var_mangledName_7601.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extern-procedure-declaration.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 185)), var_mangledName_7601.readProperty_string (), var_formalArgumentList_6942, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 181)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@routinePrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_routinePrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extern-procedure-declaration.galgas", 208)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routinePrototypeDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_routinePrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GGS_string & outArgument_outHeader,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_routinePrototypeDeclarationForGeneration temp_0 = this ;
  const GGS_routinePrototypeDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, temp_0.readProperty_routineMangledName (), temp_1.readProperty_mFormalArgumentList () COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 215))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_routineSignature_6920 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_6993 (temp_0.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_6993.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_7087 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6993.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_7087, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 183)) ;
    }
    var_routineSignature_6920.addAssign_operation (enumerator_6993.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_7087, enumerator_6993.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_6993.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 184)) ;
    enumerator_6993.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mRoutineInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 191)) ;
  {
  const GGS_procDeclarationAST temp_2 = this ;
  const GGS_procDeclarationAST temp_3 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_routineMap, temp_2.readProperty_mRoutineName (), var_routineSignature_6920, temp_3.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 193)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_routineSignature_8267 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_8340 (temp_0.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_8340.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_8376 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8340.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 212)) ;
    var_routineSignature_8267.addAssign_operation (enumerator_8340.current (HERE).readProperty_mFormalSelector (), var_parameterType_8376, enumerator_8340.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_8340.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 213)) ;
    enumerator_8340.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  GGS_lstring var_mangledName_8647 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_8267, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 219)) ;
  GGS_lstring var_nameForUsefulness_8756 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_8647, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 221)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8756, var_nameForUsefulness_8756, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 222)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_procDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_8756  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 224)) ;
    }
  }
  GGS_analysisContext var_analysisContext_9030 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("procedure-declaration.galgas", 231)), GGS_string::makeEmptyString (), GGS_bool (true), inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_instructionList_9627 ;
  GGS_formalParameterListForGeneration var_formalArgumentList_9654 ;
  {
  const GGS_procDeclarationAST temp_4 = this ;
  const GGS_procDeclarationAST temp_5 = this ;
  const GGS_procDeclarationAST temp_6 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_8756, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_9030, ioArgument_ioTypeMap, temp_4.readProperty_mFormalArgumentListAST (), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), temp_5.readProperty_mRoutineInstructionList (), temp_6.readProperty_mEndOfRoutineInstructionList (), var_instructionList_9627, var_formalArgumentList_9654, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 235)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GGS_string ("proc ").add_operation (var_mangledName_8647.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 249)), GGS_routineImplementationForGeneration::init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_bool (true), GGS_string ("proc-").add_operation (var_mangledName_8647.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 252)), var_mangledName_8647.readProperty_string (), var_formalArgumentList_9654, GGS_bool (false), var_instructionList_9627, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 248)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routineImplementationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_string & outArgument_outImplementation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_routineImplementationForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_generateHeader ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_routineImplementationForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GGS_string ("proc-").add_operation (temp_2.readProperty_routineMangledName ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 282))  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 282)) ;
    }
  }
  GGS_string var_code_11518 ;
  {
  const GGS_routineImplementationForGeneration temp_3 = this ;
  const GGS_routineImplementationForGeneration temp_4 = this ;
  const GGS_routineImplementationForGeneration temp_5 = this ;
  const GGS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (temp_3.readProperty_mGenerateStatic (), GGS_string ("routine_").add_operation (temp_4.readProperty_routineMangledName ().getter_identifierRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 286)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_11518, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 284)) ;
  }
  const GGS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, temp_7.readProperty_routineMangledName (), var_code_11518 COMMA_SOURCE_FILE ("procedure-declaration.galgas", 297))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Once function 'generateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

static GGS_bool onceFunction_generateFewHeaderFiles (Compiler *
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_generateFewHeaderFiles = false ;
static GGS_bool gOnceFunctionResult_generateFewHeaderFiles ;

//--------------------------------------------------------------------------------------------------

GGS_bool function_generateFewHeaderFiles (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateFewHeaderFiles) {
    gOnceFunctionResult_generateFewHeaderFiles = onceFunction_generateFewHeaderFiles (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateFewHeaderFiles = true ;
  }
  return gOnceFunctionResult_generateFewHeaderFiles ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_generateFewHeaderFiles (void) {
  gOnceFunctionResult_generateFewHeaderFiles.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_generateFewHeaderFiles (nullptr,
                                                                  releaseOnceFunctionResult_generateFewHeaderFiles) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateFewHeaderFiles [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_generateFewHeaderFiles (Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_generateFewHeaderFiles (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateFewHeaderFiles ("generateFewHeaderFiles",
                                                                        functionWithGenericHeader_generateFewHeaderFiles,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        0,
                                                                        functionArgs_generateFewHeaderFiles) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithoutArgument&&?name?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                   const GGS_string constinArgument_inClassFunctionName,
                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                   const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_1691 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1691, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 32)) ;
  }
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 37)), inCompiler COMMA_HERE), GGS_functionSignature::init (inCompiler COMMA_HERE), constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_1691 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 36)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithArgument&&?name?argTypeName?argName?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                          GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                          const GGS_string constinArgument_inClassFunctionName,
                                                                                                                          const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                          const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                          const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                          const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_2395 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2395, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 55)) ;
  }
  GGS_unifiedTypeMapEntry var_t_2482 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_2482, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 56)) ;
  }
  {
  GGS_functionSignature temp_0 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 59)) ;
  temp_0.enterElement (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 59)), var_t_2482, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 59)) ;
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 58)), inCompiler COMMA_HERE), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_2395 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 57)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith2Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                         GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                         const GGS_string constinArgument_inClassFunctionName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                         const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                         const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_3306 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3306, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 78)) ;
  }
  GGS_functionSignature var_argumentTypeList_3331 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_3399 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3399, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 81)) ;
  }
  var_argumentTypeList_3331.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 82)), var_t_3399, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 82)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_3399, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 83)) ;
  }
  var_argumentTypeList_3331.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 84)), var_t_3399, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 84)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 86)), inCompiler COMMA_HERE), var_argumentTypeList_3331, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_3306 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 85)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith3Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?argTypeName3?argName3?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                                                           GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                                           const GGS_string constinArgument_inClassFunctionName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_33_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_33_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                                                           const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_4516 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4516, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 108)) ;
  }
  GGS_unifiedTypeMapEntry var_t_4603 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4603, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 109)) ;
  }
  GGS_functionSignature var_argumentTypeList_4631 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeList_4631.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 111)), var_t_4603, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 111)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4603, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 112)) ;
  }
  var_argumentTypeList_4631.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 113)), var_t_4603, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 113)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_4603, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 114)) ;
  }
  var_argumentTypeList_4631.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 115)), var_t_4603, constinArgument_inArgument_33_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 115)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 117)), inCompiler COMMA_HERE), var_argumentTypeList_4631, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_4516 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 116)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                   const GGS_string constinArgument_inGetterName,
                                                                                                                                   const GGS_string constinArgument_inObsoleteGetterName,
                                                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                   const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_1932 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1932, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 31)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 33)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 34)), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 36)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_1932, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 39)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 32)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inObsoleteGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 44)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 45)), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 47)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_1932, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 50)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas", 43)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                   const GGS_string constinArgument_inGetterName,
                                                                                                                                   const GGS_string constinArgument_inObsoleteGetterName,
                                                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                   const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_3295 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3295, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 64)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 66)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 67)), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 69)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_3295, GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 72)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 65)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inObsoleteGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 77)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 78)), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 80)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_3295, GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 83)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas", 76)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithArgument&&?getterName?argumentTypeName?argumentName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                    GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                    const GGS_string constinArgument_inGetterName,
                                                                                                                                                    const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                    const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                    const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                    const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_4464 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4464, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 100)) ;
  }
  GGS_functionSignature var_argList_4508 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_4589 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4589, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 102)) ;
  }
  var_argList_4508.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 103)), var_t_4589, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 103)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 105)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 106)), var_argList_4508, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 108)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_4464, GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 111)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 104)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWith2Arguments&&??????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                           GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                           const GGS_string constinArgument_inGetterName,
                                                                                                                           const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                           const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                           const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                           const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                           const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                           const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_5483 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_5483, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 129)) ;
  }
  GGS_functionSignature var_argList_5527 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_5625 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_5625, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 131)) ;
  }
  var_argList_5527.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 132)), var_t_5625, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 132)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_5625, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 133)) ;
  }
  var_argList_5527.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 134)), var_t_5625, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 134)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 136)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 137)), var_argList_5527, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 139)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_5483, GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 142)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 135)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                              GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                              const GGS_string constinArgument_inGetterName,
                                                                                                                              const GGS_string constinArgument_inObsoleteGetterName,
                                                                                                                              const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                              const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_6733 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_6733, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 155)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 157)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 158)), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 160)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_6733, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 163)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 156)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inObsoleteGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 168)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 169)), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 171)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_6733, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 174)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas", 167)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument&&?getterName?argSelector?argType?argName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                const GGS_string constinArgument_inGetterName,
                                                                                                                                                const GGS_string constinArgument_inArgument_31_Selector,
                                                                                                                                                const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_7978 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_7978, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 192)) ;
  }
  GGS_functionSignature var_argList_8022 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_8103 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_8103, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 194)) ;
  }
  var_argList_8022.addAssign_operation (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 195)), var_t_8103, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 195)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 197)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 198)), var_argList_8022, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 200)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_7978, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 203)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 196)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithArgument&&?getterName???returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                        GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                        const GGS_string constinArgument_inGetterName,
                                                                                                                        const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                        const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                        const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                        const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_8954 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_8954, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 219)) ;
  }
  GGS_functionSignature var_argList_8998 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_9079 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_9079, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 221)) ;
  }
  var_argList_8998.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 222)), var_t_9079, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 222)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 224)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 225)), var_argList_8998, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 227)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_8954, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 230)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 223)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWith2Arguments&&?getterName?arg1Selector?arg1TypeName?arg1Name?arg2Selector?arg2TypeName?arg2Name?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                                                                                          GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                                                          const GGS_string constinArgument_inGetterName,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_31_Selector,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_32_Selector,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                                                                          const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                                                                          const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_10127 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_10127, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 250)) ;
  }
  GGS_functionSignature var_argList_10171 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_10269 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_10269, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 252)) ;
  }
  var_argList_10171.addAssign_operation (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 253)), var_t_10269, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 253)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_10269, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 254)) ;
  }
  var_argList_10171.addAssign_operation (constinArgument_inArgument_32_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 255)), var_t_10269, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 255)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 257)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 258)), var_argList_10171, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 260)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_10127, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 263)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 256)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith2Arguments&&?getterName?????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                     GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                     const GGS_string constinArgument_inGetterName,
                                                                                                                                     const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                     const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                     const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                     const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                     const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                     const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_11324 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_11324, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 281)) ;
  }
  GGS_functionSignature var_argList_11368 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_11466 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_11466, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 283)) ;
  }
  var_argList_11368.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 284)), var_t_11466, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 284)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_11466, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 285)) ;
  }
  var_argList_11368.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 286)), var_t_11466, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 286)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 288)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 289)), var_argList_11368, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 291)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_11324, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 294)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 287)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith3Arguments&&????????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                   const GGS_string constinArgument_inGetterName,
                                                                                                                                   const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                   const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                   const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                   const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                   const GGS_string constinArgument_inArgument_33_TypeName,
                                                                                                                                   const GGS_string constinArgument_inArgument_33_Name,
                                                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                   const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_12547 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_12547, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 314)) ;
  }
  GGS_functionSignature var_argList_12591 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_12689 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_12689, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 316)) ;
  }
  var_argList_12591.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 317)), var_t_12689, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 317)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_12689, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 318)) ;
  }
  var_argList_12591.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 319)), var_t_12689, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 319)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_12689, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 320)) ;
  }
  var_argList_12591.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 321)), var_t_12689, constinArgument_inArgument_33_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 321)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 323)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 324)), var_argList_12591, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 326)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_12547, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 329)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 322)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'commonGetterMapForAllTypes&!'
//
//--------------------------------------------------------------------------------------------------

void routine_commonGetterMapForAllTypes_26__21_ (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                 GGS_getterMap & outArgument_outMap,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap.drop () ; // Release 'out' argument
  outArgument_outMap = GGS_getterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("description"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 339)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("staticType"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 347)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("dynamicType"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 355)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("object"), GGS_string::makeEmptyString (), GGS_string ("object"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 363)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument&&?argTypeName?argName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                            GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                            const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                            const GGS_string constinArgument_inInputArgumentName,
                                                                                                            const GGS_string constinArgument_inSetterName,
                                                                                                            const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_1724 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_1724, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 33)) ;
  }
  GGS_formalParameterSignature var_argList_1775 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_1775.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 35)), var_argumentTypeIndex_1724, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 35)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 35)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 37)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 38)), var_argList_1775, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 41)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 36)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithOutputAndInputArguments&&?outputArgTypeName?outputArgName?inputArgTypeName?inputArgName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                                                                                      GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                      const GGS_string constinArgument_inOutputArgumentTypeName,
                                                                                                                                                                      const GGS_string constinArgument_inOutputArgumentName,
                                                                                                                                                                      const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                                                                                      const GGS_string constinArgument_inInputArgumentName,
                                                                                                                                                                      const GGS_string constinArgument_inSetterName,
                                                                                                                                                                      const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_outputArgumentTypeIndex_2658 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inOutputArgumentTypeName, var_outputArgumentTypeIndex_2658, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 58)) ;
  }
  GGS_unifiedTypeMapEntry var_inputArgumentTypeIndex_2755 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_inputArgumentTypeIndex_2755, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 59)) ;
  }
  GGS_formalParameterSignature var_argList_2811 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_2811.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 61)), var_outputArgumentTypeIndex_2658, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticsSetters.galgas", 61)), constinArgument_inOutputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 61)) ;
  var_argList_2811.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 62)), var_inputArgumentTypeIndex_2755, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 62)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 62)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 64)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 65)), var_argList_2811, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 68)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 63)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWith2InputArguments&&?arg1TypeName?arg1Name?arg2TypeName?arg2Name?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                                                                           GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_31_TypeName,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_31_Name,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_32_TypeName,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_32_Name,
                                                                                                                                                           const GGS_string constinArgument_inSetterName,
                                                                                                                                                           const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_argList_3720 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_3823 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex_3823, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 86)) ;
  }
  var_argList_3720.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 87)), var_argumentTypeIndex_3823, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 87)), constinArgument_inInputArgument_31_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 87)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex_3823, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 88)) ;
  }
  var_argList_3720.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 89)), var_argumentTypeIndex_3823, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 89)), constinArgument_inInputArgument_32_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 89)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 91)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 92)), var_argList_3720, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 95)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 90)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithoutArgument&??compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                  const GGS_string constinArgument_inSetterName,
                                                                  const GGS_bool constinArgument_inHasCompilerArgument,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 108)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 109)), GGS_formalParameterSignature::init (inCompiler COMMA_HERE), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 112)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 107)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument&?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (GGS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                       const GGS_string constinArgument_inInstanceMethodName,
                                                                       const GGS_bool constinArgument_inHasCompilerArgument,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 31)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 32)), GGS_formalParameterSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 34)), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 36)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 30)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithInputArgument&&?inputArgTypeName?inputArgName?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (GGS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                                                                 GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                 const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                                 const GGS_string constinArgument_inInputArgumentName,
                                                                                                                 const GGS_string constinArgument_inInstanceMethodName,
                                                                                                                 const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_2435 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2435, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 49)) ;
  }
  GGS_formalParameterSignature var_argList_2486 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_2486.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)), var_argumentTypeIndex_2435, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)) ;
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 53)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 54)), var_argList_2486, GGS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 56)), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 58)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 52)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithInputArgument&&?methodName?argType?argName?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                                GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                const GGS_string constinArgument_inClassMethodName,
                                                                                                                const GGS_string constinArgument_inArgumentTypeName,
                                                                                                                const GGS_string constinArgument_inArgumentName,
                                                                                                                const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_1728 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName, var_argumentTypeIndex_1728, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 33)) ;
  }
  GGS_formalParameterSignature var_argList_1779 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_1779.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 35)), var_argumentTypeIndex_1728, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 35)), constinArgument_inArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 35)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 37)), inCompiler COMMA_HERE), var_argList_1779, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 36)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWith3InputArguments&&?methodName?argType1?argName1?argType2?argName2?argType3?argName3?compilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                                                                                                         GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                         const GGS_string constinArgument_inClassMethodName,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentTypeName_31_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentName_31_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentTypeName_32_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentName_32_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentTypeName_33_,
                                                                                                                                                                                         const GGS_string constinArgument_inArgumentName_33_,
                                                                                                                                                                                         const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_argList_2596 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_31__2693 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_31_, var_argumentTypeIndex_31__2693, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 59)) ;
  }
  var_argList_2596.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 60)), var_argumentTypeIndex_31__2693, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 60)), constinArgument_inArgumentName_31_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 60)) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_32__2882 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_32_, var_argumentTypeIndex_32__2882, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 62)) ;
  }
  var_argList_2596.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 63)), var_argumentTypeIndex_32__2882, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 63)), constinArgument_inArgumentName_32_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 63)) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_33__3071 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_33_, var_argumentTypeIndex_33__3071, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 65)) ;
  }
  var_argList_2596.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 66)), var_argumentTypeIndex_33__3071, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 66)), constinArgument_inArgumentName_33_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 66)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 68)), inCompiler COMMA_HERE), var_argList_2596, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 68)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithStringInputArgument&&?classMethod?argName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (GGS_classMethodMap & ioArgument_ioClassMethodMap,
                                                                                                       GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                       const GGS_string constinArgument_inClassMethodName,
                                                                                                       const GGS_string constinArgument_inStringArgumentName,
                                                                                                       const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_3704 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_argumentTypeIndex_3704, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 80)) ;
  }
  GGS_formalParameterSignature var_argList_3755 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_3755.addAssign_operation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), var_argumentTypeIndex_3704, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), constinArgument_inStringArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 82)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassMethodName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 84)), inCompiler COMMA_HERE), var_argList_3755, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 83)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_routineMangledName (const GGS_lstring & constinArgument_inRoutineName,
                                         const GGS_formalParameterSignature & constinArgument_inRoutineFormalParameters,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_str_1447 = constinArgument_inRoutineName.readProperty_string () ;
  cEnumerator_formalParameterSignature enumerator_1493 (constinArgument_inRoutineFormalParameters, EnumerationOrder::up) ;
  while (enumerator_1493.hasCurrentObject ()) {
    switch (enumerator_1493.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        var_str_1447.plusAssign_operation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 29)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        var_str_1447.plusAssign_operation(GGS_string ("&"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 31)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        var_str_1447.plusAssign_operation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 33)) ;
      }
      break ;
    }
    var_str_1447.plusAssign_operation(enumerator_1493.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 35)) ;
    enumerator_1493.gotoNextObject () ;
  }
  result_result = GGS_lstring::init_21__21_ (var_str_1447, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_routineMangledName [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineMangledName (Compiler * inCompiler,
                                                                const cObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_formalParameterSignature operand1 = GGS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_routineMangledName (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineMangledName ("routineMangledName",
                                                                    functionWithGenericHeader_routineMangledName,
                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                    2,
                                                                    functionArgs_routineMangledName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineArgumentFromFormalParameters'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_routineArgumentFromFormalParameters (const GGS_formalParameterSignature & constinArgument_inRoutineFormalParameters,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("(") ;
  cEnumerator_formalParameterSignature enumerator_2066 (constinArgument_inRoutineFormalParameters, EnumerationOrder::up) ;
  while (enumerator_2066.hasCurrentObject ()) {
    switch (enumerator_2066.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        result_result.plusAssign_operation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 48)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        result_result.plusAssign_operation(GGS_string ("!\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 50)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        result_result.plusAssign_operation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 52)) ;
      }
      break ;
    }
    result_result.plusAssign_operation(enumerator_2066.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 54)) ;
    if (enumerator_2066.hasNextObject ()) {
      result_result.plusAssign_operation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 56)) ;
    }
    enumerator_2066.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 58)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_routineArgumentFromFormalParameters [2] = {
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineArgumentFromFormalParameters (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_formalParameterSignature operand0 = GGS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_routineArgumentFromFormalParameters (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineArgumentFromFormalParameters ("routineArgumentFromFormalParameters",
                                                                                     functionWithGenericHeader_routineArgumentFromFormalParameters,
                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                     1,
                                                                                     functionArgs_routineArgumentFromFormalParameters) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'compilerCppName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_compilerCppName (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outCompilerCppName ; // Returned variable
  result_outCompilerCppName = GGS_string ("inCompiler") ;
//---
  return result_outCompilerCppName ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compilerCppName = false ;
static GGS_string gOnceFunctionResult_compilerCppName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_compilerCppName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compilerCppName) {
    gOnceFunctionResult_compilerCppName = onceFunction_compilerCppName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compilerCppName = true ;
  }
  return gOnceFunctionResult_compilerCppName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compilerCppName (void) {
  gOnceFunctionResult_compilerCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_compilerCppName (nullptr,
                                                           releaseOnceFunctionResult_compilerCppName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_compilerCppName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compilerCppName (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_compilerCppName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compilerCppName ("compilerCppName",
                                                                 functionWithGenericHeader_compilerCppName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_compilerCppName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'syntaxDirectedTranslationResultVarName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_syntaxDirectedTranslationResultVarName (Compiler *
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outName ; // Returned variable
  result_outName = GGS_string ("ioSyntaxDirectedTranslationResult") ;
//---
  return result_outName ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = false ;
static GGS_string gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_syntaxDirectedTranslationResultVarName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName) {
    gOnceFunctionResult_syntaxDirectedTranslationResultVarName = onceFunction_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = true ;
  }
  return gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName (void) {
  gOnceFunctionResult_syntaxDirectedTranslationResultVarName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_syntaxDirectedTranslationResultVarName (nullptr,
                                                                                  releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_syntaxDirectedTranslationResultVarName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_syntaxDirectedTranslationResultVarName (Compiler * inCompiler,
                                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                                    const GGS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  return function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxDirectedTranslationResultVarName ("syntaxDirectedTranslationResultVarName",
                                                                                        functionWithGenericHeader_syntaxDirectedTranslationResultVarName,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        0,
                                                                                        functionArgs_syntaxDirectedTranslationResultVarName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@galgas3GrammarComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_GrammarComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  result_result = GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 329)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@galgas3SyntaxComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_SyntaxComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  result_result = GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 336)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@predefinedTypeAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_predefinedTypeAST::getter_keyRepresentation (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_predefinedTypeAST temp_0 = this ;
  result_result = GGS_string ("predefined type @").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 343)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sortedListDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_sortedListDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_sortedListDeclarationAST temp_0 = this ;
  result_result = GGS_string ("sorted list @").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 350)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_filewrapperDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  result_result = GGS_string ("filewrapper @").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 357)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_optionComponentDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  result_result = GGS_string ("option ").add_operation (temp_0.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 364)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@graphDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_graphDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_graphDeclarationAST temp_0 = this ;
  result_result = GGS_string ("graph @").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 371)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_onceFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  result_result = GGS_string ("once function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 378)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_externFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  result_result = GGS_string ("extern function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 384)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'addExtensions????&&??isClass&&&&?acceptSetters'
//
//--------------------------------------------------------------------------------------------------

void routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                                    const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                                    const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                                    const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                                    GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    const GGS_lstring constinArgument_inTypeName,
                                                                                                    const GGS_bool constinArgument_inIsClass,
                                                                                                    GGS_initializerMap & ioArgument_ioInitializerMap,
                                                                                                    GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                    GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                    GGS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                                                    const GGS_bool constinArgument_inAcceptSetters,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inExtensionGetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 408)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_extensionGetterMapForType var_extensionGetterMapForType_16582 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_16582, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 409)) ;
      cEnumerator_extensionGetterMapForType enumerator_16665 (var_extensionGetterMapForType_16582, EnumerationOrder::up) ;
      while (enumerator_16665.hasCurrentObject ()) {
        GGS_functionSignature var_formalArgumentList_16737 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
        cEnumerator_formalInputParameterListAST enumerator_16794 (enumerator_16665.current_mInputFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_16794.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_16904 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16794.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_16904, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 413)) ;
          }
          var_formalArgumentList_16737.addAssign_operation (enumerator_16794.current (HERE).readProperty_mFormalSelector (), var_typeIndex_16904, enumerator_16794.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_16794.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 414)) ;
          enumerator_16794.gotoNextObject () ;
        }
        GGS_unifiedTypeMapEntry var_returnedType_17175 ;
        {
        extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16665.current_mResultTypeName (HERE), var_returnedType_17175, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 420)) ;
        }
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::equal, enumerator_16665.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 421)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = ioArgument_ioGetterMap.getter_hasKey (enumerator_16665.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 422)).boolEnum () ;
              if (kBoolTrue == test_2) {
                {
                ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 423)), enumerator_16665.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 423)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, enumerator_16665.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 425)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = ioArgument_ioGetterMap.getter_hasKey (enumerator_16665.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 426)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 427)), enumerator_16665.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 427)) ;
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_16665.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 429)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 429)).boolEnum () ;
              if (kBoolTrue == test_5) {
                {
                ioArgument_ioGetterMap.setter_insertKey (enumerator_16665.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 432)), var_formalArgumentList_16737, enumerator_16665.current_lkey (HERE).readProperty_location (), GGS_bool (true), var_returnedType_17175, GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas", 437)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 430)) ;
                }
              }
            }
            if (kBoolFalse == test_5) {
              {
              ioArgument_ioGetterMap.setter_insertKey (enumerator_16665.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 443)), var_formalArgumentList_16737, enumerator_16665.current_lkey (HERE).readProperty_location (), GGS_bool (true), var_returnedType_17175, enumerator_16665.current_mQualifier (HERE), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 441)) ;
              }
            }
          }
        }
        enumerator_16665.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = constinArgument_inExtensionMethodMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 455)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GGS_extensionMethodMapForType var_extensionMethodMapForType_18390 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_18390, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 456)) ;
      cEnumerator_extensionMethodMapForType enumerator_18452 (var_extensionMethodMapForType_18390, EnumerationOrder::up) ;
      while (enumerator_18452.hasCurrentObject ()) {
        GGS_formalParameterSignature var_formalArgumentList_18505 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        cEnumerator_formalParameterListAST enumerator_18578 (enumerator_18452.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_18578.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_18714 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18578.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_18714, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 460)) ;
          }
          var_formalArgumentList_18505.addAssign_operation (enumerator_18578.current (HERE).readProperty_mFormalSelector (), var_typeIndex_18714, enumerator_18578.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_18578.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 464)) ;
          enumerator_18578.gotoNextObject () ;
        }
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::equal, enumerator_18452.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 470)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_18452.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 471)).boolEnum () ;
              if (kBoolTrue == test_8) {
                {
                ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 472)), enumerator_18452.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 472)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_7) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, enumerator_18452.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 474)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                test_10 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_18452.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 475)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  {
                  ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 476)), enumerator_18452.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 476)) ;
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_18452.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 478)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 478)).boolEnum () ;
              if (kBoolTrue == test_11) {
                {
                ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_18452.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 481)), var_formalArgumentList_18505, enumerator_18452.current_lkey (HERE).readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas", 485)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 479)) ;
                }
              }
            }
            if (kBoolFalse == test_11) {
              {
              ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_18452.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 491)), var_formalArgumentList_18505, enumerator_18452.current_lkey (HERE).readProperty_location (), GGS_bool (true), enumerator_18452.current_mQualifier (HERE), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 489)) ;
              }
            }
          }
        }
        enumerator_18452.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = constinArgument_inExtensionSetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 502)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GGS_extensionSetterMapForType var_extensionSetterMapForType_20072 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_20072, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 503)) ;
      cEnumerator_extensionSetterMapForType enumerator_20113 (var_extensionSetterMapForType_20072, EnumerationOrder::up) ;
      while (enumerator_20113.hasCurrentObject ()) {
        GGS_formalParameterSignature var_formalArgumentList_20203 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        cEnumerator_formalParameterListAST enumerator_20250 (enumerator_20113.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_20250.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_20346 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_20250.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_20346, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 507)) ;
          }
          var_formalArgumentList_20203.addAssign_operation (enumerator_20250.current (HERE).readProperty_mFormalSelector (), var_typeIndex_20346, enumerator_20250.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_20250.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 508)) ;
          enumerator_20250.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_20113.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 516)), var_formalArgumentList_20203, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 519)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 514)) ;
        }
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          test_13 = constinArgument_inAcceptSetters.operator_not (SOURCE_FILE ("semanticContext.galgas", 522)).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_20113.current_lkey (HERE).readProperty_location (), GGS_string ("a refclass does not accept any setter; use method instead"), fixItArray14  COMMA_SOURCE_FILE ("semanticContext.galgas", 523)) ;
          }
        }
        enumerator_20113.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = constinArgument_inExtensionInitializerMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 528)).boolEnum () ;
    if (kBoolTrue == test_15) {
      GGS_extensionInitializerMapForType var_initializerMapForType_21098 ;
      constinArgument_inExtensionInitializerMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_initializerMapForType_21098, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 529)) ;
      cEnumerator_extensionInitializerMapForType enumerator_21135 (var_initializerMapForType_21098, EnumerationOrder::up) ;
      while (enumerator_21135.hasCurrentObject ()) {
        GGS_functionSignature var_formalArgumentList_21214 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
        cEnumerator_formalInputParameterListAST enumerator_21310 (enumerator_21135.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_21310.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_21410 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21310.current_mFormalArgumentTypeName (HERE), var_typeIndex_21410, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 533)) ;
          }
          var_formalArgumentList_21214.addAssign_operation (enumerator_21310.current_mFormalSelector (HERE), var_typeIndex_21410, enumerator_21310.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_21310.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 534)) ;
          enumerator_21310.gotoNextObject () ;
        }
        {
        ioArgument_ioInitializerMap.setter_insertKey (enumerator_21135.current_lkey (HERE), var_formalArgumentList_21214, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 544)) ;
        }
        enumerator_21135.gotoNextObject () ;
      }
    }
  }
}


