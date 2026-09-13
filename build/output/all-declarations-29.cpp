#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-29.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dataPredefinedTypeAST cppDeclarationString'
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
  GGS_lstring var_key_5992 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 164)), temp_1.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_sortedListDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5992, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 165)) ;
  }
  const GGS_sortedListDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6162 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_6162.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_6162.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 167)), enumerator_6162.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 167)) ;
    }
    enumerator_6162.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sortedListDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_structAttributeList_6538 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6629 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_6629.hasCurrentObject ()) {
    var_structAttributeList_6538.addAssignOperation (enumerator_6629.current_mutability (HERE), enumerator_6629.current_typeName (HERE), enumerator_6629.current_name (HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 181)), enumerator_6629.current_hasSelector (HERE), enumerator_6629.current_initialization (HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 177)) ;
    enumerator_6629.gotoNextObject () ;
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
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_1.readProperty_isPredefined (), function_makeEmbeddedElementTypeLName (temp_2.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 187)), var_structAttributeList_6538, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 185)) ;
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
  GGS_unifiedTypeMapEntry var_listTypeIndex_7937 ;
  {
  const GGS_sortedListDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mSortedListTypeName (), var_listTypeIndex_7937, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 207)) ;
  }
  GGS_unifiedTypeMapEntry var_listElementTypeIndex_8102 ;
  {
  const GGS_sortedListDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_1.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 210)), var_listElementTypeIndex_8102, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 209)) ;
  }
  GGS_enumerationDescriptorList var_enumerationDescriptor_8196 = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorAttributeTypeList_8251 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterFormalOutputArgumentList_8320 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterFormalInputArgumentList_8391 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedAttributeList_8454 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_2 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_8524 (temp_2.readProperty_mPropertyList ()) ;
  while (enumerator_8524.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_8617 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8524.current_typeName (HERE), var_attributeTypeIndex_8617, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 220)) ;
    }
    GGS_bool var_hasSelector_8647 = GGS_bool (false) ;
    var_typedAttributeList_8454.addAssignOperation (var_attributeTypeIndex_8617, enumerator_8524.current_name (HERE), enumerator_8524.current_initialization (HERE), GGS_bool (true), var_hasSelector_8647  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 222)) ;
    var_enumerationDescriptor_8196.addAssignOperation (var_attributeTypeIndex_8617, enumerator_8524.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 223)) ;
    var_constructorAttributeTypeList_8251.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 224)), var_attributeTypeIndex_8617, enumerator_8524.current_name (HERE).readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 224)) ;
    var_setterFormalOutputArgumentList_8320.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 225)), var_attributeTypeIndex_8617, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 225)), enumerator_8524.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 225)) ;
    var_setterFormalInputArgumentList_8391.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 226)), var_attributeTypeIndex_8617, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 226)), enumerator_8524.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 226)) ;
    enumerator_8524.gotoNextObject () ;
  }
  GGS_classFunctionMap var_classFunctionMap_9235 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  var_classFunctionMap_9235.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("sortedListWithValue"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 231)), inCompiler COMMA_HERE), var_constructorAttributeTypeList_8251, GGS_bool (false), var_listTypeIndex_7937, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 230)) ;
  }
  GGS_getterMap var_getterMap_9501 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_9501, inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 237)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_9501, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 238)) ;
  }
  GGS_setterMap var_setterMap_9741 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  var_setterMap_9741.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popGreatest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 249)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 250)), var_setterFormalOutputArgumentList_8320, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 253)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 248)) ;
  }
  {
  var_setterMap_9741.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popSmallest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 257)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 258)), var_setterFormalOutputArgumentList_8320, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 261)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 256)) ;
  }
  {
  var_setterMap_9741.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insert"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 265)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 266)), var_setterFormalInputArgumentList_8391, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 269)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 264)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_10508 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_10508.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("greatest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 275)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 276)), var_setterFormalOutputArgumentList_8320, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 278)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 280)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 274)) ;
  }
  {
  var_instanceMethodMap_10508.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("smallest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 284)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 285)), var_setterFormalOutputArgumentList_8320, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 287)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 289)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 283)) ;
  }
  GGS_initializerMap var_initializerMap_11109 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_11157 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_sortedListDeclarationAST temp_3 = this ;
  var_initializerMap_11109.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_11157, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 296)), temp_3.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_11157, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 295)) ;
  }
  {
  const GGS_sortedListDeclarationAST temp_4 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_4.readProperty_mSortedListTypeName (), GGS_bool (false), var_initializerMap_11109, var_getterMap_9501, var_setterMap_9741, var_instanceMethodMap_10508, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 300)) ;
  }
  GGS_typeFeatures var_features_11793 = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 316)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_sortedListDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      var_features_11793.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 318)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 318)) ;
    }
  }
  {
  const GGS_sortedListDeclarationAST temp_7 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_7.readProperty_mSortedListTypeName (), var_features_11793, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 320)) ;
  }
  const GGS_sortedListDeclarationAST temp_8 = this ;
  const GGS_sortedListDeclarationAST temp_9 = this ;
  const GGS_sortedListDeclarationAST temp_10 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12137 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_8.readProperty_mSortedListTypeName (), temp_9.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 333)), GGS_typeKindEnum::class_func_sortedListType (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 334)), GGS_bool (true), var_typedAttributeList_8454, GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_11109, var_classFunctionMap_9235, var_getterMap_9501, var_setterMap_9741, var_instanceMethodMap_10508, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 345)), GGS_subscriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_8196, var_features_11793, var_constructorAttributeTypeList_8251, GGS_bool (false), var_listElementTypeIndex_8102, GGS_string ("-sortedlist-").add_operation (temp_10.readProperty_mSortedListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 352)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 352)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 353)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12137.readProperty_typeName (), var_typeDefinition_12137, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 355)) ;
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
  GGS_lstring var_sortedListNameForUsefulness_13871 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 370)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_13871, var_sortedListNameForUsefulness_13871, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 371)) ;
  }
  const GGS_sortedListDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_14064 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_1.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 373)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 372)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_13871, var_elementTypeNameForUsefulness_14064 COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 375)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_sortedListDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_sortedListNameForUsefulness_13871  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 377)) ;
    }
  }
  const GGS_sortedListDeclarationAST temp_4 = this ;
  GGS_lstring var_initializerNameForUsefulness_14481 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mSortedListTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 382)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 380)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_14481, var_initializerNameForUsefulness_14481, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 384)) ;
  }
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_14481, var_sortedListNameForUsefulness_13871 COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 385)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_sortedListDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_14481  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 387)) ;
    }
  }
  GGS_typedPropertyList var_typedAttributeList_14983 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_15052 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_7 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_15116 (temp_7.readProperty_mPropertyList ()) ;
  while (enumerator_15116.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_15167 = function_typeNameForUsefulEntitiesGraph (enumerator_15116.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 393)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_13871, var_propertyTypeNameForUsefulness_15167 COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 394)) ;
    }
    GGS_unifiedTypeMapEntry var_t_15370 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_15116.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 395)) ;
    GGS_bool var_hasSelector_15434 = GGS_bool (true) ;
    var_typedAttributeList_14983.addAssignOperation (var_t_15370, enumerator_15116.current_name (HERE), enumerator_15116.current_initialization (HERE), GGS_bool (true), var_hasSelector_15434  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 397)) ;
    {
    var_attributeMap_15052.setter_insertKey (enumerator_15116.current_name (HERE), var_t_15370, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 403)) ;
    }
    enumerator_15116.gotoNextObject () ;
  }
  GGS_stringset var_attributesUsedForSorting_15700 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_sortDescriptorListForGeneration var_sortDescriptorList_15772 = GGS_sortDescriptorListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_8 = this ;
  UpEnumerator_sortedListSortDescriptorListAST enumerator_15827 (temp_8.readProperty_mSortDescriptorList ()) ;
  while (enumerator_15827.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_type_15948 ;
    var_attributeMap_15052.method_searchKey (enumerator_15827.current_mSortedAttributeName (HERE), var_type_15948, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 409)) ;
    var_sortDescriptorList_15772.addAssignOperation (var_type_15948, enumerator_15827.current_mSortedAttributeName (HERE).readProperty_string (), enumerator_15827.current_mAscending (HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 410)) ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_attributesUsedForSorting_15700.getter_hasKey (enumerator_15827.current_mSortedAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 411)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_15827.current_mSortedAttributeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_15827.current_mSortedAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 412)).add_operation (GGS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 412)), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 412)) ;
      }
    }
    var_attributesUsedForSorting_15700.plusPlusAssignOperation (enumerator_15827.current_mSortedAttributeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 414)) ;
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = extensionGetter_definition (var_type_15948, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 415)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 415)) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 415)).operator_not (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 415)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_15827.current_mSortedAttributeName (HERE).readProperty_location (), GGS_string ("the @").add_operation (extensionGetter_definition (var_type_15948, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 416)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 416)).add_operation (GGS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 416)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 416)) ;
      }
    }
    enumerator_15827.gotoNextObject () ;
  }
  const GGS_sortedListDeclarationAST temp_13 = this ;
  const GGS_sortedListDeclarationAST temp_14 = this ;
  const GGS_sortedListDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("sorted list ").add_operation (temp_13.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 421)), GGS_sortedListTypeForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_14.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 423)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_15.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 424)), var_typedAttributeList_14983, var_sortDescriptorList_15772, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 420)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sortedListTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                     GGS_string & outArgument_outHeader,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedListTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_17952 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 457)) ;
  const GGS_sortedListTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_elementTypeDefinition_18010 = extensionGetter_definition (temp_1.readProperty_mListElementTypeIndex (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 458)) ;
  const GGS_sortedListTypeForGeneration temp_2 = this ;
  const GGS_sortedListTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, var_selfTypeDefinition_17952.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 461)), temp_3.readProperty_mTypedAttributeList (), var_selfTypeDefinition_17952.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_17952.readProperty_typeForEnumeratedElement (), var_elementTypeDefinition_18010.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 465)) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 459))) ;
  const GGS_sortedListTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_17952.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 469)), var_selfTypeDefinition_17952.readProperty_isConcrete (), var_selfTypeDefinition_17952.readProperty_initializerMap (), var_selfTypeDefinition_17952.readProperty_classFunctionMap (), var_selfTypeDefinition_17952.readProperty_getterMap (), var_selfTypeDefinition_17952.readProperty_setterMap (), var_selfTypeDefinition_17952.readProperty_instanceMethodMap (), var_selfTypeDefinition_17952.readProperty_classMethodMap (), var_selfTypeDefinition_17952.readProperty_readSubscriptMap (), var_selfTypeDefinition_17952.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_17952.readProperty_features (), var_selfTypeDefinition_17952.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_17952.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_17952.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 467))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 467)) ;
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
  UpEnumerator_typedPropertyList enumerator_19434 (temp_0.readProperty_mTypedAttributeList ()) ;
  while (enumerator_19434.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19434.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 493)) ;
    enumerator_19434.gotoNextObject () ;
  }
  const GGS_sortedListTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 495)) ;
  const GGS_sortedListTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 496)) ;
  const GGS_sortedListTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_elementTypeDefinition_19648 = extensionGetter_definition (temp_3.readProperty_mListElementTypeIndex (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 497)) ;
  const GGS_sortedListTypeForGeneration temp_4 = this ;
  const GGS_sortedListTypeForGeneration temp_5 = this ;
  const GGS_sortedListTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 499)), temp_5.readProperty_mTypedAttributeList (), temp_6.readProperty_mSortDescriptorList (), var_elementTypeDefinition_19648.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-sorted-list.galgas3", 502)), extensionGetter_generateCppObjectComparison (var_elementTypeDefinition_19648.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 503)) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 498))) ;
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
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mSharedArray.setCapacity (16) ; // Build\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_sortedListWithValue (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_3542_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3542 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_3542.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_3542.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 82)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_3542_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 82)).stringValue ()) ;
      enumerator_3542.gotoNextObject () ;
      if (enumerator_3542.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_3542_IDX.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = init (nullptr COMMA_THERE) ;\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_3896_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3896 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_3896.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_3896_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 89)).stringValue ()) ;
      enumerator_3896.gotoNextObject () ;
      if (enumerator_3896.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_3896_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  result.plusPlusAssignOperation (newElement COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_4258_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4258 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_4258.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4258.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 101)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_4258_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 101)).stringValue ()) ;
      enumerator_4258.gotoNextObject () ;
      if (enumerator_4258.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_4258_IDX.increment () ;
    }
  }
  result.appendString ("\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_4550_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4550 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_4550.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_4550_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue ()) ;
      enumerator_4550.gotoNextObject () ;
      if (enumerator_4550.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_4550_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  plusPlusAssignOperation (newElement COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_4882_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4882 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_4882.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4882.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 119)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_4882_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 119)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_4882.gotoNextObject () ;
      index_4882_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * /* inCompiler */\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_5188_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5188 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_5188.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_5188_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 125)).stringValue ()) ;
      enumerator_5188.gotoNextObject () ;
      if (enumerator_5188.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_5188_IDX.increment () ;
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
  GGS_uint index_6237_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6237 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_6237.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6237.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 150)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_6237_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 150)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_6237.gotoNextObject () ;
      index_6237_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  bool found = false ;\n  if (isValid ()) {\n    if (count () == 0) {\n      inCompiler->onTheFlyRunTimeError (\"'popSmallest' method invoked on an empty list\" COMMA_THERE) ;\n    }else{\n") ;
  GGS_uint index_6679_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6679 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_6679.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_6679_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 160)).stringValue ()) ;
      result.appendString (" = mSharedArray (0 COMMA_HERE).mProperty_") ;
      result.appendString (enumerator_6679.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 160)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_6679.gotoNextObject () ;
      index_6679_IDX.increment () ;
    }
  }
  result.appendString ("      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;\n      found = true ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_6953_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6953 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_6953.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_6953_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 168)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_6953.gotoNextObject () ;
      index_6953_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popGreatest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_7267_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7267 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_7267.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7267.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 177)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_7267_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 177)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_7267.gotoNextObject () ;
      index_7267_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  bool found = false ;\n  if (isValid ()) {\n    if (count () == 0) {\n      inCompiler->onTheFlyRunTimeError (\"'popGreatest' method invoked on an empty list\" COMMA_THERE) ;\n    }else{\n") ;
  GGS_uint index_7709_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7709 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_7709.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_7709_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue ()) ;
      result.appendString (" = mSharedArray.lastObject (HERE).mProperty_") ;
      result.appendString (enumerator_7709.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_7709.gotoNextObject () ;
      index_7709_IDX.increment () ;
    }
  }
  result.appendString ("      mSharedArray.removeLastObject (HERE) ;\n      found = true ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_7975_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7975 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_7975.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_7975_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 195)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_7975.gotoNextObject () ;
      index_7975_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_smallest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_8286_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8286 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_8286.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8286.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 204)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_8286_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 204)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_8286.gotoNextObject () ;
      index_8286_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  bool found = false ;\n  if (isValid ()) {\n    if (count () == 0) {\n      inCompiler->onTheFlyRunTimeError (\"'smallest' method invoked on an empty list\" COMMA_THERE) ;\n    }else{\n") ;
  GGS_uint index_8721_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8721 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_8721.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_8721_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 214)).stringValue ()) ;
      result.appendString (" = mSharedArray (0 COMMA_HERE).mProperty_") ;
      result.appendString (enumerator_8721.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 214)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_8721.gotoNextObject () ;
      index_8721_IDX.increment () ;
    }
  }
  result.appendString ("      found = true ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_8939_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8939 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_8939.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_8939_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 221)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_8939.gotoNextObject () ;
      index_8939_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_greatest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_9227_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9227 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_9227.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9227.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 230)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_9227_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 230)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_9227.gotoNextObject () ;
      index_9227_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  bool found = false ;\n  if (isValid ()) {\n    if (count () == 0) {\n      inCompiler->onTheFlyRunTimeError (\"'greatest' method invoked on an empty list\" COMMA_THERE) ;\n    }else{\n") ;
  GGS_uint index_9662_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9662 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_9662.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_9662_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 240)).stringValue ()) ;
      result.appendString (" = mSharedArray.lastObject (HERE).mProperty_") ;
      result.appendString (enumerator_9662.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 240)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_9662.gotoNextObject () ;
      index_9662_IDX.increment () ;
    }
  }
  result.appendString ("      found = true ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_9883_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9883 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_9883.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_9883_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 247)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_9883.gotoNextObject () ;
      index_9883_IDX.increment () ;
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
  GGS_uint index_11201_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_11201 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_11201.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11201.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 281)).stringValue ()) ;
      result.appendString (" DownEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_11201.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 281)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mElementArray (mIndex COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_11201.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 282)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_11201.gotoNextObject () ;
      index_11201_IDX.increment () ;
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
  GGS_uint index_12359_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_12359 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_12359.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_12359.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 302)).stringValue ()) ;
      result.appendString (" UpEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_12359.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 302)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mElementArray (mIndex COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_12359.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 303)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_12359.gotoNextObject () ;
      index_12359_IDX.increment () ;
    }
  }
  result.appendString ("\n\n") ;
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
  GGS_lstring var_key_14133 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 368)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_14133, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 369)) ;
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
  result_result = GGS_string ("extern @").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 375)) ;
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
  GGS_getterMap var_getterMap_15209 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_15209, inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 389)) ;
  }
  GGS_setterMap var_setterMap_15291 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_15334 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_15403 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GGS_externTypeDeclarationAST temp_0 = this ;
  UpEnumerator_externTypeConstructorList enumerator_15452 (temp_0.readProperty_externTypeInitializerList ()) ;
  while (enumerator_15452.hasCurrentObject ()) {
    GGS_functionSignature var_arguments_15604 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_typeNameFormalParameterNameList enumerator_15655 (enumerator_15452.current (HERE).readProperty_mParameterList ()) ;
    while (enumerator_15655.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentTypeEntry_15745 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15655.current (HERE).readProperty_mFormalParameterTypeName (), var_argumentTypeEntry_15745, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 400)) ;
      }
      var_arguments_15604.addAssignOperation (enumerator_15655.current (HERE).readProperty_mFormalSelector (), var_argumentTypeEntry_15745, enumerator_15655.current (HERE).readProperty_mFormalParameterName ().readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 401)) ;
      enumerator_15655.gotoNextObject () ;
    }
    const GGS_externTypeDeclarationAST temp_1 = this ;
    GGS_lstring var_initializerName_15906 = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (enumerator_15452.current (HERE).readProperty_mParameterList (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 404)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    var_initializerMap_15403.setter_insertKey (var_initializerName_15906, var_arguments_15604, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 405)) ;
    }
    enumerator_15452.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_2 = this ;
  UpEnumerator_externTypeGetterList enumerator_16130 (temp_2.readProperty_mExternTypeGetterList ()) ;
  while (enumerator_16130.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_returnedTypeEntry_16230 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16130.current_mResultTypeName (HERE), var_returnedTypeEntry_16230, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 409)) ;
    }
    GGS_functionSignature var_arguments_16288 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_typeNameFormalParameterNameList enumerator_16356 (enumerator_16130.current_mParameterList (HERE)) ;
    while (enumerator_16356.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentTypeEntry_16461 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16356.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_16461, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 413)) ;
      }
      var_arguments_16288.addAssignOperation (enumerator_16356.current_mFormalSelector (HERE), var_argumentTypeEntry_16461, enumerator_16356.current_mFormalParameterName (HERE).readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 414)) ;
      enumerator_16356.gotoNextObject () ;
    }
    {
    var_getterMap_15209.setter_insertKey (enumerator_16130.current_mGetterName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas3", 419)), var_arguments_16288, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 421)), GGS_bool (true), var_returnedTypeEntry_16230, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas3", 424)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 417)) ;
    }
    enumerator_16130.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_3 = this ;
  UpEnumerator_externTypeSetterList enumerator_16958 (temp_3.readProperty_mExternTypeSetterList ()) ;
  while (enumerator_16958.hasCurrentObject ()) {
    GGS_formalParameterSignature var_routineSignature_17049 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalParameterListAST enumerator_17170 (enumerator_16958.current_mFormalParameterList (HERE)) ;
    while (enumerator_17170.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_17302 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17170.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_17302, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 432)) ;
      }
      var_routineSignature_17049.addAssignOperation (enumerator_17170.current_mFormalSelector (HERE), var_parameterTypeIndex_17302, enumerator_17170.current_mFormalArgumentPassingMode (HERE), enumerator_17170.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 436)) ;
      enumerator_17170.gotoNextObject () ;
    }
    {
    var_setterMap_15291.setter_insertKey (enumerator_16958.current_mSetterName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas3", 441)), var_routineSignature_17049, GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas3", 444)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 439)) ;
    }
    enumerator_16958.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_4 = this ;
  UpEnumerator_externTypeMethodList enumerator_17779 (temp_4.readProperty_mExternTypeMethodList ()) ;
  while (enumerator_17779.hasCurrentObject ()) {
    GGS_formalParameterSignature var_routineSignature_17844 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalParameterListAST enumerator_17990 (enumerator_17779.current_mFormalParameterList (HERE)) ;
    while (enumerator_17990.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_18101 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17990.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_18101, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 452)) ;
      }
      var_routineSignature_17844.addAssignOperation (enumerator_17990.current_mFormalSelector (HERE), var_parameterTypeIndex_18101, enumerator_17990.current_mFormalArgumentPassingMode (HERE), enumerator_17990.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 456)) ;
      enumerator_17990.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_15334.setter_insertKey (enumerator_17779.current_mMethodName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas3", 461)), var_routineSignature_17844, enumerator_17779.current_mDeclarationLocation (HERE), GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas3", 465)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 459)) ;
    }
    enumerator_17779.gotoNextObject () ;
  }
  GGS_typeFeatures var_features_18566 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  {
  const GGS_externTypeDeclarationAST temp_5 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_5.readProperty_mExternTypeName (), var_features_18566, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 470)) ;
  }
  const GGS_externTypeDeclarationAST temp_6 = this ;
  const GGS_externTypeDeclarationAST temp_7 = this ;
  const GGS_externTypeDeclarationAST temp_8 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_18818 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_6.readProperty_mExternTypeName (), temp_7.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas3", 483)), GGS_typeKindEnum::class_func_externType (SOURCE_FILE ("declaration-type-extern.galgas3", 484)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_15403, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_15209, var_setterMap_15291, var_instanceMethodMap_15334, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas3", 495)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_18566, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas3", 501)), GGS_string ("externtype-").add_operation (temp_8.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-extern.galgas3", 502)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 502)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-extern.galgas3", 503)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_18818.readProperty_typeName (), var_typeDefinition_18818, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 505)) ;
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
  GGS_lstring var_nameForUsefulness_20695 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 526)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_20695, var_nameForUsefulness_20695, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 527)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externTypeDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_20695  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 529)) ;
    }
  }
  const GGS_externTypeDeclarationAST temp_3 = this ;
  UpEnumerator_externTypeConstructorList enumerator_20975 (temp_3.readProperty_externTypeInitializerList ()) ;
  while (enumerator_20975.hasCurrentObject ()) {
    const GGS_externTypeDeclarationAST temp_4 = this ;
    GGS_lstring var_initializerNameForUsefulness_21012 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mExternTypeName (), extensionGetter_initializerSignature (enumerator_20975.current (HERE).readProperty_mParameterList (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 535)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 533)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_21012, var_initializerNameForUsefulness_21012, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 537)) ;
    }
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_21012, var_nameForUsefulness_20695 COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 538)) ;
    }
    enumerator_20975.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_5 = this ;
  const GGS_externTypeDeclarationAST temp_6 = this ;
  const GGS_externTypeDeclarationAST temp_7 = this ;
  const GGS_externTypeDeclarationAST temp_8 = this ;
  const GGS_externTypeDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("extern type ").add_operation (temp_5.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 542)), GGS_externTypeDeclarationForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_6.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 544)), temp_7.readProperty_mExternTypeName ().readProperty_string (), temp_8.readProperty_mCppPreDeclarationCode (), temp_9.readProperty_mCppClassCode (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 541)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GGS_string & outArgument_outHeader,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_22352 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 566)) ;
  const GGS_externTypeDeclarationForGeneration temp_1 = this ;
  const GGS_externTypeDeclarationForGeneration temp_2 = this ;
  const GGS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, var_selfTypeDefinition_22352.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 569)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 567))) ;
  const GGS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_22352.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 575)), var_selfTypeDefinition_22352.readProperty_isConcrete (), var_selfTypeDefinition_22352.readProperty_initializerMap (), var_selfTypeDefinition_22352.readProperty_classFunctionMap (), var_selfTypeDefinition_22352.readProperty_getterMap (), var_selfTypeDefinition_22352.readProperty_setterMap (), var_selfTypeDefinition_22352.readProperty_instanceMethodMap (), var_selfTypeDefinition_22352.readProperty_classMethodMap (), var_selfTypeDefinition_22352.readProperty_readSubscriptMap (), var_selfTypeDefinition_22352.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_22352.readProperty_features (), var_selfTypeDefinition_22352.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_22352.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_22352.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 573))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 573)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST supportsCollectionValue'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_stringsetPredefinedTypeAST::getter_supportsCollectionValue (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ cPtr_stringsetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterListAST_5D_ result_result ; // Returned variable
  GGS__5B_formalInputParameterListAST_5D_ temp_0 = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 36)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 36)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_stringsetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 42))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_stringsetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 48)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 49)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 48)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 49)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 49)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 50)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 49)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 50)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 50)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 51)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 50)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 51)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 51)).operator_or (GGS_typeFeatures::class_func_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 52)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 51)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringsetPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptySet"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 60)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 67)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithStringList"), GGS_string ("stringlist"), GGS_string ("inStringList"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 76)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithLStringList"), GGS_string ("lstringlist"), GGS_string ("inLStringList"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 85)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringsetPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_setterMap & outArgument_outSetterMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringType_3941 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringType_3941, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 100)) ;
  }
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  outArgument_outSetterMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeKey"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 103)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 104)), GGS_formalParameterSignature::class_func_listWithValue (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 105)), var_stringType_3941, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 105)), GGS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 105)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 107)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 102)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inValue"), GGS_string ("insert"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 110)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringsetPredefinedTypeAST getEnumerationList'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getEnumerationList (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GGS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                 GGS_string & outArgument_outEnumeratedType,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_4858 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringTypeIndex_4858, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 125)) ;
  }
  outArgument_outEnumerationList = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumerationList.addAssignOperation (var_stringTypeIndex_4858, GGS_string ("key")  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 127)) ;
  outArgument_outEnumeratedType = GGS_string ("string") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringsetPredefinedTypeAST getAddAssignArgumentList'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getAddAssignArgumentList (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GGS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_5345 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("stringset"), var_stringTypeIndex_5345, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 135)) ;
  }
  GGS_functionSignature temp_0 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 136)) ;
  temp_0.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 136)), var_stringTypeIndex_5345, GGS_string ("inString"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 136)) ;
  outArgument_outAddAssignArgumentList = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringsetPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 143)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasKey"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 144)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 151)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("anyString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 159)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringList"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas3", 167)) ;
  }
}

#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "LexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "galgas3",
  "galgas4",
  "galgasTemplate",
  "galgas4project",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a GALGAS 3 source file",
  "a GALGAS 4 source file",
  "a GALGAS Template source file",
  "a GALGAS project source file",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "4.0.0" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GGS_string var_creationProjectName_1418 = GGS_string (gOption_galgas_5F_cli_5F_options_create_5F_project.readProperty_value ()) ;
    {
    routine_projectCreation_3F_ (var_creationProjectName_1418, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 27)) ;
    }
  }
  {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_printPredefinedLexicalActions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 34)) ;
        }
      }
    }
  }
  {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, GGS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        routine_updateLIBPMatPath_3F_ (GGS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.readProperty_value ()), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 42)) ;
        }
      }
    }
  }
  {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (gOption_galgas_5F_cli_5F_options_check_5F_big_5F_int.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        {
        routine_checkBigInteger (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 52)) ;
        }
      }
    }
  }
  {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        {
        routine_displayUnicodeLexicalTestFunctions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 62)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_parentDirectory_3029 = constinArgument_inSourceFile.readProperty_string ().getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas3", 77)).getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas3", 77)) ;
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas3", 78)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("galgas4project"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 78)) ;
  GGS_stringlist var_candidateProjectFiles_3125 = var_parentDirectory_3029.getter_regularFilesWithExtensions (GGS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas3", 78)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_candidateProjectFiles_3125.getter_count (SOURCE_FILE ("galgasProgram.galgas3", 79)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GGS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 80)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, var_candidateProjectFiles_3125.getter_count (SOURCE_FILE ("galgasProgram.galgas3", 81)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_s_3401 = GGS_string ("several project files in source file parent directory:") ;
        UpEnumerator_stringlist enumerator_3471 (var_candidateProjectFiles_3125) ;
        while (enumerator_3471.hasCurrentObject ()) {
          var_s_3401.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_3471.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas3", 84)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 84)) ;
          enumerator_3471.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_3401, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 86)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_projectFilePath_3588 = var_parentDirectory_3029.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas3", 88)).add_operation (var_candidateProjectFiles_3125.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas3", 88)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas3", 88)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (GGS_lstring::init_21__21_ (var_projectFilePath_3588, constinArgument_inSourceFile.readProperty_location (), inCompiler COMMA_HERE), GGS_bool (false), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 89)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_1'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__31_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_parentDirectory_4188 = constinArgument_inSourceFile.readProperty_string ().getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas3", 103)).getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas3", 103)) ;
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas3", 104)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("galgas4project"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 104)) ;
  GGS_stringlist var_candidateProjectFiles_4284 = var_parentDirectory_4188.getter_regularFilesWithExtensions (GGS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas3", 104)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_candidateProjectFiles_4284.getter_count (SOURCE_FILE ("galgasProgram.galgas3", 105)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GGS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 106)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, var_candidateProjectFiles_4284.getter_count (SOURCE_FILE ("galgasProgram.galgas3", 107)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_s_4560 = GGS_string ("several project files in source file parent directory:") ;
        UpEnumerator_stringlist enumerator_4630 (var_candidateProjectFiles_4284) ;
        while (enumerator_4630.hasCurrentObject ()) {
          var_s_4560.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_4630.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas3", 110)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 110)) ;
          enumerator_4630.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_4560, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 112)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_projectFilePath_4747 = var_parentDirectory_4188.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas3", 114)).add_operation (var_candidateProjectFiles_4284.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas3", 114)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas3", 114)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (GGS_lstring::init_21__21_ (var_projectFilePath_4747, constinArgument_inSourceFile.readProperty_location (), inCompiler COMMA_HERE), GGS_bool (true), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 115)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_2'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__32_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListAST joker_5334 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_5334  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 129)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_3'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__33_ (const GGS_lstring constinArgument_inProjectSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (constinArgument_inProjectSourceFile, GGS_bool (true), GGS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas3", 151)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  GenericUniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "galgas3") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_33_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_33_Grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_33_Grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_33_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgas4") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__31_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_34_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_34_Grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_34_Grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_34_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgasTemplate") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__32_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_templateGrammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_templateGrammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgas4project") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__33_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_33_ProjectGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_33_ProjectGrammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_33_ProjectGrammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_33_ProjectGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

