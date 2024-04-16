#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-25.h"

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
  GALGAS_bool var_hasAssociatedValues_18126 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_18163 (temp_0.readProperty_mConstantList (), EnumerationOrder::up) ;
  bool bool_1 = var_hasAssociatedValues_18126.operator_not (SOURCE_FILE ("type-enum.galgas", 479)).isValidAndTrue () ;
  if (enumerator_18163.hasCurrentObject () && bool_1) {
    while (enumerator_18163.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_18126 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_18163.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 480)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_18163.gotoNextObject () ;
      if (enumerator_18163.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_18126.operator_not (SOURCE_FILE ("type-enum.galgas", 479)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_18322 (temp_2.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_18322.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapEntryList enumerator_18382 (enumerator_18322.current_mAssociatedValueTypeList (HERE), EnumerationOrder::up) ;
    while (enumerator_18382.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_18382.current_mEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 484)) ;
      enumerator_18382.gotoNextObject () ;
    }
    enumerator_18322.gotoNextObject () ;
  }
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_18490 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 487)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, var_selfTypeDefinition_18490.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_18490.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 490)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_18126, extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_18490.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 493)) COMMA_SOURCE_FILE ("type-enum.galgas", 488))) ;
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
  GALGAS_bool var_hasAssociatedValues_19140 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_19177 (temp_0.readProperty_mConstantList (), EnumerationOrder::up) ;
  bool bool_1 = var_hasAssociatedValues_19140.operator_not (SOURCE_FILE ("type-enum.galgas", 505)).isValidAndTrue () ;
  if (enumerator_19177.hasCurrentObject () && bool_1) {
    while (enumerator_19177.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_19140 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_19177.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 506)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_19177.gotoNextObject () ;
      if (enumerator_19177.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_19140.operator_not (SOURCE_FILE ("type-enum.galgas", 505)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 508)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_19392 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 509)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_19392.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_19392.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 512)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_19140, extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_19392.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 515)) COMMA_SOURCE_FILE ("type-enum.galgas", 510))) ;
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
  GALGAS_lstring var_key_14040 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 367)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_14040, temp_2, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 368)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_externTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("extern @").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 374)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                              const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                              const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                              const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap var_getterMap_15058 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_15058, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 387)) ;
  }
  GALGAS_setterMap var_setterMap_15138 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_15180 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_initializerMap var_initializerMap_15250 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  cEnumerator_externTypeConstructorList enumerator_15298 (temp_0.readProperty_externTypeInitializerList (), EnumerationOrder::up) ;
  while (enumerator_15298.hasCurrentObject ()) {
    GALGAS_functionSignature var_arguments_15448 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_15515 (enumerator_15298.current (HERE).readProperty_mParameterList (), EnumerationOrder::up) ;
    while (enumerator_15515.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_15632 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15515.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_15632, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 398)) ;
      }
      var_arguments_15448.addAssign_operation (enumerator_15515.current_mFormalSelector (HERE), var_argumentTypeEntry_15632, enumerator_15515.current_mFormalParameterName (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-extern.galgas", 399)) ;
      enumerator_15515.gotoNextObject () ;
    }
    const GALGAS_externTypeDeclarationAST temp_1 = this ;
    GALGAS_lstring var_initializerName_15772 = GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (enumerator_15298.current (HERE).readProperty_mParameterList (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 402)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    var_initializerMap_15250.setter_insertKey (var_initializerName_15772, var_arguments_15448, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 403)) ;
    }
    enumerator_15298.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  cEnumerator_externTypeGetterList enumerator_16192 (temp_2.readProperty_mExternTypeGetterList (), EnumerationOrder::up) ;
  while (enumerator_16192.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_16292 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16192.current_mResultTypeName (HERE), var_returnedTypeEntry_16292, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 414)) ;
    }
    GALGAS_functionSignature var_arguments_16349 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_16416 (enumerator_16192.current_mParameterList (HERE), EnumerationOrder::up) ;
    while (enumerator_16416.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_16521 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16416.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_16521, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 418)) ;
      }
      var_arguments_16349.addAssign_operation (enumerator_16416.current_mFormalSelector (HERE), var_argumentTypeEntry_16521, enumerator_16416.current_mFormalParameterName (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-extern.galgas", 419)) ;
      enumerator_16416.gotoNextObject () ;
    }
    {
    var_getterMap_15058.setter_insertKey (enumerator_16192.current_mGetterName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-extern.galgas", 424)), var_arguments_16349, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 426)), GALGAS_bool (true), var_returnedTypeEntry_16292, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 429)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 422)) ;
    }
    enumerator_16192.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  cEnumerator_externTypeSetterList enumerator_17014 (temp_3.readProperty_mExternTypeSetterList (), EnumerationOrder::up) ;
  while (enumerator_17014.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_17105 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator_formalParameterListAST enumerator_17225 (enumerator_17014.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
    while (enumerator_17225.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_17357 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17225.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_17357, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 437)) ;
      }
      var_routineSignature_17105.addAssign_operation (enumerator_17225.current_mFormalSelector (HERE), var_parameterTypeIndex_17357, enumerator_17225.current_mFormalArgumentPassingMode (HERE), enumerator_17225.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 441)) ;
      enumerator_17225.gotoNextObject () ;
    }
    {
    var_setterMap_15138.setter_insertKey (enumerator_17014.current_mSetterName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-extern.galgas", 446)), var_routineSignature_17105, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 449)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 444)) ;
    }
    enumerator_17014.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  cEnumerator_externTypeMethodList enumerator_17830 (temp_4.readProperty_mExternTypeMethodList (), EnumerationOrder::up) ;
  while (enumerator_17830.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_17895 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator_formalParameterListAST enumerator_18041 (enumerator_17830.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
    while (enumerator_18041.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_18152 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18041.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_18152, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 457)) ;
      }
      var_routineSignature_17895.addAssign_operation (enumerator_18041.current_mFormalSelector (HERE), var_parameterTypeIndex_18152, enumerator_18041.current_mFormalArgumentPassingMode (HERE), enumerator_18041.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 461)) ;
      enumerator_18041.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_15180.setter_insertKey (enumerator_17830.current_mMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-extern.galgas", 466)), var_routineSignature_17895, enumerator_17830.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 470)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 464)) ;
    }
    enumerator_17830.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  const GALGAS_externTypeDeclarationAST temp_6 = this ;
  const GALGAS_externTypeDeclarationAST temp_7 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_18644 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_5.readProperty_mExternTypeName (), temp_6.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-extern.galgas", 479)), GALGAS_typeKindEnum::class_func_externType (SOURCE_FILE ("type-extern.galgas", 480)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_15250, GALGAS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_15058, var_setterMap_15138, var_instanceMethodMap_15180, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("type-extern.galgas", 493)), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-extern.galgas", 497)), GALGAS_string ("externtype-").add_operation (temp_7.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 498)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-extern.galgas", 499)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_18644.readProperty_typeName (), var_typeDefinition_18644, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 501)) ;
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
  GALGAS_lstring var_nameForUsefulness_20498 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 522)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_20498, var_nameForUsefulness_20498, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 523)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 526)), GALGAS_externTypeDeclarationForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 528)), temp_3.readProperty_mExternTypeName ().readProperty_string (), temp_4.readProperty_mCppPreDeclarationCode (), temp_5.readProperty_mCppClassCode (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 525)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_21615 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 550)) ;
  const GALGAS_externTypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_2 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21615.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 553)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("type-extern.galgas", 551))) ;
  const GALGAS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_21615.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 559)), var_selfTypeDefinition_21615.readProperty_isConcrete (), var_selfTypeDefinition_21615.readProperty_initializerMap (), var_selfTypeDefinition_21615.readProperty_classFunctionMap (), var_selfTypeDefinition_21615.readProperty_getterMap (), var_selfTypeDefinition_21615.readProperty_setterMap (), var_selfTypeDefinition_21615.readProperty_instanceMethodMap (), var_selfTypeDefinition_21615.readProperty_classMethodMap (), var_selfTypeDefinition_21615.readProperty_optionalMethodMap (), var_selfTypeDefinition_21615.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_21615.readProperty_features (), var_selfTypeDefinition_21615.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_21615.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_21615.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-extern.galgas", 557))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 557)) ;
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
  GALGAS_lstring var_key_4736 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 119)), temp_1.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4736, temp_2, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 120)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4736, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 121)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-graph.galgas", 121)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                         const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeEntry_5808 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeEntry_5808, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 136)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeEntry_5932 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_5932, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 141)) ;
  }
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_6055 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mGraphTypeName (), var_graphTypeEntry_6055, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 146)) ;
  }
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_6195 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_6195, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 151)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringListTypeEntry_6336 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_6336, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 156)) ;
  }
  GALGAS_getterMap var_getterMap_6424 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6424, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 161)) ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_6460 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_setterMap var_setterMap_6499 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6539 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterSignature var_formalParameterList_6628 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 168)), var_associatedListTypeEntry_6195, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 170)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 167)) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 173)), var_lstringListTypeEntry_6336, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 175)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 172)) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 178)), var_associatedListTypeEntry_6195, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 180)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 177)) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 183)), var_lstringListTypeEntry_6336, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 185)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 182)) ;
  {
  var_instanceMethodMap_6539.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("topologicalSort"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 188)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 189)), var_formalParameterList_6628, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 191)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 193)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 187)) ;
  }
  {
  var_instanceMethodMap_6539.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 197)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 198)), var_formalParameterList_6628, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 200)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 202)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 196)) ;
  }
  var_formalParameterList_6628 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 209)), var_associatedListTypeEntry_6195, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 211)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 208)) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 214)), var_lstringListTypeEntry_6336, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-graph.galgas", 216)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 213)) ;
  {
  var_instanceMethodMap_6539.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("circularities"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 219)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 220)), var_formalParameterList_6628, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 222)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 224)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 218)) ;
  }
  {
  var_instanceMethodMap_6539.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 228)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 229)), var_formalParameterList_6628, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 231)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 233)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 227)) ;
  }
  {
  var_instanceMethodMap_6539.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 237)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 238)), var_formalParameterList_6628, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 240)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 242)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 236)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("nodeList"), GALGAS_string::makeEmptyString (), temp_2.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 247)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("reversedGraph"), GALGAS_string::makeEmptyString (), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 256)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 265)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 274)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 283)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("graphviz"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 292)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 301)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 311)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 321)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("lkeyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 330)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("edges"), GALGAS_string::makeEmptyString (), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 339)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 348)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6424, ioArgument_ioTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 362)) ;
  }
  {
  var_classFunctionMap_6460.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("emptyGraph"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 373)), inCompiler COMMA_HERE), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_graphTypeEntry_6055, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 372)) ;
  }
  var_formalParameterList_6628 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 381)), var_lstringTypeEntry_5932, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 383)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 380)) ;
  cEnumerator_functionSignature enumerator_13009 (extensionGetter_definition (var_associatedListTypeEntry_6195, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 385)).readProperty_addAssignOperatorArguments (), EnumerationOrder::up) ;
  while (enumerator_13009.hasCurrentObject ()) {
    var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 387)), enumerator_13009.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 389)), enumerator_13009.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 386)) ;
    enumerator_13009.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_5 = this ;
  cEnumerator_graphInsertModifierList enumerator_13283 (temp_5.readProperty_mInsertModifierList (), EnumerationOrder::up) ;
  while (enumerator_13283.hasCurrentObject ()) {
    {
    var_setterMap_6499.setter_insertOrReplace (enumerator_13283.current_mInsertModifierName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 396)), var_formalParameterList_6628, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-graph.galgas", 399)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 394)) ;
    }
    enumerator_13283.gotoNextObject () ;
  }
  {
  var_setterMap_6499.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 406)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 407)), GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-graph.galgas", 410)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 405)) ;
  }
  var_formalParameterList_6628 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 415)), var_stringTypeEntry_5808, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 415)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 415)) ;
  {
  var_setterMap_6499.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeEdgesToNode"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 417)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 418)), var_formalParameterList_6628, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-graph.galgas", 421)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 416)) ;
  }
  var_formalParameterList_6628 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 427)), var_lstringTypeEntry_5932, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 427)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 427)) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 428)), var_lstringTypeEntry_5932, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 428)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 428)) ;
  {
  var_setterMap_6499.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("addEdge"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 430)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 431)), var_formalParameterList_6628, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-graph.galgas", 434)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 429)) ;
  }
  var_formalParameterList_6628 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6628.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 440)), var_lstringTypeEntry_5932, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-graph.galgas", 440)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 440)) ;
  {
  var_setterMap_6499.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("noteNode"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 442)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-graph.galgas", 443)), var_formalParameterList_6628, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("type-graph.galgas", 446)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 441)) ;
  }
  GALGAS_initializerMap var_initializerMap_15338 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_constructorPropertyTypeList_15383 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_graphDeclarationAST temp_6 = this ;
  var_initializerMap_15338.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_15383, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 453)), temp_6.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_15383, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 452)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_mGraphTypeName (), GALGAS_bool (false), var_initializerMap_15338, var_getterMap_6424, var_setterMap_6499, var_instanceMethodMap_6539, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 457)) ;
  }
  const GALGAS_graphDeclarationAST temp_8 = this ;
  const GALGAS_graphDeclarationAST temp_9 = this ;
  const GALGAS_graphDeclarationAST temp_10 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_16013 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_8.readProperty_mGraphTypeName (), temp_9.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-graph.galgas", 477)), GALGAS_typeKindEnum::class_func_graphType (SOURCE_FILE ("type-graph.galgas", 478)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_15338, var_classFunctionMap_6460, var_getterMap_6424, var_setterMap_6499, var_instanceMethodMap_6539, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), GALGAS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 491)), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-graph.galgas", 495)), GALGAS_string ("graph-").add_operation (temp_10.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-graph.galgas", 497)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_16013.readProperty_typeName (), var_typeDefinition_16013, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 499)) ;
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
  GALGAS_lstring var_nameForUsefulness_17773 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 516)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17773, var_nameForUsefulness_17773, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 517)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_17927 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 518)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17773, var_associatedTypeNameForUsefulness_17927 COMMA_SOURCE_FILE ("type-graph.galgas", 519)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_18123 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 521)) ;
  const GALGAS_graphDeclarationAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_18199 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 522)) ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  const GALGAS_graphDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListElementTypeEntry_18293 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_4.readProperty_mAssociatedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 524)), temp_5.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 523)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_associatedListTypeEntry_18199, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 526)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("type-graph.galgas", 526)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_graphDeclarationAST temp_7 = this ;
      const GALGAS_graphDeclarationAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_8.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 527)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 527)), fixItArray9  COMMA_SOURCE_FILE ("type-graph.galgas", 527)) ;
    }
  }
  GALGAS_stringset temp_10 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 530)) ;
  temp_10.enterElement (GALGAS_string ("noteNode"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 530)) ;
  temp_10.enterElement (GALGAS_string ("addArc"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 530)) ;
  GALGAS_stringset var_reservedModifierNames_18707 = temp_10 ;
  const GALGAS_graphDeclarationAST temp_11 = this ;
  cEnumerator_graphInsertModifierList enumerator_18782 (temp_11.readProperty_mInsertModifierList (), EnumerationOrder::up) ;
  while (enumerator_18782.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_reservedModifierNames_18707.getter_hasKey (enumerator_18782.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-graph.galgas", 532)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_18782.current_mInsertModifierName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_18782.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 533)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 533)), fixItArray13  COMMA_SOURCE_FILE ("type-graph.galgas", 533)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_18782.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 535)) ;
    }
    enumerator_18782.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_14 = this ;
  const GALGAS_graphDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_14.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 539)), GALGAS_graphDeclarationForGeneration::init_21__21__21__21_ (var_graphTypeEntry_18123, var_associatedListTypeEntry_18199, var_associatedListElementTypeEntry_18293, temp_15.readProperty_mInsertModifierList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 538)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_20061 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 563)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, var_selfTypeDefinition_20061.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 566)) COMMA_SOURCE_FILE ("type-graph.galgas", 564))) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_20061.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 570)), var_selfTypeDefinition_20061.readProperty_isConcrete (), var_selfTypeDefinition_20061.readProperty_initializerMap (), var_selfTypeDefinition_20061.readProperty_classFunctionMap (), var_selfTypeDefinition_20061.readProperty_getterMap (), var_selfTypeDefinition_20061.readProperty_setterMap (), var_selfTypeDefinition_20061.readProperty_instanceMethodMap (), var_selfTypeDefinition_20061.readProperty_classMethodMap (), var_selfTypeDefinition_20061.readProperty_optionalMethodMap (), var_selfTypeDefinition_20061.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20061.readProperty_features (), var_selfTypeDefinition_20061.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_20061.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20061.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-graph.galgas", 568))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 568)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 593)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 594)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 595)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = this ;
  const GALGAS_graphDeclarationForGeneration temp_4 = this ;
  const GALGAS_graphDeclarationForGeneration temp_5 = this ;
  const GALGAS_graphDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 598)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("type-graph.galgas", 596))) ;
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
  GALGAS_lstring var_key_5208 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 139)), temp_1.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_listDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5208, temp_2, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 140)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5362 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_5362.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_5362.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 142)), enumerator_5362.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-list.galgas", 142)) ;
    }
    enumerator_5362.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typedPropertyList var_typedAttributeList_6262 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6359 (temp_0.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_6359.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_6359.current_initialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 161)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6359.current_name (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 162)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_6574 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6359.current_typeName (HERE), var_attributeTypeIndex_6574, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 164)) ;
    }
    var_typedAttributeList_6262.addAssign_operation (var_attributeTypeIndex_6574, enumerator_6359.current_name (HERE), enumerator_6359.current_initialization (HERE), GALGAS_bool (true), enumerator_6359.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 165)) ;
    enumerator_6359.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_uintType_6789 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("uint"), var_uintType_6789, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 168)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_6870 ;
  {
  const GALGAS_listDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mListTypeName (), var_listTypeIndex_6870, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 170)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_7063 ;
  {
  const GALGAS_listDeclarationAST temp_4 = this ;
  const GALGAS_listDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_4.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 173)), temp_5.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_listElementTypeIndex_7063, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 172)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_7147 = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_7199 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_7265 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_7333 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  cEnumerator_typedPropertyList enumerator_7412 (var_typedAttributeList_6262, EnumerationOrder::up) ;
  while (enumerator_7412.hasCurrentObject ()) {
    GALGAS_string temp_6 ;
    const enumGalgasBool test_7 = enumerator_7412.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_7) {
      temp_6 = enumerator_7412.current_name (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_7) {
      temp_6 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_7459 = temp_6 ;
    var_enumerationDescriptor_7147.addAssign_operation (enumerator_7412.current_typeEntry (HERE), enumerator_7412.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 183)) ;
    var_constructorAttributeTypeList_7199.addAssign_operation (var_selector_7459.getter_nowhere (SOURCE_FILE ("type-list.galgas", 185)), enumerator_7412.current_typeEntry (HERE), enumerator_7412.current_name (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-list.galgas", 184)) ;
    var_setterOutputFormalArgumentList_7265.addAssign_operation (var_selector_7459.getter_nowhere (SOURCE_FILE ("type-list.galgas", 190)), enumerator_7412.current_typeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-list.galgas", 192)), enumerator_7412.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 189)) ;
    var_setterInputFormalArgumentList_7333.addAssign_operation (var_selector_7459.getter_nowhere (SOURCE_FILE ("type-list.galgas", 195)), enumerator_7412.current_typeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 197)), enumerator_7412.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 194)) ;
    enumerator_7412.gotoNextObject () ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_8056 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_listDeclarationAST temp_8 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_8056, ioArgument_ioTypeMap, GALGAS_string ("emptyList"), temp_8.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 202)) ;
  }
  {
  var_classFunctionMap_8056.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("listWithValue"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 210)), inCompiler COMMA_HERE), var_constructorAttributeTypeList_7199, GALGAS_bool (false), var_listTypeIndex_6870, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 209)) ;
  }
  GALGAS_getterMap var_getterMap_8472 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_8472, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 216)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8472, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 217)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8472, ioArgument_ioTypeMap, GALGAS_string ("range"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 225)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_9 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8472, ioArgument_ioTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_9.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 233)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_10 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8472, ioArgument_ioTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_10.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 241)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_11 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8472, ioArgument_ioTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_11.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 249)) ;
  }
  cEnumerator_typedPropertyList enumerator_9615 (var_typedAttributeList_6262, EnumerationOrder::up) ;
  while (enumerator_9615.hasCurrentObject ()) {
    {
    GALGAS_functionSignature temp_12 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 261)) ;
    temp_12.enterElement (GALGAS_functionSignature_2D_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 261)), var_uintType_6789, GALGAS_string ("inIndex"), GALGAS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 261)) ;
    var_getterMap_8472.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (enumerator_9615.current_name (HERE).readProperty_string ().add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 259)), enumerator_9615.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 260)), temp_12, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 262)), GALGAS_bool (true), enumerator_9615.current_typeEntry (HERE), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 265)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 258)) ;
    }
    enumerator_9615.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_10100 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_10100.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("first"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 272)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 273)), var_setterOutputFormalArgumentList_7265, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 275)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 277)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 271)) ;
  }
  {
  var_instanceMethodMap_10100.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("last"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 281)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 282)), var_setterOutputFormalArgumentList_7265, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 284)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 286)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 280)) ;
  }
  GALGAS_setterMap var_setterMap_10622 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  var_setterMap_10622.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("append"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 292)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 293)), var_setterInputFormalArgumentList_7333, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 296)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 291)) ;
  }
  {
  var_setterMap_10622.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("popFirst"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 300)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 301)), var_setterOutputFormalArgumentList_7265, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 304)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 299)) ;
  }
  {
  var_setterMap_10622.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("popLast"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 308)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 309)), var_setterOutputFormalArgumentList_7265, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 312)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 307)) ;
  }
  var_setterOutputFormalArgumentList_7265.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 315)), var_uintType_6789, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 315)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 315)) ;
  {
  var_setterMap_10622.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeAtIndex"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 317)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 318)), var_setterOutputFormalArgumentList_7265, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 321)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 316)) ;
  }
  cEnumerator_typedPropertyList enumerator_11691 (var_typedAttributeList_6262, EnumerationOrder::up) ;
  while (enumerator_11691.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = enumerator_11691.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_11752 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        var_setterFormalArgumentList_11752.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 327)), enumerator_11691.current_typeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 327)), enumerator_11691.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 327)) ;
        var_setterFormalArgumentList_11752.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 328)), var_uintType_6789, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 328)), enumerator_11691.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 328)) ;
        {
        var_setterMap_10622.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("set").add_operation (enumerator_11691.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 330)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 330)), enumerator_11691.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 331)), var_setterFormalArgumentList_11752, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 334)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 329)) ;
        }
      }
    }
    enumerator_11691.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_7333.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 340)), var_uintType_6789, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 340)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 340)) ;
  {
  var_setterMap_10622.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("insertAtIndex"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 342)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-list.galgas", 343)), var_setterInputFormalArgumentList_7333, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-list.galgas", 346)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 341)) ;
  }
  GALGAS_initializerMap var_initializerMap_12844 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_emptyArgumentList_12889 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_listDeclarationAST temp_14 = this ;
  var_initializerMap_12844.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_12889, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 353)), temp_14.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_12889, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 352)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_15 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_15.readProperty_mListTypeName (), GALGAS_bool (false), var_initializerMap_12844, var_getterMap_8472, var_setterMap_10622, var_instanceMethodMap_10100, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 357)) ;
  }
  GALGAS_typeFeatures var_features_13473 = GALGAS_typeFeatures::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 373)).operator_or (GALGAS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("type-list.galgas", 373)) COMMA_SOURCE_FILE ("type-list.galgas", 373)).operator_or (GALGAS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 373)) COMMA_SOURCE_FILE ("type-list.galgas", 373)) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_listDeclarationAST temp_17 = this ;
    test_16 = temp_17.readProperty_equatable ().boolEnum () ;
    if (kBoolTrue == test_16) {
      var_features_13473 = var_features_13473.operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("type-list.galgas", 375)) COMMA_SOURCE_FILE ("type-list.galgas", 375)) ;
    }
  }
  const GALGAS_listDeclarationAST temp_18 = this ;
  const GALGAS_listDeclarationAST temp_19 = this ;
  const GALGAS_listDeclarationAST temp_20 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_13679 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_18.readProperty_mListTypeName (), temp_19.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-list.galgas", 382)), GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("type-list.galgas", 383)), GALGAS_bool (true), var_typedAttributeList_6262, GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_12844, var_classFunctionMap_8056, var_getterMap_8472, var_setterMap_10622, var_instanceMethodMap_10100, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_7147, var_features_13473, var_constructorAttributeTypeList_7199, GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_listElementTypeIndex_7063, GALGAS_string ("list-").add_operation (temp_20.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 401)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-list.galgas", 402)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_13679.readProperty_typeName (), var_typeDefinition_13679, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 404)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_14974 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_15062 (temp_0.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_15062.hasCurrentObject ()) {
    var_structAttributeList_14974.addAssign_operation (enumerator_15062.current_isConstant (HERE), enumerator_15062.current_typeName (HERE), enumerator_15062.current_name (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-list.galgas", 417)), enumerator_15062.current_hasSelector (HERE), enumerator_15062.current_initialization (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 413)) ;
    enumerator_15062.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  const GALGAS_listDeclarationAST temp_3 = this ;
  const GALGAS_listDeclarationAST temp_4 = this ;
  GALGAS_structComparison temp_5 ;
  const enumGalgasBool test_6 = temp_4.readProperty_equatable ().boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_structComparison::class_func_equatable (SOURCE_FILE ("type-list.galgas", 426)) ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_structComparison::class_func_none (SOURCE_FILE ("type-list.galgas", 426)) ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison (temp_1.readProperty_isPredefined (), GALGAS_lstring::init_21__21_ (temp_2.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 423)), temp_3.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_structAttributeList_14974, GALGAS_string::makeEmptyString (), temp_5, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 421)) ;
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
  GALGAS_lstring var_nameForUsefulness_16311 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 445)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16311, var_nameForUsefulness_16311, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 446)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_16464 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (temp_1.readProperty_mListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 447)), temp_2.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 447)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16311, var_elementTypeNameForUsefulness_16464 COMMA_SOURCE_FILE ("type-list.galgas", 448)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_listDeclarationAST temp_4 = this ;
    test_3 = temp_4.readProperty_usefullList ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_16311  COMMA_SOURCE_FILE ("type-list.galgas", 450)) ;
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_16795 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_attributeMap_16843 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_listDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_16933 (temp_5.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_16933.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = enumerator_16933.current_initialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 456)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_16933.current_name (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 457)) ;
      }
    }
    GALGAS_lstring var_propertyTypeNameForUsefulness_17105 = function_typeNameForUsefulEntitiesGraph (enumerator_16933.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 459)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16311, var_propertyTypeNameForUsefulness_17105 COMMA_SOURCE_FILE ("type-list.galgas", 460)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_17284 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_16933.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 461)) ;
    var_typedAttributeList_16795.addAssign_operation (var_t_17284, enumerator_16933.current_name (HERE), enumerator_16933.current_initialization (HERE), GALGAS_bool (true), enumerator_16933.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 462)) ;
    {
    var_attributeMap_16843.setter_insertKey (enumerator_16933.current_name (HERE), var_t_17284, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 468)) ;
    }
    enumerator_16933.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_17552 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 471)) ;
  const GALGAS_listDeclarationAST temp_9 = this ;
  const GALGAS_listDeclarationAST temp_10 = this ;
  const GALGAS_listDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_9.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 473)), GALGAS_listTypeForGeneration::init_21__21__21_ (var_selfType_17552, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_10.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 476)), temp_11.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 476)), var_typedAttributeList_16795, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 472)) ;
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
      result.appendString (extensionGetter_identifierRepresentation (enumerator_781.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_781.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue ()) ;
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
                                                                                         const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_bool & in_GENERATE_5F_COMPARISON
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
  GALGAS_uint index_540_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_540 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_540.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_540.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_540.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue ()) ;
      if (enumerator_540.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_540_.increment () ;
      enumerator_540.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n  public: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method for comparing elements\n") ;
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
  result.appendString ("\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cCollectionElement * copy (void) ;\n\n//--- Description\n  public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1590_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1590 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1590.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1590.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 38)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1590.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 38)).stringValue ()) ;
      if (enumerator_1590.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1590_.increment () ;
      enumerator_1590.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (") ;
  GALGAS_uint index_1842_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1842 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1842.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1842.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 46)).stringValue ()) ;
      if (enumerator_1842.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_1842_.increment () ;
      enumerator_1842.gotoNextObject () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (") ;
  GALGAS_uint index_2256_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2256 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2256.hasCurrentObject ()) {
      result.appendString ("inElement.mProperty_") ;
      result.appendString (enumerator_2256.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 58)).stringValue ()) ;
      if (enumerator_2256.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_2256_.increment () ;
      enumerator_2256.gotoNextObject () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return true ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement * cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copy (void) {\n  cCollectionElement * result = nullptr ;\n  macroMyNew (result, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_2886_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2886 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2886.hasCurrentObject ()) {
      result.appendString ("mObject.mProperty_") ;
      result.appendString (enumerator_2886.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 76)).stringValue ()) ;
      if (enumerator_2886.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_2886_.increment () ;
      enumerator_2886.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString, const int32_t inIndentation) const {\n") ;
  GALGAS_uint index_3294_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3294 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3294.hasCurrentObject ()) {
      result.appendString ("  ioString.appendNewLine () ;\n  ioString.appendStringMultiple (\"| \", inIndentation) ;\n  ioString.appendCString (") ;
      result.appendString (enumerator_3294.current_name (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue ()) ;
      result.appendString (" \":\") ;\n  mObject.mProperty_") ;
      result.appendString (enumerator_3294.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 91)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation) ;\n") ;
      index_3294_.increment () ;
      enumerator_3294.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n") ;
  const enumGalgasBool test_1 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult cCollectionElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::compare (const cCollectionElement * inOperand) const {\n  cCollectionElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * operand = (cCollectionElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" *) inOperand ;\n  macroValidSharedObject (operand, cCollectionElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (") ;\n  return mObject.objectCompare (operand->mObject) ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
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
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (capCollectionElementArray ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterElement (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement * p = nullptr ;\n  macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inValue COMMA_THERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  appendObject (attributes) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_listWithValue (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5853_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5853 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5853.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5853.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 147)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_5853_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 147)).stringValue ()) ;
      if (enumerator_5853.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5853_IDX.increment () ;
      enumerator_5853.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (") ;
  GALGAS_uint index_6113_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6113 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6113.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_6113_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 154)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      if (enumerator_6113.hasNextObject ()) {
        result.appendString (" && ") ;
      }
      index_6113_IDX.increment () ;
      enumerator_6113.gotoNextObject () ;
    }
  }
  result.appendString (") {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (capCollectionElementArray ()) ;\n    capCollectionElement attributes ;\n    GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeAttributesFromObjects (attributes") ;
  GALGAS_uint index_6436_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6436 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6436.hasCurrentObject ()) {
      result.appendString (", inOperand") ;
      result.appendString (index_6436_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 162)).stringValue ()) ;
      index_6436_IDX.increment () ;
      enumerator_6436.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE) ;\n    result.appendObject (attributes) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeAttributesFromObjects (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("capCollectionElement & outAttributes") ;
  GALGAS_uint index_6828_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6828 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6828.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6828.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_6828.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 174)).stringValue ()) ;
      index_6828_.increment () ;
      enumerator_6828.gotoNextObject () ;
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
  GALGAS_uint index_7164_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7164 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7164.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_7164.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 181)).stringValue ()) ;
      if (enumerator_7164.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7164_.increment () ;
      enumerator_7164.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n  outAttributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7552_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7552 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7552.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7552.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_7552_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 193)).stringValue ()) ;
      if (enumerator_7552.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7552_IDX.increment () ;
      enumerator_7552.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_7890_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7890 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7890.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_7890_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 201)).stringValue ()) ;
      if (enumerator_7890.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7890_IDX.increment () ;
      enumerator_7890.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capCollectionElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_append (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8329_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8329 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8329.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8329.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 216)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_8329_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 216)).stringValue ()) ;
      result.appendString (",") ;
      if (enumerator_8329.hasNextObject ()) {
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_8329_IDX.increment () ;
      enumerator_8329.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_8705_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8705 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8705.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_8705_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 225)).stringValue ()) ;
      if (enumerator_8705.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_8705_IDX.increment () ;
      enumerator_8705.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capCollectionElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insertAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9149_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9149 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9149.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9149.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_9149_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9149_IDX.increment () ;
      enumerator_9149.gotoNextObject () ;
    }
  }
  result.appendString ("const GALGAS_uint inInsertionIndex,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inInsertionIndex.isValid ()") ;
  GALGAS_uint index_9483_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9483 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9483.hasCurrentObject ()) {
      result.appendString (" && inOperand") ;
      result.appendString (index_9483_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 248)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      index_9483_IDX.increment () ;
      enumerator_9483.gotoNextObject () ;
    }
  }
  result.appendString (") {\n      cCollectionElement * p = nullptr ;\n      macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_9720_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9720 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9720.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_9720_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 254)).stringValue ()) ;
      if (enumerator_9720.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_9720_IDX.increment () ;
      enumerator_9720.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n      capCollectionElement attributes ;\n      attributes.setPointer (p) ;\n      macroDetachSharedObject (p) ;\n      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n    }else{\n      drop () ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10273_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10273 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10273.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_10273.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 272)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_10273_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 272)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10273_IDX.increment () ;
      enumerator_10273.gotoNextObject () ;
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
  GALGAS_uint index_10870_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10870 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10870.hasCurrentObject ()) {
      result.appendString ("        outOperand") ;
      result.appendString (index_10870_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 285)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_10870_IDX.increment () ;
      enumerator_10870.gotoNextObject () ;
    }
  }
  result.appendString ("        drop () ;\n      }else{\n        macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_11107_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11107 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11107.hasCurrentObject ()) {
      result.appendString ("        outOperand") ;
      result.appendString (index_11107_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 292)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_11107.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 292)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_11107_IDX.increment () ;
      enumerator_11107.gotoNextObject () ;
    }
  }
  result.appendString ("      }\n    }else{\n") ;
  GALGAS_uint index_11314_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11314 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11314.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_11314_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 298)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_11314_IDX.increment () ;
      enumerator_11314.gotoNextObject () ;
    }
  }
  result.appendString ("      drop () ;    \n    }\n  }else{\n") ;
  GALGAS_uint index_11477_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11477 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11477.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11477_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 305)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_11477_IDX.increment () ;
      enumerator_11477.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popFirst (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11766_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11766 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11766.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11766.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_11766_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11766_IDX.increment () ;
      enumerator_11766.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeFirstObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_12212_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12212 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12212.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12212_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 324)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_12212_IDX.increment () ;
      enumerator_12212.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_12419_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12419 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12419.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12419_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 330)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_12419.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 330)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_12419_IDX.increment () ;
      enumerator_12419.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popLast (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12765_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12765 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12765.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_12765.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 339)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_12765_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 339)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12765_IDX.increment () ;
      enumerator_12765.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeLastObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_13210_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13210 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13210.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13210_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 349)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_13210_IDX.increment () ;
      enumerator_13210.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_13417_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13417 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13417.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13417_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 355)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_13417.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 355)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_13417_IDX.increment () ;
      enumerator_13417.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_first (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13761_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13761 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13761.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_13761.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 364)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_13761_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 364)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13761_IDX.increment () ;
      enumerator_13761.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readFirst (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_14205_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14205 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14205.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_14205_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 374)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_14205_IDX.increment () ;
      enumerator_14205.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_14412_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14412 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14412.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_14412_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 380)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_14412.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 380)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_14412_IDX.increment () ;
      enumerator_14412.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_last (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14755_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14755 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14755.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_14755.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 389)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_14755_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 389)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_14755_IDX.increment () ;
      enumerator_14755.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readLast (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_15198_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15198 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_15198.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_15198_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 399)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_15198_IDX.increment () ;
      enumerator_15198.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_15405_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15405 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_15405.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_15405_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 405)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_15405.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 405)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_15405_IDX.increment () ;
      enumerator_15405.gotoNextObject () ;
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
  GALGAS_uint index_18131_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18131 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_18131.hasCurrentObject ()) {
      const enumGalgasBool test_2 = enumerator_18131.current_hasSetter (HERE).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_18131.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 465)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 465)).stringValue ()) ;
        result.appendString ("AtIndex (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_18131.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 465)).stringValue ()) ;
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
        result.appendString (enumerator_18131.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 473)).stringValue ()) ;
        result.appendString (" = inOperand ;\n  }\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_18131.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 479)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_18131.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 479)).stringValue ()) ;
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
      result.appendString (extensionGetter_identifierRepresentation (enumerator_18131.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 484)).stringValue ()) ;
      result.appendString (" result ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    result = p->mObject.mProperty_") ;
      result.appendString (enumerator_18131.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 487)).stringValue ()) ;
      result.appendString (" ;\n  }\n  return result ;\n}\n\n") ;
      index_18131_IDX.increment () ;
      enumerator_18131.gotoNextObject () ;
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
  GALGAS_uint index_20984_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20984 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_20984.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_20984.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 513)).stringValue ()) ;
      result.appendString (" cEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_20984.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 513)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  return p->mObject.mProperty_") ;
      result.appendString (enumerator_20984.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 516)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_20984_IDX.increment () ;
      enumerator_20984.gotoNextObject () ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_19160 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 514)) ;
  const GALGAS_listTypeForGeneration temp_1 = this ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, var_selfTypeDefinition_19160.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 517)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-list.galgas", 515))) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_19160.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 522)), var_selfTypeDefinition_19160.readProperty_isConcrete (), var_selfTypeDefinition_19160.readProperty_initializerMap (), var_selfTypeDefinition_19160.readProperty_classFunctionMap (), var_selfTypeDefinition_19160.readProperty_getterMap (), var_selfTypeDefinition_19160.readProperty_setterMap (), var_selfTypeDefinition_19160.readProperty_instanceMethodMap (), var_selfTypeDefinition_19160.readProperty_classMethodMap (), var_selfTypeDefinition_19160.readProperty_optionalMethodMap (), var_selfTypeDefinition_19160.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_19160.readProperty_features (), var_selfTypeDefinition_19160.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_19160.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_19160.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-list.galgas", 520))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 520)) ;
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
  cEnumerator_typedPropertyList enumerator_20531 (temp_0.readProperty_mTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_20531.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_20531.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 546)) ;
    enumerator_20531.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 548)) ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 549)) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_20745 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 550)) ;
  const GALGAS_listTypeForGeneration temp_4 = this ;
  const GALGAS_listTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_20745.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 553)), temp_5.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (var_selfTypeDefinition_20745.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 555)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_20745.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 556)) COMMA_SOURCE_FILE ("type-list.galgas", 551))) ;
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
  result_result = GALGAS_string ("dict @").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 32)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_4557 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GALGAS_dictDeclarationAST temp_0 = this ;
  var_structAttributeList_4557.addAssign_operation (GALGAS_bool (true), temp_0.readProperty_mKeyTypeName (), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 130)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-dict.galgas", 131)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-dict.galgas", 133))  COMMA_SOURCE_FILE ("type-dict.galgas", 127)) ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4797 (temp_1.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_4797.hasCurrentObject ()) {
    var_structAttributeList_4557.addAssign_operation (GALGAS_bool (true), enumerator_4797.current_typeName (HERE), enumerator_4797.current_name (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-dict.galgas", 139)), enumerator_4797.current_hasSelector (HERE), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-dict.galgas", 141))  COMMA_SOURCE_FILE ("type-dict.galgas", 135)) ;
    enumerator_4797.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_2 = this ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  const GALGAS_dictDeclarationAST temp_5 = this ;
  GALGAS_structComparison temp_6 ;
  const enumGalgasBool test_7 = temp_5.readProperty_equatable ().boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_structComparison::class_func_equatable (SOURCE_FILE ("type-dict.galgas", 148)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_structComparison::class_func_none (SOURCE_FILE ("type-dict.galgas", 148)) ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison (temp_2.readProperty_isPredefined (), GALGAS_lstring::init_21__21_ (temp_3.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 145)), temp_4.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_structAttributeList_4557, GALGAS_string::makeEmptyString (), temp_6, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 143)) ;
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
  GALGAS_lstring var_dictionary_6110 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 164)), temp_1.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_6110, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 165)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 166)), temp_4.readProperty_mKeyTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-dict.galgas", 166)) ;
  }
  const GALGAS_dictDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6371 (temp_5.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_6371.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_6371.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 168)), enumerator_6371.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-dict.galgas", 168)) ;
    }
    enumerator_6371.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_keyTypeIndex_7285 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_7285, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 184)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_7334 = GALGAS_enumerationDescriptorList::class_func_listWithValue (var_keyTypeIndex_7285, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 186)) ;
  GALGAS_classFunctionMap var_classFunctionMap_7451 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_getterMap var_getterMap_7531 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7531, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 189)) ;
  }
  GALGAS_setterMap var_setterMap_7560 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7600 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_dictDeclarationAST temp_1 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_7451, ioArgument_ioTypeMap, GALGAS_string ("emptyDict"), temp_1.readProperty_mDictTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 193)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7531, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string::makeEmptyString (), temp_2.readProperty_mKeyTypeName ().readProperty_string (), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 201)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7531, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 209)) ;
  }
  GALGAS_formalParameterSignature var_insertSetterFormalArgumentList_8290 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_typedPropertyList var_typedPropertyList_8351 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_8399 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_8399.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 221)), var_keyTypeIndex_7285, GALGAS_string ("key"), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-dict.galgas", 221)) ;
  var_insertSetterFormalArgumentList_8290.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 223)), var_keyTypeIndex_7285, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 225)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 222)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_8696 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_removeMethodFormalArgumentList_8696.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 229)), var_keyTypeIndex_7285, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 231)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 228)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_8873 = GALGAS_optionalMethodSignature::init (inCompiler COMMA_HERE) ;
  var_optionalMethodSignature_8873.addAssign_operation (GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 236)), var_keyTypeIndex_7285, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 234)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_8996 = GALGAS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_9095 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_9095.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_9178 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_9095.current_typeName (HERE), var_attributeTypeIndex_9178, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 241)) ;
    }
    GALGAS_bool var_hasSetter_9206 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_9231 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_8399.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 244)), var_attributeTypeIndex_9178, enumerator_9095.current_name (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-dict.galgas", 244)) ;
    var_typedPropertyList_8351.addAssign_operation (var_attributeTypeIndex_9178, enumerator_9095.current_name (HERE), enumerator_9095.current_initialization (HERE), var_hasSetter_9206, var_hasSelector_9231  COMMA_SOURCE_FILE ("type-dict.galgas", 245)) ;
    var_typesToIncludeInHeaderCompilation_8996.addAssign_operation (var_attributeTypeIndex_9178  COMMA_SOURCE_FILE ("type-dict.galgas", 246)) ;
    var_enumerationDescriptor_7334.addAssign_operation (var_attributeTypeIndex_9178, enumerator_9095.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 247)) ;
    var_insertSetterFormalArgumentList_8290.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 249)), var_attributeTypeIndex_9178, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 251)), enumerator_9095.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 248)) ;
    var_removeMethodFormalArgumentList_8696.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 254)), var_attributeTypeIndex_9178, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-dict.galgas", 256)), enumerator_9095.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 253)) ;
    var_optionalMethodSignature_8873.addAssign_operation (GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 260)), var_attributeTypeIndex_9178, enumerator_9095.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 258)) ;
    enumerator_9095.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_4 = this ;
  var_setterMap_7560.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("insert"), temp_4.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 267)), var_insertSetterFormalArgumentList_8290, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 270)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 265)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_5 = this ;
  var_setterMap_7560.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeKey"), temp_5.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 276)), var_removeMethodFormalArgumentList_8696, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 279)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 274)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_6 = this ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  var_instanceMethodMap_7600.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("searchKey"), temp_6.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 285)), var_removeMethodFormalArgumentList_8696, temp_7.readProperty_mDictTypeName ().readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 289)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 283)) ;
  }
  const GALGAS_dictDeclarationAST temp_8 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10934 (temp_8.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_10934.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_10970 = GALGAS_lstring::init_21__21_ (enumerator_10934.current_name (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 294)), enumerator_10934.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11096 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_10934.current_typeName (HERE), var_attributeTypeIndex_11096, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 295)) ;
    }
    {
    GALGAS_functionSignature temp_9 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 299)) ;
    temp_9.enterElement (GALGAS_functionSignature_2D_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 299)), var_keyTypeIndex_7285, GALGAS_string ("inKey"), GALGAS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 299)) ;
    var_getterMap_7531.setter_insertOrReplace (var_accessorName_10970, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 298)), temp_9, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 300)), GALGAS_bool (true), var_attributeTypeIndex_11096, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 303)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 296)) ;
    }
    enumerator_10934.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_10 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11521 (temp_10.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_11521.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_11557 = GALGAS_lstring::init_21__21_ (GALGAS_string ("set").add_operation (enumerator_11521.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 310)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 310)), enumerator_11521.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11778 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11521.current_typeName (HERE), var_attributeTypeIndex_11778, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 313)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_11811 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    var_accessorFormalArgumentList_11811.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 318)), var_attributeTypeIndex_11778, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 318)), enumerator_11521.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 318)) ;
    var_accessorFormalArgumentList_11811.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 319)), var_keyTypeIndex_7285, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 319)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 319)) ;
    {
    var_setterMap_7560.setter_insertOrReplace (var_accessorName_11557, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-dict.galgas", 322)), var_accessorFormalArgumentList_11811, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-dict.galgas", 325)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 320)) ;
    }
    enumerator_11521.gotoNextObject () ;
  }
  GALGAS_initializerMap var_initializerMap_12337 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_emptyArgumentList_12382 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_dictDeclarationAST temp_11 = this ;
  var_initializerMap_12337.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_12382, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 333)), temp_11.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_12382, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 332)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_12 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_12.readProperty_mDictTypeName (), GALGAS_bool (false), var_initializerMap_12337, var_getterMap_7531, var_setterMap_7560, var_instanceMethodMap_7600, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 337)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_13124 ;
  {
  const GALGAS_dictDeclarationAST temp_13 = this ;
  const GALGAS_dictDeclarationAST temp_14 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_13.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 354)), temp_14.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_elementTypeEntry_13124, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 353)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_13176 = GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_optionalMethodMap_13176.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 359)), var_optionalMethodSignature_8873, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 359)) ;
  }
  GALGAS_typeFeatures var_features_13320 = GALGAS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 361)).operator_or (GALGAS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 361)) COMMA_SOURCE_FILE ("type-dict.galgas", 361)) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    const GALGAS_dictDeclarationAST temp_16 = this ;
    test_15 = temp_16.readProperty_equatable ().boolEnum () ;
    if (kBoolTrue == test_15) {
      var_features_13320 = var_features_13320.operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("type-dict.galgas", 363)) COMMA_SOURCE_FILE ("type-dict.galgas", 363)) ;
    }
  }
  const GALGAS_dictDeclarationAST temp_17 = this ;
  const GALGAS_dictDeclarationAST temp_18 = this ;
  const GALGAS_dictDeclarationAST temp_19 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_13521 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_17.readProperty_mDictTypeName (), temp_18.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-dict.galgas", 370)), GALGAS_typeKindEnum::class_func_mapType (SOURCE_FILE ("type-dict.galgas", 371)), GALGAS_bool (true), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), var_typedPropertyList_8351, var_initializerMap_12337, var_classFunctionMap_7451, var_getterMap_7531, var_setterMap_7560, var_instanceMethodMap_7600, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), var_optionalMethodMap_13176, var_enumerationDescriptor_7334, var_features_13320, var_argumentTypeListForAddAssignWithFieldExpressionList_8399, GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_elementTypeEntry_13124, GALGAS_string ("dict-").add_operation (temp_19.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 389)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-dict.galgas", 390)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_13521.readProperty_typeName (), var_typeDefinition_13521, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 392)) ;
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
  cEnumerator_stringlist enumerator_14980 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 400)), EnumerationOrder::up) ;
  while (enumerator_14980.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_15005 = enumerator_14980.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 401)) ;
    {
    GALGAS_string joker_15104 ; // Joker input parameter
    var_explodedArray_15005.setter_popFirst (joker_15104, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 402)) ;
    }
    cEnumerator_stringlist enumerator_15117 (var_explodedArray_15005, EnumerationOrder::up) ;
    while (enumerator_15117.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_15117.current_mValue (HERE).getter_count (SOURCE_FILE ("type-dict.galgas", 404)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_15196 = enumerator_15117.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 405)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (ComparisonKind::notEqual, var_c_15196.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 407)) ;
            }
          }
        }
      }
      enumerator_15117.gotoNextObject () ;
    }
    enumerator_14980.gotoNextObject () ;
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
  cEnumerator_stringlist enumerator_15668 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 417)), EnumerationOrder::up) ;
  while (enumerator_15668.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_15693 = enumerator_15668.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 418)) ;
    {
    GALGAS_string joker_15792 ; // Joker input parameter
    var_explodedArray_15693.setter_popFirst (joker_15792, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 419)) ;
    }
    cEnumerator_stringlist enumerator_15805 (var_explodedArray_15693, EnumerationOrder::up) ;
    while (enumerator_15805.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_15805.current_mValue (HERE).getter_count (SOURCE_FILE ("type-dict.galgas", 421)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_15884 = enumerator_15805.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 422)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (ComparisonKind::notEqual, var_c_15884.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_c_15884.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 423)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 424)) ;
            }
          }
        }
      }
      enumerator_15805.gotoNextObject () ;
    }
    enumerator_15668.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForMapAndDict'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForMapAndDict (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 435)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 436)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 437)) ;
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
  GALGAS_unifiedTypeMapEntry var_keyType_16909 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 452)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_keyType_16909, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 453)).readProperty_features ().getter_comparable (SOURCE_FILE ("type-dict.galgas", 453)).operator_not (SOURCE_FILE ("type-dict.galgas", 453)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_dictDeclarationAST temp_2 = this ;
      const GALGAS_dictDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mKeyTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 454)).add_operation (GALGAS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 454)), fixItArray4  COMMA_SOURCE_FILE ("type-dict.galgas", 454)) ;
    }
  }
  const GALGAS_dictDeclarationAST temp_5 = this ;
  GALGAS_lstring var_nameForUsefulness_17152 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 457)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17152, var_nameForUsefulness_17152, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 458)) ;
  }
  const GALGAS_dictDeclarationAST temp_6 = this ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_17305 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (temp_6.readProperty_mDictTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 459)), temp_7.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 459)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17152, var_elementTypeNameForUsefulness_17305 COMMA_SOURCE_FILE ("type-dict.galgas", 460)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_17572 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_attributeMap_17620 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_dictDeclarationAST temp_8 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_17684 (temp_8.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_17684.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_17733 = function_typeNameForUsefulEntitiesGraph (enumerator_17684.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 465)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17152, var_propertyTypeNameForUsefulness_17733 COMMA_SOURCE_FILE ("type-dict.galgas", 466)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_17925 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_17684.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 467)) ;
    GALGAS_bool var_hasSetter_17979 = GALGAS_bool (true) ;
    var_typedAttributeList_17572.addAssign_operation (var_t_17925, enumerator_17684.current_name (HERE), enumerator_17684.current_initialization (HERE), var_hasSetter_17979, enumerator_17684.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 469)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 475)).getter_hasKey (enumerator_17684.current_name (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-dict.galgas", 475)).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_string var_m_18225 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_18302 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 477)), EnumerationOrder::up) ;
        while (enumerator_18302.hasCurrentObject ()) {
          var_m_18225.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_18302.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 478)) ;
          enumerator_18302.gotoNextObject () ;
        }
        var_m_18225.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 480)) ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_17684.current_name (HERE).readProperty_location (), var_m_18225, fixItArray10  COMMA_SOURCE_FILE ("type-dict.galgas", 481)) ;
      }
    }
    {
    var_attributeMap_17620.setter_insertKey (enumerator_17684.current_name (HERE), var_t_17925, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 483)) ;
    }
    enumerator_17684.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_11 = this ;
  const GALGAS_dictDeclarationAST temp_12 = this ;
  const GALGAS_dictDeclarationAST temp_13 = this ;
  const GALGAS_dictDeclarationAST temp_14 = this ;
  const GALGAS_dictDeclarationAST temp_15 = this ;
  const GALGAS_dictDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_11.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 487)), GALGAS_dictTypeForGeneration::init_21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 489)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_13.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 490)), temp_14.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 490)), temp_15.readProperty_mDictTypeName (), var_typedAttributeList_17572, temp_16.readProperty_mKeyTypeName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 486)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_19585 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 514)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, var_selfTypeDefinition_19585.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 517)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-dict.galgas", 515))) ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_19585.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 522)), var_selfTypeDefinition_19585.readProperty_isConcrete (), var_selfTypeDefinition_19585.readProperty_initializerMap (), var_selfTypeDefinition_19585.readProperty_classFunctionMap (), var_selfTypeDefinition_19585.readProperty_getterMap (), var_selfTypeDefinition_19585.readProperty_setterMap (), var_selfTypeDefinition_19585.readProperty_instanceMethodMap (), var_selfTypeDefinition_19585.readProperty_classMethodMap (), var_selfTypeDefinition_19585.readProperty_optionalMethodMap (), var_selfTypeDefinition_19585.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_19585.readProperty_features (), var_selfTypeDefinition_19585.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_19585.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_19585.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-dict.galgas", 520))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 520)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 545)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 546)) ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  const GALGAS_dictTypeForGeneration temp_4 = this ;
  const GALGAS_dictTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 548)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 550)), extensionGetter_generateCppObjectComparison (extensionGetter_definition (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 551)).readProperty_features (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 551)) COMMA_SOURCE_FILE ("type-dict.galgas", 547))) ;
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
  result_result = GALGAS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 63)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_9994 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_structAttributeList_9994.addAssign_operation (GALGAS_bool (false), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 281)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 282)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-map.galgas", 283)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-map.galgas", 285))  COMMA_SOURCE_FILE ("type-map.galgas", 279)) ;
  const GALGAS_mapDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10267 (temp_0.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_10267.hasCurrentObject ()) {
    var_structAttributeList_9994.addAssign_operation (GALGAS_bool (false), enumerator_10267.current_typeName (HERE), enumerator_10267.current_name (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-map.galgas", 291)), enumerator_10267.current_hasSelector (HERE), enumerator_10267.current_initialization (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 287)) ;
    enumerator_10267.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  const GALGAS_mapDeclarationAST temp_4 = this ;
  GALGAS_structComparison temp_5 ;
  const enumGalgasBool test_6 = temp_4.readProperty_equatable ().boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_structComparison::class_func_equatable (SOURCE_FILE ("type-map.galgas", 300)) ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_structComparison::class_func_none (SOURCE_FILE ("type-map.galgas", 300)) ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison (temp_1.readProperty_isPredefined (), GALGAS_lstring::init_21__21_ (temp_2.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 297)), temp_3.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_structAttributeList_9994, GALGAS_string::makeEmptyString (), temp_5, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 295)) ;
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
  GALGAS_lstring var_key_11602 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 315)), temp_1.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11602, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 316)) ;
  }
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11754 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_11754.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_11754.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 318)), enumerator_11754.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-map.galgas", 318)) ;
    }
    enumerator_11754.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_12686 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeIndex_12686, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 335)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeIndex_12778 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_12778, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 337)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 339)) ;
  temp_0.enterElement (GALGAS_enumerationDescriptorList_2D_element::init_21__21_ (var_lstringTypeIndex_12778, GALGAS_string ("lkey"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 339)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_12858 = temp_0 ;
  GALGAS_classFunctionMap var_classFunctionMap_12947 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_getterMap var_getterMap_13027 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_13027, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 342)) ;
  }
  GALGAS_setterMap var_setterMap_13055 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_13095 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_mapDeclarationAST temp_1 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_12947, ioArgument_ioTypeMap, GALGAS_string ("emptyMap"), temp_1.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 346)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_2 = this ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_12947, ioArgument_ioTypeMap, GALGAS_string ("mapWithMapToOverride"), temp_2.readProperty_mMapTypeName ().readProperty_string (), GALGAS_string ("inMap"), temp_3.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 353)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13027, ioArgument_ioTypeMap, GALGAS_string ("levels"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 363)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13027, ioArgument_ioTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 371)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13027, ioArgument_ioTypeMap, GALGAS_string ("keySet"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 382)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13027, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 390)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13027, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 398)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13027, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 407)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13027, ioArgument_ioTypeMap, GALGAS_string ("overriddenMap"), GALGAS_string::makeEmptyString (), temp_4.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 416)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13027, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 424)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_15195 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_typedPropertyList var_typedPropertyList_15263 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_15336 = GALGAS_optionalMethodSignature::init (inCompiler COMMA_HERE) ;
  var_optionalMethodSignature_15336.addAssign_operation (GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 438)), var_stringTypeIndex_12686, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 436)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_15480 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_15480.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 443)), var_lstringTypeIndex_12778, GALGAS_string ("lkey"), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-map.galgas", 442)) ;
  var_insertMethodFormalArgumentList_15195.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 448)), var_lstringTypeIndex_12778, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 450)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 447)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_15832 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_removeMethodFormalArgumentList_15832.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 454)), var_lstringTypeIndex_12778, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 456)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 453)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_16043 = GALGAS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GALGAS_mapDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_16136 (temp_5.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_16136.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = enumerator_16136.current_initialization (HERE).getter_isSome (SOURCE_FILE ("type-map.galgas", 460)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_16136.current_name (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a map"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 461)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_16350 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16136.current_typeName (HERE), var_attributeTypeIndex_16350, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 463)) ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_15480.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 464)), var_attributeTypeIndex_16350, enumerator_16136.current_name (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-map.galgas", 464)) ;
    var_typedPropertyList_15263.addAssign_operation (var_attributeTypeIndex_16350, enumerator_16136.current_name (HERE), enumerator_16136.current_initialization (HERE), GALGAS_bool (true), enumerator_16136.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 465)) ;
    var_typesToIncludeInHeaderCompilation_16043.addAssign_operation (var_attributeTypeIndex_16350  COMMA_SOURCE_FILE ("type-map.galgas", 466)) ;
    var_enumerationDescriptor_12858.addAssign_operation (var_attributeTypeIndex_16350, enumerator_16136.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 467)) ;
    GALGAS_lstring temp_8 ;
    const enumGalgasBool test_9 = enumerator_16136.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = enumerator_16136.current_name (HERE) ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 469)) ;
    }
    var_insertMethodFormalArgumentList_15195.addAssign_operation (temp_8, var_attributeTypeIndex_16350, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 471)), enumerator_16136.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 468)) ;
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_16136.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_16136.current_name (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 474)) ;
    }
    var_removeMethodFormalArgumentList_15832.addAssign_operation (temp_10, var_attributeTypeIndex_16350, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-map.galgas", 476)), enumerator_16136.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 473)) ;
    GALGAS_lstring temp_12 ;
    const enumGalgasBool test_13 = enumerator_16136.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_13) {
      temp_12 = enumerator_16136.current_name (HERE) ;
    }else if (kBoolFalse == test_13) {
      temp_12 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 480)) ;
    }
    var_optionalMethodSignature_15336.addAssign_operation (GALGAS_bool (false), temp_12, var_attributeTypeIndex_16350, enumerator_16136.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 478)) ;
    enumerator_16136.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_14 = this ;
  cEnumerator_insertMethodListAST enumerator_17320 (temp_14.readProperty_mInsertMethodList (), EnumerationOrder::up) ;
  while (enumerator_17320.hasCurrentObject ()) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = var_setterMap_13055.getter_hasKey (enumerator_17320.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 486)).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_17320.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17320.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 487)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 487)), fixItArray16  COMMA_SOURCE_FILE ("type-map.galgas", 487)) ;
      }
    }
    if (kBoolFalse == test_15) {
      {
      var_setterMap_13055.setter_insertOrReplace (enumerator_17320.current_mInsertMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 491)), var_insertMethodFormalArgumentList_15195, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 494)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 489)) ;
      }
    }
    enumerator_17320.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_17 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_17783 (temp_17.readProperty_mRemoveMethodList (), EnumerationOrder::up) ;
  while (enumerator_17783.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_setterMap_13055.getter_hasKey (enumerator_17783.current_mMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 501)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_17783.current_mMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17783.current_mMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 502)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 502)), fixItArray19  COMMA_SOURCE_FILE ("type-map.galgas", 502)) ;
      }
    }
    if (kBoolFalse == test_18) {
      {
      var_setterMap_13055.setter_insertOrReplace (enumerator_17783.current_mMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 506)), var_removeMethodFormalArgumentList_15832, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 509)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 504)) ;
      }
    }
    enumerator_17783.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_20 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_18274 (temp_20.readProperty_mSearchMethodList (), EnumerationOrder::up) ;
  while (enumerator_18274.hasCurrentObject ()) {
    {
    var_instanceMethodMap_13095.setter_insertKey (enumerator_18274.current_mSearchMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 518)), var_removeMethodFormalArgumentList_15832, enumerator_18274.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 522)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 516)) ;
    }
    enumerator_18274.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_21 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_18591 (temp_21.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_18591.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_18616 = GALGAS_lstring::init_21__21_ (enumerator_18591.current (HERE).readProperty_name ().readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 528)), enumerator_18591.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_18750 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18591.current (HERE).readProperty_typeName (), var_attributeTypeIndex_18750, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 529)) ;
    }
    {
    GALGAS_functionSignature temp_22 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 533)) ;
    temp_22.enterElement (GALGAS_functionSignature_2D_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 533)), var_stringTypeIndex_12686, GALGAS_string ("inKey"), GALGAS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 533)) ;
    var_getterMap_13027.setter_insertOrReplace (var_accessorName_18616, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 532)), temp_22, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 534)), GALGAS_bool (true), var_attributeTypeIndex_18750, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 537)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 530)) ;
    }
    enumerator_18591.gotoNextObject () ;
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_mapDeclarationAST temp_24 = this ;
    test_23 = GALGAS_bool (ComparisonKind::greaterOrEqual, temp_24.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("type-map.galgas", 542)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_location var_insertOrReplaceLocation_19234 ;
      const GALGAS_mapDeclarationAST temp_25 = this ;
      temp_25.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_19234, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 543)) ;
      {
      var_setterMap_13055.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_19234, inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 546)), var_insertMethodFormalArgumentList_15195, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 549)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 544)) ;
      }
    }
  }
  const GALGAS_mapDeclarationAST temp_26 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_19583 (temp_26.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_19583.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_19608 = GALGAS_lstring::init_21__21_ (GALGAS_string ("set").add_operation (enumerator_19583.current (HERE).readProperty_name ().readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 556)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 556)), enumerator_19583.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_19838 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_19583.current (HERE).readProperty_typeName (), var_attributeTypeIndex_19838, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 559)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_19897 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    var_accessorFormalArgumentList_19897.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 564)), var_attributeTypeIndex_19838, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 564)), enumerator_19583.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 564)) ;
    var_accessorFormalArgumentList_19897.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 565)), var_stringTypeIndex_12686, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 565)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 565)) ;
    {
    var_setterMap_13055.setter_insertOrReplace (var_accessorName_19608, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 568)), var_accessorFormalArgumentList_19897, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 571)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 566)) ;
    }
    enumerator_19583.gotoNextObject () ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_20371 = GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_optionalMethodMap_20371.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 577)), var_optionalMethodSignature_15336, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 577)) ;
  }
  GALGAS_initializerMap var_initializerMap_20555 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_emptyArgumentList_20600 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_mapDeclarationAST temp_27 = this ;
  var_initializerMap_20555.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_20600, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 582)), temp_27.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_20600, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 581)) ;
  }
  GALGAS_typeFeatures var_features_20774 = GALGAS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 586)).operator_or (GALGAS_typeFeatures::class_func_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 587)) COMMA_SOURCE_FILE ("type-map.galgas", 586)).operator_or (GALGAS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("type-map.galgas", 587)) COMMA_SOURCE_FILE ("type-map.galgas", 587)).operator_or (GALGAS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 587)) COMMA_SOURCE_FILE ("type-map.galgas", 587)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    const GALGAS_mapDeclarationAST temp_29 = this ;
    test_28 = temp_29.readProperty_equatable ().boolEnum () ;
    if (kBoolTrue == test_28) {
      var_features_20774 = var_features_20774.operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("type-map.galgas", 589)) COMMA_SOURCE_FILE ("type-map.galgas", 589)) ;
    }
  }
  {
  const GALGAS_mapDeclarationAST temp_30 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_30.readProperty_mMapTypeName (), GALGAS_bool (false), var_initializerMap_20555, var_getterMap_13027, var_setterMap_13055, var_instanceMethodMap_13095, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 592)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_21584 ;
  {
  const GALGAS_mapDeclarationAST temp_31 = this ;
  const GALGAS_mapDeclarationAST temp_32 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_31.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 609)), temp_32.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_elementTypeEntry_21584, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 608)) ;
  }
  const GALGAS_mapDeclarationAST temp_33 = this ;
  const GALGAS_mapDeclarationAST temp_34 = this ;
  const GALGAS_mapDeclarationAST temp_35 = this ;
  const GALGAS_mapDeclarationAST temp_36 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_21634 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_33.readProperty_mMapTypeName (), temp_34.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-map.galgas", 617)), GALGAS_typeKindEnum::class_func_mapType (SOURCE_FILE ("type-map.galgas", 618)), GALGAS_bool (true), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), var_typedPropertyList_15263, var_initializerMap_20555, var_classFunctionMap_12947, var_getterMap_13027, var_setterMap_13055, var_instanceMethodMap_13095, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), var_optionalMethodMap_20371, var_enumerationDescriptor_12858, var_features_20774, var_argumentTypeListForAddAssignWithFieldExpressionList_15480, temp_35.readProperty_mSearchMethodList (), GALGAS_bool (false), var_elementTypeEntry_21584, GALGAS_string ("map-").add_operation (temp_36.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 636)), GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("type-map.galgas", 637)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_21634.readProperty_typeName (), var_typeDefinition_21634, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 639)) ;
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
  GALGAS_lstring var_nameForUsefulness_23892 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 668)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_23892, var_nameForUsefulness_23892, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 669)) ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_24044 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (temp_1.readProperty_mMapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 670)), temp_2.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 670)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_23892, var_elementTypeNameForUsefulness_24044 COMMA_SOURCE_FILE ("type-map.galgas", 671)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_24307 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_attributeMap_24355 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_24416 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_24416.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_24465 = function_typeNameForUsefulEntitiesGraph (enumerator_24416.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 676)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_23892, var_propertyTypeNameForUsefulness_24465 COMMA_SOURCE_FILE ("type-map.galgas", 677)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_24665 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_24416.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 678)) ;
    GALGAS_bool var_hasSelector_24727 = GALGAS_bool (false) ;
    var_typedAttributeList_24307.addAssign_operation (var_t_24665, enumerator_24416.current_name (HERE), enumerator_24416.current_initialization (HERE), GALGAS_bool (true), var_hasSelector_24727  COMMA_SOURCE_FILE ("type-map.galgas", 680)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 686)).getter_hasKey (enumerator_24416.current_name (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 686)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_24971 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_25048 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 688)), EnumerationOrder::up) ;
        while (enumerator_25048.hasCurrentObject ()) {
          var_m_24971.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_25048.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 689)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 689)) ;
          enumerator_25048.gotoNextObject () ;
        }
        var_m_24971.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 691)) ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_24416.current_name (HERE).readProperty_location (), var_m_24971, fixItArray5  COMMA_SOURCE_FILE ("type-map.galgas", 692)) ;
      }
    }
    {
    var_attributeMap_24355.setter_insertKey (enumerator_24416.current_name (HERE), var_t_24665, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 694)) ;
    }
    enumerator_24416.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_25265 = GALGAS_insertMethodMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_mapDeclarationAST temp_6 = this ;
  cEnumerator_insertMethodListAST enumerator_25325 (temp_6.readProperty_mInsertMethodList (), EnumerationOrder::up) ;
  while (enumerator_25325.hasCurrentObject ()) {
    {
    var_insertMethodMap_25265.setter_insertKey (enumerator_25325.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 699)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_25325.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 700)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_25325.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 701)) ;
    }
    enumerator_25325.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_25587 = GALGAS_searchMethodMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_mapDeclarationAST temp_7 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_25633 (temp_7.readProperty_mSearchMethodList (), EnumerationOrder::up) ;
  while (enumerator_25633.hasCurrentObject ()) {
    {
    var_searchMethodMap_25587.setter_insertKey (enumerator_25633.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 706)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_25633.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 707)) ;
    }
    enumerator_25633.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_8 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_25828 (temp_8.readProperty_mRemoveMethodList (), EnumerationOrder::up) ;
  while (enumerator_25828.hasCurrentObject ()) {
    {
    var_insertMethodMap_25265.setter_insertKey (enumerator_25828.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 711)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_25828.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 712)) ;
    }
    enumerator_25828.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_9 = this ;
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_26045 (temp_9.readProperty_mInsertOrReplaceDeclarationListAST (), EnumerationOrder::up) ;
  GALGAS_uint index_26040 (uint32_t (0)) ;
  while (enumerator_26045.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (ComparisonKind::greaterThan, index_26040.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_26045.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray11  COMMA_SOURCE_FILE ("type-map.galgas", 717)) ;
      }
    }
    enumerator_26045.gotoNextObject () ;
    index_26040.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 715)) ;
  }
  const GALGAS_mapDeclarationAST temp_12 = this ;
  GALGAS_bool var_hasInsertOrReplaceModifier_26281 = GALGAS_bool (ComparisonKind::greaterThan, temp_12.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("type-map.galgas", 720)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_hasInsertOrReplaceModifier_26281.operator_and (var_insertMethodMap_25265.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 721)) COMMA_SOURCE_FILE ("type-map.galgas", 721)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_26501 ;
      const GALGAS_mapDeclarationAST temp_14 = this ;
      temp_14.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceDeclarationLocation_26501, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 722)) ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_26501, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray15  COMMA_SOURCE_FILE ("type-map.galgas", 723)) ;
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
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (temp_16.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 728)), GALGAS_mapTypeForGeneration::init_21__21__21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_17.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 730)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_18.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 731)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 731)), temp_19.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 731)), temp_20.readProperty_mMapTypeName (), var_typedAttributeList_24307, temp_21.readProperty_mInsertMethodList (), temp_22.readProperty_mSearchMethodList (), temp_23.readProperty_mRemoveMethodList (), var_hasInsertOrReplaceModifier_26281, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 727)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_28085 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 761)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, var_selfTypeDefinition_28085.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 764)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-map.galgas", 762))) ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_28085.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 770)), var_selfTypeDefinition_28085.readProperty_isConcrete (), var_selfTypeDefinition_28085.readProperty_initializerMap (), var_selfTypeDefinition_28085.readProperty_classFunctionMap (), var_selfTypeDefinition_28085.readProperty_getterMap (), var_selfTypeDefinition_28085.readProperty_setterMap (), var_selfTypeDefinition_28085.readProperty_instanceMethodMap (), var_selfTypeDefinition_28085.readProperty_classMethodMap (), var_selfTypeDefinition_28085.readProperty_optionalMethodMap (), var_selfTypeDefinition_28085.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_28085.readProperty_features (), var_selfTypeDefinition_28085.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_28085.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_28085.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-map.galgas", 768))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 768)) ;
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
  cEnumerator_typedPropertyList enumerator_29328 (temp_0.readProperty_mTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_29328.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_29328.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 794)) ;
    enumerator_29328.gotoNextObject () ;
  }
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_29418 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 796)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, var_selfTypeDefinition_29418.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 799)), temp_3.readProperty_mTypedAttributeList (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_29418.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 801)) COMMA_SOURCE_FILE ("type-map.galgas", 797))) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 811)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 812)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_30126 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 813)) ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  const GALGAS_mapTypeForGeneration temp_5 = this ;
  const GALGAS_mapTypeForGeneration temp_6 = this ;
  const GALGAS_mapTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_30126.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-map.galgas", 815)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mInsertMethodList (), temp_5.readProperty_mSearchMethodList (), temp_6.readProperty_mRemoveMethodList (), temp_7.readProperty_mHasInsertOrReplaceModifier (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_30126.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 821)) COMMA_SOURCE_FILE ("type-map.galgas", 814))) ;
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
  GALGAS_lstring var_key_6006 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 166)), temp_1.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6006, temp_2, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 167)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6172 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_6172.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_6172.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 169)), enumerator_6172.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 169)) ;
    }
    enumerator_6172.gotoNextObject () ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_6697 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6785 (temp_0.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_6785.hasCurrentObject ()) {
    var_structAttributeList_6697.addAssign_operation (enumerator_6785.current_isConstant (HERE), enumerator_6785.current_typeName (HERE), enumerator_6785.current_name (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-sorted-list.galgas", 185)), enumerator_6785.current_hasSelector (HERE), enumerator_6785.current_initialization (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 181)) ;
    enumerator_6785.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  GALGAS_structComparison temp_5 ;
  const enumGalgasBool test_6 = temp_4.readProperty_equatable ().boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_structComparison::class_func_equatable (SOURCE_FILE ("type-sorted-list.galgas", 194)) ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_structComparison::class_func_none (SOURCE_FILE ("type-sorted-list.galgas", 194)) ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison (temp_1.readProperty_isPredefined (), GALGAS_lstring::init_21__21_ (temp_2.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 191)), temp_3.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_structAttributeList_6697, GALGAS_string::makeEmptyString (), temp_5, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 189)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                              const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                              const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                              const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap var_optionalMethodMap_7980 = GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_8095 ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mSortedListTypeName (), var_listTypeIndex_8095, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 210)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_8300 ;
  {
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 213)), temp_2.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_listElementTypeIndex_8300, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 212)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_8387 = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_8439 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterSignature var_setterFormalOutputArgumentList_8505 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterSignature var_setterFormalInputArgumentList_8573 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_typedPropertyList var_typedAttributeList_8633 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_8700 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_8700.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_8791 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8700.current_typeName (HERE), var_attributeTypeIndex_8791, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 223)) ;
    }
    GALGAS_bool var_hasSelector_8819 = GALGAS_bool (false) ;
    var_typedAttributeList_8633.addAssign_operation (var_attributeTypeIndex_8791, enumerator_8700.current_name (HERE), enumerator_8700.current_initialization (HERE), GALGAS_bool (true), var_hasSelector_8819  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 225)) ;
    var_enumerationDescriptor_8387.addAssign_operation (var_attributeTypeIndex_8791, enumerator_8700.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 226)) ;
    var_constructorAttributeTypeList_8439.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 227)), var_attributeTypeIndex_8791, enumerator_8700.current_name (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 227)) ;
    var_setterFormalOutputArgumentList_8505.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 228)), var_attributeTypeIndex_8791, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-sorted-list.galgas", 228)), enumerator_8700.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 228)) ;
    var_setterFormalInputArgumentList_8573.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 229)), var_attributeTypeIndex_8791, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-sorted-list.galgas", 229)), enumerator_8700.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 229)) ;
    enumerator_8700.gotoNextObject () ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_9393 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_9393, ioArgument_ioTypeMap, GALGAS_string ("emptySortedList"), temp_4.readProperty_mSortedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 233)) ;
  }
  {
  var_classFunctionMap_9393.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("sortedListWithValue"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 241)), inCompiler COMMA_HERE), var_constructorAttributeTypeList_8439, GALGAS_bool (false), var_listTypeIndex_8095, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 240)) ;
  }
  GALGAS_getterMap var_getterMap_9827 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_9827, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 247)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_9827, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 248)) ;
  }
  GALGAS_setterMap var_setterMap_10057 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  var_setterMap_10057.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("popGreatest"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 259)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 260)), var_setterFormalOutputArgumentList_8505, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 263)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 258)) ;
  }
  {
  var_setterMap_10057.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("popSmallest"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 267)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 268)), var_setterFormalOutputArgumentList_8505, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 271)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 266)) ;
  }
  {
  var_setterMap_10057.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("insert"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 275)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 276)), var_setterFormalInputArgumentList_8573, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 279)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 274)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_10767 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_10767.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("greatest"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 285)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 286)), var_setterFormalOutputArgumentList_8505, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 288)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 290)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 284)) ;
  }
  {
  var_instanceMethodMap_10767.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("smallest"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 294)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 295)), var_setterFormalOutputArgumentList_8505, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 297)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 299)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 293)) ;
  }
  GALGAS_initializerMap var_initializerMap_11324 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_emptyArgumentList_11369 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_sortedListDeclarationAST temp_5 = this ;
  var_initializerMap_11324.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_11369, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 306)), temp_5.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_11369, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 305)) ;
  }
  {
  const GALGAS_sortedListDeclarationAST temp_6 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_6.readProperty_mSortedListTypeName (), GALGAS_bool (false), var_initializerMap_11324, var_getterMap_9827, var_setterMap_10057, var_instanceMethodMap_10767, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 310)) ;
  }
  GALGAS_typeFeatures var_features_11965 = GALGAS_typeFeatures::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("type-sorted-list.galgas", 326)).operator_or (GALGAS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-sorted-list.galgas", 326)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 326)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_sortedListDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_equatable ().boolEnum () ;
    if (kBoolTrue == test_7) {
      var_features_11965 = var_features_11965.operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("type-sorted-list.galgas", 328)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 328)) ;
    }
  }
  const GALGAS_sortedListDeclarationAST temp_9 = this ;
  const GALGAS_sortedListDeclarationAST temp_10 = this ;
  const GALGAS_sortedListDeclarationAST temp_11 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_12151 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_9.readProperty_mSortedListTypeName (), temp_10.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-sorted-list.galgas", 335)), GALGAS_typeKindEnum::class_func_sortedListType (SOURCE_FILE ("type-sorted-list.galgas", 336)), GALGAS_bool (true), var_typedAttributeList_8633, GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_11324, var_classFunctionMap_9393, var_getterMap_9827, var_setterMap_10057, var_instanceMethodMap_10767, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), var_optionalMethodMap_7980, var_enumerationDescriptor_8387, var_features_11965, var_constructorAttributeTypeList_8439, GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_listElementTypeIndex_8300, GALGAS_string ("-sortedlist-").add_operation (temp_11.readProperty_mSortedListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-sorted-list.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-sorted-list.galgas", 355)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12151.readProperty_typeName (), var_typeDefinition_12151, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 357)) ;
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
  GALGAS_lstring var_sortedListNameForUsefulness_13946 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 374)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_13946, var_sortedListNameForUsefulness_13946, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 375)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_14135 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 376)), temp_2.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 376)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_13946, var_elementTypeNameForUsefulness_14135 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 377)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_14395 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_attributeMap_14462 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_14523 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_14523.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_14572 = function_typeNameForUsefulEntitiesGraph (enumerator_14523.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 382)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_13946, var_propertyTypeNameForUsefulness_14572 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 383)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_14761 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_14523.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 384)) ;
    GALGAS_bool var_hasSelector_14823 = GALGAS_bool (true) ;
    var_typedAttributeList_14395.addAssign_operation (var_t_14761, enumerator_14523.current_name (HERE), enumerator_14523.current_initialization (HERE), GALGAS_bool (true), var_hasSelector_14823  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 386)) ;
    {
    var_attributeMap_14462.setter_insertKey (enumerator_14523.current_name (HERE), var_t_14761, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 392)) ;
    }
    enumerator_14523.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting_15068 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_15137 = GALGAS_sortDescriptorListForGeneration::init (inCompiler COMMA_HERE) ;
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_15189 (temp_4.readProperty_mSortDescriptorList (), EnumerationOrder::up) ;
  while (enumerator_15189.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_15308 ;
    var_attributeMap_14462.method_searchKey (enumerator_15189.current_mSortedAttributeName (HERE), var_type_15308, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 398)) ;
    var_sortDescriptorList_15137.addAssign_operation (var_type_15308, enumerator_15189.current_mSortedAttributeName (HERE).readProperty_string (), enumerator_15189.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 399)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_attributesUsedForSorting_15068.getter_hasKey (enumerator_15189.current_mSortedAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 400)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_15189.current_mSortedAttributeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_15189.current_mSortedAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 401)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 401)), fixItArray6  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 401)) ;
      }
    }
    var_attributesUsedForSorting_15068.addAssign_operation (enumerator_15189.current_mSortedAttributeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 403)) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = extensionGetter_definition (var_type_15308, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 404)).readProperty_features ().getter_comparable (SOURCE_FILE ("type-sorted-list.galgas", 404)).operator_not (SOURCE_FILE ("type-sorted-list.galgas", 404)).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_15189.current_mSortedAttributeName (HERE).readProperty_location (), GALGAS_string ("the @").add_operation (extensionGetter_definition (var_type_15308, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 405)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 405)).add_operation (GALGAS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 405)), fixItArray8  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 405)) ;
      }
    }
    enumerator_15189.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_9 = this ;
  const GALGAS_sortedListDeclarationAST temp_10 = this ;
  const GALGAS_sortedListDeclarationAST temp_11 = this ;
  const GALGAS_sortedListDeclarationAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (temp_9.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 410)), GALGAS_sortedListTypeForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 412)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_11.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 413)), temp_12.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 413)), var_typedAttributeList_14395, var_sortDescriptorList_15137, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 409)) ;
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
                                                                                                     const GALGAS_sortDescriptorListForGeneration & in_SORT_5F_ATTRIBUTE_5F_LIST,
                                                                                                     const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                                     const GALGAS_bool & in_GENERATE_5F_COMPARISON
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cSortedListElement {\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element mObject ;\n\n//--- Constructors\n  public: cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_569_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_569 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_569.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_569.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_569.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue ()) ;
      if (enumerator_569.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_569_.increment () ;
      enumerator_569.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n  public: cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element & inObject\n        ") ;
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
  GALGAS_uint index_1820_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1820 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1820.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1820.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 42)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1820.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 42)).stringValue ()) ;
      if (enumerator_1820.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1820_.increment () ;
      enumerator_1820.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncSortedListElement (THERE),\nmObject (") ;
  GALGAS_uint index_2115_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2115 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2115.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_2115.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 50)).stringValue ()) ;
      if (enumerator_2115.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_2115_.increment () ;
      enumerator_2115.gotoNextObject () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::\ncSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element & inObject\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncSortedListElement (THERE),\nmObject (inObject) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mObject.isValid () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncSortedListElement * cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copy (void) {\n  cSortedListElement * result = nullptr ;\n  macroMyNew (result, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_3101_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3101 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3101.hasCurrentObject ()) {
      result.appendString ("mObject.mProperty_") ;
      result.appendString (enumerator_3101.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 77)).stringValue ()) ;
      if (enumerator_3101.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_3101_.increment () ;
      enumerator_3101.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString, const int32_t inIndentation) const {\n") ;
  GALGAS_uint index_3535_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3535 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3535.hasCurrentObject ()) {
      result.appendString ("  ioString.appendNewLine () ;\n  ioString.appendStringMultiple (\"| \", inIndentation) ;\n  ioString.appendCString (") ;
      result.appendString (enumerator_3535.current_name (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 91)).stringValue ()) ;
      result.appendString (" \":\") ;\n  mObject.mProperty_") ;
      result.appendString (enumerator_3535.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 92)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation) ;\n") ;
      index_3535_.increment () ;
      enumerator_3535.gotoNextObject () ;
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
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_sortedlist () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterElement (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
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
  GALGAS_uint index_5620_ (0) ;
  if (in_SORT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_sortDescriptorListForGeneration enumerator_5620 (in_SORT_5F_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5620.hasCurrentObject ()) {
      result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = ") ;
      const enumGalgasBool test_2 = enumerator_5620.current_mAscendingOrder (HERE).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("mObject.mProperty_") ;
        result.appendString (enumerator_5620.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 133)).stringValue ()) ;
        result.appendString (".objectCompare (operand->mObject.mProperty_") ;
        result.appendString (enumerator_5620.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 133)).stringValue ()) ;
        result.appendString (")") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("operand->mObject.mProperty_") ;
        result.appendString (enumerator_5620.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 135)).stringValue ()) ;
        result.appendString (".objectCompare (mObject.mProperty_") ;
        result.appendString (enumerator_5620.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 135)).stringValue ()) ;
        result.appendString (")") ;
        } break ;
      default :
        break ;
      }
      result.appendString (" ;\n  }\n") ;
      index_5620_.increment () ;
      enumerator_5620.gotoNextObject () ;
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
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.createNewEmptySortedList (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_sortedListWithValue (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6996_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6996 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6996.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6996.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 163)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_6996_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 163)).stringValue ()) ;
      if (enumerator_6996.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6996_IDX.increment () ;
      enumerator_6996.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = class_func_emptySortedList (THERE) ;\n  cSortedListElement * p = nullptr ;\n  macroMyNew (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_7406_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7406 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7406.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_7406_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 171)).stringValue ()) ;
      if (enumerator_7406.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7406_IDX.increment () ;
      enumerator_7406.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n  capSortedListElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  result.appendObject (attributes) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7860_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7860 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7860.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7860.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 186)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_7860_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 186)).stringValue ()) ;
      if (enumerator_7860.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7860_IDX.increment () ;
      enumerator_7860.gotoNextObject () ;
    }
  }
  result.appendString ("\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = nullptr ;\n    macroMyNew (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_8169_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8169 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8169.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_8169_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 195)).stringValue ()) ;
      if (enumerator_8169.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_8169_IDX.increment () ;
      enumerator_8169.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capSortedListElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8610_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8610 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8610.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8610.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_8610_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8610_IDX.increment () ;
      enumerator_8610.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * /* inCompiler */\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = nullptr ;\n    macroMyNew (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_8933_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8933 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8933.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_8933_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 218)).stringValue ()) ;
      if (enumerator_8933.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_8933_IDX.increment () ;
      enumerator_8933.gotoNextObject () ;
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
  GALGAS_uint index_9785_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9785 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9785.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9785.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 243)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_9785_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 243)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9785_IDX.increment () ;
      enumerator_9785.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_10278_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10278 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10278.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_10278_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 253)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_10278_IDX.increment () ;
      enumerator_10278.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_10510_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10510 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10510.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_10510_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 259)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_10510.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 259)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_10510_IDX.increment () ;
      enumerator_10510.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popGreatest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10886_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10886 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10886.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_10886.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 268)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_10886_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 268)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10886_IDX.increment () ;
      enumerator_10886.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_11379_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11379 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11379.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11379_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 278)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_11379_IDX.increment () ;
      enumerator_11379.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_11611_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11611 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11611.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11611_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 284)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_11611.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 284)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_11611_IDX.increment () ;
      enumerator_11611.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_smallest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11984_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11984 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11984.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11984.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 293)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_11984_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 293)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11984_IDX.increment () ;
      enumerator_11984.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_12480_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12480 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12480.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12480_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 303)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_12480_IDX.increment () ;
      enumerator_12480.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_12712_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12712 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12712.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12712_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 309)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_12712.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 309)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_12712_IDX.increment () ;
      enumerator_12712.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_greatest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13062_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13062 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13062.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_13062.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 318)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_13062_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 318)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13062_IDX.increment () ;
      enumerator_13062.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_13558_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13558 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13558.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13558_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 328)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_13558_IDX.increment () ;
      enumerator_13558.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_13790_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13790 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13790.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13790_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 334)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_13790.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 334)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_13790_IDX.increment () ;
      enumerator_13790.gotoNextObject () ;
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
  GALGAS_uint index_14821_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14821 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14821.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_14821.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 357)).stringValue ()) ;
      result.appendString (" cEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_14821.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 357)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  const cSortedListElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cSortedListElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cSortedListElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  return p->mObject.mProperty_") ;
      result.appendString (enumerator_14821.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_14821_IDX.increment () ;
      enumerator_14821.gotoNextObject () ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_17891 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 460)) ;
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, var_selfTypeDefinition_17891.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 463)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 461))) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_17891.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 468)), var_selfTypeDefinition_17891.readProperty_isConcrete (), var_selfTypeDefinition_17891.readProperty_initializerMap (), var_selfTypeDefinition_17891.readProperty_classFunctionMap (), var_selfTypeDefinition_17891.readProperty_getterMap (), var_selfTypeDefinition_17891.readProperty_setterMap (), var_selfTypeDefinition_17891.readProperty_instanceMethodMap (), var_selfTypeDefinition_17891.readProperty_classMethodMap (), var_selfTypeDefinition_17891.readProperty_optionalMethodMap (), var_selfTypeDefinition_17891.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_17891.readProperty_features (), var_selfTypeDefinition_17891.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_17891.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_17891.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 466))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 466)) ;
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
  cEnumerator_typedPropertyList enumerator_19168 (temp_0.readProperty_mTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_19168.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19168.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 492)) ;
    enumerator_19168.gotoNextObject () ;
  }
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 494)) ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 495)) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_t_19383 = extensionGetter_definition (temp_3.readProperty_mListElementTypeIndex (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 496)) ;
  const GALGAS_sortedListTypeForGeneration temp_4 = this ;
  const GALGAS_sortedListTypeForGeneration temp_5 = this ;
  const GALGAS_sortedListTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 498)), temp_5.readProperty_mTypedAttributeList (), temp_6.readProperty_mSortDescriptorList (), var_t_19383.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-sorted-list.galgas", 501)), extensionGetter_generateCppObjectComparison (var_t_19383.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 502)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 497))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForStruct'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForStruct (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-struct.galgas", 104)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-struct.galgas", 105)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-struct.galgas", 106)) ;
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
  GALGAS_lstring var_key_4882 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 135)), temp_1.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4882, temp_2, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 136)) ;
  }
  const GALGAS_structDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5038 (temp_3.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_5038.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey_5077 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_5038.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 138)), enumerator_5038.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4882, var_propertyKey_5077 COMMA_SOURCE_FILE ("type-struct.galgas", 139)) ;
    }
    enumerator_5038.gotoNextObject () ;
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
  result_result = GALGAS_string ("struct @").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 146)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                          const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap var_optionalMethodMap_6026 = GALGAS_optionalMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntry var_structTypeIndex_6146 ;
  {
  const GALGAS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), var_structTypeIndex_6146, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 160)) ;
  }
  GALGAS_propertyMap var_propertyMap_6224 = GALGAS_propertyMap::init (inCompiler COMMA_HERE) ;
  GALGAS_classFunctionMap var_classFunctionMap_6267 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_constructorPropertyTypeList_6316 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_typedPropertyList var_typedPropertyList_6376 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_6432 = GALGAS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GALGAS_structDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6496 (temp_1.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_6496.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_propertyTypeEntry_6578 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6496.current (HERE).readProperty_typeName (), var_propertyTypeEntry_6578, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 168)) ;
    }
    GALGAS_string temp_2 ;
    const enumGalgasBool test_3 = enumerator_6496.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = enumerator_6496.current (HERE).readProperty_name ().readProperty_string () ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_lstring var_selector_6607 = temp_2.getter_nowhere (SOURCE_FILE ("type-struct.galgas", 169)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = enumerator_6496.current (HERE).readProperty_initialization ().getter_isNone (SOURCE_FILE ("type-struct.galgas", 170)).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_constructorPropertyTypeList_6316.addAssign_operation (var_selector_6607, var_propertyTypeEntry_6578, enumerator_6496.current (HERE).readProperty_name ().readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-struct.galgas", 171)) ;
      }
    }
    var_typesToIncludeInHeaderCompilation_6432.addAssign_operation (var_propertyTypeEntry_6578  COMMA_SOURCE_FILE ("type-struct.galgas", 173)) ;
    var_typedPropertyList_6376.addAssign_operation (var_propertyTypeEntry_6578, enumerator_6496.current (HERE).readProperty_name (), enumerator_6496.current (HERE).readProperty_initialization (), enumerator_6496.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("type-struct.galgas", 178)), enumerator_6496.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("type-struct.galgas", 174)) ;
    {
    var_propertyMap_6224.setter_insertKey (enumerator_6496.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_6496.current (HERE).readProperty_accessControl (), var_structTypeIndex_6146, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 182)), enumerator_6496.current (HERE).readProperty_isConstant (), var_propertyTypeEntry_6578, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 180)) ;
    }
    enumerator_6496.gotoNextObject () ;
  }
  {
  var_classFunctionMap_6267.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("new"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 188)), inCompiler COMMA_HERE), var_constructorPropertyTypeList_6316, GALGAS_bool (true), var_structTypeIndex_6146, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 187)) ;
  }
  GALGAS_getterMap var_getterMap_7528 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7528, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 194)) ;
  }
  GALGAS_setterMap var_setterMap_7580 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_initializerMap var_initializerMap_7619 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7666 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_structDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_structTypeName (), GALGAS_bool (false), var_initializerMap_7619, var_getterMap_7528, var_setterMap_7580, var_instanceMethodMap_7666, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 199)) ;
  }
  GALGAS_typeFeatures var_features_8117 = GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-struct.galgas", 214)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::equal, var_initializerMap_7619.getter_count (SOURCE_FILE ("type-struct.galgas", 216)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_features_8117 = var_features_8117.operator_or (GALGAS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("type-struct.galgas", 217)) COMMA_SOURCE_FILE ("type-struct.galgas", 217)) ;
      {
      const GALGAS_structDeclarationAST temp_7 = this ;
      var_initializerMap_7619.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_6316, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 219)), temp_7.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_6316, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 218)) ;
      }
    }
  }
  const GALGAS_structDeclarationAST temp_8 = this ;
  switch (temp_8.readProperty_comparison ().enumValue ()) {
  case GALGAS_structComparison::kNotBuilt:
    break ;
  case GALGAS_structComparison::kEnum_none:
    {
    }
    break ;
  case GALGAS_structComparison::kEnum_equatable:
    {
      var_features_8117 = var_features_8117.operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("type-struct.galgas", 227)) COMMA_SOURCE_FILE ("type-struct.galgas", 227)) ;
    }
    break ;
  case GALGAS_structComparison::kEnum_comparable:
    {
      var_features_8117 = var_features_8117.operator_or (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("type-struct.galgas", 229)) COMMA_SOURCE_FILE ("type-struct.galgas", 229)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("type-struct.galgas", 229)) COMMA_SOURCE_FILE ("type-struct.galgas", 229)) ;
    }
    break ;
  }
  GALGAS_unifiedTypeMapEntry var_enumeratedType_8797 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_structDeclarationAST temp_10 = this ;
    test_9 = GALGAS_bool (ComparisonKind::equal, temp_10.readProperty_enumeratedElementTypeName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_enumeratedType_8797 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-struct.galgas", 234)) ;
    }
  }
  if (kBoolFalse == test_9) {
    {
    const GALGAS_structDeclarationAST temp_11 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_11.readProperty_enumeratedElementTypeName (), var_enumeratedType_8797, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 236)) ;
    }
  }
  const GALGAS_structDeclarationAST temp_12 = this ;
  const GALGAS_structDeclarationAST temp_13 = this ;
  const GALGAS_structDeclarationAST temp_14 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_9048 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_12.readProperty_structTypeName (), temp_13.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-struct.galgas", 246)), GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("type-struct.galgas", 247)), GALGAS_bool (false), var_typedPropertyList_6376, var_propertyMap_6224, var_typedPropertyList_6376, var_initializerMap_7619, var_classFunctionMap_6267, var_getterMap_7528, var_setterMap_7580, var_instanceMethodMap_7666, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), var_optionalMethodMap_6026, GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_8117, GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_enumeratedType_8797, GALGAS_string ("struct-").add_operation (temp_14.readProperty_structTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-struct.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 265)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-struct.galgas", 266)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_9048.readProperty_typeName (), var_typeDefinition_9048, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 268)) ;
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
  GALGAS_lstring var_structNameForUsefulness_10716 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 282)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_10716, var_structNameForUsefulness_10716, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 283)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_structDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mStructurePropertyListAST ().getter_count (SOURCE_FILE ("type-struct.galgas", 285)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_structTypeName ().readProperty_location (), GALGAS_string ("a structure cannot be empty: it must have at least one property"), fixItArray4  COMMA_SOURCE_FILE ("type-struct.galgas", 286)) ;
    }
  }
  GALGAS_typedPropertyList var_typedPropertyList_11081 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_typedPropertyList var_constructorArgumentList_11131 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_propertyMap_11186 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_structDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11228 (temp_5.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_11228.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_11267 = function_typeNameForUsefulEntitiesGraph (enumerator_11228.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 292)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_10716, var_propertyTypeNameForUsefulness_11267 COMMA_SOURCE_FILE ("type-struct.galgas", 293)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_11457 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11228.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 294)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 295)).getter_hasKey (enumerator_11228.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("type-struct.galgas", 295)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_m_11603 = GALGAS_string ("an property cannot be named:") ;
        cEnumerator_stringset enumerator_11679 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 297)), EnumerationOrder::up) ;
        while (enumerator_11679.hasCurrentObject ()) {
          var_m_11603.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_11679.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 298)) ;
          enumerator_11679.gotoNextObject () ;
        }
        var_m_11603.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 300)) ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_11228.current (HERE).readProperty_name ().readProperty_location (), var_m_11603, fixItArray7  COMMA_SOURCE_FILE ("type-struct.galgas", 301)) ;
      }
    }
    {
    var_propertyMap_11186.setter_insertKey (enumerator_11228.current (HERE).readProperty_name (), var_t_11457, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 303)) ;
    }
    switch (enumerator_11228.current (HERE).readProperty_initialization ().enumValue ()) {
    case GALGAS_propertyInCollectionInitializationAST::kNotBuilt:
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_none:
      {
        var_constructorArgumentList_11131.addAssign_operation (var_t_11457, enumerator_11228.current (HERE).readProperty_name (), enumerator_11228.current (HERE).readProperty_initialization (), enumerator_11228.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("type-struct.galgas", 310)), enumerator_11228.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("type-struct.galgas", 306)) ;
      }
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_some:
      {
      }
      break ;
    }
    var_typedPropertyList_11081.addAssign_operation (var_t_11457, enumerator_11228.current (HERE).readProperty_name (), enumerator_11228.current (HERE).readProperty_initialization (), enumerator_11228.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("type-struct.galgas", 318)), enumerator_11228.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("type-struct.galgas", 314)) ;
    const GALGAS_structDeclarationAST temp_8 = this ;
    switch (temp_8.readProperty_comparison ().enumValue ()) {
    case GALGAS_structComparison::kNotBuilt:
      break ;
    case GALGAS_structComparison::kEnum_none:
      {
      }
      break ;
    case GALGAS_structComparison::kEnum_equatable:
      {
        GALGAS_typeFeatures var_propertyFeatures_12429 = extensionGetter_definition (var_t_11457, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 324)).readProperty_features () ;
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_propertyFeatures_12429.getter_equatable (SOURCE_FILE ("type-struct.galgas", 325)).operator_not (SOURCE_FILE ("type-struct.galgas", 325)).operator_and (var_propertyFeatures_12429.getter_comparable (SOURCE_FILE ("type-struct.galgas", 325)).operator_not (SOURCE_FILE ("type-struct.galgas", 325)) COMMA_SOURCE_FILE ("type-struct.galgas", 325)).operator_and (var_propertyFeatures_12429.getter_referenceEquatable (SOURCE_FILE ("type-struct.galgas", 325)).operator_not (SOURCE_FILE ("type-struct.galgas", 325)) COMMA_SOURCE_FILE ("type-struct.galgas", 325)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_11228.current (HERE).readProperty_name ().readProperty_location (), GALGAS_string ("the structure is not equatable, because '").add_operation (enumerator_11228.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 327)).add_operation (GALGAS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 327)), fixItArray10  COMMA_SOURCE_FILE ("type-struct.galgas", 326)) ;
          }
        }
      }
      break ;
    case GALGAS_structComparison::kEnum_comparable:
      {
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = extensionGetter_definition (var_t_11457, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 330)).readProperty_features ().getter_comparable (SOURCE_FILE ("type-struct.galgas", 330)).operator_not (SOURCE_FILE ("type-struct.galgas", 330)).boolEnum () ;
          if (kBoolTrue == test_11) {
            TC_Array <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_11228.current (HERE).readProperty_name ().readProperty_location (), GALGAS_string ("the structure is not comparable, because '").add_operation (enumerator_11228.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 332)).add_operation (GALGAS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 332)), fixItArray12  COMMA_SOURCE_FILE ("type-struct.galgas", 331)) ;
          }
        }
      }
      break ;
    }
    enumerator_11228.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedVariableCppNameSet_13209 ;
  GALGAS_string var_initializationCode_13245 ;
  const GALGAS_structDeclarationAST temp_13 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_13.readProperty_mStructurePropertyListAST (), var_structNameForUsefulness_10716, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_13209, var_initializationCode_13245, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 337)) ;
  GALGAS_bool var_constructorNeedsCompilerVar_13285 = var_unusedVariableCppNameSet_13209.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 347)) COMMA_SOURCE_FILE ("type-struct.galgas", 347)).operator_not (SOURCE_FILE ("type-struct.galgas", 347)) ;
  const GALGAS_structDeclarationAST temp_14 = this ;
  GALGAS_unifiedTypeMapEntry var_structType_13381 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_14.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 348)) ;
  const GALGAS_structDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (temp_15.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 350)), GALGAS_structTypeForGeneration::init_21__21__21__21__21__21_ (var_structType_13381, var_typedPropertyList_11081, var_constructorArgumentList_11131, var_initializationCode_13245, var_constructorNeedsCompilerVar_13285, extensionGetter_definition (var_structType_13381, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 357)).readProperty_features ().getter_generateSynthetizedInitializer (SOURCE_FILE ("type-struct.galgas", 357)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 349)) ;
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
  cEnumerator_typedPropertyList enumerator_14664 (temp_0.readProperty_mTypedPropertyList (), EnumerationOrder::up) ;
  while (enumerator_14664.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_14664.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 383)) ;
    enumerator_14664.gotoNextObject () ;
  }
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_14759 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 385)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (inCompiler, var_selfTypeDefinition_14759.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 388)), temp_3.readProperty_mTypedPropertyList () COMMA_SOURCE_FILE ("type-struct.galgas", 386))) ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_14759.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 393)), var_selfTypeDefinition_14759.readProperty_isConcrete (), var_selfTypeDefinition_14759.readProperty_initializerMap (), var_selfTypeDefinition_14759.readProperty_classFunctionMap (), var_selfTypeDefinition_14759.readProperty_getterMap (), var_selfTypeDefinition_14759.readProperty_setterMap (), var_selfTypeDefinition_14759.readProperty_instanceMethodMap (), var_selfTypeDefinition_14759.readProperty_classMethodMap (), var_selfTypeDefinition_14759.readProperty_optionalMethodMap (), var_selfTypeDefinition_14759.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_14759.readProperty_features (), var_selfTypeDefinition_14759.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_14759.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_14759.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("type-struct.galgas", 391))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 391)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 417)) ;
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_16093 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 418)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  const GALGAS_structTypeForGeneration temp_5 = this ;
  const GALGAS_structTypeForGeneration temp_6 = this ;
  const GALGAS_structTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_16093.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 421)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), temp_6.readProperty_mConstructorNeedsCompilerVar (), temp_7.readProperty_synthetizeAnInitializer (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_16093.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 427)) COMMA_SOURCE_FILE ("type-struct.galgas", 419))) ;
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
                                                                                    const GALGAS_typedPropertyList & in_PROPERTY_5F_LIST
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Properties\n") ;
  GALGAS_uint index_447_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_447 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_447.hasCurrentObject ()) {
      result.appendString ("  public: GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_447.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_447.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" ;\n  public: inline GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_447.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_447.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue ()) ;
      result.appendString (" (void) const {\n    return mProperty_") ;
      result.appendString (enumerator_447.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (" ;\n  }\n\n") ;
      index_447_.increment () ;
      enumerator_447.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Property setters\n") ;
  GALGAS_uint index_1201_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1201 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1201.hasCurrentObject ()) {
      result.appendString ("  public: inline void setter_set") ;
      result.appendString (enumerator_1201.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 26)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" (const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1201.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" & inValue COMMA_UNUSED_LOCATION_ARGS) {\n    mProperty_") ;
      result.appendString (enumerator_1201.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" = inValue ;\n  }\n\n") ;
      index_1201_.increment () ;
      enumerator_1201.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------- Virtual destructor\n  public: virtual ~ GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Set initialized properties\n  private: void setInitializedProperties (Compiler * inCompiler) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1918_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1918 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1918.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1918.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 38)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1918.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 38)).stringValue ()) ;
      if (enumerator_1918.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1918_.increment () ;
      enumerator_1918.gotoNextObject () ;
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
                                                                                                const GALGAS_typedPropertyList & in_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                                const GALGAS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                                const GALGAS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR,
                                                                                                const GALGAS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER,
                                                                                                const GALGAS_bool & in_GENERATE_5F_COMPARISON
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  GALGAS_uint index_250_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_250 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_250.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_250.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 6)).stringValue ()) ;
      result.appendString (" ()") ;
      if (enumerator_250.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_250_.increment () ;
      enumerator_250.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n}\n\n") ;
  const enumGalgasBool test_0 = in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("//---Synthetized initializer -----------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_845_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_845 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_845.hasCurrentObject ()) {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_845.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 22)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_845.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 22)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_845_.increment () ;
        enumerator_845.gotoNextObject () ;
      }
    }
    result.appendString ("Compiler * inCompiler\n          ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  result.setInitializedProperties (inCompiler) ;\n") ;
    GALGAS_uint index_1170_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1170 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_1170.hasCurrentObject ()) {
        result.appendString ("  result.mProperty_") ;
        result.appendString (enumerator_1170.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 30)).stringValue ()) ;
        result.appendString (" = in_") ;
        result.appendString (enumerator_1170.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 30)).stringValue ()) ;
        result.appendString (" ;\n") ;
        index_1170_.increment () ;
        enumerator_1170.gotoNextObject () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
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
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1868_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1868 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1868.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1868.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_1868_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 51)).stringValue ()) ;
      if (enumerator_1868.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1868_IDX.increment () ;
      enumerator_1868.gotoNextObject () ;
    }
  }
  result.appendString (") :\n") ;
  GALGAS_uint index_2077_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2077 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2077.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_2077.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (" (inOperand") ;
      result.appendString (index_2077_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (")") ;
      if (enumerator_2077.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_2077_IDX.increment () ;
      enumerator_2077.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_new (") ;
  columnMarker = result.currentColumn () ;
  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 64)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n") ;
    } break ;
  case kBoolFalse : {
    GALGAS_uint index_2556_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_2556 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_2556.hasCurrentObject ()) {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2556.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 69)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_2556.current_name (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_2556_.increment () ;
        enumerator_2556.gotoNextObject () ;
      }
    }
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.setInitializedProperties (inCompiler) ;\n") ;
  GALGAS_uint index_2887_ (0) ;
  if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2887 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2887.hasCurrentObject ()) {
      result.appendString ("  result.mProperty_") ;
      result.appendString (enumerator_2887.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 79)).stringValue ()) ;
      result.appendString (" = in_") ;
      result.appendString (enumerator_2887.current_name (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" ;\n") ;
      index_2887_.increment () ;
      enumerator_2887.gotoNextObject () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n") ;
  const enumGalgasBool test_3 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::operandEqual ;\n") ;
    GALGAS_uint index_3401_ (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3401 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3401.hasCurrentObject ()) {
        result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = mProperty_") ;
        result.appendString (enumerator_3401.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 90)).stringValue ()) ;
        result.appendString (".objectCompare (inOperand.mProperty_") ;
        result.appendString (enumerator_3401.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 90)).stringValue ()) ;
        result.appendString (") ;\n  }\n") ;
        index_3401_.increment () ;
        enumerator_3401.gotoNextObject () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return ") ;
  GALGAS_uint index_3916_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3916 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3916.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_3916.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 101)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      if (enumerator_3916.hasNextObject ()) {
        result.appendString (" && ") ;
      }
      index_3916_.increment () ;
      enumerator_3916.gotoNextObject () ;
    }
  }
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n") ;
  GALGAS_uint index_4259_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4259 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4259.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_4259.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 111)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_4259_.increment () ;
      enumerator_4259.gotoNextObject () ;
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
  GALGAS_uint index_4802_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4802 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4802.hasCurrentObject ()) {
      result.appendString ("    mProperty_") ;
      result.appendString (enumerator_4802.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 125)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation+1) ;\n") ;
      if (enumerator_4802.hasNextObject ()) {
        result.appendString ("    ioString.appendCString (\", \") ;\n") ;
      }
      index_4802_IDX.increment () ;
      enumerator_4802.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GALGAS_string (result) ;
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
  result_result = GALGAS_string ("abstract extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 154)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 154)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 154)) ;
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
  GALGAS_lstring var_key_6811 = GALGAS_lstring::init_21__21_ (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 168)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 168)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 168)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_abstractExtensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6811, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 171)) ;
  }
  {
  const GALGAS_abstractExtensionGetterAST temp_4 = this ;
  const GALGAS_abstractExtensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6811, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 172)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 172)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 174)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 174)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 175)) ;
      }
    }
  }
  const GALGAS_abstractExtensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_7346 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 180)) ;
  if (nullptr != objectArray_7346) {
    macroValidSharedObject (objectArray_7346, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionGetterAST temp_10 = this ;
    const GALGAS_abstractExtensionGetterAST temp_11 = this ;
    const GALGAS_abstractExtensionGetterAST temp_12 = this ;
    objectArray_7346->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionGetterName (), temp_11.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_12.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("extension-abstract-getter.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 181)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_unifiedTypeMapEntry var_selfType_8903 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 214)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8903, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 216)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-getter.galgas", 216)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 216)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionGetterAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an extension getter: '@").add_operation (extensionGetter_definition (var_selfType_8903, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 217)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8903, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 219)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionGetterAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_8903, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 221)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 221)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 221)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 220)) ;
      }
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9537 = GALGAS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GALGAS_abstractExtensionGetterAST temp_7 = this ;
  cEnumerator_formalInputParameterListAST enumerator_9646 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), EnumerationOrder::up) ;
  while (enumerator_9646.hasCurrentObject ()) {
    var_formalParameterListForGeneration_9537.addAssign_operation (enumerator_9646.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9646.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 228)), enumerator_9646.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_9646.current_mFormalArgumentName (HERE), enumerator_9646.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 226)) ;
    enumerator_9646.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterAST temp_8 = this ;
  const GALGAS_abstractExtensionGetterAST temp_9 = this ;
  const GALGAS_abstractExtensionGetterAST temp_10 = this ;
  const GALGAS_abstractExtensionGetterAST temp_11 = this ;
  const GALGAS_abstractExtensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 235)), GALGAS_abstractExtensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 238)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 238)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 238)), var_selfType_8903, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 241)), var_formalParameterListForGeneration_9537, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 234)) ;
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
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  const GALGAS_abstractExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 263)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 283)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 292)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 291))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 305)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 304)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 305)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 306))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 304)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 307)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 308)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_4 = this ;
  cEnumerator_formalInputParameterListForGeneration enumerator_13858 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_13858.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13858.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 310)) ;
    enumerator_13858.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_6 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_7 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 313)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_8.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 312))) ;
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
  GALGAS_lstring var_key_5955 = GALGAS_lstring::init_21__21_ (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 145)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 145)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 145)), temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_abstractExtensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5955, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)) ;
  }
  {
  const GALGAS_abstractExtensionMethodAST temp_4 = this ;
  const GALGAS_abstractExtensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5955, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 149)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 149)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 151)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 151)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 152)) ;
      }
    }
  }
  const GALGAS_abstractExtensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_6490 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 157)) ;
  if (nullptr != objectArray_6490) {
    macroValidSharedObject (objectArray_6490, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionMethodAST temp_10 = this ;
    const GALGAS_abstractExtensionMethodAST temp_11 = this ;
    objectArray_6490->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionMethodName (), temp_11.readProperty_mAbstractExtensionMethodFormalParameterList (), GALGAS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("extension-abstract-method.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 158)) ;
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
  result_result = GALGAS_string ("abstract extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 169)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 169)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 169)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_unifiedTypeMapEntry var_selfType_8462 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 198)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8462, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 200)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-method.galgas", 200)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 200)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionMethodAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_8462, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 201)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 201)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 201)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 201)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8462, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 202)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionMethodAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_8462, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 203)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 203)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 203)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 203)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_9037 = GALGAS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GALGAS_abstractExtensionMethodAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_9205 (temp_7.readProperty_mAbstractExtensionMethodFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_9205.hasCurrentObject ()) {
    var_formalParameterListForGeneration_9037.addAssign_operation (enumerator_9205.current_mFormalSelector (HERE), enumerator_9205.current_mFormalArgumentPassingMode (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9205.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 211)), enumerator_9205.current_mFormalArgumentName (HERE), enumerator_9205.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 208)) ;
    enumerator_9205.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodAST temp_8 = this ;
  const GALGAS_abstractExtensionMethodAST temp_9 = this ;
  const GALGAS_abstractExtensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (temp_8.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 217)), GALGAS_abstractExtensionMethodForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21_ (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_8462, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 220)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 220)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 220)).add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 220)), var_selfType_8462, temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_9037, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 216)) ;
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
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  const GALGAS_abstractExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionMethodListMapAST, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 245)) ;
  }
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 270)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), temp_2.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 269))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 279)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 288)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 287)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 288)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 289))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 287)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 290)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_13256 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_13256.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13256.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 292)) ;
    enumerator_13256.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, temp_4.readProperty_mReceiverType (), temp_5.readProperty_mAbstractExtensionMethodName (), temp_6.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 294))) ;
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
  GALGAS_lstring var_key_5223 = GALGAS_lstring::init_21__21_ (GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 118)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 118)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 118)), temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_abstractExtensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5223, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 119)) ;
  }
  {
  const GALGAS_abstractExtensionSetterAST temp_4 = this ;
  const GALGAS_abstractExtensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5223, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 120)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 120)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 122)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 122)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionSetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123)) ;
      }
    }
  }
  const GALGAS_abstractExtensionSetterAST temp_9 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_5740 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 128)) ;
  if (nullptr != objectArray_5740) {
    macroValidSharedObject (objectArray_5740, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionSetterAST temp_10 = this ;
    const GALGAS_abstractExtensionSetterAST temp_11 = this ;
    objectArray_5740->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionSetterName (), temp_11.readProperty_mAbstractExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 129)) ;
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
  result_result = GALGAS_string ("abstract extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 139)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 139)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 139)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_unifiedTypeMapEntry var_selfType_7686 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 169)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7686, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 171)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-setter.galgas", 171)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 171)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionSetterAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7686, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 172)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 172)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 172)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 172)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7686, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 173)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionSetterAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7686, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 174)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 174)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 174)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 174)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8262 = GALGAS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GALGAS_abstractExtensionSetterAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_8430 (temp_7.readProperty_mAbstractExtensionSetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_8430.hasCurrentObject ()) {
    var_formalParameterListForGeneration_8262.addAssign_operation (enumerator_8430.current_mFormalSelector (HERE), enumerator_8430.current_mFormalArgumentPassingMode (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8430.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 182)), enumerator_8430.current_mFormalArgumentName (HERE), enumerator_8430.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 179)) ;
    enumerator_8430.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterAST temp_8 = this ;
  const GALGAS_abstractExtensionSetterAST temp_9 = this ;
  const GALGAS_abstractExtensionSetterAST temp_10 = this ;
  const GALGAS_abstractExtensionSetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (temp_8.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 188)), GALGAS_abstractExtensionSetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21_ (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191)).add_operation (temp_10.readProperty_mAbstractExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191)), var_selfType_7686, temp_11.readProperty_mAbstractExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_8262, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 187)) ;
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
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  const GALGAS_abstractExtensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 215)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 234)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 242)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName (), temp_2.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 241))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 255)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 255)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 255)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 255))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 255)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 256)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_12355 (temp_3.readProperty_mAbstractExtensionSetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_12355.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12355.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 258)) ;
    enumerator_12355.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 261)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mAbstractExtensionSetterName (), temp_6.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 260))) ;
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
  result_result = GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 212)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 212)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 212)) ;
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
  GALGAS_lstring var_key_8939 = GALGAS_lstring::init_21__21_ (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 224)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 224)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 224)), temp_2.readProperty_mExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_extensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8939, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 225)) ;
  }
  {
  const GALGAS_extensionGetterAST temp_4 = this ;
  const GALGAS_extensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_8939, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 226)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-getter.galgas", 226)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-getter.galgas", 228)).operator_not (SOURCE_FILE ("extension-getter.galgas", 228)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 229)) ;
      }
    }
  }
  const GALGAS_extensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_9437 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 234)) ;
  if (nullptr != objectArray_9437) {
    macroValidSharedObject (objectArray_9437, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_extensionGetterAST temp_10 = this ;
    const GALGAS_extensionGetterAST temp_11 = this ;
    const GALGAS_extensionGetterAST temp_12 = this ;
    objectArray_9437->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionGetterName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-getter.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 235)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                        const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_lstring var_nameForUsefulness_11150 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 273)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11150, var_nameForUsefulness_11150, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 274)) ;
  }
  const GALGAS_extensionGetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_11328 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 275)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_11328, var_nameForUsefulness_11150 COMMA_SOURCE_FILE ("extension-getter.galgas", 276)) ;
  }
  const GALGAS_extensionGetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_11521 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 278)) ;
  GALGAS_string var_selfObjectNameNew_11632 ;
  GALGAS_string var_selfObjectAccessorNew_11664 ;
  GALGAS_bool var_implementedAsFunctionNew_11698 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_11521, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 283)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 283)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectNameNew_11632 = GALGAS_string ("this") ;
      var_selfObjectAccessorNew_11664 = GALGAS_string ("this->") ;
      var_implementedAsFunctionNew_11698 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameNew_11632 = GALGAS_string ("inObject") ;
    var_selfObjectAccessorNew_11664 = GALGAS_string ("inObject.") ;
    var_implementedAsFunctionNew_11698 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionGetterAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContextNew_12043 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_11632, GALGAS_selfAvailability::class_func_available (var_selfType_11521, GALGAS_selfMutability::class_func_none (SOURCE_FILE ("extension-getter.galgas", 297))  COMMA_SOURCE_FILE ("extension-getter.galgas", 297)), var_selfObjectAccessorNew_11664, temp_5.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_13019 ;
  GALGAS_unifiedTypeMapEntry var_returnType_13061 ;
  GALGAS_string var_returnVariableCppName_13081 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_13112 ;
  {
  const GALGAS_extensionGetterAST temp_6 = this ;
  GALGAS_typedPropertyList temp_7 ;
  const enumGalgasBool test_8 = extensionGetter_definition (var_selfType_11521, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 307)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 307)).operator_or (GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_11521, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 307)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-getter.galgas", 307)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 307)).operator_or (GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_11521, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 307)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_sharedMapEntryType (SOURCE_FILE ("extension-getter.galgas", 307)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 307)).boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = extensionGetter_definition (var_selfType_11521, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 308)).readProperty_allTypedPropertyList () ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  }
  const GALGAS_extensionGetterAST temp_9 = this ;
  const GALGAS_extensionGetterAST temp_10 = this ;
  const GALGAS_extensionGetterAST temp_11 = this ;
  const GALGAS_extensionGetterAST temp_12 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_11150, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_12043, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionGetterFormalInputParameterList (), temp_7, var_selfObjectAccessorNew_11664, temp_9.readProperty_mExtensionGetterInstructionList (), temp_10.readProperty_mExtensionGetterReturnedVariableName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_13019, var_returnType_13061, var_returnVariableCppName_13081, var_semanticInstructionListForGeneration_13112, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 301)) ;
  }
  const GALGAS_extensionGetterAST temp_13 = this ;
  const GALGAS_extensionGetterAST temp_14 = this ;
  const GALGAS_extensionGetterAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (temp_13.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 323)), GALGAS_extensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_selfType_11521, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 326)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 326)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 326)).add_operation (temp_14.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 326)), var_selfType_11521, temp_15.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunctionNew_11698, var_returnType_13061, var_returnVariableCppName_13081, var_formalParameterListForGeneration_13019, extensionGetter_definition (var_selfType_11521, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 333)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_13112, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 322)) ;
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
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 356)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-getter.galgas", 376)) ;
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
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 385)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionGetterName (), temp_4.readProperty_mExtensionGetterFormalParameterList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 388)) COMMA_SOURCE_FILE ("extension-getter.galgas", 384))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionGetterForGeneration temp_6 = this ;
    const GALGAS_extensionGetterForGeneration temp_7 = this ;
    const GALGAS_extensionGetterForGeneration temp_8 = this ;
    const GALGAS_extensionGetterForGeneration temp_9 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 392)).readProperty_typeName ().readProperty_string (), temp_7.readProperty_mExtensionGetterName (), temp_8.readProperty_mExtensionGetterFormalParameterList (), temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 391))) ;
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
  cEnumerator_formalInputParameterListForGeneration enumerator_17348 (temp_0.readProperty_mExtensionGetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_17348.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17348.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 406)) ;
    enumerator_17348.gotoNextObject () ;
  }
  const GALGAS_extensionGetterForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 408)) ;
  const GALGAS_extensionGetterForGeneration temp_2 = this ;
  GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_17535 = temp_2.readProperty_mExtensionGetterFormalParameterList () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_extensionGetterForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_extensionGetterForGeneration temp_5 = this ;
      var_extensionReaderFormalParameterList_17535.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 412)), temp_5.readProperty_mReceiverType (), GALGAS_string ("inObject"), GALGAS_lstring::init_21__21_ (GALGAS_string ("self"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 415)), inCompiler COMMA_HERE), GALGAS_bool (true), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 411)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_6 = this ;
      const GALGAS_extensionGetterForGeneration temp_7 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 420)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 419)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 420)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 421))  COMMA_SOURCE_FILE ("extension-getter.galgas", 419)) ;
      GALGAS_string var_code_18432 ;
      {
      const GALGAS_extensionGetterForGeneration temp_8 = this ;
      const GALGAS_extensionGetterForGeneration temp_9 = this ;
      const GALGAS_extensionGetterForGeneration temp_10 = this ;
      const GALGAS_extensionGetterForGeneration temp_11 = this ;
      routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GALGAS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 423)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_17535, temp_9.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GALGAS_bool (false), GALGAS_bool (false), var_code_18432, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 422)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_12 = this ;
      const GALGAS_extensionGetterForGeneration temp_13 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 435)).readProperty_typeName ().readProperty_string (), temp_13.readProperty_mExtensionGetterName (), var_code_18432 COMMA_SOURCE_FILE ("extension-getter.galgas", 434))) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_extensionGetterForGeneration temp_14 = this ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 440)) ;
    const GALGAS_extensionGetterForGeneration temp_15 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_18776 = temp_15.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_18822 = GALGAS_bool (true) ;
    if (GALGAS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas", 443)).isValid ()) {
      uint32_t variant_18845 = GALGAS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas", 443)).uintValue () ;
      bool loop_18845 = true ;
      while (loop_18845) {
        loop_18845 = var_searching_18822.isValid () ;
        if (loop_18845) {
          loop_18845 = var_searching_18822.boolValue () ;
        }
        if (loop_18845 && (0 == variant_18845)) {
          loop_18845 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 443)) ;
        }
        if (loop_18845) {
          variant_18845 -- ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = extensionGetter_definition (var_baseType_18776, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 444)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-getter.galgas", 444)).operator_not (SOURCE_FILE ("extension-getter.galgas", 444)).boolEnum () ;
            if (kBoolTrue == test_16) {
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                const GALGAS_extensionGetterForGeneration temp_18 = this ;
                test_17 = extensionGetter_definition (extensionGetter_definition (var_baseType_18776, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 445)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 445)).readProperty_getterMap ().getter_hasKey (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas", 445)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  var_baseType_18776 = extensionGetter_definition (var_baseType_18776, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 446)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_17) {
                var_searching_18822 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_16) {
            var_searching_18822 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionGetterForGeneration temp_19 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_18776, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 455)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 454)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 455)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 456))  COMMA_SOURCE_FILE ("extension-getter.galgas", 454)) ;
    GALGAS_string var_extensionGetterCode_19818 ;
    {
    const GALGAS_extensionGetterForGeneration temp_20 = this ;
    const GALGAS_extensionGetterForGeneration temp_21 = this ;
    const GALGAS_extensionGetterForGeneration temp_22 = this ;
    const GALGAS_extensionGetterForGeneration temp_23 = this ;
    const GALGAS_extensionGetterForGeneration temp_24 = this ;
    routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GALGAS_string ("cPtr_").add_operation (extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 458)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 458)).add_operation (GALGAS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 458)).add_operation (temp_21.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 458)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_17535, temp_22.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("Compiler"), temp_23.readProperty_mResultType (), temp_24.readProperty_mResultVarCppName (), var_extensionGetterCode_19818, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 457)) ;
    }
    const GALGAS_extensionGetterForGeneration temp_25 = this ;
    const GALGAS_extensionGetterForGeneration temp_26 = this ;
    const GALGAS_extensionGetterForGeneration temp_27 = this ;
    const GALGAS_extensionGetterForGeneration temp_28 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, extensionGetter_definition (temp_25.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 468)).readProperty_typeName ().readProperty_string (), temp_26.readProperty_mExtensionGetterName (), temp_27.readProperty_mExtensionGetterFormalParameterList (), var_extensionGetterCode_19818, temp_28.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 467))) ;
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
  result_result = GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 162)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 162)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 162)) ;
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
  GALGAS_lstring var_key_7215 = GALGAS_lstring::init_21__21_ (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 175)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 175)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 175)), temp_2.readProperty_mExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_extensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7215, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 178)) ;
  }
  {
  const GALGAS_extensionMethodAST temp_4 = this ;
  const GALGAS_extensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7215, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 179)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-method.galgas", 179)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-method.galgas", 181)).operator_not (SOURCE_FILE ("extension-method.galgas", 181)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 182)) ;
      }
    }
  }
  const GALGAS_extensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_7732 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 187)) ;
  if (nullptr != objectArray_7732) {
    macroValidSharedObject (objectArray_7732, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_extensionMethodAST temp_10 = this ;
    const GALGAS_extensionMethodAST temp_11 = this ;
    objectArray_7732->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mExtensionMethodName (), temp_11.readProperty_mExtensionMethodFormalParameterList (), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-method.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 188)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                        const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_lstring var_nameForUsefulness_9306 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 218)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9306, var_nameForUsefulness_9306, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 219)) ;
  }
  const GALGAS_extensionMethodAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_9488 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 220)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9488, var_nameForUsefulness_9306 COMMA_SOURCE_FILE ("extension-method.galgas", 221)) ;
  }
  const GALGAS_extensionMethodAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9688 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 223)) ;
  GALGAS_string var_selfObjectNameString_9764 ;
  GALGAS_string var_selfObjectPropertyAccessorString_9801 ;
  GALGAS_bool var_implementedAsFunction_9848 ;
  GALGAS_bool var_isReferenceClass_9912 = GALGAS_bool (false) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_isReference_10008 ;
    const bool optionalResult9980 = extensionGetter_definition (var_selfType_9688, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 229)).readProperty_typeKind ().optional_classType (var_isReference_10008) ;
    if (!optionalResult9980) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      var_isReferenceClass_9912 = var_isReference_10008 ;
      var_selfObjectNameString_9764 = GALGAS_string ("this") ;
      var_selfObjectPropertyAccessorString_9801 = GALGAS_string ("this->") ;
      var_implementedAsFunction_9848 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameString_9764 = GALGAS_string ("inObject") ;
    var_selfObjectPropertyAccessorString_9801 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_9848 = GALGAS_bool (true) ;
  }
  GALGAS_selfMutability temp_5 ;
  const enumGalgasBool test_6 = var_isReferenceClass_9912.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-method.galgas", 244)) ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_selfMutability::class_func_none (SOURCE_FILE ("extension-method.galgas", 244)) ;
  }
  const GALGAS_extensionMethodAST temp_7 = this ;
  GALGAS_analysisContext var_analysisContextNew_10370 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_9764, GALGAS_selfAvailability::class_func_available (var_selfType_9688, temp_5  COMMA_SOURCE_FILE ("extension-method.galgas", 244)), var_selfObjectPropertyAccessorString_9801, temp_7.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GALGAS_bool var_isRefClass_10823 = GALGAS_bool (false) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    GALGAS_bool var_reference_10913 ;
    const bool optionalResult10885 = extensionGetter_definition (var_selfType_9688, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 249)).readProperty_typeKind ().optional_classType (var_reference_10913) ;
    if (!optionalResult10885) {
      test_8 = kBoolFalse ;
    }
    if (kBoolTrue == test_8) {
      var_isRefClass_10823 = var_reference_10913 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_10974 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_typedPropertyList var_nonMutableProperties_11024 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_9688, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 254)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-method.galgas", 254)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_nonMutableProperties_11024 = extensionGetter_definition (var_selfType_9688, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)).readProperty_allTypedPropertyList () ;
    }
  }
  if (kBoolFalse == test_9) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      GALGAS_bool var_isReference_11273 ;
      const bool optionalResult11245 = extensionGetter_definition (var_selfType_9688, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 256)).readProperty_typeKind ().optional_classType (var_isReference_11273) ;
      if (!optionalResult11245) {
        test_10 = kBoolFalse ;
      }
      if (kBoolTrue == test_10) {
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = var_isReference_11273.boolEnum () ;
          if (kBoolTrue == test_11) {
            var_mutableProperties_10974 = extensionGetter_definition (var_selfType_9688, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 258)).readProperty_allTypedPropertyList () ;
          }
        }
        if (kBoolFalse == test_11) {
          var_nonMutableProperties_11024 = extensionGetter_definition (var_selfType_9688, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 260)).readProperty_allTypedPropertyList () ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11849 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_11897 ;
  {
  const GALGAS_extensionMethodAST temp_12 = this ;
  const GALGAS_extensionMethodAST temp_13 = this ;
  const GALGAS_extensionMethodAST temp_14 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_9306, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_10370, ioArgument_ioTypeMap, temp_12.readProperty_mExtensionMethodFormalParameterList (), var_nonMutableProperties_11024, var_mutableProperties_10974, temp_13.readProperty_mExtensionMethodInstructionList (), temp_14.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_11849, var_formalParameterListForGeneration_11897, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 263)) ;
  }
  const GALGAS_extensionMethodAST temp_15 = this ;
  const GALGAS_extensionMethodAST temp_16 = this ;
  const GALGAS_extensionMethodAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (temp_15.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 278)), GALGAS_extensionMethodForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_9688, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 281)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 281)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 281)).add_operation (temp_16.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 281)), var_selfType_9688, temp_17.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_9848, var_formalParameterListForGeneration_11897, extensionGetter_definition (var_selfType_9688, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 286)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_11849, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 277)) ;
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
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 314)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-method.galgas", 333)) ;
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
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 343)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionMethodName (), temp_4.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 342))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_5 = this ;
    const GALGAS_extensionMethodForGeneration temp_6 = this ;
    const GALGAS_extensionMethodForGeneration temp_7 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 349)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionMethodName (), temp_7.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 348))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionMethodForGeneration temp_2 = this ;
      GALGAS_formalParameterListForGeneration var_extensionMethodFormalParameterList_16094 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GALGAS_extensionMethodForGeneration temp_3 = this ;
      var_extensionMethodFormalParameterList_16094.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 366)), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 367)), temp_3.readProperty_mReceiverType (), GALGAS_lstring::init_21__21_ (GALGAS_string ("self"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 369)), inCompiler COMMA_HERE), GALGAS_string ("inObject"), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 365)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_4 = this ;
      const GALGAS_extensionMethodForGeneration temp_5 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 373)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 373)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 373)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 373))  COMMA_SOURCE_FILE ("extension-method.galgas", 373)) ;
      GALGAS_string var_code_17043 ;
      {
      const GALGAS_extensionMethodForGeneration temp_6 = this ;
      const GALGAS_extensionMethodForGeneration temp_7 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GALGAS_bool (false), GALGAS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 376)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_16094, temp_7.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_17043, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 374)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_8 = this ;
      const GALGAS_extensionMethodForGeneration temp_9 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 388)).readProperty_typeName ().readProperty_string (), temp_9.readProperty_mExtensionMethodName (), var_code_17043 COMMA_SOURCE_FILE ("extension-method.galgas", 387))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_10 = this ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 393)) ;
    const GALGAS_extensionMethodForGeneration temp_11 = this ;
    cEnumerator_formalParameterListForGeneration enumerator_17375 (temp_11.readProperty_mExtensionMethodFormalParameterList (), EnumerationOrder::up) ;
    while (enumerator_17375.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_17375.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 395)) ;
      enumerator_17375.gotoNextObject () ;
    }
    const GALGAS_extensionMethodForGeneration temp_12 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_17525 = temp_12.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_17569 = GALGAS_bool (true) ;
    if (GALGAS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas", 399)).isValid ()) {
      uint32_t variant_17590 = GALGAS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas", 399)).uintValue () ;
      bool loop_17590 = true ;
      while (loop_17590) {
        loop_17590 = var_searching_17569.isValid () ;
        if (loop_17590) {
          loop_17590 = var_searching_17569.boolValue () ;
        }
        if (loop_17590 && (0 == variant_17590)) {
          loop_17590 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 399)) ;
        }
        if (loop_17590) {
          variant_17590 -- ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = extensionGetter_definition (var_baseType_17525, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 400)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-method.galgas", 400)).operator_not (SOURCE_FILE ("extension-method.galgas", 400)).boolEnum () ;
            if (kBoolTrue == test_13) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                const GALGAS_extensionMethodForGeneration temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_17525, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 401)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 401)).readProperty_instanceMethodMap ().getter_hasKey (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas", 401)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  var_baseType_17525 = extensionGetter_definition (var_baseType_17525, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 402)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_14) {
                var_searching_17569 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_13) {
            var_searching_17569 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionMethodForGeneration temp_16 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (var_baseType_17525, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 411)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 411)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 411)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 412))  COMMA_SOURCE_FILE ("extension-method.galgas", 410)) ;
    GALGAS_string var_methodImplementation_18362 ;
    {
    const GALGAS_extensionMethodForGeneration temp_17 = this ;
    const GALGAS_extensionMethodForGeneration temp_18 = this ;
    const GALGAS_extensionMethodForGeneration temp_19 = this ;
    const GALGAS_extensionMethodForGeneration temp_20 = this ;
    routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_17.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_18362, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 413)) ;
    }
    const GALGAS_extensionMethodForGeneration temp_21 = this ;
    const GALGAS_extensionMethodForGeneration temp_22 = this ;
    const GALGAS_extensionMethodForGeneration temp_23 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, extensionGetter_definition (temp_21.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 422)).readProperty_typeName ().readProperty_string (), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_18362 COMMA_SOURCE_FILE ("extension-method.galgas", 421))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_extensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_extensionSetterAST temp_0 = this ;
  const GALGAS_extensionSetterAST temp_1 = this ;
  result_result = GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 170)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 170)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 170)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionSetterAST temp_0 = this ;
  const GALGAS_extensionSetterAST temp_1 = this ;
  const GALGAS_extensionSetterAST temp_2 = this ;
  GALGAS_lstring var_key_7737 = GALGAS_lstring::init_21__21_ (GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 185)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 185)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 185)), temp_2.readProperty_mExtensionSetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_extensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7737, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 188)) ;
  }
  {
  const GALGAS_extensionSetterAST temp_4 = this ;
  const GALGAS_extensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7737, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 189)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-setter.galgas", 189)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-setter.galgas", 191)).operator_not (SOURCE_FILE ("extension-setter.galgas", 191)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionSetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 192)) ;
      }
    }
  }
  const GALGAS_extensionSetterAST temp_9 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_8230 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-setter.galgas", 197)) ;
  if (nullptr != objectArray_8230) {
    macroValidSharedObject (objectArray_8230, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_extensionSetterAST temp_10 = this ;
    const GALGAS_extensionSetterAST temp_11 = this ;
    objectArray_8230->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionSetterName (), temp_11.readProperty_mExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 198)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                        const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionSetterAST temp_0 = this ;
  const GALGAS_extensionSetterAST temp_1 = this ;
  GALGAS_lstring var_nameForUsefulness_9882 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 232)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9882, var_nameForUsefulness_9882, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 233)) ;
  }
  const GALGAS_extensionSetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_10060 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 234)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_10060, var_nameForUsefulness_9882 COMMA_SOURCE_FILE ("extension-setter.galgas", 235)) ;
  }
  const GALGAS_extensionSetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_10253 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 237)) ;
  GALGAS_string var_selfObjectName_10326 ;
  GALGAS_string var_selfObjectAccessor_10355 ;
  GALGAS_bool var_implementedAsFunction_10386 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10253, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 242)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-setter.galgas", 242)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectName_10326 = GALGAS_string ("object") ;
      var_selfObjectAccessor_10355 = GALGAS_string ("object->") ;
      var_implementedAsFunction_10386 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_10326 = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor_10355 = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction_10386 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionSetterAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContext_10746 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_10326, GALGAS_selfAvailability::class_func_available (var_selfType_10253, GALGAS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-setter.galgas", 256))  COMMA_SOURCE_FILE ("extension-setter.galgas", 256)), var_selfObjectAccessor_10355, temp_5.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11463 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_11509 ;
  {
  const GALGAS_extensionSetterAST temp_6 = this ;
  const GALGAS_extensionSetterAST temp_7 = this ;
  const GALGAS_extensionSetterAST temp_8 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_9882, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10746, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionSetterFormalParameterList (), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), extensionGetter_definition (var_selfType_10253, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 267)).readProperty_allTypedPropertyList (), temp_7.readProperty_mExtensionSetterInstructionList (), temp_8.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_11463, var_formalParameterListForGeneration_11509, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 260)) ;
  }
  const GALGAS_extensionSetterAST temp_9 = this ;
  const GALGAS_extensionSetterAST temp_10 = this ;
  const GALGAS_extensionSetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (temp_9.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 275)), GALGAS_extensionSetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (extensionGetter_definition (var_selfType_10253, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 278)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 278)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 278)).add_operation (temp_10.readProperty_mExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 278)), var_selfType_10253, temp_11.readProperty_mExtensionSetterName ().readProperty_string (), var_implementedAsFunction_10386, var_formalParameterListForGeneration_11509, extensionGetter_definition (var_selfType_10253, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 283)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_11463, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 274)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                             GALGAS_genericExtensionMethodListMap & ioArgument_ioExtensionSetterListMap,
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
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_extensionSetterAST temp_0 = this ;
  const GALGAS_extensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 308)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-setter.galgas", 330)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_extensionSetterForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionSetterForGeneration temp_2 = this ;
      const GALGAS_extensionSetterForGeneration temp_3 = this ;
      const GALGAS_extensionSetterForGeneration temp_4 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 340)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionSetterName (), temp_4.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 339))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionSetterForGeneration temp_5 = this ;
    const GALGAS_extensionSetterForGeneration temp_6 = this ;
    const GALGAS_extensionSetterForGeneration temp_7 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 346)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionSetterName (), temp_7.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 345))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionSetterForGeneration temp_0 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_15543 (temp_0.readProperty_mExtensionSetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_15543.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15543.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 361)) ;
    enumerator_15543.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_extensionSetterForGeneration temp_2 = this ;
    test_1 = temp_2.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_extensionSetterForGeneration temp_3 = this ;
      GALGAS_formalParameterListForGeneration var_extensionSetterFormalParameterList_15706 = temp_3.readProperty_mExtensionSetterFormalParameterList () ;
      {
      const GALGAS_extensionSetterForGeneration temp_4 = this ;
      var_extensionSetterFormalParameterList_15706.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas", 366)), GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.galgas", 367)), temp_4.readProperty_mReceiverType (), GALGAS_lstring::init_21__21_ (GALGAS_string ("self"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 369)), inCompiler COMMA_HERE), GALGAS_string ("ioObject"), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 365)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_5 = this ;
      const GALGAS_extensionSetterForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 373)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 373)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 373)).add_operation (temp_6.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 373))  COMMA_SOURCE_FILE ("extension-setter.galgas", 373)) ;
      GALGAS_string var_code_16651 ;
      {
      const GALGAS_extensionSetterForGeneration temp_7 = this ;
      const GALGAS_extensionSetterForGeneration temp_8 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GALGAS_bool (false), GALGAS_string ("extensionSetter_").add_operation (temp_7.readProperty_mExtensionSetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 376)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_15706, temp_8.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_16651, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 374)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_9 = this ;
      const GALGAS_extensionSetterForGeneration temp_10 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_9.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 388)).readProperty_typeName ().readProperty_string (), temp_10.readProperty_mExtensionSetterName (), var_code_16651 COMMA_SOURCE_FILE ("extension-setter.galgas", 387))) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_extensionSetterForGeneration temp_11 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_16917 = temp_11.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_16961 = GALGAS_bool (true) ;
    if (GALGAS_uint::class_func_max (SOURCE_FILE ("extension-setter.galgas", 395)).isValid ()) {
      uint32_t variant_16982 = GALGAS_uint::class_func_max (SOURCE_FILE ("extension-setter.galgas", 395)).uintValue () ;
      bool loop_16982 = true ;
      while (loop_16982) {
        loop_16982 = var_searching_16961.isValid () ;
        if (loop_16982) {
          loop_16982 = var_searching_16961.boolValue () ;
        }
        if (loop_16982 && (0 == variant_16982)) {
          loop_16982 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas", 395)) ;
        }
        if (loop_16982) {
          variant_16982 -- ;
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = extensionGetter_definition (var_baseType_16917, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 396)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-setter.galgas", 396)).operator_not (SOURCE_FILE ("extension-setter.galgas", 396)).boolEnum () ;
            if (kBoolTrue == test_12) {
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                const GALGAS_extensionSetterForGeneration temp_14 = this ;
                test_13 = extensionGetter_definition (extensionGetter_definition (var_baseType_16917, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 397)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 397)).readProperty_setterMap ().getter_hasKey (temp_14.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-setter.galgas", 397)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_baseType_16917 = extensionGetter_definition (var_baseType_16917, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 398)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_13) {
                var_searching_16961 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_12) {
            var_searching_16961 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionSetterForGeneration temp_15 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (var_baseType_16917, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 406)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 406)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 406)).add_operation (temp_15.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 406))  COMMA_SOURCE_FILE ("extension-setter.galgas", 406)) ;
    extensionMethod_addHeaderFileName (var_baseType_16917, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 407)) ;
    GALGAS_string var_setterImplementation_17821 ;
    {
    const GALGAS_extensionSetterForGeneration temp_16 = this ;
    const GALGAS_extensionSetterForGeneration temp_17 = this ;
    const GALGAS_extensionSetterForGeneration temp_18 = this ;
    const GALGAS_extensionSetterForGeneration temp_19 = this ;
    routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 409)).readProperty_typeName ().readProperty_string (), GALGAS_string::makeEmptyString (), temp_17.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionSetterFormalParameterList (), temp_19.readProperty_mSemanticInstructionListForGeneration (), var_setterImplementation_17821, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 408)) ;
    }
    const GALGAS_extensionSetterForGeneration temp_20 = this ;
    const GALGAS_extensionSetterForGeneration temp_21 = this ;
    const GALGAS_extensionSetterForGeneration temp_22 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (inCompiler, extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 418)).readProperty_typeName ().readProperty_string (), temp_21.readProperty_mExtensionSetterName (), temp_22.readProperty_mExtensionSetterFormalParameterList (), var_setterImplementation_17821 COMMA_SOURCE_FILE ("extension-setter.galgas", 417))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@initializerAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_initializerAST::getter_keyRepresentation (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_initializerAST temp_0 = this ;
  const GALGAS_initializerAST temp_1 = this ;
  result_result = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 133)).readProperty_string () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                          GALGAS_extensionInitializerForBuildingContext & ioArgument_ioExtensionInitializerForBuildingContext,
                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                          GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                          GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_initializerAST temp_0 = this ;
  const GALGAS_initializerAST temp_1 = this ;
  GALGAS_lstring var_key_5938 = GALGAS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_initializerAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 148)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_initializerAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5938, temp_2, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 149)) ;
  }
  {
  const GALGAS_initializerAST temp_3 = this ;
  const GALGAS_initializerAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5938, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 150)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-initializer.galgas", 150)) ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_initializerAST temp_6 = this ;
    test_5 = ioArgument_ioExtensionInitializerForBuildingContext.getter_hasKey (temp_6.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-initializer.galgas", 152)).operator_not (SOURCE_FILE ("extension-initializer.galgas", 152)).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      const GALGAS_initializerAST temp_7 = this ;
      ioArgument_ioExtensionInitializerForBuildingContext.setter_insertKey (temp_7.readProperty_mTypeName (), GALGAS_extensionInitializerMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 153)) ;
      }
    }
  }
  const GALGAS_initializerAST temp_8 = this ;
  cMapElement_extensionInitializerForBuildingContext * objectArray_6372 = (cMapElement_extensionInitializerForBuildingContext *) ioArgument_ioExtensionInitializerForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_8.readProperty_mTypeName (), kSearchErrorMessage_extensionInitializerForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-initializer.galgas", 158)) ;
  if (nullptr != objectArray_6372) {
    macroValidSharedObject (objectArray_6372, cMapElement_extensionInitializerForBuildingContext) ;
    {
    const GALGAS_initializerAST temp_9 = this ;
    const GALGAS_initializerAST temp_10 = this ;
    const GALGAS_initializerAST temp_11 = this ;
    objectArray_6372->mProperty_mExtensionInitializerMapForType.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (temp_9.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 160)), temp_10.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE), temp_11.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 159)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                    const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                    const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                    const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                    GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                   const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                   GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_initializerAST temp_0 = this ;
  const GALGAS_initializerAST temp_1 = this ;
  GALGAS_lstring var_nameForUsefulness_7897 = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 188)) ;
  const GALGAS_initializerAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_8408 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 197)) ;
  GALGAS_string var_selfObjectNameString_8483 ;
  GALGAS_string var_selfObjectAccessorString_8520 ;
  GALGAS_bool var_isReferenceClass_8587 = GALGAS_bool (false) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_bool var_isReference_8683 ;
    const bool optionalResult8655 = extensionGetter_definition (var_selfType_8408, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 202)).readProperty_typeKind ().optional_classType (var_isReference_8683) ;
    if (!optionalResult8655) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      var_isReferenceClass_8587 = var_isReference_8683 ;
      var_selfObjectNameString_8483 = GALGAS_string ("<< this >>") ;
      var_selfObjectAccessorString_8520 = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_3) {
    var_selfObjectNameString_8483 = GALGAS_string ("result") ;
    var_selfObjectAccessorString_8520 = GALGAS_string ("result.") ;
  }
  GALGAS_analysisContext var_analysisContextNew_8954 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_8483, GALGAS_selfAvailability::class_func_available (var_selfType_8408, GALGAS_selfMutability::class_func_initializer (SOURCE_FILE ("extension-initializer.galgas", 215))  COMMA_SOURCE_FILE ("extension-initializer.galgas", 215)), var_selfObjectAccessorString_8520, GALGAS_bool (true), inCompiler COMMA_HERE) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9539 ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9587 ;
  {
  const GALGAS_initializerAST temp_4 = this ;
  const GALGAS_initializerAST temp_5 = this ;
  const GALGAS_initializerAST temp_6 = this ;
  routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_7897, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_8954, ioArgument_ioTypeMap, temp_4.readProperty_mFormalParameterList (), temp_5.readProperty_mInstructionList (), temp_6.readProperty_mEndOfInitializerLocation (), var_semanticInstructionListForGeneration_9539, var_formalParameterListForGeneration_9587, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 219)) ;
  }
  const GALGAS_initializerAST temp_7 = this ;
  GALGAS_string var_initializerName_9641 = extensionGetter_initializerSignature (temp_7.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 231)) ;
  const GALGAS_initializerAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("initializer @").add_operation (temp_8.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 233)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 233)).add_operation (var_initializerName_9641, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 233)), GALGAS_extensionInitializerForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_string ("initializer-").add_operation (extensionGetter_definition (var_selfType_8408, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 236)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-initializer.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 236)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 236)).add_operation (var_initializerName_9641.getter_fileNameRepresentation (SOURCE_FILE ("extension-initializer.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 236)), var_selfType_8408, var_initializerName_9641, var_formalParameterListForGeneration_9587, extensionGetter_definition (var_selfType_8408, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 240)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9539, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas", 232)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerBody?&?&???!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GALGAS_formalInputParameterListAST constinArgument_inFormalArgumentListAST,
                                                                         const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                                                         const GALGAS_location constinArgument_inEndOfMethodLocation,
                                                                         GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                                                         GALGAS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  GALGAS_localVarManager var_variableMap_11180 = GALGAS_localVarManager::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_type_11340 ;
    GALGAS_selfMutability var_selfMutability_11366 ;
    const bool optionalResult11319 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_type_11340, var_selfMutability_11366) ;
    if (!optionalResult11319) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_11425 (extensionGetter_definition (var_type_11340, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 263)).readProperty_allTypedPropertyList (), EnumerationOrder::up) ;
      while (enumerator_11425.hasCurrentObject ()) {
        GALGAS_bool temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, var_selfMutability_11366.objectCompare (GALGAS_selfMutability::class_func_initializer (SOURCE_FILE ("extension-initializer.galgas", 264)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = GALGAS_bool (ComparisonKind::notEqual, enumerator_11425.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("extension-initializer.galgas", 265)))) ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_bool (true) ;
        }
        GALGAS_bool var_initialized_11459 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_11180, enumerator_11425.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_11425.current (HERE).readProperty_typeEntry (), GALGAS_string ("<< unused >>"), GALGAS_string ("self.").add_operation (enumerator_11425.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 273)), var_initialized_11459, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 268)) ;
        }
        enumerator_11425.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GALGAS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  cEnumerator_formalInputParameterListAST enumerator_11954 (constinArgument_inFormalArgumentListAST, EnumerationOrder::up) ;
  while (enumerator_11954.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_11989 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11954.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 281)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = enumerator_11954.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_cppName_12124 = GALGAS_string ("constinArgument_").add_operation (enumerator_11954.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 283)) ;
        outArgument_outSignatureForGeneration.addAssign_operation (enumerator_11954.current (HERE).readProperty_mFormalSelector (), var_parameterType_11989, var_cppName_12124, enumerator_11954.current (HERE).readProperty_mFormalArgumentName (), enumerator_11954.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 284)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = enumerator_11954.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_11180, enumerator_11954.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_11989, var_cppName_12124, var_cppName_12124, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 291)) ;
            }
          }
        }
        if (kBoolFalse == test_4) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_11180, enumerator_11954.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_11989, var_cppName_12124, var_cppName_12124, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 293)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_string var_cppName_12741 = GALGAS_string ("inArgument_").add_operation (enumerator_11954.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 296)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_11954.current (HERE).readProperty_mFormalSelector (), var_parameterType_11989, var_cppName_12741, enumerator_11954.current (HERE).readProperty_mFormalArgumentName (), enumerator_11954.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 297)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = enumerator_11954.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_11180, enumerator_11954.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_11989, var_cppName_12741, var_cppName_12741, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 304)) ;
          }
        }
      }
      if (kBoolFalse == test_5) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_11180, enumerator_11954.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_11989, var_cppName_12741, var_cppName_12741, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 306)) ;
        }
      }
    }
    enumerator_11954.gotoNextObject () ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  cEnumerator_semanticInstructionListAST enumerator_13447 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_13447.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_13447.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_11180, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 313)) ;
    enumerator_13447.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_11180, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 323)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionInitializerForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionInitializerForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-initializer.galgas", 361)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionInitializerForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionInitializerForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outImplementation,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionInitializerForGeneration temp_0 = this ;
  cEnumerator_formalInputParameterListForGeneration enumerator_16226 (temp_0.readProperty_formalParameterList (), EnumerationOrder::up) ;
  while (enumerator_16226.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16226.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 370)) ;
    enumerator_16226.gotoNextObject () ;
  }
  GALGAS_string var_methodImplementation_16533 ;
  {
  const GALGAS_extensionInitializerForGeneration temp_1 = this ;
  const GALGAS_extensionInitializerForGeneration temp_2 = this ;
  const GALGAS_extensionInitializerForGeneration temp_3 = this ;
  const GALGAS_extensionInitializerForGeneration temp_4 = this ;
  routine_generateInitializer_3F__3F__26__3F__3F__21_ (temp_1.readProperty_mReceiverType (), temp_2.readProperty_initializerName (), ioArgument_ioInclusionSet, temp_3.readProperty_formalParameterList (), temp_4.readProperty_semanticInstructionListForGeneration (), var_methodImplementation_16533, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 372)) ;
  }
  const GALGAS_extensionInitializerForGeneration temp_5 = this ;
  const GALGAS_extensionInitializerForGeneration temp_6 = this ;
  const GALGAS_extensionInitializerForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 381)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_initializerName (), temp_7.readProperty_formalParameterList (), var_methodImplementation_16533 COMMA_SOURCE_FILE ("extension-initializer.galgas", 380))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInitializer??&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInitializer_3F__3F__26__3F__3F__21_ (const GALGAS_unifiedTypeMapEntry constinArgument_inReceiverType,
                                                          const GALGAS_string constinArgument_inInitializerName,
                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                          const GALGAS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                                          const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                          GALGAS_string & outArgument_outGeneratedCode,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_string var_className_17562 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 402)).readProperty_typeName ().readProperty_string () ;
  GALGAS_stringset var_unusedVariableCppNameSet_17666 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_17666.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 405))  COMMA_SOURCE_FILE ("extension-initializer.galgas", 405)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_17765 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_17765.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_17666.addAssign_operation (enumerator_17765.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 407)) ;
    enumerator_17765.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_17892 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_17933 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_17933.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 412)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_17993 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_17993.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_17993.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_17892, var_unusedVariableCppNameSet_17666, GALGAS_bool (false), var_routineBody_17933, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 414)) ;
    enumerator_17993.gotoNextObject () ;
  }
  {
  var_routineBody_17933.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 422)) ;
  }
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 424)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_18379 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_18379.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18379.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 426)) ;
    enumerator_18379.gotoNextObject () ;
  }
  GALGAS_bool var_isStruct_18507 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 429)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-initializer.galgas", 429)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_isStruct_18507.boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode = GALGAS_string ("GALGAS_").add_operation (var_className_17562.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 432)).add_operation (GALGAS_string (" GALGAS_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 432)).add_operation (var_className_17562.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 433)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 433)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 434)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 434)) ;
      GALGAS_uint var_colRef_18830 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("extension-initializer.galgas", 435)) ;
      cEnumerator_formalInputParameterListForGeneration enumerator_18900 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
      while (enumerator_18900.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = enumerator_18900.current (HERE).readProperty_mIsConstant ().boolEnum () ;
          if (kBoolTrue == test_1) {
            outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_18900.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 439)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 439)) ;
          }
        }
        if (kBoolFalse == test_1) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_18900.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 441)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 441)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 441)) ;
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_unusedVariableCppNameSet_17666.getter_hasKey (enumerator_18900.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("extension-initializer.galgas", 443)).boolEnum () ;
          if (kBoolTrue == test_2) {
            outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_18900.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 444)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 444)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 444)) ;
          }
        }
        if (kBoolFalse == test_2) {
          outArgument_outGeneratedCode.plusAssign_operation(enumerator_18900.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 446)) ;
        }
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 448)) ;
        {
        outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_18830, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 449)) ;
        }
        enumerator_18900.gotoNextObject () ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("Compiler * ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 452)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 452)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_18830, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 453)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 454)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 455)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (var_className_17562.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)).add_operation (GALGAS_string (" result ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  result.setInitializedProperties (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 457)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 457)) ;
      outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_17933, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 458)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 459)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 460)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGeneratedCode = GALGAS_string ("GALGAS_").add_operation (var_className_17562.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 462)).add_operation (GALGAS_string (" GALGAS_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 462)).add_operation (var_className_17562.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 463)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 463)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 464)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 464)) ;
    GALGAS_uint var_colRef_20294 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("extension-initializer.galgas", 465)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_20364 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
    while (enumerator_20364.hasCurrentObject ()) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = enumerator_20364.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20364.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 469)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 469)) ;
        }
      }
      if (kBoolFalse == test_3) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20364.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 471)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 471)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_20364.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 473)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 474)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_20294, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 475)) ;
      }
      enumerator_20364.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("Compiler * ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 478)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 478)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_20294, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 479)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_LOCATION_ARGS) {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 480)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (var_className_17562.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 481)).add_operation (GALGAS_string (" * object = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 481)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroMyNew (object, cPtr_").add_operation (var_className_17562.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 482)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 483)).add_operation (GALGAS_string (" COMMA_THERE)) ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 483)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  object->").add_operation (var_className_17562.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 484)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 484)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 485)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 484)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_21451 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
    while (enumerator_21451.hasCurrentObject ()) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_21451.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 487)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 488)) ;
      enumerator_21451.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 490)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 490)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (var_className_17562.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 491)).add_operation (GALGAS_string (" result (object) ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 491)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroDetachSharedObject (object) ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 492)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 493)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 494)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("void cPtr_").add_operation (var_className_17562.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 495)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 495)).add_operation (var_className_17562.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 496)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 496)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 497)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 495)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_22094 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
    while (enumerator_22094.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = enumerator_22094.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (kBoolTrue == test_4) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 500)) ;
        }
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_22094.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 502)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 502)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_unusedVariableCppNameSet_17666.getter_hasKey (enumerator_22094.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("extension-initializer.galgas", 503)).boolEnum () ;
        if (kBoolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_22094.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 504)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 504)) ;
        }
      }
      if (kBoolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssign_operation(enumerator_22094.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 506)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 508)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_20294, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 509)) ;
      }
      enumerator_22094.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 512)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_unusedVariableCppNameSet_17666.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 513)) COMMA_SOURCE_FILE ("extension-initializer.galgas", 513)).boolEnum () ;
      if (kBoolTrue == test_6) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 514)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 514)) ;
      }
    }
    if (kBoolFalse == test_6) {
      outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 516)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 518)) ;
    outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_17933, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 519)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 520)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_overridingAbstractExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = this ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = this ;
  result_result = GALGAS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 168)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 168)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 168)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 182)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_overridingAbstractExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 184)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 184)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_overridingAbstractExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 185)) ;
      }
    }
  }
  const GALGAS_overridingAbstractExtensionGetterAST temp_4 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_7645 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 190)) ;
  if (nullptr != objectArray_7645) {
    macroValidSharedObject (objectArray_7645, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_overridingAbstractExtensionGetterAST temp_5 = this ;
    const GALGAS_overridingAbstractExtensionGetterAST temp_6 = this ;
    const GALGAS_overridingAbstractExtensionGetterAST temp_7 = this ;
    objectArray_7645->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mAbstractExtensionGetterName (), temp_6.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 191)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                          const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                          const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9703 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_returnType_9785 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 233)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_selfType_9703, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 235)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 235)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 235)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9703, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 236)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 236)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 236)), fixItArray4  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 236)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = extensionGetter_definition (var_selfType_9703, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 237)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_overridingAbstractExtensionGetterAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9703, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 238)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 238)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 238)), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 238)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_10376 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_10421 = extensionGetter_definition (var_selfType_9703, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 242)).readProperty_superType () ;
  GALGAS_functionSignature var_inheritedSignature_10490 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntry var_inheritedReturnType_10541 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 244)) ;
  GALGAS_location var_inheritedDeclarationLocation_10585 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 245)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 246)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 246)).isValid ()) {
    uint32_t variant_10633 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 246)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 246)).uintValue () ;
    bool loop_10633 = true ;
    while (loop_10633) {
      loop_10633 = var_superType_10421.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 247)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 247)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_10376.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 247)).isValid () ;
      if (loop_10633) {
        loop_10633 = var_superType_10421.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 247)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 247)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_10376.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 247)).boolValue () ;
      }
      if (loop_10633 && (0 == variant_10633)) {
        loop_10633 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 246)) ;
      }
      if (loop_10633) {
        variant_10633 -- ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          const GALGAS_overridingAbstractExtensionGetterAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_superType_10421, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 248)).readProperty_getterMap ().getter_hasKey (temp_9.readProperty_mAbstractExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 248)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_methodQualifier var_qualifier_11040 ;
            const GALGAS_overridingAbstractExtensionGetterAST temp_10 = this ;
            GALGAS_methodKind joker_10918 ; // Joker input parameter
            GALGAS_bool joker_10995 ; // Joker input parameter
            GALGAS_string joker_11058 ; // Joker input parameter
            extensionGetter_definition (var_superType_10421, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 249)).readProperty_getterMap ().method_searchKey (temp_10.readProperty_mAbstractExtensionGetterName (), joker_10918, var_inheritedSignature_10490, var_inheritedDeclarationLocation_10585, joker_10995, var_inheritedReturnType_10541, var_qualifier_11040, joker_11058, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 249)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_11040.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 259)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_baseTypeName_10376 = extensionGetter_definition (var_superType_10421, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 260)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_10421 = extensionGetter_definition (var_superType_10421, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 263)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_10376.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_13 = this ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 266)) ;
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_10376.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_11446 = GALGAS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      const GALGAS_overridingAbstractExtensionGetterAST temp_16 = this ;
      cEnumerator_formalInputParameterListAST enumerator_11594 (temp_16.readProperty_mAbstractExtensionGetterFormalInputParameterList (), EnumerationOrder::up) ;
      while (enumerator_11594.hasCurrentObject ()) {
        var_formalParameterListForGeneration_11446.addAssign_operation (enumerator_11594.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11594.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 274)), enumerator_11594.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_11594.current_mFormalArgumentName (HERE), enumerator_11594.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 272)) ;
        enumerator_11594.gotoNextObject () ;
      }
      {
      const GALGAS_overridingAbstractExtensionGetterAST temp_17 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_11446, var_returnType_9785, temp_17.readProperty_mAbstractExtensionGetterName ().readProperty_location (), var_inheritedSignature_10490, var_inheritedReturnType_10541, var_inheritedDeclarationLocation_10585, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 279)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
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
                                                                               GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionGetterListMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = this ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 310)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_overridingAbstractExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = this ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_1 = this ;
  result_result = GALGAS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 145)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 145)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 145)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                                GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 160)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_overridingAbstractExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 162)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 162)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_overridingAbstractExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 163)) ;
      }
    }
  }
  const GALGAS_overridingAbstractExtensionMethodAST temp_4 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_6867 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 168)) ;
  if (nullptr != objectArray_6867) {
    macroValidSharedObject (objectArray_6867, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_overridingAbstractExtensionMethodAST temp_5 = this ;
    const GALGAS_overridingAbstractExtensionMethodAST temp_6 = this ;
    objectArray_6867->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 169)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                          const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                          const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9008 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 209)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_9008, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 211)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 211)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 211)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_9008, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 212)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 212)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 212)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 212)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_9008, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 213)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionMethodAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_9008, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 214)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 214)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 214)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 214)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_9570 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_9615 = extensionGetter_definition (var_selfType_9008, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 218)).readProperty_superType () ;
  GALGAS_formalParameterSignature var_inheritedSignature_9665 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_location var_inheritedDeclarationLocation_9731 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 220)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 221)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 221)).isValid ()) {
    uint32_t variant_9779 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 221)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 221)).uintValue () ;
    bool loop_9779 = true ;
    while (loop_9779) {
      loop_9779 = var_superType_9615.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 222)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 222)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_9570.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 222)).isValid () ;
      if (loop_9779) {
        loop_9779 = var_superType_9615.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 222)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 222)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_9570.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 222)).boolValue () ;
      }
      if (loop_9779 && (0 == variant_9779)) {
        loop_9779 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 221)) ;
      }
      if (loop_9779) {
        variant_9779 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingAbstractExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_9615, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 223)).readProperty_instanceMethodMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 223)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_10177 ;
            const GALGAS_overridingAbstractExtensionMethodAST temp_9 = this ;
            GALGAS_methodKind joker_10084 ; // Joker input parameter
            GALGAS_bool joker_10161 ; // Joker input parameter
            GALGAS_string joker_10195 ; // Joker input parameter
            extensionGetter_definition (var_superType_9615, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 224)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_10084, var_inheritedSignature_9665, var_inheritedDeclarationLocation_9731, joker_10161, var_qualifier_10177, joker_10195, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 224)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_10177.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 233)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_9570 = extensionGetter_definition (var_superType_9615, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 234)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_9615 = extensionGetter_definition (var_superType_9615, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 237)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_9570.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 240)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_10567 = GALGAS_localVarManager::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_10761 ;
  {
  const GALGAS_overridingAbstractExtensionMethodAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), var_variableMap_10567, var_formalParameterListForGeneration_10761, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 244)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_9570.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GALGAS_overridingAbstractExtensionMethodAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_10761, temp_16.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_9665, var_inheritedDeclarationLocation_9731, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 253)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionMethodListMap,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = this ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 283)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_overridingAbstractExtensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = this ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_1 = this ;
  result_result = GALGAS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 142)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                          const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                          const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7536 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 172)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7536, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 174)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 174)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 174)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7536, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 175)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 175)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 175)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 175)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7536, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 176)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionSetterAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7536, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 177)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 177)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 177)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 177)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_8114 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_8161 = extensionGetter_definition (var_selfType_7536, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 181)).readProperty_superType () ;
  GALGAS_formalParameterSignature var_inheritedSignature_8213 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_location var_inheritedDeclarationLocation_8271 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 183)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 184)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 184)).isValid ()) {
    uint32_t variant_8321 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 184)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 184)).uintValue () ;
    bool loop_8321 = true ;
    while (loop_8321) {
      loop_8321 = var_superType_8161.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 185)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 185)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_8114.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 185)).isValid () ;
      if (loop_8321) {
        loop_8321 = var_superType_8161.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 185)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 185)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_8114.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 185)).boolValue () ;
      }
      if (loop_8321 && (0 == variant_8321)) {
        loop_8321 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 184)) ;
      }
      if (loop_8321) {
        variant_8321 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingAbstractExtensionSetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_8161, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 186)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 186)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_8631 ;
            const GALGAS_overridingAbstractExtensionSetterAST temp_9 = this ;
            GALGAS_methodKind joker_8600 ; // Joker input parameter
            GALGAS_bool joker_8623 ; // Joker input parameter
            GALGAS_string joker_8641 ; // Joker input parameter
            extensionGetter_definition (var_superType_8161, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 187)).readProperty_setterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_8600, var_inheritedSignature_8213, joker_8623, var_qualifier_8631, joker_8641, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 187)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8631.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 188)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_8114 = extensionGetter_definition (var_superType_8161, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 189)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_8161 = extensionGetter_definition (var_superType_8161, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 192)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_8114.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 195)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_9027 = GALGAS_localVarManager::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_9233 ;
  {
  const GALGAS_overridingAbstractExtensionSetterAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionSetterFormalParameterList (), var_variableMap_9027, var_formalParameterListForGeneration_9233, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 199)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_8114.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GALGAS_overridingAbstractExtensionSetterAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_9233, temp_16.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_8213, var_inheritedDeclarationLocation_8271, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 208)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionSetterListMap,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = this ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 235)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingExtensionGetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 221)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_overridingExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 223)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 223)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_overridingExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 224)) ;
      }
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_4 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_8900 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 229)) ;
  if (nullptr != objectArray_8900) {
    macroValidSharedObject (objectArray_8900, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_overridingExtensionGetterAST temp_5 = this ;
    const GALGAS_overridingExtensionGetterAST temp_6 = this ;
    const GALGAS_overridingExtensionGetterAST temp_7 = this ;
    objectArray_8900->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionGetterName (), temp_6.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_7.readProperty_mOverridingExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-getter.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 230)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_overridingExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_overridingExtensionGetterAST temp_0 = this ;
  const GALGAS_overridingExtensionGetterAST temp_1 = this ;
  result_result = GALGAS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 244)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 244)).add_operation (temp_1.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 244)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingExtensionGetterAST temp_0 = this ;
  const GALGAS_overridingExtensionGetterAST temp_1 = this ;
  GALGAS_lstring var_nameForUsefulness_11117 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 274)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11117, var_nameForUsefulness_11117, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 275)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_11305 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 276)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_11305, var_nameForUsefulness_11117 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 277)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_11498 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 279)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_11498, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 281)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 281)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 281)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionGetterAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_11498, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 282)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 282)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 282)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 282)) ;
    }
  }
  GALGAS_string var_baseTypeName_11841 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_11886 = extensionGetter_definition (var_selfType_11498, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 286)).readProperty_superType () ;
  GALGAS_functionSignature var_inheritedSignature_11955 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntry var_inheritedReturnType_11985 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-getter.galgas", 288)) ;
  GALGAS_location var_inheritedDeclarationLocation_12049 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 289)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 290)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 290)).isValid ()) {
    uint32_t variant_12097 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 290)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 290)).uintValue () ;
    bool loop_12097 = true ;
    while (loop_12097) {
      loop_12097 = var_superType_11886.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 291)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 291)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_11841.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 291)).isValid () ;
      if (loop_12097) {
        loop_12097 = var_superType_11886.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 291)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 291)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_11841.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 291)).boolValue () ;
      }
      if (loop_12097 && (0 == variant_12097)) {
        loop_12097 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas", 290)) ;
      }
      if (loop_12097) {
        variant_12097 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionGetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_11886, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 292)).readProperty_getterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 292)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_12525 ;
            const GALGAS_overridingExtensionGetterAST temp_9 = this ;
            GALGAS_methodKind joker_12386 ; // Joker input parameter
            GALGAS_bool joker_12463 ; // Joker input parameter
            GALGAS_string joker_12543 ; // Joker input parameter
            extensionGetter_definition (var_superType_11886, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 293)).readProperty_getterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionGetterName (), joker_12386, var_inheritedSignature_11955, var_inheritedDeclarationLocation_12049, joker_12463, var_inheritedReturnType_11985, var_qualifier_12525, joker_12543, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 293)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_12525.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas", 303)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_11841 = extensionGetter_definition (var_superType_11886, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 304)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_11886 = extensionGetter_definition (var_superType_11886, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 307)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_11841.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionGetterAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 310)) ;
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_14 = this ;
  GALGAS_analysisContext var_analysisContext_12911 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("this"), GALGAS_selfAvailability::class_func_available (var_selfType_11498, GALGAS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-getter.galgas", 317))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 317)), GALGAS_string ("object."), temp_14.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_13872 ;
  GALGAS_unifiedTypeMapEntry var_returnType_13935 ;
  GALGAS_string var_returnVariableCppName_13963 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_14032 ;
  {
  const GALGAS_overridingExtensionGetterAST temp_15 = this ;
  GALGAS_typedPropertyList temp_16 ;
  const enumGalgasBool test_17 = extensionGetter_definition (var_selfType_11498, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 327)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 327)).operator_or (GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_11498, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 327)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-overriding-getter.galgas", 327)))) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 327)).boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = extensionGetter_definition (var_selfType_11498, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 328)).readProperty_allTypedPropertyList () ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_18 = this ;
  const GALGAS_overridingExtensionGetterAST temp_19 = this ;
  const GALGAS_overridingExtensionGetterAST temp_20 = this ;
  const GALGAS_overridingExtensionGetterAST temp_21 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_11117, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_12911, ioArgument_ioTypeMap, temp_15.readProperty_mOverridingExtensionGetterFormalInputParameterList (), temp_16, GALGAS_string ("this->"), temp_18.readProperty_mOverridingExtensionGetterInstructionList (), temp_19.readProperty_mOverridingExtensionGetterReturnedVariableName (), temp_20.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_21.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_13872, var_returnType_13935, var_returnVariableCppName_13963, var_semanticInstructionListForGeneration_14032, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 321)) ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_11841.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      const GALGAS_overridingExtensionGetterAST temp_23 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_13872, var_returnType_13935, temp_23.readProperty_mOverridingExtensionGetterName ().readProperty_location (), var_inheritedSignature_11955, var_inheritedReturnType_11985, var_inheritedDeclarationLocation_12049, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 343)) ;
      }
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_24 = this ;
  const GALGAS_overridingExtensionGetterAST temp_25 = this ;
  const GALGAS_overridingExtensionGetterAST temp_26 = this ;
  const GALGAS_overridingExtensionGetterAST temp_27 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (temp_24.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 354)), GALGAS_overrideExtensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (temp_25.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 357)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 357)).add_operation (temp_26.readProperty_mOverridingExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 357)), var_selfType_11498, var_baseTypeName_11841, temp_27.readProperty_mOverridingExtensionGetterName ().readProperty_string (), var_returnType_13935, var_returnVariableCppName_13963, var_formalParameterListForGeneration_13872, extensionGetter_definition (var_selfType_11498, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 364)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_14032, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 353)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionGetterListMap,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_overridingExtensionGetterAST temp_0 = this ;
  const GALGAS_overridingExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 389)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overrideExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_overrideExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas", 413)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overrideExtensionGetterForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overrideExtensionGetterForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 422)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 422))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 422)) ;
  GALGAS_string var_extensionGetterCode_18490 ;
  {
  const GALGAS_overrideExtensionGetterForGeneration temp_1 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_2 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_3 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_4 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_5 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_6 = this ;
  routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GALGAS_string ("cPtr_").add_operation (extensionGetter_definition (temp_1.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 424)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 424)).add_operation (GALGAS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 424)).add_operation (temp_2.readProperty_mOverridingExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 424)), ioArgument_ioInclusionSet, temp_3.readProperty_mOverridingExtensionGetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("Compiler"), temp_5.readProperty_mResultType (), temp_6.readProperty_mResultVarCppName (), var_extensionGetterCode_18490, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 423)) ;
  }
  const GALGAS_overrideExtensionGetterForGeneration temp_7 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_8 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_9 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 434)).readProperty_typeName ().readProperty_string (), temp_8.readProperty_mOverridingExtensionGetterName (), var_extensionGetterCode_18490, temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 433))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_overridingExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_overridingExtensionMethodAST temp_0 = this ;
  const GALGAS_overridingExtensionMethodAST temp_1 = this ;
  result_result = GALGAS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 172)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 172)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 172)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingExtensionMethodAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 187)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_overridingExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 189)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 189)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_overridingExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 190)) ;
      }
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_4 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_8103 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 195)) ;
  if (nullptr != objectArray_8103) {
    macroValidSharedObject (objectArray_8103, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_overridingExtensionMethodAST temp_5 = this ;
    const GALGAS_overridingExtensionMethodAST temp_6 = this ;
    objectArray_8103->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-method.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 196)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingExtensionMethodAST temp_0 = this ;
  const GALGAS_overridingExtensionMethodAST temp_1 = this ;
  GALGAS_lstring var_nameForUsefulness_9824 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 230)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9824, var_nameForUsefulness_9824, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 231)) ;
  }
  const GALGAS_overridingExtensionMethodAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_10012 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 232)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_10012, var_nameForUsefulness_9824 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 233)) ;
  }
  const GALGAS_overridingExtensionMethodAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_10205 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 235)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10205, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 237)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-method.galgas", 237)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 237)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionMethodAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_10205, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 238)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 238)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 238)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 238)) ;
    }
  }
  GALGAS_string var_baseTypeName_10548 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_10593 = extensionGetter_definition (var_selfType_10205, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 242)).readProperty_superType () ;
  GALGAS_formalParameterSignature var_inheritedSignature_10643 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_location var_inheritedDeclarationLocation_10709 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 244)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 245)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 245)).isValid ()) {
    uint32_t variant_10757 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 245)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 245)).uintValue () ;
    bool loop_10757 = true ;
    while (loop_10757) {
      loop_10757 = var_superType_10593.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 246)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 246)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_10548.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 246)).isValid () ;
      if (loop_10757) {
        loop_10757 = var_superType_10593.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 246)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 246)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_10548.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 246)).boolValue () ;
      }
      if (loop_10757 && (0 == variant_10757)) {
        loop_10757 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas", 245)) ;
      }
      if (loop_10757) {
        variant_10757 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_10593, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 247)).readProperty_instanceMethodMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 247)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_11155 ;
            const GALGAS_overridingExtensionMethodAST temp_9 = this ;
            GALGAS_methodKind joker_11062 ; // Joker input parameter
            GALGAS_bool joker_11139 ; // Joker input parameter
            GALGAS_string joker_11173 ; // Joker input parameter
            extensionGetter_definition (var_superType_10593, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 248)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_11062, var_inheritedSignature_10643, var_inheritedDeclarationLocation_10709, joker_11139, var_qualifier_11155, joker_11173, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 248)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_11155.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas", 257)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_10548 = extensionGetter_definition (var_superType_10593, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 258)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_10593 = extensionGetter_definition (var_superType_10593, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 261)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_10548.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionMethodAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("this method is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 264)) ;
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_14 = this ;
  GALGAS_analysisContext var_analysisContext_11540 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("this"), GALGAS_selfAvailability::class_func_available (var_selfType_10205, GALGAS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-method.galgas", 271))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 271)), GALGAS_string ("this->"), temp_14.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GALGAS_bool var_isRefClass_11896 = GALGAS_bool (false) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    GALGAS_bool var_reference_11984 ;
    const bool optionalResult11956 = extensionGetter_definition (var_selfType_10205, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 276)).readProperty_typeKind ().optional_classType (var_reference_11984) ;
    if (!optionalResult11956) {
      test_15 = kBoolFalse ;
    }
    if (kBoolTrue == test_15) {
      var_isRefClass_11896 = var_reference_11984 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_12039 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_typedPropertyList var_nonMutableProperties_12087 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_10205, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 281)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-overriding-method.galgas", 281)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      var_nonMutableProperties_12087 = extensionGetter_definition (var_selfType_10205, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 282)).readProperty_allTypedPropertyList () ;
    }
  }
  if (kBoolFalse == test_16) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      GALGAS_bool var_isReference_12330 ;
      const bool optionalResult12302 = extensionGetter_definition (var_selfType_10205, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 283)).readProperty_typeKind ().optional_classType (var_isReference_12330) ;
      if (!optionalResult12302) {
        test_17 = kBoolFalse ;
      }
      if (kBoolTrue == test_17) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = var_isReference_12330.boolEnum () ;
          if (kBoolTrue == test_18) {
            var_mutableProperties_12039 = extensionGetter_definition (var_selfType_10205, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 285)).readProperty_allTypedPropertyList () ;
          }
        }
        if (kBoolFalse == test_18) {
          var_nonMutableProperties_12087 = extensionGetter_definition (var_selfType_10205, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 287)).readProperty_allTypedPropertyList () ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_12889 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_12935 ;
  {
  const GALGAS_overridingExtensionMethodAST temp_19 = this ;
  const GALGAS_overridingExtensionMethodAST temp_20 = this ;
  const GALGAS_overridingExtensionMethodAST temp_21 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_9824, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_11540, ioArgument_ioTypeMap, temp_19.readProperty_mOverridingExtensionMethodFormalParameterList (), var_nonMutableProperties_12087, var_mutableProperties_12039, temp_20.readProperty_mOverridingExtensionMethodInstructionList (), temp_21.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_12889, var_formalParameterListForGeneration_12935, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 290)) ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_10548.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      const GALGAS_overridingExtensionMethodAST temp_23 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_12935, temp_23.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_10643, var_inheritedDeclarationLocation_10709, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 305)) ;
      }
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_24 = this ;
  const GALGAS_overridingExtensionMethodAST temp_25 = this ;
  const GALGAS_overridingExtensionMethodAST temp_26 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (temp_24.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 314)), GALGAS_overridingExtensionMethodForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_10205, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 317)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 317)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 317)).add_operation (temp_25.readProperty_mOverridingExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 317)), var_selfType_10205, var_baseTypeName_10548, temp_26.readProperty_mOverridingExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_12935, extensionGetter_definition (var_selfType_10205, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 322)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_12889, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 313)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionMethodListMap,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_overridingExtensionMethodAST temp_0 = this ;
  const GALGAS_overridingExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 347)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_overridingExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-method.galgas", 369)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_methodImplementation_16918 ;
  {
  const GALGAS_overridingExtensionMethodForGeneration temp_0 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_1 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_2 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_3 = this ;
  routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_0.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_1.readProperty_mExtensionMethodName (), temp_2.readProperty_mExtensionMethodFormalParameterList (), temp_3.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_16918, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 378)) ;
  }
  const GALGAS_overridingExtensionMethodForGeneration temp_4 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 387)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mExtensionMethodName (), var_methodImplementation_16918 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 386))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingExtensionSetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 112)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_overridingExtensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_overridingExtensionSetterAST temp_0 = this ;
  const GALGAS_overridingExtensionSetterAST temp_1 = this ;
  result_result = GALGAS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 120)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 120)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 120)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingExtensionSetterAST temp_0 = this ;
  const GALGAS_overridingExtensionSetterAST temp_1 = this ;
  GALGAS_lstring var_nameForUsefulness_7017 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 150)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7017, var_nameForUsefulness_7017, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 151)) ;
  }
  const GALGAS_overridingExtensionSetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_7205 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 152)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7205, var_nameForUsefulness_7017 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 153)) ;
  }
  const GALGAS_overridingExtensionSetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7398 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 155)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_7398, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 157)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-setter.galgas", 157)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 157)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionSetterAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7398, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 158)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 158)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 158)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 158)) ;
    }
  }
  GALGAS_string var_baseTypeName_7741 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_7786 = extensionGetter_definition (var_selfType_7398, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 162)).readProperty_superType () ;
  GALGAS_formalParameterSignature var_inheritedSignature_7836 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_location var_inheritedDeclarationLocation_7902 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 164)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 165)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 165)).isValid ()) {
    uint32_t variant_7950 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 165)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 165)).uintValue () ;
    bool loop_7950 = true ;
    while (loop_7950) {
      loop_7950 = var_superType_7786.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 166)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 166)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_7741.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 166)).isValid () ;
      if (loop_7950) {
        loop_7950 = var_superType_7786.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 166)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 166)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_7741.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 166)).boolValue () ;
      }
      if (loop_7950 && (0 == variant_7950)) {
        loop_7950 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 165)) ;
      }
      if (loop_7950) {
        variant_7950 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionSetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_7786, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 167)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 167)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_8254 ;
            const GALGAS_overridingExtensionSetterAST temp_9 = this ;
            GALGAS_methodKind joker_8223 ; // Joker input parameter
            GALGAS_bool joker_8246 ; // Joker input parameter
            GALGAS_string joker_8264 ; // Joker input parameter
            extensionGetter_definition (var_superType_7786, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 168)).readProperty_setterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_8223, var_inheritedSignature_7836, joker_8246, var_qualifier_8254, joker_8264, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 168)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8254.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-setter.galgas", 169)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_7741 = extensionGetter_definition (var_superType_7786, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 170)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_7786 = extensionGetter_definition (var_superType_7786, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 173)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_7741.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionSetterAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 176)) ;
    }
  }
  const GALGAS_overridingExtensionSetterAST temp_14 = this ;
  GALGAS_analysisContext var_analysisContext_8624 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("object"), GALGAS_selfAvailability::class_func_available (var_selfType_7398, GALGAS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-overriding-setter.galgas", 183))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 183)), GALGAS_string ("object->"), temp_14.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9366 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_9412 ;
  {
  const GALGAS_overridingExtensionSetterAST temp_15 = this ;
  const GALGAS_overridingExtensionSetterAST temp_16 = this ;
  const GALGAS_overridingExtensionSetterAST temp_17 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_7017, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8624, ioArgument_ioTypeMap, temp_15.readProperty_mOverridingExtensionSetterFormalParameterList (), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), extensionGetter_definition (var_selfType_7398, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 194)).readProperty_allTypedPropertyList (), temp_16.readProperty_mOverridingExtensionSetterInstructionList (), temp_17.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_9366, var_formalParameterListForGeneration_9412, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 187)) ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_7741.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      {
      const GALGAS_overridingExtensionSetterAST temp_19 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_9412, temp_19.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_7836, var_inheritedDeclarationLocation_7902, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 202)) ;
      }
    }
  }
  const GALGAS_overridingExtensionSetterAST temp_20 = this ;
  const GALGAS_overridingExtensionSetterAST temp_21 = this ;
  const GALGAS_overridingExtensionSetterAST temp_22 = this ;
  const GALGAS_overridingExtensionSetterAST temp_23 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (temp_20.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 211)), GALGAS_overridingExtensionSetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (temp_21.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 214)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 214)).add_operation (temp_22.readProperty_mOverridingExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 214)), var_selfType_7398, var_baseTypeName_7741, temp_23.readProperty_mOverridingExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_9412, extensionGetter_definition (var_selfType_7398, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 219)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9366, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 210)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionSetterListMap,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_overridingExtensionSetterAST temp_0 = this ;
  const GALGAS_overridingExtensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 245)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_overridingExtensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-setter.galgas", 267)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_methodImplementation_13251 ;
  {
  const GALGAS_overridingExtensionSetterForGeneration temp_0 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_1 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_2 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_3 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_4 = this ;
  routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 277)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mBaseTypeName (), temp_2.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_3.readProperty_mExtensionSetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_13251, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 276)) ;
  }
  const GALGAS_overridingExtensionSetterForGeneration temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_baseType_13303 = temp_5.readProperty_mReceiverType () ;
  GALGAS_bool var_searching_13345 = GALGAS_bool (true) ;
  if (GALGAS_uint::class_func_max (SOURCE_FILE ("extension-overriding-setter.galgas", 287)).isValid ()) {
    uint32_t variant_13364 = GALGAS_uint::class_func_max (SOURCE_FILE ("extension-overriding-setter.galgas", 287)).uintValue () ;
    bool loop_13364 = true ;
    while (loop_13364) {
      loop_13364 = var_searching_13345.isValid () ;
      if (loop_13364) {
        loop_13364 = var_searching_13345.boolValue () ;
      }
      if (loop_13364 && (0 == variant_13364)) {
        loop_13364 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 287)) ;
      }
      if (loop_13364) {
        variant_13364 -- ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = extensionGetter_definition (var_baseType_13303, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 288)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 288)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 288)).boolEnum () ;
          if (kBoolTrue == test_6) {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              const GALGAS_overridingExtensionSetterForGeneration temp_8 = this ;
              test_7 = extensionGetter_definition (extensionGetter_definition (var_baseType_13303, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 289)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 289)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 289)).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_baseType_13303 = extensionGetter_definition (var_baseType_13303, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 290)).readProperty_superType () ;
              }
            }
            if (kBoolFalse == test_7) {
              var_searching_13345 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_6) {
          var_searching_13345 = GALGAS_bool (false) ;
        }
      }
    }
  }
  const GALGAS_overridingExtensionSetterForGeneration temp_9 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (var_baseType_13303, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 298)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 298)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 298)).add_operation (temp_9.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 298))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 298)) ;
  const GALGAS_overridingExtensionSetterForGeneration temp_10 = this ;
  extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 299)) ;
  const GALGAS_overridingExtensionSetterForGeneration temp_11 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_12 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_11.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 301)).readProperty_typeName ().readProperty_string (), temp_12.readProperty_mExtensionSetterName (), var_methodImplementation_13251 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 300))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputActualParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 115)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputActualParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                    const GALGAS_string constinArgument_inSelector,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  GALGAS_bool test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas", 122)))) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("actual-parameters.galgas", 122)))) ;
  }
  result_result = test_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = result_result.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_outputActualParameterAST temp_2 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
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

void cPtr_outputActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputArgumentList & ioArgument_ioActualOutputArgumentList,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputActualParameterAST temp_0 = this ;
  const GALGAS_outputActualParameterAST temp_1 = this ;
  const GALGAS_outputActualParameterAST temp_2 = this ;
  ioArgument_ioActualOutputArgumentList.addAssign_operation (temp_0.readProperty_mActualSelector (), temp_1.readProperty_mOutputActualParameterExpression (), temp_2.readProperty_mEndOfExpressionLocation ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 131)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       const GALGAS_lstring constinArgument_inFormalSelector,
                                                                       const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                       const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                       GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                       GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("actual-parameters.galgas", 151)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas", 152)))) COMMA_SOURCE_FILE ("actual-parameters.galgas", 151)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 154)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 154)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 155)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 156)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 153)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputActualParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 159)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_7974 = GALGAS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 159)) ;
        const GALGAS_outputActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_7974) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_7974, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)) ;
      }
    }
    GALGAS_semanticExpressionForGeneration var_expression_8496 ;
    const GALGAS_outputActualParameterAST temp_9 = this ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mOutputActualParameterExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8496, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 162)) ;
    {
    const GALGAS_outputActualParameterAST temp_10 = this ;
    routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inFormalArgumentType, var_expression_8496.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_expression_8496, inCompiler  COMMA_SOURCE_FILE ("actual-parameters.galgas", 172)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_expression_8496, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 179)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputInputActualParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                         const GALGAS_string constinArgument_inSelector,
                                                                         Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 206)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputActualParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
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

void cPtr_outputInputActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputActualParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 215)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            const GALGAS_lstring constinArgument_inFormalSelector,
                                                                            const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                            const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                            GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                            GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 232)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 234)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 234)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 235)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 236)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 233)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputActualParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 238)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_11688 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 238)) ;
        const GALGAS_outputInputActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_11688) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11688, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_parameterType_12038 ;
  GALGAS_string var_variableCppName_12063 ;
  {
  const GALGAS_outputInputActualParameterAST temp_9 = this ;
  GALGAS_string joker_12085 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mOutputInputActualParameterName (), var_parameterType_12038, var_variableCppName_12063, joker_12085, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 242)) ;
  }
  GALGAS_unifiedTypeMapEntryList var_typeList_12102 = GALGAS_unifiedTypeMapEntryList::class_func_listWithValue (var_parameterType_12038  COMMA_SOURCE_FILE ("actual-parameters.galgas", 248)) ;
  const GALGAS_outputInputActualParameterAST temp_10 = this ;
  cEnumerator_lstringlist enumerator_12178 (temp_10.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_12178.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_12227 = extensionGetter_definition (var_parameterType_12038, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 250)).readProperty_propertyMap () ;
    GALGAS_AccessControl var_accessControl_12337 ;
    GALGAS_bool var_isConstant_12364 ;
    var_propertyMap_12227.method_searchKey (enumerator_12178.current_mValue (HERE), var_accessControl_12337, var_isConstant_12364, var_parameterType_12038, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 251)) ;
    extensionMethod_checkSetAccess (var_accessControl_12337, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_12178.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 257)) ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_isConstant_12364.boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_12178.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 259)) ;
      }
    }
    var_typeList_12102.addAssign_operation (var_parameterType_12038  COMMA_SOURCE_FILE ("actual-parameters.galgas", 261)) ;
    enumerator_12178.gotoNextObject () ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_12038)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_outputInputActualParameterAST temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mOutputInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_12038, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 266)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 266)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 266)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 268)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 267)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 268)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 265)) ;
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_outputInputActualParameterAST temp_17 = this ;
    test_16 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_17.readProperty_mOutputInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 271)).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_outputInputActualParameterAST temp_18 = this ;
      TC_Array <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mOutputInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray19  COMMA_SOURCE_FILE ("actual-parameters.galgas", 272)) ;
    }
  }
  const GALGAS_outputInputActualParameterAST temp_20 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_20.readProperty_mOutputInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 275)) ;
  const GALGAS_outputInputActualParameterAST temp_21 = this ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::init_21__21__21__21_ (var_parameterType_12038, var_variableCppName_12063, temp_21.readProperty_mStructAttributeList (), var_typeList_12102, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas", 277)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputJokerParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_expression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 298)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputJokerParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputInputJokerParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                        const GALGAS_string constinArgument_inSelector,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 305)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputJokerParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


