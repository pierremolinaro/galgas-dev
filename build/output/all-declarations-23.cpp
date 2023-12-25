#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_14142 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_14179 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_14142.operator_not (SOURCE_FILE ("type-enum.galgas", 374)).isValidAndTrue () ;
  if (enumerator_14179.hasCurrentObject () && bool_1) {
    while (enumerator_14179.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_14142 = GALGAS_bool (kIsStrictSup, enumerator_14179.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 375)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_14179.gotoNextObject () ;
      if (enumerator_14179.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_14142.operator_not (SOURCE_FILE ("type-enum.galgas", 374)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_14335 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 377)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, var_selfTypedefinition_14335.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_14335.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 380)), temp_3.readProperty_mConstantList (), var_hasAssociatedValues_14142 COMMA_SOURCE_FILE ("type-enum.galgas", 378))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_14335.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_14335.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 386)), var_selfTypedefinition_14335.readProperty_mIsConcrete (), var_selfTypedefinition_14335.readProperty_mConstructorMap (), var_selfTypedefinition_14335.readProperty_mGetterMap (), var_selfTypedefinition_14335.readProperty_mSetterMap (), var_selfTypedefinition_14335.readProperty_mInstanceMethodMap (), var_selfTypedefinition_14335.readProperty_mClassMethodMap (), var_selfTypedefinition_14335.readProperty_mOptionalMethodMap (), var_selfTypedefinition_14335.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_14335.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_14335.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_14335.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-enum.galgas", 384))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 384)) ;
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
  GALGAS_bool var_hasAssociatedValues_15561 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_15598 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_15561.operator_not (SOURCE_FILE ("type-enum.galgas", 409)).isValidAndTrue () ;
  if (enumerator_15598.hasCurrentObject () && bool_1) {
    while (enumerator_15598.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_15561 = GALGAS_bool (kIsStrictSup, enumerator_15598.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 410)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_15598.gotoNextObject () ;
      if (enumerator_15598.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_15561.operator_not (SOURCE_FILE ("type-enum.galgas", 409)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_15757 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_15757.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapEntryList enumerator_15817 (enumerator_15757.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_15817.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_15817.current_mEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 414)) ;
      enumerator_15817.gotoNextObject () ;
    }
    enumerator_15757.gotoNextObject () ;
  }
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_15925 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 417)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, var_selfTypedefinition_15925.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_15925.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 420)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_15561 COMMA_SOURCE_FILE ("type-enum.galgas", 418))) ;
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
  GALGAS_bool var_hasAssociatedValues_16514 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_16551 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_16514.operator_not (SOURCE_FILE ("type-enum.galgas", 434)).isValidAndTrue () ;
  if (enumerator_16551.hasCurrentObject () && bool_1) {
    while (enumerator_16551.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_16514 = GALGAS_bool (kIsStrictSup, enumerator_16551.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 435)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_16551.gotoNextObject () ;
      if (enumerator_16551.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_16514.operator_not (SOURCE_FILE ("type-enum.galgas", 434)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 437)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_16766 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 438)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, var_selfTypedefinition_16766.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_16766.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 441)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_16514 COMMA_SOURCE_FILE ("type-enum.galgas", 439))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                    GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                    GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                    GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_12908 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 323)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 323)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_12908, temp_2, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 324)) ;
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
  GALGAS_getterMap var_getterMap_13816 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_13816, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 338)) ;
  }
  GALGAS_constructorMap var_constructorMap_13850 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 339)) ;
  GALGAS_setterMap var_setterMap_13887 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 340)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_13927 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 341)) ;
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  cEnumerator_externTypeConstructorList enumerator_14008 (temp_0.readProperty_mExternTypeConstructorList (), kENUMERATION_UP) ;
  while (enumerator_14008.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_14111 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_14008.current_mResultTypeName (HERE), var_returnedTypeEntry_14111, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 344)) ;
    }
    GALGAS_functionSignature var_arguments_14164 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 346)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_14229 (enumerator_14008.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_14229.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_14332 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_14229.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_14332, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 348)) ;
      }
      var_arguments_14164.addAssign_operation (enumerator_14229.current_mFormalSelector (HERE), var_argumentTypeEntry_14332, enumerator_14229.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 349)) ;
      enumerator_14229.gotoNextObject () ;
    }
    {
    var_constructorMap_13850.setter_insertKey (enumerator_14008.current_mConstructorName (HERE), var_arguments_14164, GALGAS_bool (true), var_returnedTypeEntry_14111, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 352)) ;
    }
    enumerator_14008.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  cEnumerator_externTypeGetterList enumerator_14654 (temp_1.readProperty_mExternTypeGetterList (), kENUMERATION_UP) ;
  while (enumerator_14654.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_14752 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_14654.current_mResultTypeName (HERE), var_returnedTypeEntry_14752, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 361)) ;
    }
    GALGAS_functionSignature var_arguments_14805 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 363)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_14870 (enumerator_14654.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_14870.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_14973 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_14870.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_14973, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 365)) ;
      }
      var_arguments_14805.addAssign_operation (enumerator_14870.current_mFormalSelector (HERE), var_argumentTypeEntry_14973, enumerator_14870.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 366)) ;
      enumerator_14870.gotoNextObject () ;
    }
    {
    var_getterMap_13816.setter_insertKey (enumerator_14654.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 371)), var_arguments_14805, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 373)), GALGAS_bool (true), var_returnedTypeEntry_14752, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 376)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 369)) ;
    }
    enumerator_14654.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  cEnumerator_externTypeSetterList enumerator_15428 (temp_2.readProperty_mExternTypeSetterList (), kENUMERATION_UP) ;
  while (enumerator_15428.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_15517 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 382)) ;
    cEnumerator_formalParameterListAST enumerator_15635 (enumerator_15428.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_15635.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_15761 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15635.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_15761, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 384)) ;
      }
      var_routineSignature_15517.addAssign_operation (enumerator_15635.current_mFormalSelector (HERE), var_parameterTypeIndex_15761, enumerator_15635.current_mFormalArgumentPassingMode (HERE), enumerator_15635.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 388)) ;
      enumerator_15635.gotoNextObject () ;
    }
    {
    var_setterMap_13887.setter_insertKey (enumerator_15428.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 393)), var_routineSignature_15517, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 396)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 391)) ;
    }
    enumerator_15428.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  cEnumerator_externTypeMethodList enumerator_16204 (temp_3.readProperty_mExternTypeMethodList (), kENUMERATION_UP) ;
  while (enumerator_16204.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_16267 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 402)) ;
    cEnumerator_formalParameterListAST enumerator_16411 (enumerator_16204.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_16411.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_16516 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16411.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_16516, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 404)) ;
      }
      var_routineSignature_16267.addAssign_operation (enumerator_16411.current_mFormalSelector (HERE), var_parameterTypeIndex_16516, enumerator_16411.current_mFormalArgumentPassingMode (HERE), enumerator_16411.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 408)) ;
      enumerator_16411.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_13927.setter_insertKey (enumerator_16204.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 413)), var_routineSignature_16267, enumerator_16204.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 417)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 411)) ;
    }
    enumerator_16204.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  const GALGAS_externTypeDeclarationAST temp_6 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_16976 = GALGAS_unifiedTypeDefinition::constructor_new (temp_4.readProperty_mExternTypeName (), temp_5.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-extern.galgas", 426)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 427)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 429)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 430)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 431)), var_constructorMap_13850, var_getterMap_13816, var_setterMap_13887, var_instanceMethodMap_13927, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 436)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 437)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 438)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-extern.galgas", 439)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 440)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 441)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 442)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 443)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 444)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-extern.galgas", 446)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (temp_6.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 448)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 422)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_16976.readProperty_mTypeName (), var_typeDefinition_16976, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 451)) ;
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
  GALGAS_lstring var_nameForUsefulness_18531 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 468)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_18531, var_nameForUsefulness_18531, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 469)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 472)), GALGAS_externTypeDeclarationForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_2.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 474)), temp_3.readProperty_mExternTypeName ().readProperty_string (), temp_4.readProperty_mCppPreDeclarationCode (), temp_5.readProperty_mCppClassCode ()  COMMA_SOURCE_FILE ("type-extern.galgas", 473))  COMMA_SOURCE_FILE ("type-extern.galgas", 471)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_19721 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 496)) ;
  const GALGAS_externTypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_2 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, var_selfTypedefinition_19721.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 499)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("type-extern.galgas", 497))) ;
  const GALGAS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_19721.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 505)), var_selfTypedefinition_19721.readProperty_mIsConcrete (), var_selfTypedefinition_19721.readProperty_mConstructorMap (), var_selfTypedefinition_19721.readProperty_mGetterMap (), var_selfTypedefinition_19721.readProperty_mSetterMap (), var_selfTypedefinition_19721.readProperty_mInstanceMethodMap (), var_selfTypedefinition_19721.readProperty_mClassMethodMap (), var_selfTypedefinition_19721.readProperty_mOptionalMethodMap (), var_selfTypedefinition_19721.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_19721.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_19721.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_19721.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-extern.galgas", 503))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 503)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3927 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 102)), temp_1.readProperty_mGraphTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 102)) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3927, temp_2, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 103)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3927, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 104)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 104)) COMMA_SOURCE_FILE ("type-graph.galgas", 104)) ;
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
  GALGAS_unifiedTypeMapEntry var_stringTypeEntry_4971 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeEntry_4971, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 118)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeEntry_5095 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_5095, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 123)) ;
  }
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_5218 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mGraphTypeName (), var_graphTypeEntry_5218, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 128)) ;
  }
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_5358 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_5358, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 133)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringListTypeEntry_5499 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_5499, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 138)) ;
  }
  GALGAS_getterMap var_getterMap_5587 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_5587, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 143)) ;
  }
  GALGAS_constructorMap var_constructorMap_5621 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 144)) ;
  GALGAS_setterMap var_setterMap_5658 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 145)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5698 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 146)) ;
  GALGAS_formalParameterSignature var_formalParameterList_5787 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 148)) ;
  var_formalParameterList_5787.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 150)), var_associatedListTypeEntry_5358, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 152)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 149)) ;
  var_formalParameterList_5787.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 155)), var_lstringListTypeEntry_5499, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 157)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 154)) ;
  var_formalParameterList_5787.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 160)), var_associatedListTypeEntry_5358, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 162)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 159)) ;
  var_formalParameterList_5787.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 165)), var_lstringListTypeEntry_5499, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 167)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 164)) ;
  {
  var_instanceMethodMap_5698.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 170)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 171)), var_formalParameterList_5787, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 173)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 175)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 169)) ;
  }
  {
  var_instanceMethodMap_5698.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 179)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 180)), var_formalParameterList_5787, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 182)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 184)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 178)) ;
  }
  var_formalParameterList_5787 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 189)) ;
  var_formalParameterList_5787.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 191)), var_associatedListTypeEntry_5358, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 193)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 190)) ;
  var_formalParameterList_5787.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 196)), var_lstringListTypeEntry_5499, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 198)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 195)) ;
  {
  var_instanceMethodMap_5698.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 201)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 202)), var_formalParameterList_5787, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 204)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 206)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 200)) ;
  }
  {
  var_instanceMethodMap_5698.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 210)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 211)), var_formalParameterList_5787, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 213)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 215)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 209)) ;
  }
  {
  var_instanceMethodMap_5698.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 219)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 220)), var_formalParameterList_5787, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 222)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 224)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 218)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5587, ioArgument_ioTypeMap, GALGAS_string ("nodeList"), GALGAS_string::makeEmptyString (), temp_2.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 229)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5587, ioArgument_ioTypeMap, GALGAS_string ("reversedGraph"), GALGAS_string::makeEmptyString (), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 238)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5587, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 247)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5587, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 256)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5587, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 265)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5587, ioArgument_ioTypeMap, GALGAS_string ("graphviz"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 274)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5587, ioArgument_ioTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 283)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5587, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 293)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5587, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 303)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5587, ioArgument_ioTypeMap, GALGAS_string ("lkeyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 312)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5587, ioArgument_ioTypeMap, GALGAS_string ("edges"), GALGAS_string::makeEmptyString (), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 321)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5587, ioArgument_ioTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 330)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5587, ioArgument_ioTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 344)) ;
  }
  {
  var_constructorMap_5621.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 355)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 356)), GALGAS_bool (false), var_graphTypeEntry_5218, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 354)) ;
  }
  var_formalParameterList_5787 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 361)) ;
  var_formalParameterList_5787.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 363)), var_lstringTypeEntry_5095, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 365)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 362)) ;
  cEnumerator_functionSignature enumerator_12173 (extensionGetter_definition (var_associatedListTypeEntry_5358, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 367)).readProperty_mAddAssignOperatorArguments (), kENUMERATION_UP) ;
  while (enumerator_12173.hasCurrentObject ()) {
    var_formalParameterList_5787.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 369)), enumerator_12173.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 371)), enumerator_12173.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 368)) ;
    enumerator_12173.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_5 = this ;
  cEnumerator_graphInsertModifierList enumerator_12447 (temp_5.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_12447.hasCurrentObject ()) {
    {
    var_setterMap_5658.setter_insertOrReplace (enumerator_12447.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 377)), var_formalParameterList_5787, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 380)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 375)) ;
    }
    enumerator_12447.gotoNextObject () ;
  }
  {
  var_setterMap_5658.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 387)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 388)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 389)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 391)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 386)) ;
  }
  var_formalParameterList_5787 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 395)) ;
  var_formalParameterList_5787.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 396)), var_stringTypeEntry_4971, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 396)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 396)) ;
  {
  var_setterMap_5658.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 398)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 399)), var_formalParameterList_5787, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 402)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 397)) ;
  }
  var_formalParameterList_5787 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 407)) ;
  var_formalParameterList_5787.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 408)), var_lstringTypeEntry_5095, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 408)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 408)) ;
  var_formalParameterList_5787.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 409)), var_lstringTypeEntry_5095, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 409)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 409)) ;
  {
  var_setterMap_5658.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 411)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 412)), var_formalParameterList_5787, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 415)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 410)) ;
  }
  var_formalParameterList_5787 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 420)) ;
  var_formalParameterList_5787.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 421)), var_lstringTypeEntry_5095, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 421)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 421)) ;
  {
  var_setterMap_5658.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 423)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 424)), var_formalParameterList_5787, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 427)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 422)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_6 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_6.readProperty_mGraphTypeName (), GALGAS_bool (false), var_getterMap_5587, var_setterMap_5658, var_instanceMethodMap_5698, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 432)) ;
  }
  const GALGAS_graphDeclarationAST temp_7 = this ;
  const GALGAS_graphDeclarationAST temp_8 = this ;
  const GALGAS_graphDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_14860 = GALGAS_unifiedTypeDefinition::constructor_new (temp_7.readProperty_mGraphTypeName (), temp_8.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-graph.galgas", 450)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 451)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 453)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 454)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 455)), var_constructorMap_5621, var_getterMap_5587, var_setterMap_5658, var_instanceMethodMap_5698, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 460)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 461)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 462)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 463)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 464)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 465)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 466)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 467)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 468)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-graph.galgas", 470)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (temp_9.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 472)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 446)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14860.readProperty_mTypeName (), var_typeDefinition_14860, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 475)) ;
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
  GALGAS_lstring var_nameForUsefulness_16541 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16541, var_nameForUsefulness_16541, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_16695 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 494)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16541, var_associatedTypeNameForUsefulness_16695 COMMA_SOURCE_FILE ("type-graph.galgas", 495)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_16891 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_2.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 497)) ;
  const GALGAS_graphDeclarationAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_16957 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 498)) ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  const GALGAS_graphDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListElementTypeEntry_17041 = extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_4.readProperty_mAssociatedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 500)), temp_5.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 499)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_associatedListTypeEntry_16957, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 502)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 502)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_graphDeclarationAST temp_7 = this ;
      const GALGAS_graphDeclarationAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_8.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 503)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 503)), fixItArray9  COMMA_SOURCE_FILE ("type-graph.galgas", 503)) ;
    }
  }
  GALGAS_stringset temp_10 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 506)) ;
  temp_10.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 506)) ;
  temp_10.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 506)) ;
  GALGAS_stringset var_reservedModifierNames_17468 = temp_10 ;
  const GALGAS_graphDeclarationAST temp_11 = this ;
  cEnumerator_graphInsertModifierList enumerator_17544 (temp_11.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_17544.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_reservedModifierNames_17468.getter_hasKey (enumerator_17544.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-graph.galgas", 508)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_17544.current_mInsertModifierName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17544.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 509)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 509)), fixItArray13  COMMA_SOURCE_FILE ("type-graph.galgas", 509)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_17544.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 511)) ;
    }
    enumerator_17544.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_14 = this ;
  const GALGAS_graphDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_14.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 515)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeEntry_16891, var_associatedListTypeEntry_16957, var_associatedListElementTypeEntry_17041, temp_15.readProperty_mInsertModifierList ()  COMMA_SOURCE_FILE ("type-graph.galgas", 516))  COMMA_SOURCE_FILE ("type-graph.galgas", 514)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18906 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 539)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, var_selfTypedefinition_18906.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 542)) COMMA_SOURCE_FILE ("type-graph.galgas", 540))) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_18906.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 546)), var_selfTypedefinition_18906.readProperty_mIsConcrete (), var_selfTypedefinition_18906.readProperty_mConstructorMap (), var_selfTypedefinition_18906.readProperty_mGetterMap (), var_selfTypedefinition_18906.readProperty_mSetterMap (), var_selfTypedefinition_18906.readProperty_mInstanceMethodMap (), var_selfTypedefinition_18906.readProperty_mClassMethodMap (), var_selfTypedefinition_18906.readProperty_mOptionalMethodMap (), var_selfTypedefinition_18906.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_18906.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_18906.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_18906.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-graph.galgas", 544))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 544)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 567)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 568)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 569)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = this ;
  const GALGAS_graphDeclarationForGeneration temp_4 = this ;
  const GALGAS_graphDeclarationForGeneration temp_5 = this ;
  const GALGAS_graphDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 572)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("type-graph.galgas", 570))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listDeclarationAST temp_0 = this ;
  const GALGAS_listDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3996 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 105)), temp_1.readProperty_mListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 105)) ;
  {
  const GALGAS_listDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3996, temp_2, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 106)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4154 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_4154.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4154.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 108)), enumerator_4154.current_mPropertyTypeName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 108)) COMMA_SOURCE_FILE ("type-list.galgas", 108)) ;
    }
    enumerator_4154.gotoNextObject () ;
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
  GALGAS_typedPropertyList var_typedAttributeList_5026 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 124)) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5123 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5123.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_5123.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 126)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5123.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 127)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_5338 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5123.current_mPropertyTypeName (HERE), var_attributeTypeIndex_5338, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 129)) ;
    }
    var_typedAttributeList_5026.addAssign_operation (var_attributeTypeIndex_5338, enumerator_5123.current_mPropertyName (HERE), GALGAS_bool (true), enumerator_5123.current_selector (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 130)) ;
    enumerator_5123.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_uintType_5537 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("uint"), var_uintType_5537, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 133)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_5619 ;
  {
  const GALGAS_listDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mListTypeName (), var_listTypeIndex_5619, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 135)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_5816 ;
  {
  const GALGAS_listDeclarationAST temp_4 = this ;
  const GALGAS_listDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_4.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 138)), temp_5.readProperty_mListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 138)), var_listElementTypeIndex_5816, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 137)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5900 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 142)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5952 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 143)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_6018 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 144)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_6086 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 145)) ;
  cEnumerator_typedPropertyList enumerator_6172 (var_typedAttributeList_5026, kENUMERATION_UP) ;
  while (enumerator_6172.hasCurrentObject ()) {
    GALGAS_string temp_6 ;
    const enumGalgasBool test_7 = enumerator_6172.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_7) {
      temp_6 = enumerator_6172.current_mPropertyName (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_7) {
      temp_6 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_6219 = temp_6 ;
    var_enumerationDescriptor_5900.addAssign_operation (enumerator_6172.current_mPropertyTypeEntry (HERE), enumerator_6172.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 148)) ;
    var_constructorAttributeTypeList_5952.addAssign_operation (var_selector_6219.getter_nowhere (SOURCE_FILE ("type-list.galgas", 150)), enumerator_6172.current_mPropertyTypeEntry (HERE), enumerator_6172.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 149)) ;
    var_setterOutputFormalArgumentList_6018.addAssign_operation (var_selector_6219.getter_nowhere (SOURCE_FILE ("type-list.galgas", 154)), enumerator_6172.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 156)), enumerator_6172.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 153)) ;
    var_setterInputFormalArgumentList_6086.addAssign_operation (var_selector_6219.getter_nowhere (SOURCE_FILE ("type-list.galgas", 159)), enumerator_6172.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 161)), enumerator_6172.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 158)) ;
    enumerator_6172.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6799 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 165)) ;
  {
  const GALGAS_listDeclarationAST temp_8 = this ;
  routine_enterConstructorWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_constructorMap_6799, ioArgument_ioTypeMap, GALGAS_string ("emptyList"), temp_8.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 166)) ;
  }
  {
  var_constructorMap_6799.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 174)), var_constructorAttributeTypeList_5952, GALGAS_bool (false), var_listTypeIndex_5619, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 173)) ;
  }
  GALGAS_getterMap var_getterMap_7212 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7212, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 180)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7212, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 181)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7212, ioArgument_ioTypeMap, GALGAS_string ("range"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 189)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_9 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7212, ioArgument_ioTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_9.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 197)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_10 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7212, ioArgument_ioTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_10.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 205)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_11 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7212, ioArgument_ioTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_11.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 213)) ;
  }
  cEnumerator_typedPropertyList enumerator_8301 (var_typedAttributeList_5026, kENUMERATION_UP) ;
  while (enumerator_8301.hasCurrentObject ()) {
    {
    GALGAS_functionSignature temp_12 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 225)) ;
    temp_12.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 225)), var_uintType_5537, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 225)) ;
    var_getterMap_7212.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_8301.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 223)), enumerator_8301.current_mPropertyName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 223)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 224)), temp_12, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 226)), GALGAS_bool (true), enumerator_8301.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 229)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 222)) ;
    }
    enumerator_8301.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_8776 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 234)) ;
  {
  var_instanceMethodMap_8776.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 236)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 237)), var_setterOutputFormalArgumentList_6018, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 239)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 241)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 235)) ;
  }
  {
  var_instanceMethodMap_8776.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 245)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 246)), var_setterOutputFormalArgumentList_6018, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 248)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 250)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 244)) ;
  }
  GALGAS_setterMap var_setterMap_9306 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 254)) ;
  {
  var_setterMap_9306.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("append"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 256)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 257)), var_setterInputFormalArgumentList_6086, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 260)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 255)) ;
  }
  {
  var_setterMap_9306.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 264)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 265)), var_setterOutputFormalArgumentList_6018, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 268)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 263)) ;
  }
  {
  var_setterMap_9306.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 272)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 273)), var_setterOutputFormalArgumentList_6018, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 276)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 271)) ;
  }
  var_setterOutputFormalArgumentList_6018.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 279)), var_uintType_5537, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 279)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 279)) ;
  {
  var_setterMap_9306.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 281)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 282)), var_setterOutputFormalArgumentList_6018, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 285)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 280)) ;
  }
  cEnumerator_typedPropertyList enumerator_10389 (var_typedAttributeList_5026, kENUMERATION_UP) ;
  while (enumerator_10389.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = enumerator_10389.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_10450 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 290)) ;
        var_setterFormalArgumentList_10450.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 291)), enumerator_10389.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 291)), enumerator_10389.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 291)) ;
        var_setterFormalArgumentList_10450.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 292)), var_uintType_5537, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 292)), enumerator_10389.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 292)) ;
        {
        var_setterMap_9306.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_10389.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 294)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 294)), enumerator_10389.current_mPropertyName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 294)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 295)), var_setterFormalArgumentList_10450, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 298)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 293)) ;
        }
      }
    }
    enumerator_10389.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_6086.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 304)), var_uintType_5537, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 304)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 304)) ;
  {
  var_setterMap_9306.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 306)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 307)), var_setterInputFormalArgumentList_6086, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 310)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 305)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_14 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mListTypeName (), GALGAS_bool (false), var_getterMap_7212, var_setterMap_9306, var_instanceMethodMap_8776, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 314)) ;
  }
  const GALGAS_listDeclarationAST temp_15 = this ;
  const GALGAS_listDeclarationAST temp_16 = this ;
  const GALGAS_listDeclarationAST temp_17 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_11858 = GALGAS_unifiedTypeDefinition::constructor_new (temp_15.readProperty_mListTypeName (), temp_16.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-list.galgas", 332)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 333)), GALGAS_bool (true), var_typedAttributeList_5026, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 336)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 337)), var_constructorMap_6799, var_getterMap_7212, var_setterMap_9306, var_instanceMethodMap_8776, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 342)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 343)), var_enumerationDescriptor_5900, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 345)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 345)) COMMA_SOURCE_FILE ("type-list.galgas", 345)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 345)) COMMA_SOURCE_FILE ("type-list.galgas", 345)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-list.galgas", 345)) COMMA_SOURCE_FILE ("type-list.galgas", 345)), var_constructorAttributeTypeList_5952, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 347)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 348)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 349)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 350)), GALGAS_bool (false), var_listElementTypeIndex_5816, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (temp_17.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 354)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 328)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_11858.readProperty_mTypeName (), var_typeDefinition_11858, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 357)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_13098 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 365)) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_13186 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_13186.hasCurrentObject ()) {
    var_structAttributeList_13098.addAssign_operation (enumerator_13186.current_isConstant (HERE), enumerator_13186.current_mPropertyTypeName (HERE), enumerator_13186.current_mPropertyName (HERE), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-list.galgas", 371)), enumerator_13186.current_selector (HERE), enumerator_13186.current_mInitialization (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 367)) ;
    enumerator_13186.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  const GALGAS_listDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_isPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 377)), temp_3.readProperty_mListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 377)), var_structAttributeList_13098, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 375))  COMMA_SOURCE_FILE ("type-list.galgas", 375)) ;
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
  GALGAS_lstring var_nameForUsefulness_14378 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 398)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14378, var_nameForUsefulness_14378, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 399)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_14531 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 400)), temp_2.readProperty_mListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 400)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14378, var_elementTypeNameForUsefulness_14531 COMMA_SOURCE_FILE ("type-list.galgas", 401)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_listDeclarationAST temp_4 = this ;
    test_3 = temp_4.readProperty_usefullList ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_14378  COMMA_SOURCE_FILE ("type-list.galgas", 403)) ;
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_14861 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 406)) ;
  GALGAS_propertyIndexMap var_attributeMap_14909 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 407)) ;
  const GALGAS_listDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_14999 (temp_5.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_14999.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = enumerator_14999.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 409)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_14999.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 410)) ;
      }
    }
    GALGAS_lstring var_propertyTypeNameForUsefulness_15171 = function_typeNameForUsefulEntitiesGraph (enumerator_14999.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 412)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14378, var_propertyTypeNameForUsefulness_15171 COMMA_SOURCE_FILE ("type-list.galgas", 413)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_15350 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_14999.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 414)) ;
    var_typedAttributeList_14861.addAssign_operation (var_t_15350, enumerator_14999.current_mPropertyName (HERE), GALGAS_bool (true), enumerator_14999.current_selector (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 415)) ;
    {
    var_attributeMap_14909.setter_insertKey (enumerator_14999.current_mPropertyName (HERE), var_t_15350, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 420)) ;
    }
    enumerator_14999.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_15586 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_8.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 423)) ;
  const GALGAS_listDeclarationAST temp_9 = this ;
  const GALGAS_listDeclarationAST temp_10 = this ;
  const GALGAS_listDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_9.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 425)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_15586, extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_10.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 428)), temp_11.readProperty_mListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 428)), var_typedAttributeList_14861  COMMA_SOURCE_FILE ("type-list.galgas", 426))  COMMA_SOURCE_FILE ("type-list.galgas", 424)) ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public AC_GALGAS_list {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//--------------------------------- List constructor used by listmap\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const capCollectionElementArray & inSharedArray) ;\n\n//--------------------------------- Element constructor\n  public: static void makeAttributesFromObjects (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("capCollectionElement & outAttributes") ;
  GALGAS_uint index_781_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_781 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_781.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const class GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_781.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue ()) ;
      result.addString (" & in_") ;
      result.addString (enumerator_781.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue ()) ;
      index_781_.increment () ;
      enumerator_781.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public cCollectionElement {\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element mObject ;\n\n//--- Constructors\n  public: cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_538_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_538 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_538.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_538.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue ()) ;
      result.addString (" & in_") ;
      result.addString (enumerator_538.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue ()) ;
      if (enumerator_538.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_538_.increment () ;
      enumerator_538.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n  public: cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inElement COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method for comparing elements\n  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cCollectionElement * copy (void) ;\n\n//--- Description\n  public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1558_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1558 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1558.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_1558.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue ()) ;
      result.addString (" & in_") ;
      result.addString (enumerator_1558.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue ()) ;
      if (enumerator_1558.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1558_.increment () ;
      enumerator_1558.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (") ;
  GALGAS_uint index_1811_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1811 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1811.hasCurrentObject ()) {
      result.addString ("in_") ;
      result.addString (enumerator_1811.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue ()) ;
      if (enumerator_1811.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_1811_.increment () ;
      enumerator_1811.gotoNextObject () ;
    }
  }
  result.addString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const GALGAS_") ;
  result.addString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inElement COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (") ;
  GALGAS_uint index_2226_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2226 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2226.hasCurrentObject ()) {
      result.addString ("inElement.mProperty_") ;
      result.addString (enumerator_2226.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue ()) ;
      if (enumerator_2226.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_2226_.increment () ;
      enumerator_2226.gotoNextObject () ;
    }
  }
  result.addString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::isValid (void) const {\n  return true ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement * cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::copy (void) {\n  cCollectionElement * result = nullptr ;\n  macroMyNew (result, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_2857_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2857 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2857.hasCurrentObject ()) {
      result.addString ("mObject.mProperty_") ;
      result.addString (enumerator_2857.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue ()) ;
      if (enumerator_2857.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_2857_.increment () ;
      enumerator_2857.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::description (String & ioString, const int32_t inIndentation) const {\n") ;
  GALGAS_uint index_3266_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3266 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3266.hasCurrentObject ()) {
      result.addString ("  ioString.addNL () ;\n  ioString.addStringMultiple (\"| \", inIndentation) ;\n  ioString.addString (") ;
      result.addString (enumerator_3266.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue ()) ;
      result.addString (" \":\") ;\n  mObject.mProperty_") ;
      result.addString (enumerator_3266.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue ()) ;
      result.addString (".description (ioString, inIndentation) ;\n") ;
      index_3266_.increment () ;
      enumerator_3266.gotoNextObject () ;
    }
  }
  result.addString ("}\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::compare (const cCollectionElement * inOperand) const {\n  cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * operand = (cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) inOperand ;\n  macroValidSharedObject (operand, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n  return mObject.objectCompare (operand->mObject) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) :\nAC_GALGAS_list () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const capCollectionElementArray & inSharedArray) :\nAC_GALGAS_list (inSharedArray) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_emptyList (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (capCollectionElementArray ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_listWithValue (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_4985_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4985 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4985.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_4985.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue ()) ;
      result.addString (" & inOperand") ;
      result.addString (index_4985_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue ()) ;
      if (enumerator_4985.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_4985_IDX.increment () ;
      enumerator_4985.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  if (") ;
  GALGAS_uint index_5246_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5246 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5246.hasCurrentObject ()) {
      result.addString ("inOperand") ;
      result.addString (index_5246_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 131)).stringValue ()) ;
      result.addString (".isValid ()") ;
      if (enumerator_5246.hasNextObject ()) {
        result.addString (" && ") ;
      }
      index_5246_IDX.increment () ;
      enumerator_5246.gotoNextObject () ;
    }
  }
  result.addString (") {\n    result = GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (capCollectionElementArray ()) ;\n    capCollectionElement attributes ;\n    GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::makeAttributesFromObjects (attributes") ;
  GALGAS_uint index_5570_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5570 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5570.hasCurrentObject ()) {
      result.addString (", inOperand") ;
      result.addString (index_5570_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 139)).stringValue ()) ;
      index_5570_IDX.increment () ;
      enumerator_5570.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_THERE) ;\n    result.appendObject (attributes) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::makeAttributesFromObjects (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("capCollectionElement & outAttributes") ;
  GALGAS_uint index_5963_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5963 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5963.hasCurrentObject ()) {
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_5963.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue ()) ;
      result.addString (" & in_") ;
      result.addString (enumerator_5963.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue ()) ;
      index_5963_.increment () ;
      enumerator_5963.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = nullptr ;\n  macroMyNew (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6300_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6300 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6300.hasCurrentObject ()) {
      result.addString ("in_") ;
      result.addString (enumerator_6300.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue ()) ;
      if (enumerator_6300.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6300_.increment () ;
      enumerator_6300.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_THERE)) ;\n  outAttributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6689_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6689 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6689.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_6689.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue ()) ;
      result.addString (" & inOperand") ;
      result.addString (index_6689_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue ()) ;
      if (enumerator_6689.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6689_IDX.increment () ;
      enumerator_6689.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_7028_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7028 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7028.hasCurrentObject ()) {
      result.addString ("inOperand") ;
      result.addString (index_7028_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 178)).stringValue ()) ;
      if (enumerator_7028.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_7028_IDX.increment () ;
      enumerator_7028.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_THERE)) ;\n    capCollectionElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_append (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7468_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7468 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7468.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_7468.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.addString (" inOperand") ;
      result.addString (index_7468_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.addString (",") ;
      if (enumerator_7468.hasNextObject ()) {
        result.addString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7468_IDX.increment () ;
      enumerator_7468.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * /* inCompiler */\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_7845_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7845 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7845.hasCurrentObject ()) {
      result.addString ("inOperand") ;
      result.addString (index_7845_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 202)).stringValue ()) ;
      if (enumerator_7845.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_7845_IDX.increment () ;
      enumerator_7845.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_THERE)) ;\n    capCollectionElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_insertAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8290_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8290 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8290.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_8290.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 217)).stringValue ()) ;
      result.addString (" inOperand") ;
      result.addString (index_8290_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 217)).stringValue ()) ;
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8290_IDX.increment () ;
      enumerator_8290.gotoNextObject () ;
    }
  }
  result.addString ("const GALGAS_uint inInsertionIndex,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inInsertionIndex.isValid ()") ;
  GALGAS_uint index_8625_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8625 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8625.hasCurrentObject ()) {
      result.addString (" && inOperand") ;
      result.addString (index_8625_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 225)).stringValue ()) ;
      result.addString (".isValid ()") ;
      index_8625_IDX.increment () ;
      enumerator_8625.gotoNextObject () ;
    }
  }
  result.addString (") {\n      cCollectionElement * p = nullptr ;\n      macroMyNew (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_8863_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8863 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8863.hasCurrentObject ()) {
      result.addString ("inOperand") ;
      result.addString (index_8863_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 231)).stringValue ()) ;
      if (enumerator_8863.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_8863_IDX.increment () ;
      enumerator_8863.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_THERE)) ;\n      capCollectionElement attributes ;\n      attributes.setPointer (p) ;\n      macroDetachSharedObject (p) ;\n      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n    }else{\n      drop () ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_removeAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9417_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9417 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9417.hasCurrentObject ()) {
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_9417.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 249)).stringValue ()) ;
      result.addString (" & outOperand") ;
      result.addString (index_9417_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 249)).stringValue ()) ;
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9417_IDX.increment () ;
      enumerator_9417.gotoNextObject () ;
    }
  }
  result.addString ("const GALGAS_uint inRemoveIndex,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inRemoveIndex.isValid ()) {\n      capCollectionElement attributes ;\n      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;\n      cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) attributes.ptr () ;\n      if (nullptr == p) {\n") ;
  GALGAS_uint index_10015_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10015 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10015.hasCurrentObject ()) {
      result.addString ("        outOperand") ;
      result.addString (index_10015_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 262)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_10015_IDX.increment () ;
      enumerator_10015.gotoNextObject () ;
    }
  }
  result.addString ("        drop () ;\n      }else{\n        macroValidSharedObject (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_10253_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10253 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10253.hasCurrentObject ()) {
      result.addString ("        outOperand") ;
      result.addString (index_10253_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 269)).stringValue ()) ;
      result.addString (" = p->mObject.mProperty_") ;
      result.addString (enumerator_10253.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 269)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_10253_IDX.increment () ;
      enumerator_10253.gotoNextObject () ;
    }
  }
  result.addString ("      }\n    }else{\n") ;
  GALGAS_uint index_10461_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10461 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10461.hasCurrentObject ()) {
      result.addString ("      outOperand") ;
      result.addString (index_10461_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 275)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_10461_IDX.increment () ;
      enumerator_10461.gotoNextObject () ;
    }
  }
  result.addString ("      drop () ;    \n    }\n  }else{\n") ;
  GALGAS_uint index_10625_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10625 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10625.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_10625_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 282)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_10625_IDX.increment () ;
      enumerator_10625.gotoNextObject () ;
    }
  }
  result.addString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_popFirst (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10915_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10915 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10915.hasCurrentObject ()) {
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_10915.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 291)).stringValue ()) ;
      result.addString (" & outOperand") ;
      result.addString (index_10915_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 291)).stringValue ()) ;
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10915_IDX.increment () ;
      enumerator_10915.gotoNextObject () ;
    }
  }
  result.addString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeFirstObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_11362_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11362 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11362.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_11362_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 301)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_11362_IDX.increment () ;
      enumerator_11362.gotoNextObject () ;
    }
  }
  result.addString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_11570_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11570 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11570.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_11570_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 307)).stringValue ()) ;
      result.addString (" = p->mObject.mProperty_") ;
      result.addString (enumerator_11570.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 307)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_11570_IDX.increment () ;
      enumerator_11570.gotoNextObject () ;
    }
  }
  result.addString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_popLast (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11917_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11917 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11917.hasCurrentObject ()) {
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_11917.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 316)).stringValue ()) ;
      result.addString (" & outOperand") ;
      result.addString (index_11917_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 316)).stringValue ()) ;
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11917_IDX.increment () ;
      enumerator_11917.gotoNextObject () ;
    }
  }
  result.addString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeLastObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_12363_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12363 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12363.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_12363_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 326)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_12363_IDX.increment () ;
      enumerator_12363.gotoNextObject () ;
    }
  }
  result.addString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_12571_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12571 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12571.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_12571_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 332)).stringValue ()) ;
      result.addString (" = p->mObject.mProperty_") ;
      result.addString (enumerator_12571.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 332)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_12571_IDX.increment () ;
      enumerator_12571.gotoNextObject () ;
    }
  }
  result.addString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::method_first (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12916_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12916 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12916.hasCurrentObject ()) {
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_12916.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 341)).stringValue ()) ;
      result.addString (" & outOperand") ;
      result.addString (index_12916_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 341)).stringValue ()) ;
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12916_IDX.increment () ;
      enumerator_12916.gotoNextObject () ;
    }
  }
  result.addString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readFirst (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_13361_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13361 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13361.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_13361_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 351)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_13361_IDX.increment () ;
      enumerator_13361.gotoNextObject () ;
    }
  }
  result.addString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_13569_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13569 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13569.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_13569_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 357)).stringValue ()) ;
      result.addString (" = p->mObject.mProperty_") ;
      result.addString (enumerator_13569.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 357)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_13569_IDX.increment () ;
      enumerator_13569.gotoNextObject () ;
    }
  }
  result.addString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::method_last (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13913_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13913 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13913.hasCurrentObject ()) {
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_13913.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 366)).stringValue ()) ;
      result.addString (" & outOperand") ;
      result.addString (index_13913_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 366)).stringValue ()) ;
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13913_IDX.increment () ;
      enumerator_13913.gotoNextObject () ;
    }
  }
  result.addString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readLast (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_14357_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14357 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14357.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_14357_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 376)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_14357_IDX.increment () ;
      enumerator_14357.gotoNextObject () ;
    }
  }
  result.addString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_14565_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14565 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14565.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_14565_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 382)).stringValue ()) ;
      result.addString (" = p->mObject.mProperty_") ;
      result.addString (enumerator_14565.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 382)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_14565_IDX.increment () ;
      enumerator_14565.gotoNextObject () ;
    }
  }
  result.addString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand,\n                                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * /* inCompiler */\n                                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = *this ;\n    result.appendList (inOperand) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_subListWithRange (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_range & inRange,\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result = GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_emptyList (THERE) ;\n  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_subListFromIndex (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_uint & inIndex,\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result = GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_emptyList (THERE) ;\n  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_subListToIndex (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_uint & inIndex,\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result = GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_emptyList (THERE) ;\n  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::plusAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" inOperand,\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * /* inCompiler */\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_UNUSED_LOCATION_ARGS) {\n  appendList (inOperand) ;\n}\n\n") ;
  GALGAS_uint index_17292_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17292 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17292.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_17292.current_hasSetter (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.addString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("::setter_set") ;
        result.addString (enumerator_17292.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 442)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 442)).stringValue ()) ;
        result.addString ("AtIndex (") ;
        columnMarker = result.currentColumn () ;
        result.addString ("GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_17292.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 442)).stringValue ()) ;
        result.addString (" inOperand,\n                                              ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("GALGAS_uint inIndex,\n                                              ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("Compiler * inCompiler\n                                              ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString (" * p = (cCollectionElement_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString (" *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cCollectionElement_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString (") ;\n    macroUniqueSharedObject (p) ;\n    p->mObject.mProperty_") ;
        result.addString (enumerator_17292.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 450)).stringValue ()) ;
        result.addString (" = inOperand ;\n  }\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_17292.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 456)).stringValue ()) ;
      result.addString (" GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::getter_") ;
      result.addString (enumerator_17292.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 456)).stringValue ()) ;
      result.addString ("AtIndex (") ;
      columnMarker = result.currentColumn () ;
      result.addString ("const GALGAS_uint & inIndex,\n                                              ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("Compiler * inCompiler\n                                              ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.addString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" * p = (cCollectionElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" *) attributes.ptr () ;\n  GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_17292.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 461)).stringValue ()) ;
      result.addString (" result ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cCollectionElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (") ;\n    result = p->mObject.mProperty_") ;
      result.addString (enumerator_17292.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 464)).stringValue ()) ;
      result.addString (" ;\n  }\n  return result ;\n}\n\n") ;
      index_17292_IDX.increment () ;
      enumerator_17292.gotoNextObject () ;
    }
  }
  result.addString ("\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inEnumeratedObject,\n                   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const typeEnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::current (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (const cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n  return p->mObject ;\n}\n\n\n") ;
  GALGAS_uint index_20150_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20150 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20150.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_20150.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 490)).stringValue ()) ;
      result.addString (" cEnumerator_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::current_") ;
      result.addString (enumerator_20150.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 490)).stringValue ()) ;
      result.addString (" (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" * p = (const cCollectionElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (") ;\n  return p->mObject.mProperty_") ;
      result.addString (enumerator_20150.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 493)).stringValue ()) ;
      result.addString (" ;\n}\n\n") ;
      index_20150_IDX.increment () ;
      enumerator_20150.gotoNextObject () ;
    }
  }
  result.addString ("\n\n\n") ;
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
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_17207 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 465)) ;
  const GALGAS_listTypeForGeneration temp_1 = this ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, var_selfTypedefinition_17207.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 468)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-list.galgas", 466))) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_17207.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 473)), var_selfTypedefinition_17207.readProperty_mIsConcrete (), var_selfTypedefinition_17207.readProperty_mConstructorMap (), var_selfTypedefinition_17207.readProperty_mGetterMap (), var_selfTypedefinition_17207.readProperty_mSetterMap (), var_selfTypedefinition_17207.readProperty_mInstanceMethodMap (), var_selfTypedefinition_17207.readProperty_mClassMethodMap (), var_selfTypedefinition_17207.readProperty_mOptionalMethodMap (), var_selfTypedefinition_17207.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_17207.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_17207.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_17207.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-list.galgas", 471))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 471)) ;
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
  cEnumerator_typedPropertyList enumerator_18511 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_18511.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18511.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 495)) ;
    enumerator_18511.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 497)) ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 498)) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18725 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 499)) ;
  const GALGAS_listTypeForGeneration temp_4 = this ;
  const GALGAS_listTypeForGeneration temp_5 = this ;
  const GALGAS_listTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, var_selfTypedefinition_18725.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 502)), temp_5.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (extensionGetter_definition (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 504)).readProperty_mTypeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 504)) COMMA_SOURCE_FILE ("type-list.galgas", 500))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_2658 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 63)) ;
  var_structAttributeList_2658.addAssign_operation (GALGAS_bool (false), GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 66)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 67)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-listmap.galgas", 68)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-listmap.galgas", 70))  COMMA_SOURCE_FILE ("type-listmap.galgas", 64)) ;
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  var_structAttributeList_2658.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mAssociatedListTypeName (), GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 74)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-listmap.galgas", 75)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-listmap.galgas", 77))  COMMA_SOURCE_FILE ("type-listmap.galgas", 71)) ;
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_isPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 81)), temp_3.readProperty_mListmapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 81)), var_structAttributeList_2658, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 79))  COMMA_SOURCE_FILE ("type-listmap.galgas", 79)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4014 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 97)), temp_1.readProperty_mListmapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 97)) ;
  {
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4014, temp_2, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 98)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4014, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 99)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 99)) COMMA_SOURCE_FILE ("type-listmap.galgas", 99)) ;
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
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_5072 ;
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioTypeMap, temp_0.readProperty_mAssociatedListTypeName (), var_associatedTypeDefinition_5072, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 113)) ;
  GALGAS_typedPropertyList var_listTypedAttributeList_5123 = var_associatedTypeDefinition_5072.readProperty_mAllTypedPropertyList () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_associatedTypeDefinition_5072.readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 115)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_listmapDeclarationAST temp_2 = this ;
      const GALGAS_listmapDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 116)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 116)), fixItArray4  COMMA_SOURCE_FILE ("type-listmap.galgas", 116)) ;
      var_listTypedAttributeList_5123 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 117)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_5468 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 120)) ;
  GALGAS_getterMap var_getterMap_5545 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_5545, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 121)) ;
  }
  GALGAS_setterMap var_setterMap_5574 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 122)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5614 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 123)) ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeIndex_5729 ;
  {
  const GALGAS_listmapDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mAssociatedListTypeName (), var_associatedListTypeIndex_5729, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 125)) ;
  }
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_5832 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeIndex_5832, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 127)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5545, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 129)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5545, ioArgument_ioTypeMap, GALGAS_string ("allKeys"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 137)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5545, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 145)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_6 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5545, ioArgument_ioTypeMap, GALGAS_string ("listForKey"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inKey"), temp_6.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 153)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_7 = this ;
  routine_enterConstructorWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_constructorMap_5468, ioArgument_ioTypeMap, GALGAS_string ("emptyMap"), temp_7.readProperty_mListmapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 162)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_6875 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 170)) ;
  var_enumeratorDescriptor_6875.addAssign_operation (var_stringTypeIndex_5832, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 171)) ;
  var_enumeratorDescriptor_6875.addAssign_operation (var_associatedListTypeIndex_5729, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 172)) ;
  GALGAS_formalParameterSignature var_insertSetterFormalArgumentList_7122 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 174)) ;
  var_insertSetterFormalArgumentList_7122.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 176)), var_stringTypeIndex_5832, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-listmap.galgas", 178)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 175)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_7277 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 180)) ;
  var_addAssignOperatorDescription_7277.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 181)), var_stringTypeIndex_5832, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 181)) ;
  cEnumerator_typedPropertyList enumerator_7445 (var_listTypedAttributeList_5123, kENUMERATION_UP) ;
  while (enumerator_7445.hasCurrentObject ()) {
    var_addAssignOperatorDescription_7277.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 183)), enumerator_7445.current_mPropertyTypeEntry (HERE), enumerator_7445.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 183)) ;
    var_insertSetterFormalArgumentList_7122.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 185)), enumerator_7445.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-listmap.galgas", 187)), enumerator_7445.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 184)) ;
    enumerator_7445.gotoNextObject () ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  var_setterMap_5574.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insert"), temp_8.readProperty_mListmapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 191)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-listmap.galgas", 192)), var_insertSetterFormalArgumentList_7122, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-listmap.galgas", 195)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-listmap.galgas", 190)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_9.readProperty_mListmapTypeName (), GALGAS_bool (false), var_getterMap_5545, var_setterMap_5574, var_instanceMethodMap_5614, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 199)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_8449 ;
  {
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_10.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 214)), temp_11.readProperty_mListmapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 214)), var_listElementTypeIndex_8449, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 213)) ;
  }
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  const GALGAS_listmapDeclarationAST temp_13 = this ;
  const GALGAS_listmapDeclarationAST temp_14 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_8508 = GALGAS_unifiedTypeDefinition::constructor_new (temp_12.readProperty_mListmapTypeName (), temp_13.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-listmap.galgas", 222)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 223)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 225)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 226)), var_listTypedAttributeList_5123, var_constructorMap_5468, var_getterMap_5545, var_setterMap_5574, var_instanceMethodMap_5614, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 232)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 233)), var_enumeratorDescriptor_6875, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 235)), var_addAssignOperatorDescription_7277, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 237)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 238)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 239)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 240)), GALGAS_bool (false), var_listElementTypeIndex_8449, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (temp_14.readProperty_mListmapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 244)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 218)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8508.readProperty_mTypeName (), var_typeDefinition_8508, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 247)) ;
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
  GALGAS_lstring var_nameForUsefulness_10183 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 264)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10183, var_nameForUsefulness_10183, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 265)) ;
  }
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_10339 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 266)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10183, var_associatedTypeNameForUsefulness_10339 COMMA_SOURCE_FILE ("type-listmap.galgas", 267)) ;
  }
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_10530 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)), temp_3.readProperty_mListmapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10183, var_elementTypeNameForUsefulness_10530 COMMA_SOURCE_FILE ("type-listmap.galgas", 269)) ;
  }
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_10857 ;
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  extensionMethod_searchType (ioArgument_ioTypeMap, temp_4.readProperty_mAssociatedListTypeName (), var_associatedTypeDefinition_10857, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 271)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_associatedTypeDefinition_10857.readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 281)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_listmapDeclarationAST temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("associated type should be a list type"), fixItArray7  COMMA_SOURCE_FILE ("type-listmap.galgas", 282)) ;
    }
  }
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (temp_8.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 286)), GALGAS_listmapTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_9.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 288)), extensionGetter_searchKey (ioArgument_ioTypeMap, temp_10.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 289)), var_associatedTypeDefinition_10857.readProperty_mAllTypedPropertyList (), extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_11.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 291)), temp_12.readProperty_mListmapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 291))  COMMA_SOURCE_FILE ("type-listmap.galgas", 287))  COMMA_SOURCE_FILE ("type-listmap.galgas", 285)) ;
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
  cEnumerator_typedPropertyList enumerator_12452 (temp_0.readProperty_mAssociatedListTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_12452.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_12452.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 311)) ;
    enumerator_12452.gotoNextObject () ;
  }
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_12556 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 313)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, var_selfTypedefinition_12556.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 316)) COMMA_SOURCE_FILE ("type-listmap.galgas", 314))) ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_12556.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 320)), var_selfTypedefinition_12556.readProperty_mIsConcrete (), var_selfTypedefinition_12556.readProperty_mConstructorMap (), var_selfTypedefinition_12556.readProperty_mGetterMap (), var_selfTypedefinition_12556.readProperty_mSetterMap (), var_selfTypedefinition_12556.readProperty_mInstanceMethodMap (), var_selfTypedefinition_12556.readProperty_mClassMethodMap (), var_selfTypedefinition_12556.readProperty_mOptionalMethodMap (), var_selfTypedefinition_12556.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_12556.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_12556.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_12556.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-listmap.galgas", 318))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 318)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 341)) ;
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListMapElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 342)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  const GALGAS_listmapTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 344)), extensionGetter_identifierRepresentation (temp_3.readProperty_mAssociatedListTypeIndex (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 345)), temp_4.readProperty_mAssociatedListTypedAttributeList () COMMA_SOURCE_FILE ("type-listmap.galgas", 343))) ;
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
  result_result = GALGAS_string ("dict @").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 14)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_3586 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 95)) ;
  const GALGAS_dictDeclarationAST temp_0 = this ;
  var_structAttributeList_3586.addAssign_operation (GALGAS_bool (true), temp_0.readProperty_mKeyTypeName (), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 96)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-dict.galgas", 96)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-dict.galgas", 96))  COMMA_SOURCE_FILE ("type-dict.galgas", 96)) ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_3783 (temp_1.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_3783.hasCurrentObject ()) {
    var_structAttributeList_3586.addAssign_operation (GALGAS_bool (true), enumerator_3783.current_mPropertyTypeName (HERE), enumerator_3783.current_mPropertyName (HERE), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-dict.galgas", 98)), enumerator_3783.current_selector (HERE), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-dict.galgas", 98))  COMMA_SOURCE_FILE ("type-dict.galgas", 98)) ;
    enumerator_3783.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_2 = this ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_2.readProperty_isPredefined (), GALGAS_lstring::constructor_new (temp_3.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 102)), temp_4.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 102)), var_structAttributeList_3586, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 100))  COMMA_SOURCE_FILE ("type-dict.galgas", 100)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  GALGAS_lstring var_dictionary_4921 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 119)), temp_1.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 119)) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_4921, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 120)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 121)), temp_4.readProperty_mKeyTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 121)) COMMA_SOURCE_FILE ("type-dict.galgas", 121)) ;
  }
  const GALGAS_dictDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5190 (temp_5.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5190.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5190.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 123)), enumerator_5190.current_mPropertyTypeName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 123)) COMMA_SOURCE_FILE ("type-dict.galgas", 123)) ;
    }
    enumerator_5190.gotoNextObject () ;
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
  GALGAS_unifiedTypeMapEntry var_keyTypeIndex_6068 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_6068, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 138)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6117 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_keyTypeIndex_6068, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 140)) ;
  GALGAS_constructorMap var_constructorMap_6232 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 142)) ;
  GALGAS_getterMap var_getterMap_6310 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6310, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 143)) ;
  }
  GALGAS_setterMap var_setterMap_6339 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 144)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6379 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 145)) ;
  {
  const GALGAS_dictDeclarationAST temp_1 = this ;
  routine_enterConstructorWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_constructorMap_6232, ioArgument_ioTypeMap, GALGAS_string ("emptyDict"), temp_1.readProperty_mDictTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 147)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6310, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string::makeEmptyString (), temp_2.readProperty_mKeyTypeName ().readProperty_string (), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 155)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6310, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 163)) ;
  }
  GALGAS_formalParameterSignature var_insertSetterFormalArgumentList_7045 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 172)) ;
  GALGAS_typedPropertyList var_typedPropertyList_7106 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 173)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_7154 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 174)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_7154.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 175)), var_keyTypeIndex_6068, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 175)) ;
  var_insertSetterFormalArgumentList_7045.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 177)), var_keyTypeIndex_6068, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 179)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 176)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_7445 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 181)) ;
  var_removeMethodFormalArgumentList_7445.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 183)), var_keyTypeIndex_6068, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 185)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 182)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_7622 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 187)) ;
  var_optionalMethodSignature_7622.addAssign_operation (GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 190)), var_keyTypeIndex_6068, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 188)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_7745 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 193)) ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_7842 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_7842.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_7912 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7842.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7912, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 195)) ;
    }
    GALGAS_bool var_hasSetter_7940 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_7965 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_7154.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 198)), var_attributeTypeIndex_7912, enumerator_7842.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 198)) ;
    var_typedPropertyList_7106.addAssign_operation (var_attributeTypeIndex_7912, enumerator_7842.current_mPropertyName (HERE), var_hasSetter_7940, var_hasSelector_7965  COMMA_SOURCE_FILE ("type-dict.galgas", 199)) ;
    var_typesToIncludeInHeaderCompilation_7745.addAssign_operation (var_attributeTypeIndex_7912  COMMA_SOURCE_FILE ("type-dict.galgas", 200)) ;
    var_enumerationDescriptor_6117.addAssign_operation (var_attributeTypeIndex_7912, enumerator_7842.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 201)) ;
    var_insertSetterFormalArgumentList_7045.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 203)), var_attributeTypeIndex_7912, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 205)), enumerator_7842.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 202)) ;
    var_removeMethodFormalArgumentList_7445.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 208)), var_attributeTypeIndex_7912, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-dict.galgas", 210)), enumerator_7842.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 207)) ;
    var_optionalMethodSignature_7622.addAssign_operation (GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 214)), var_attributeTypeIndex_7912, enumerator_7842.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 212)) ;
    enumerator_7842.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_4 = this ;
  var_setterMap_6339.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insert"), temp_4.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 220)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 221)), var_insertSetterFormalArgumentList_7045, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 224)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 219)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_5 = this ;
  var_setterMap_6339.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), temp_5.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 229)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 230)), var_removeMethodFormalArgumentList_7445, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 233)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 228)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_6 = this ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  var_instanceMethodMap_6379.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("searchKey"), temp_6.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 238)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 239)), var_removeMethodFormalArgumentList_7445, temp_7.readProperty_mDictTypeName ().readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 243)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 237)) ;
  }
  const GALGAS_dictDeclarationAST temp_8 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_9643 (temp_8.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_9643.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_9679 = GALGAS_lstring::constructor_new (enumerator_9643.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 248)), enumerator_9643.current_mPropertyName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 248)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_9809 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_9643.current_mPropertyTypeName (HERE), var_attributeTypeIndex_9809, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 249)) ;
    }
    {
    GALGAS_functionSignature temp_9 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 253)) ;
    temp_9.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 253)), var_keyTypeIndex_6068, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 253)) ;
    var_getterMap_6310.setter_insertOrReplace (var_accessorName_9679, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 252)), temp_9, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 254)), GALGAS_bool (true), var_attributeTypeIndex_9809, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 257)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 250)) ;
    }
    enumerator_9643.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_10 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10256 (temp_10.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10256.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_10292 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_10256.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 264)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 264)), enumerator_10256.current_mPropertyName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 263)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_10517 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_10256.current_mPropertyTypeName (HERE), var_attributeTypeIndex_10517, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 267)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_10550 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 271)) ;
    var_accessorFormalArgumentList_10550.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 272)), var_attributeTypeIndex_10517, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 272)), enumerator_10256.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 272)) ;
    var_accessorFormalArgumentList_10550.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 273)), var_keyTypeIndex_6068, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 273)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 273)) ;
    {
    var_setterMap_6339.setter_insertOrReplace (var_accessorName_10292, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 276)), var_accessorFormalArgumentList_10550, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 279)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 274)) ;
    }
    enumerator_10256.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_11 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_11.readProperty_mDictTypeName (), GALGAS_bool (false), var_getterMap_6310, var_setterMap_6339, var_instanceMethodMap_6379, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 284)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_11537 ;
  {
  const GALGAS_dictDeclarationAST temp_12 = this ;
  const GALGAS_dictDeclarationAST temp_13 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_12.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 299)), temp_13.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 299)), var_elementTypeEntry_11537, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 298)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_11589 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 303)) ;
  {
  var_optionalMethodMap_11589.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 304)), var_optionalMethodSignature_7622, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 304)) ;
  }
  const GALGAS_dictDeclarationAST temp_14 = this ;
  const GALGAS_dictDeclarationAST temp_15 = this ;
  const GALGAS_dictDeclarationAST temp_16 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_11742 = GALGAS_unifiedTypeDefinition::constructor_new (temp_14.readProperty_mDictTypeName (), temp_15.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-dict.galgas", 310)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-dict.galgas", 311)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 313)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 314)), var_typedPropertyList_7106, var_constructorMap_6232, var_getterMap_6310, var_setterMap_6339, var_instanceMethodMap_6379, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 320)), var_optionalMethodMap_11589, var_enumerationDescriptor_6117, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 323)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 323)) COMMA_SOURCE_FILE ("type-dict.galgas", 323)), var_argumentTypeListForAddAssignWithFieldExpressionList_7154, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 325)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 326)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 327)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 328)), GALGAS_bool (false), var_elementTypeEntry_11537, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (temp_16.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 332)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-dict.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 306)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_11742.readProperty_mTypeName (), var_typeDefinition_11742, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 335)) ;
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
  cEnumerator_stringlist enumerator_13099 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 343)), kENUMERATION_UP) ;
  while (enumerator_13099.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_13124 = enumerator_13099.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 344)) ;
    {
    GALGAS_string joker_13223 ; // Joker input parameter
    var_explodedArray_13124.setter_popFirst (joker_13223, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 345)) ;
    }
    cEnumerator_stringlist enumerator_13236 (var_explodedArray_13124, kENUMERATION_UP) ;
    while (enumerator_13236.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_13236.current_mValue (HERE).getter_count (SOURCE_FILE ("type-dict.galgas", 347)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_13315 = enumerator_13236.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 348)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_13315.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 350)) ;
            }
          }
        }
      }
      enumerator_13236.gotoNextObject () ;
    }
    enumerator_13099.gotoNextObject () ;
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
  cEnumerator_stringlist enumerator_13805 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 360)), kENUMERATION_UP) ;
  while (enumerator_13805.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_13830 = enumerator_13805.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 361)) ;
    {
    GALGAS_string joker_13929 ; // Joker input parameter
    var_explodedArray_13830.setter_popFirst (joker_13929, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 362)) ;
    }
    cEnumerator_stringlist enumerator_13942 (var_explodedArray_13830, kENUMERATION_UP) ;
    while (enumerator_13942.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_13942.current_mValue (HERE).getter_count (SOURCE_FILE ("type-dict.galgas", 364)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_14021 = enumerator_13942.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 365)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_14021.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_14021.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 366)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 367)) ;
            }
          }
        }
      }
      enumerator_13942.gotoNextObject () ;
    }
    enumerator_13805.gotoNextObject () ;
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
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dict.galgas", 377)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 378)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 379)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 380)) ;
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

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForMapAndDict (nullptr,
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
  GALGAS_lstring var_nameForUsefulness_15078 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 395)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15078, var_nameForUsefulness_15078, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 396)) ;
  }
  const GALGAS_dictDeclarationAST temp_1 = this ;
  const GALGAS_dictDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_15231 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mDictTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 397)), temp_2.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 397)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15078, var_elementTypeNameForUsefulness_15231 COMMA_SOURCE_FILE ("type-dict.galgas", 398)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_15497 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 400)) ;
  GALGAS_propertyIndexMap var_attributeMap_15545 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 401)) ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_15609 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_15609.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_15645 = function_typeNameForUsefulEntitiesGraph (enumerator_15609.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 403)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15078, var_propertyTypeNameForUsefulness_15645 COMMA_SOURCE_FILE ("type-dict.galgas", 404)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_15837 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_15609.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 405)) ;
    GALGAS_bool var_hasSetter_15881 = GALGAS_bool (true) ;
    var_typedAttributeList_15497.addAssign_operation (var_t_15837, enumerator_15609.current_mPropertyName (HERE), var_hasSetter_15881, enumerator_15609.current_selector (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 407)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 412)).getter_hasKey (enumerator_15609.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-dict.galgas", 412)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_16105 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_16182 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 414)), kENUMERATION_UP) ;
        while (enumerator_16182.hasCurrentObject ()) {
          var_m_16105.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_16182.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 415)) ;
          enumerator_16182.gotoNextObject () ;
        }
        var_m_16105.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 417)) ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_15609.current_mPropertyName (HERE).readProperty_location (), var_m_16105, fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 418)) ;
      }
    }
    {
    var_attributeMap_15545.setter_insertKey (enumerator_15609.current_mPropertyName (HERE), var_t_15837, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 420)) ;
    }
    enumerator_15609.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_6 = this ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  const GALGAS_dictDeclarationAST temp_8 = this ;
  const GALGAS_dictDeclarationAST temp_9 = this ;
  const GALGAS_dictDeclarationAST temp_10 = this ;
  const GALGAS_dictDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_6.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 424)), GALGAS_dictTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_7.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 426)), extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_8.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 427)), temp_9.readProperty_mDictTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 427)), temp_10.readProperty_mDictTypeName (), var_typedAttributeList_15497, temp_11.readProperty_mKeyTypeName ()  COMMA_SOURCE_FILE ("type-dict.galgas", 425))  COMMA_SOURCE_FILE ("type-dict.galgas", 423)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_17534 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 451)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, var_selfTypedefinition_17534.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 454)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-dict.galgas", 452))) ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_17534.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 459)), var_selfTypedefinition_17534.readProperty_mIsConcrete (), var_selfTypedefinition_17534.readProperty_mConstructorMap (), var_selfTypedefinition_17534.readProperty_mGetterMap (), var_selfTypedefinition_17534.readProperty_mSetterMap (), var_selfTypedefinition_17534.readProperty_mInstanceMethodMap (), var_selfTypedefinition_17534.readProperty_mClassMethodMap (), var_selfTypedefinition_17534.readProperty_mOptionalMethodMap (), var_selfTypedefinition_17534.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_17534.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_17534.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_17534.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-dict.galgas", 457))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 457)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 480)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 481)) ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  const GALGAS_dictTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 483)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 485)) COMMA_SOURCE_FILE ("type-dict.galgas", 482))) ;
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
  result_result = GALGAS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 45)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_9258 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 249)) ;
  var_structAttributeList_9258.addAssign_operation (GALGAS_bool (false), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 252)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 253)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-map.galgas", 254)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-map.galgas", 256))  COMMA_SOURCE_FILE ("type-map.galgas", 250)) ;
  const GALGAS_mapDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_9512 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_9512.hasCurrentObject ()) {
    var_structAttributeList_9258.addAssign_operation (GALGAS_bool (false), enumerator_9512.current_mPropertyTypeName (HERE), enumerator_9512.current_mPropertyName (HERE), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-map.galgas", 262)), enumerator_9512.current_selector (HERE), enumerator_9512.current_mInitialization (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 258)) ;
    enumerator_9512.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_isPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 268)), temp_3.readProperty_mMapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 268)), var_structAttributeList_9258, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 266))  COMMA_SOURCE_FILE ("type-map.galgas", 266)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapDeclarationAST temp_0 = this ;
  const GALGAS_mapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_10713 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 284)), temp_1.readProperty_mMapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 284)) ;
  {
  const GALGAS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_10713, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 285)) ;
  }
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10869 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10869.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_10869.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 287)), enumerator_10869.current_mPropertyTypeName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 287)) COMMA_SOURCE_FILE ("type-map.galgas", 287)) ;
    }
    enumerator_10869.gotoNextObject () ;
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
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_11765 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeIndex_11765, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 303)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeIndex_11857 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_11857, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 305)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 307)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_11857, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 307)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_11937 = temp_0 ;
  GALGAS_constructorMap var_constructorMap_12016 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 309)) ;
  GALGAS_getterMap var_getterMap_12094 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_12094, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 310)) ;
  }
  GALGAS_setterMap var_setterMap_12122 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 311)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_12162 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 312)) ;
  {
  const GALGAS_mapDeclarationAST temp_1 = this ;
  routine_enterConstructorWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_constructorMap_12016, ioArgument_ioTypeMap, GALGAS_string ("emptyMap"), temp_1.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 314)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_2 = this ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  routine_enterConstructorWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (var_constructorMap_12016, ioArgument_ioTypeMap, GALGAS_string ("mapWithMapToOverride"), temp_2.readProperty_mMapTypeName ().readProperty_string (), GALGAS_string ("inMap"), temp_3.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 321)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12094, ioArgument_ioTypeMap, GALGAS_string ("levels"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 331)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12094, ioArgument_ioTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 339)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12094, ioArgument_ioTypeMap, GALGAS_string ("keySet"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 350)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12094, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 358)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12094, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 366)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12094, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 375)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12094, ioArgument_ioTypeMap, GALGAS_string ("overriddenMap"), GALGAS_string::makeEmptyString (), temp_4.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 384)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12094, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 392)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_14253 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 401)) ;
  GALGAS_typedPropertyList var_typedPropertyList_14321 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 402)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_14394 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 403)) ;
  var_optionalMethodSignature_14394.addAssign_operation (GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 406)), var_stringTypeIndex_11765, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 404)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_14538 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 409)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_14538.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 410)), var_lstringTypeIndex_11857, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 410)) ;
  var_insertMethodFormalArgumentList_14253.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 412)), var_lstringTypeIndex_11857, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 414)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 411)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_14868 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 416)) ;
  var_removeMethodFormalArgumentList_14868.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 418)), var_lstringTypeIndex_11857, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 420)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 417)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_15079 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 422)) ;
  const GALGAS_mapDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_15172 (temp_5.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_15172.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = enumerator_15172.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-map.galgas", 424)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_15172.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a map"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 425)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_15386 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15172.current_mPropertyTypeName (HERE), var_attributeTypeIndex_15386, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 427)) ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_14538.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 437)), var_attributeTypeIndex_15386, enumerator_15172.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 437)) ;
    var_typedPropertyList_14321.addAssign_operation (var_attributeTypeIndex_15386, enumerator_15172.current_mPropertyName (HERE), GALGAS_bool (true), enumerator_15172.current_selector (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 438)) ;
    var_typesToIncludeInHeaderCompilation_15079.addAssign_operation (var_attributeTypeIndex_15386  COMMA_SOURCE_FILE ("type-map.galgas", 439)) ;
    var_enumerationDescriptor_11937.addAssign_operation (var_attributeTypeIndex_15386, enumerator_15172.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 440)) ;
    GALGAS_lstring temp_8 ;
    const enumGalgasBool test_9 = enumerator_15172.current_selector (HERE).boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = enumerator_15172.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 442)) ;
    }
    var_insertMethodFormalArgumentList_14253.addAssign_operation (temp_8, var_attributeTypeIndex_15386, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 444)), enumerator_15172.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 441)) ;
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_15172.current_selector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_15172.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 447)) ;
    }
    var_removeMethodFormalArgumentList_14868.addAssign_operation (temp_10, var_attributeTypeIndex_15386, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 449)), enumerator_15172.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 446)) ;
    GALGAS_lstring temp_12 ;
    const enumGalgasBool test_13 = enumerator_15172.current_selector (HERE).boolEnum () ;
    if (kBoolTrue == test_13) {
      temp_12 = enumerator_15172.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_13) {
      temp_12 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 453)) ;
    }
    var_optionalMethodSignature_14394.addAssign_operation (GALGAS_bool (false), temp_12, var_attributeTypeIndex_15386, enumerator_15172.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 451)) ;
    enumerator_15172.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_14 = this ;
  cEnumerator_insertMethodListAST enumerator_16660 (temp_14.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_16660.hasCurrentObject ()) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = var_setterMap_12122.getter_hasKey (enumerator_16660.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 459)).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_16660.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_16660.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 460)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 460)), fixItArray16  COMMA_SOURCE_FILE ("type-map.galgas", 460)) ;
      }
    }
    if (kBoolFalse == test_15) {
      {
      var_setterMap_12122.setter_insertOrReplace (enumerator_16660.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 464)), var_insertMethodFormalArgumentList_14253, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 467)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 462)) ;
      }
    }
    enumerator_16660.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_17 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_17123 (temp_17.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_17123.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_setterMap_12122.getter_hasKey (enumerator_17123.current_mMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 474)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_17123.current_mMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17123.current_mMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 475)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 475)), fixItArray19  COMMA_SOURCE_FILE ("type-map.galgas", 475)) ;
      }
    }
    if (kBoolFalse == test_18) {
      {
      var_setterMap_12122.setter_insertOrReplace (enumerator_17123.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 479)), var_removeMethodFormalArgumentList_14868, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 482)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 477)) ;
      }
    }
    enumerator_17123.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_20 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_17614 (temp_20.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_17614.hasCurrentObject ()) {
    {
    var_instanceMethodMap_12162.setter_insertKey (enumerator_17614.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 491)), var_removeMethodFormalArgumentList_14868, enumerator_17614.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 495)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 489)) ;
    }
    enumerator_17614.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_21 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_17949 (temp_21.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_17949.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_17985 = GALGAS_lstring::constructor_new (enumerator_17949.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 501)), enumerator_17949.current_mPropertyName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 501)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_18122 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17949.current_mPropertyTypeName (HERE), var_attributeTypeIndex_18122, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 502)) ;
    }
    {
    GALGAS_functionSignature temp_22 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 506)) ;
    temp_22.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 506)), var_stringTypeIndex_11765, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 506)) ;
    var_getterMap_12094.setter_insertOrReplace (var_accessorName_17985, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 505)), temp_22, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 507)), GALGAS_bool (true), var_attributeTypeIndex_18122, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 510)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 503)) ;
    }
    enumerator_17949.gotoNextObject () ;
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_mapDeclarationAST temp_24 = this ;
    test_23 = GALGAS_bool (kIsSupOrEqual, temp_24.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("type-map.galgas", 515)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_location var_insertOrReplaceLocation_18592 ;
      const GALGAS_mapDeclarationAST temp_25 = this ;
      temp_25.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_18592, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 516)) ;
      {
      var_setterMap_12122.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_18592, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 518)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 519)), var_insertMethodFormalArgumentList_14253, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 522)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 517)) ;
      }
    }
  }
  const GALGAS_mapDeclarationAST temp_26 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_18963 (temp_26.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_18963.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_18999 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_18963.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 529)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 529)), enumerator_18963.current_mPropertyName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 528)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_19232 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18963.current_mPropertyTypeName (HERE), var_attributeTypeIndex_19232, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 532)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_19291 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 536)) ;
    var_accessorFormalArgumentList_19291.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 537)), var_attributeTypeIndex_19232, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 537)), enumerator_18963.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 537)) ;
    var_accessorFormalArgumentList_19291.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 538)), var_stringTypeIndex_11765, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 538)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 538)) ;
    {
    var_setterMap_12122.setter_insertOrReplace (var_accessorName_18999, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 541)), var_accessorFormalArgumentList_19291, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 544)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 539)) ;
    }
    enumerator_18963.gotoNextObject () ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_19765 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 549)) ;
  {
  var_optionalMethodMap_19765.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 550)), var_optionalMethodSignature_14394, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 550)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_27 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_27.readProperty_mMapTypeName (), GALGAS_bool (false), var_getterMap_12094, var_setterMap_12122, var_instanceMethodMap_12162, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 552)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_20407 ;
  {
  const GALGAS_mapDeclarationAST temp_28 = this ;
  const GALGAS_mapDeclarationAST temp_29 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_28.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 567)), temp_29.readProperty_mMapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 567)), var_elementTypeEntry_20407, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 566)) ;
  }
  const GALGAS_mapDeclarationAST temp_30 = this ;
  const GALGAS_mapDeclarationAST temp_31 = this ;
  const GALGAS_mapDeclarationAST temp_32 = this ;
  const GALGAS_mapDeclarationAST temp_33 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_20457 = GALGAS_unifiedTypeDefinition::constructor_new (temp_30.readProperty_mMapTypeName (), temp_31.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-map.galgas", 575)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-map.galgas", 576)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 578)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 579)), var_typedPropertyList_14321, var_constructorMap_12016, var_getterMap_12094, var_setterMap_12122, var_instanceMethodMap_12162, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 585)), var_optionalMethodMap_19765, var_enumerationDescriptor_11937, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 588)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 588)) COMMA_SOURCE_FILE ("type-map.galgas", 588)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 588)) COMMA_SOURCE_FILE ("type-map.galgas", 588)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-map.galgas", 588)) COMMA_SOURCE_FILE ("type-map.galgas", 588)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-map.galgas", 588)) COMMA_SOURCE_FILE ("type-map.galgas", 588)), var_argumentTypeListForAddAssignWithFieldExpressionList_14538, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 590)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 591)), temp_32.readProperty_mSearchMethodList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 593)), GALGAS_bool (false), var_elementTypeEntry_20407, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (temp_33.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 597)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-map.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 571)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_20457.readProperty_mTypeName (), var_typeDefinition_20457, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 600)) ;
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
  GALGAS_lstring var_nameForUsefulness_22577 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 629)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_22577, var_nameForUsefulness_22577, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 630)) ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_22729 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mMapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 631)), temp_2.readProperty_mMapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 631)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_22577, var_elementTypeNameForUsefulness_22729 COMMA_SOURCE_FILE ("type-map.galgas", 632)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_22991 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 634)) ;
  GALGAS_propertyIndexMap var_attributeMap_23039 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 635)) ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_23098 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_23098.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_23134 = function_typeNameForUsefulEntitiesGraph (enumerator_23098.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 637)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_22577, var_propertyTypeNameForUsefulness_23134 COMMA_SOURCE_FILE ("type-map.galgas", 638)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_23334 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_23098.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 639)) ;
    GALGAS_bool var_hasSelector_23386 = GALGAS_bool (false) ;
    var_typedAttributeList_22991.addAssign_operation (var_t_23334, enumerator_23098.current_mPropertyName (HERE), GALGAS_bool (true), var_hasSelector_23386  COMMA_SOURCE_FILE ("type-map.galgas", 641)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 646)).getter_hasKey (enumerator_23098.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 646)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_23608 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_23685 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 648)), kENUMERATION_UP) ;
        while (enumerator_23685.hasCurrentObject ()) {
          var_m_23608.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_23685.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 649)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 649)) ;
          enumerator_23685.gotoNextObject () ;
        }
        var_m_23608.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 651)) ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_23098.current_mPropertyName (HERE).readProperty_location (), var_m_23608, fixItArray5  COMMA_SOURCE_FILE ("type-map.galgas", 652)) ;
      }
    }
    {
    var_attributeMap_23039.setter_insertKey (enumerator_23098.current_mPropertyName (HERE), var_t_23334, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 654)) ;
    }
    enumerator_23098.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_23902 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 657)) ;
  const GALGAS_mapDeclarationAST temp_6 = this ;
  cEnumerator_insertMethodListAST enumerator_23962 (temp_6.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_23962.hasCurrentObject ()) {
    {
    var_insertMethodMap_23902.setter_insertKey (enumerator_23962.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 659)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_23962.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 660)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_23962.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 661)) ;
    }
    enumerator_23962.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_24224 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 664)) ;
  const GALGAS_mapDeclarationAST temp_7 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_24270 (temp_7.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_24270.hasCurrentObject ()) {
    {
    var_searchMethodMap_24224.setter_insertKey (enumerator_24270.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 666)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_24270.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 667)) ;
    }
    enumerator_24270.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_8 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_24465 (temp_8.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_24465.hasCurrentObject ()) {
    {
    var_insertMethodMap_23902.setter_insertKey (enumerator_24465.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 671)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_24465.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 672)) ;
    }
    enumerator_24465.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_9 = this ;
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_24682 (temp_9.readProperty_mInsertOrReplaceDeclarationListAST (), kENUMERATION_UP) ;
  GALGAS_uint index_24677 ((uint32_t) 0) ;
  while (enumerator_24682.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsStrictSup, index_24677.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_24682.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray11  COMMA_SOURCE_FILE ("type-map.galgas", 677)) ;
      }
    }
    enumerator_24682.gotoNextObject () ;
    index_24677.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 675)) ;
  }
  const GALGAS_mapDeclarationAST temp_12 = this ;
  GALGAS_bool var_hasInsertOrReplaceModifier_24918 = GALGAS_bool (kIsStrictSup, temp_12.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("type-map.galgas", 680)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_hasInsertOrReplaceModifier_24918.operator_and (var_insertMethodMap_23902.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 681)) COMMA_SOURCE_FILE ("type-map.galgas", 681)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_25138 ;
      const GALGAS_mapDeclarationAST temp_14 = this ;
      temp_14.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceDeclarationLocation_25138, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 682)) ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_25138, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray15  COMMA_SOURCE_FILE ("type-map.galgas", 683)) ;
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
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (temp_16.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 688)), GALGAS_mapTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_17.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 690)), extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_18.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 691)), temp_19.readProperty_mMapTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 691)), temp_20.readProperty_mMapTypeName (), var_typedAttributeList_22991, temp_21.readProperty_mInsertMethodList (), temp_22.readProperty_mSearchMethodList (), temp_23.readProperty_mRemoveMethodList (), var_hasInsertOrReplaceModifier_24918  COMMA_SOURCE_FILE ("type-map.galgas", 689))  COMMA_SOURCE_FILE ("type-map.galgas", 687)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_26787 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 721)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, var_selfTypedefinition_26787.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 724)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-map.galgas", 722))) ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_26787.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 730)), var_selfTypedefinition_26787.readProperty_mIsConcrete (), var_selfTypedefinition_26787.readProperty_mConstructorMap (), var_selfTypedefinition_26787.readProperty_mGetterMap (), var_selfTypedefinition_26787.readProperty_mSetterMap (), var_selfTypedefinition_26787.readProperty_mInstanceMethodMap (), var_selfTypedefinition_26787.readProperty_mClassMethodMap (), var_selfTypedefinition_26787.readProperty_mOptionalMethodMap (), var_selfTypedefinition_26787.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_26787.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_26787.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_26787.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-map.galgas", 728))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 728)) ;
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
  cEnumerator_typedPropertyList enumerator_27981 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_27981.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_27981.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 752)) ;
    enumerator_27981.gotoNextObject () ;
  }
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_28071 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 754)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, var_selfTypedefinition_28071.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 757)), temp_3.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-map.galgas", 755))) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 768)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 769)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_28735 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 770)) ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  const GALGAS_mapTypeForGeneration temp_5 = this ;
  const GALGAS_mapTypeForGeneration temp_6 = this ;
  const GALGAS_mapTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, var_selfTypedefinition_28735.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-map.galgas", 772)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mInsertMethodList (), temp_5.readProperty_mSearchMethodList (), temp_6.readProperty_mRemoveMethodList (), temp_7.readProperty_mHasInsertOrReplaceModifier () COMMA_SOURCE_FILE ("type-map.galgas", 771))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                    GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                    GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                    GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4941 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 134)), temp_1.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 134)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4941, temp_2, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 135)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5111 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5111.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5111.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 137)), enumerator_5111.current_mPropertyTypeName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 137)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 137)) ;
    }
    enumerator_5111.gotoNextObject () ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_5700 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 147)) ;
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5788 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5788.hasCurrentObject ()) {
    var_structAttributeList_5700.addAssign_operation (enumerator_5788.current_isConstant (HERE), enumerator_5788.current_mPropertyTypeName (HERE), enumerator_5788.current_mPropertyName (HERE), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-sorted-list.galgas", 153)), enumerator_5788.current_selector (HERE), enumerator_5788.current_mInitialization (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 149)) ;
    enumerator_5788.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_isPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 159)), temp_3.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 159)), var_structAttributeList_5700, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 157))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 157)) ;
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
  GALGAS_optionalMethodMap var_optionalMethodMap_6789 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 174)) ;
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_6904 ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mSortedListTypeName (), var_listTypeIndex_6904, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 176)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_7113 ;
  {
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 179)), temp_2.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 179)), var_listElementTypeIndex_7113, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 178)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_7200 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 183)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_7252 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 184)) ;
  GALGAS_formalParameterSignature var_setterFormalOutputArgumentList_7318 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 185)) ;
  GALGAS_formalParameterSignature var_setterFormalInputArgumentList_7386 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 186)) ;
  GALGAS_typedPropertyList var_typedAttributeList_7446 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 187)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_7511 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_7511.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_7589 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7511.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7589, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 189)) ;
    }
    GALGAS_bool var_hasSelector_7617 = GALGAS_bool (false) ;
    var_typedAttributeList_7446.addAssign_operation (var_attributeTypeIndex_7589, enumerator_7511.current_mPropertyName (HERE), GALGAS_bool (true), var_hasSelector_7617  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 191)) ;
    var_enumerationDescriptor_7200.addAssign_operation (var_attributeTypeIndex_7589, enumerator_7511.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 192)) ;
    var_constructorAttributeTypeList_7252.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 193)), var_attributeTypeIndex_7589, enumerator_7511.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 193)) ;
    var_setterFormalOutputArgumentList_7318.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 194)), var_attributeTypeIndex_7589, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-sorted-list.galgas", 194)), enumerator_7511.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 194)) ;
    var_setterFormalInputArgumentList_7386.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 195)), var_attributeTypeIndex_7589, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-sorted-list.galgas", 195)), enumerator_7511.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 195)) ;
    enumerator_7511.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_8164 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 198)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  routine_enterConstructorWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_constructorMap_8164, ioArgument_ioTypeMap, GALGAS_string ("emptySortedList"), temp_4.readProperty_mSortedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 199)) ;
  }
  {
  var_constructorMap_8164.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 207)), var_constructorAttributeTypeList_7252, GALGAS_bool (false), var_listTypeIndex_6904, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 206)) ;
  }
  GALGAS_getterMap var_getterMap_8594 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_8594, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 213)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8594, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 214)) ;
  }
  GALGAS_setterMap var_setterMap_8824 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 223)) ;
  {
  var_setterMap_8824.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 225)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 226)), var_setterFormalOutputArgumentList_7318, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 229)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 224)) ;
  }
  {
  var_setterMap_8824.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 233)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 234)), var_setterFormalOutputArgumentList_7318, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 237)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 232)) ;
  }
  {
  var_setterMap_8824.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insert"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 241)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 242)), var_setterFormalInputArgumentList_7386, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 245)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 240)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_9546 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 249)) ;
  {
  var_instanceMethodMap_9546.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 251)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 252)), var_setterFormalOutputArgumentList_7318, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 254)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 256)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 250)) ;
  }
  {
  var_instanceMethodMap_9546.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 260)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 261)), var_setterFormalOutputArgumentList_7318, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 263)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 265)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 259)) ;
  }
  {
  const GALGAS_sortedListDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_mSortedListTypeName (), GALGAS_bool (false), var_getterMap_8594, var_setterMap_8824, var_instanceMethodMap_9546, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 269)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_6 = this ;
  const GALGAS_sortedListDeclarationAST temp_7 = this ;
  const GALGAS_sortedListDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_10425 = GALGAS_unifiedTypeDefinition::constructor_new (temp_6.readProperty_mSortedListTypeName (), temp_7.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-sorted-list.galgas", 287)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("type-sorted-list.galgas", 288)), GALGAS_bool (true), var_typedAttributeList_7446, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 291)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 292)), var_constructorMap_8164, var_getterMap_8594, var_setterMap_8824, var_instanceMethodMap_9546, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 297)), var_optionalMethodMap_6789, var_enumerationDescriptor_7200, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-sorted-list.galgas", 300)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-sorted-list.galgas", 300)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 300)), var_constructorAttributeTypeList_7252, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 302)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 303)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 304)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 305)), GALGAS_bool (false), var_listElementTypeIndex_7113, GALGAS_string ("emptySortedList"), GALGAS_string ("-sortedlist-").add_operation (temp_8.readProperty_mSortedListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-sorted-list.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 309)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-sorted-list.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 283)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_10425.readProperty_mTypeName (), var_typeDefinition_10425, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 312)) ;
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
  GALGAS_lstring var_sortedListNameForUsefulness_12086 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 329)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_12086, var_sortedListNameForUsefulness_12086, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 330)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_12275 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 331)), temp_2.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 331)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_12086, var_elementTypeNameForUsefulness_12275 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 332)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_12534 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 334)) ;
  GALGAS_propertyIndexMap var_attributeMap_12601 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 335)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12660 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12660.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_12696 = function_typeNameForUsefulEntitiesGraph (enumerator_12660.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 337)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_12086, var_propertyTypeNameForUsefulness_12696 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 338)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_12885 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_12660.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 339)) ;
    GALGAS_bool var_hasSelector_12937 = GALGAS_bool (true) ;
    var_typedAttributeList_12534.addAssign_operation (var_t_12885, enumerator_12660.current_mPropertyName (HERE), GALGAS_bool (true), var_hasSelector_12937  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 341)) ;
    {
    var_attributeMap_12601.setter_insertKey (enumerator_12660.current_mPropertyName (HERE), var_t_12885, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346)) ;
    }
    enumerator_12660.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting_13160 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sorted-list.galgas", 349)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_13229 = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 350)) ;
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_13281 (temp_4.readProperty_mSortDescriptorList (), kENUMERATION_UP) ;
  while (enumerator_13281.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_13400 ;
    var_attributeMap_12601.method_searchKey (enumerator_13281.current_mSortedAttributeName (HERE), var_type_13400, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 352)) ;
    var_sortDescriptorList_13229.addAssign_operation (var_type_13400, enumerator_13281.current_mSortedAttributeName (HERE).readProperty_string (), enumerator_13281.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 353)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_attributesUsedForSorting_13160.getter_hasKey (enumerator_13281.current_mSortedAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_13281.current_mSortedAttributeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_13281.current_mSortedAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)), fixItArray6  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)) ;
      }
    }
    var_attributesUsedForSorting_13160.addAssign_operation (enumerator_13281.current_mSortedAttributeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 357)) ;
    enumerator_13281.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_7 = this ;
  const GALGAS_sortedListDeclarationAST temp_8 = this ;
  const GALGAS_sortedListDeclarationAST temp_9 = this ;
  const GALGAS_sortedListDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (temp_7.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 361)), GALGAS_sortedListTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_8.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 363)), extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_9.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 364)), temp_10.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 364)), var_typedAttributeList_12534, var_sortDescriptorList_13229  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 362))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 360)) ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public AC_GALGAS_sortedlist {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public cSortedListElement {\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element mObject ;\n\n//--- Constructor\n  public: cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_566_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_566 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_566.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_566.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue ()) ;
      result.addString (" & in_") ;
      result.addString (enumerator_566.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue ()) ;
      if (enumerator_566.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_566_.increment () ;
      enumerator_566.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cSortedListElement * copy (void) ;\n\n//--- Virtual method for comparing elements\n  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Description\n public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n\n//--- Virtual method that comparing element for sorting\n  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\ncSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1646_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1646 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1646.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_1646.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue ()) ;
      result.addString (" & in_") ;
      result.addString (enumerator_1646.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue ()) ;
      if (enumerator_1646.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1646_.increment () ;
      enumerator_1646.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) :\ncSortedListElement (THERE),\nmObject (") ;
  GALGAS_uint index_1939_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1939 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1939.hasCurrentObject ()) {
      result.addString ("in_") ;
      result.addString (enumerator_1939.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 47)).stringValue ()) ;
      if (enumerator_1939.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_1939_.increment () ;
      enumerator_1939.gotoNextObject () ;
    }
  }
  result.addString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::isValid (void) const {\n  return mObject.isValid () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncSortedListElement * cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::copy (void) {\n  cSortedListElement * result = nullptr ;\n  macroMyNew (result, cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_2590_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2590 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2590.hasCurrentObject ()) {
      result.addString ("mObject.mProperty_") ;
      result.addString (enumerator_2590.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 65)).stringValue ()) ;
      if (enumerator_2590.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_2590_.increment () ;
      enumerator_2590.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::description (String & ioString, const int32_t inIndentation) const {\n") ;
  GALGAS_uint index_3022_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3022 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3022.hasCurrentObject ()) {
      result.addString ("  ioString.addNL () ;\n  ioString.addStringMultiple (\"| \", inIndentation) ;\n  ioString.addString (") ;
      result.addString (enumerator_3022.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 79)).stringValue ()) ;
      result.addString (" \":\") ;\n  mObject.mProperty_") ;
      result.addString (enumerator_3022.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 80)).stringValue ()) ;
      result.addString (".description (ioString, inIndentation) ;\n") ;
      index_3022_.increment () ;
      enumerator_3022.gotoNextObject () ;
    }
  }
  result.addString ("}\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::compare (const cCollectionElement * inOperand) const {\n  cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * operand = (cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) inOperand ;\n  macroValidSharedObject (operand, cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n  return mObject.objectCompare (operand->mObject) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) :\nAC_GALGAS_sortedlist () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::compareForSorting (const cSortedListElement * inOperand) const {\n  typeComparisonResult result = kOperandEqual ;\n  const cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * operand = (const cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) inOperand ;\n  macroValidSharedObject (operand, cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_4531_ (0) ;
  if (in_SORT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_sortDescriptorListForGeneration enumerator_4531 (in_SORT_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4531.hasCurrentObject ()) {
      result.addString ("  if (result == kOperandEqual) {\n    result = ") ;
      const enumGalgasBool test_0 = enumerator_4531.current_mAscendingOrder (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.addString ("mObject.mProperty_") ;
        result.addString (enumerator_4531.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue ()) ;
        result.addString (".objectCompare (operand->mObject.mProperty_") ;
        result.addString (enumerator_4531.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue ()) ;
        result.addString (")") ;
        } break ;
      case kBoolFalse : {
        result.addString ("operand->mObject.mProperty_") ;
        result.addString (enumerator_4531.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue ()) ;
        result.addString (".objectCompare (mObject.mProperty_") ;
        result.addString (enumerator_4531.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue ()) ;
        result.addString (")") ;
        } break ;
      default :
        break ;
      }
      result.addString (" ;\n  }\n") ;
      index_4531_.increment () ;
      enumerator_4531.gotoNextObject () ;
    }
  }
  result.addString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_emptySortedList (LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  result.createNewEmptySortedList (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_sortedListWithValue (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5593_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5593 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5593.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_5593.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue ()) ;
      result.addString (" & inOperand") ;
      result.addString (index_5593_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue ()) ;
      if (enumerator_5593.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5593_IDX.increment () ;
      enumerator_5593.gotoNextObject () ;
    }
  }
  result.addString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result = constructor_emptySortedList (THERE) ;\n  cSortedListElement * p = nullptr ;\n  macroMyNew (p, cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_6002_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6002 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6002.hasCurrentObject ()) {
      result.addString ("inOperand") ;
      result.addString (index_6002_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 138)).stringValue ()) ;
      if (enumerator_6002.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_6002_IDX.increment () ;
      enumerator_6002.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_THERE)) ;\n  capSortedListElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  result.appendObject (attributes) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6456_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6456 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6456.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_6456.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue ()) ;
      result.addString (" & inOperand") ;
      result.addString (index_6456_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue ()) ;
      if (enumerator_6456.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6456_IDX.increment () ;
      enumerator_6456.gotoNextObject () ;
    }
  }
  result.addString ("\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = nullptr ;\n    macroMyNew (p, cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_6765_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6765 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6765.hasCurrentObject ()) {
      result.addString ("inOperand") ;
      result.addString (index_6765_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 162)).stringValue ()) ;
      if (enumerator_6765.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_6765_IDX.increment () ;
      enumerator_6765.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_THERE)) ;\n    capSortedListElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7206_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7206 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7206.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_7206.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 177)).stringValue ()) ;
      result.addString (" inOperand") ;
      result.addString (index_7206_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 177)).stringValue ()) ;
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_7206_IDX.increment () ;
      enumerator_7206.gotoNextObject () ;
    }
  }
  result.addString ("Compiler * /* inCompiler */\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = nullptr ;\n    macroMyNew (p, cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_7529_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7529 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7529.hasCurrentObject ()) {
      result.addString ("inOperand") ;
      result.addString (index_7529_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 185)).stringValue ()) ;
      if (enumerator_7529.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_7529_IDX.increment () ;
      enumerator_7529.gotoNextObject () ;
    }
  }
  result.addString (" COMMA_THERE)) ;\n    capSortedListElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::plusAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" inOperand,\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * /* inCompiler */\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid ()) {\n    appendSortedList (inOperand) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_popSmallest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8379_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8379 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8379.hasCurrentObject ()) {
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_8379.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 210)).stringValue ()) ;
      result.addString (" & outOperand") ;
      result.addString (index_8379_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 210)).stringValue ()) ;
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8379_IDX.increment () ;
      enumerator_8379.gotoNextObject () ;
    }
  }
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_8870_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8870 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8870.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_8870_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 220)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_8870_IDX.increment () ;
      enumerator_8870.gotoNextObject () ;
    }
  }
  result.addString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_9100_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9100 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9100.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_9100_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 226)).stringValue ()) ;
      result.addString (" = p->mObject.mProperty_") ;
      result.addString (enumerator_9100.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 226)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_9100_IDX.increment () ;
      enumerator_9100.gotoNextObject () ;
    }
  }
  result.addString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::setter_popGreatest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9474_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9474 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9474.hasCurrentObject ()) {
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_9474.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 235)).stringValue ()) ;
      result.addString (" & outOperand") ;
      result.addString (index_9474_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 235)).stringValue ()) ;
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9474_IDX.increment () ;
      enumerator_9474.gotoNextObject () ;
    }
  }
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_9965_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9965 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9965.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_9965_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 245)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_9965_IDX.increment () ;
      enumerator_9965.gotoNextObject () ;
    }
  }
  result.addString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_10195_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10195 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10195.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_10195_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 251)).stringValue ()) ;
      result.addString (" = p->mObject.mProperty_") ;
      result.addString (enumerator_10195.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 251)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_10195_IDX.increment () ;
      enumerator_10195.gotoNextObject () ;
    }
  }
  result.addString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::method_smallest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10566_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10566 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10566.hasCurrentObject ()) {
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_10566.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 260)).stringValue ()) ;
      result.addString (" & outOperand") ;
      result.addString (index_10566_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 260)).stringValue ()) ;
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10566_IDX.increment () ;
      enumerator_10566.gotoNextObject () ;
    }
  }
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_11060_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11060 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11060.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_11060_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 270)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_11060_IDX.increment () ;
      enumerator_11060.gotoNextObject () ;
    }
  }
  result.addString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_11290_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11290 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11290.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_11290_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 276)).stringValue ()) ;
      result.addString (" = p->mObject.mProperty_") ;
      result.addString (enumerator_11290.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 276)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_11290_IDX.increment () ;
      enumerator_11290.gotoNextObject () ;
    }
  }
  result.addString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::method_greatest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11641_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11641 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11641.hasCurrentObject ()) {
      result.addString ("GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_11641.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 285)).stringValue ()) ;
      result.addString (" & outOperand") ;
      result.addString (index_11641_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 285)).stringValue ()) ;
      result.addString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11641_IDX.increment () ;
      enumerator_11641.gotoNextObject () ;
    }
  }
  result.addString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_12135_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12135 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12135.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_12135_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 295)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_12135_IDX.increment () ;
      enumerator_12135.gotoNextObject () ;
    }
  }
  result.addString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n") ;
  GALGAS_uint index_12365_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12365 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12365.hasCurrentObject ()) {
      result.addString ("    outOperand") ;
      result.addString (index_12365_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue ()) ;
      result.addString (" = p->mObject.mProperty_") ;
      result.addString (enumerator_12365.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue ()) ;
      result.addString (" ;\n") ;
      index_12365_IDX.increment () ;
      enumerator_12365.gotoNextObject () ;
    }
  }
  result.addString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inEnumeratedObject,\n                   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const typeEnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_2D_element cEnumerator_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::current (LOCATION_ARGS) const {\n  const cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" * p = (const cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cSortedListElement_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n  return p->mObject ;\n}\n\n") ;
  GALGAS_uint index_13398_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13398 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13398.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_13398.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 324)).stringValue ()) ;
      result.addString (" cEnumerator_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::current_") ;
      result.addString (enumerator_13398.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 324)).stringValue ()) ;
      result.addString (" (LOCATION_ARGS) const {\n  const cSortedListElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" * p = (const cSortedListElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cSortedListElement_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (") ;\n  return p->mObject.mProperty_") ;
      result.addString (enumerator_13398.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 327)).stringValue ()) ;
      result.addString (" ;\n}\n\n") ;
      index_13398_IDX.increment () ;
      enumerator_13398.gotoNextObject () ;
    }
  }
  result.addString ("\n\n") ;
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
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_15795 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 409)) ;
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, var_selfTypedefinition_15795.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 412)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 410))) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_15795.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 417)), var_selfTypedefinition_15795.readProperty_mIsConcrete (), var_selfTypedefinition_15795.readProperty_mConstructorMap (), var_selfTypedefinition_15795.readProperty_mGetterMap (), var_selfTypedefinition_15795.readProperty_mSetterMap (), var_selfTypedefinition_15795.readProperty_mInstanceMethodMap (), var_selfTypedefinition_15795.readProperty_mClassMethodMap (), var_selfTypedefinition_15795.readProperty_mOptionalMethodMap (), var_selfTypedefinition_15795.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_15795.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_15795.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_15795.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 415))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 415)) ;
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
  cEnumerator_typedPropertyList enumerator_17005 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_17005.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17005.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 439)) ;
    enumerator_17005.gotoNextObject () ;
  }
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 441)) ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 442)) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  const GALGAS_sortedListTypeForGeneration temp_4 = this ;
  const GALGAS_sortedListTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 444)), temp_4.readProperty_mTypedAttributeList (), temp_5.readProperty_mSortDescriptorList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 443))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForStruct'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForStruct (Compiler *
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 65)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-struct.galgas", 66)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-struct.galgas", 67)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-struct.galgas", 68)) ;
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

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForStruct (nullptr,
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
                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structDeclarationAST temp_0 = this ;
  const GALGAS_structDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3250 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 87)), temp_1.readProperty_mStructTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 87)) ;
  {
  const GALGAS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3250, temp_2, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 88)) ;
  }
  const GALGAS_structDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_3416 (temp_3.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_3416.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey_3463 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3416.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 90)), enumerator_3416.current_mPropertyTypeName (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 90)) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3250, var_propertyKey_3463 COMMA_SOURCE_FILE ("type-struct.galgas", 91)) ;
    }
    enumerator_3416.gotoNextObject () ;
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
  result_result = GALGAS_string ("struct @").add_operation (temp_0.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 98)) ;
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
  GALGAS_optionalMethodMap var_optionalMethodMap_4360 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 110)) ;
  GALGAS_unifiedTypeMapEntry var_structTypeIndex_4482 ;
  {
  const GALGAS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mStructTypeName (), var_structTypeIndex_4482, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 112)) ;
  }
  GALGAS_propertyMap var_propertyMap_4557 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 114)) ;
  GALGAS_constructorMap var_constructorMap_4598 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 115)) ;
  GALGAS_functionSignature var_constructorPropertyTypeList_4645 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 116)) ;
  GALGAS_typedPropertyList var_typedPropertyList_4705 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 117)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_4761 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 118)) ;
  const GALGAS_structDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4879 (temp_1.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_4879.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_propertyTypeEntry_4982 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_4879.current_mPropertyTypeName (HERE), var_propertyTypeEntry_4982, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 120)) ;
    }
    GALGAS_string temp_2 ;
    const enumGalgasBool test_3 = enumerator_4879.current_selector (HERE).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = enumerator_4879.current_mPropertyName (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_lstring var_selector_5020 = temp_2.getter_nowhere (SOURCE_FILE ("type-struct.galgas", 121)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = enumerator_4879.current_mInitialization (HERE).getter_isNone (SOURCE_FILE ("type-struct.galgas", 122)).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_constructorPropertyTypeList_4645.addAssign_operation (var_selector_5020, var_propertyTypeEntry_4982, enumerator_4879.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-struct.galgas", 123)) ;
      }
    }
    var_typesToIncludeInHeaderCompilation_4761.addAssign_operation (var_propertyTypeEntry_4982  COMMA_SOURCE_FILE ("type-struct.galgas", 125)) ;
    var_typedPropertyList_4705.addAssign_operation (var_propertyTypeEntry_4982, enumerator_4879.current_mPropertyName (HERE), enumerator_4879.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 126)), enumerator_4879.current_selector (HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 126)) ;
    {
    var_propertyMap_4557.setter_insertKey (enumerator_4879.current_mPropertyName (HERE), extensionGetter_accessControl (enumerator_4879.current_mAccessControl (HERE), var_structTypeIndex_4482, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 129)), enumerator_4879.current_isConstant (HERE), var_propertyTypeEntry_4982, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 127)) ;
    }
    enumerator_4879.gotoNextObject () ;
  }
  {
  var_constructorMap_4598.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 135)), var_constructorPropertyTypeList_4645, GALGAS_bool (true), var_structTypeIndex_4482, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 134)) ;
  }
  GALGAS_getterMap var_getterMap_5817 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_5817, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 141)) ;
  }
  GALGAS_setterMap var_setterMap_5862 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 143)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5928 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 145)) ;
  {
  const GALGAS_structDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_mStructTypeName (), GALGAS_bool (false), var_getterMap_5817, var_setterMap_5862, var_instanceMethodMap_5928, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 147)) ;
  }
  GALGAS_unifiedTypeMapEntry var_enumeratedType_6389 ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_structDeclarationAST temp_7 = this ;
    test_6 = GALGAS_bool (kIsEqual, temp_7.readProperty_mEnumeratedElementTypeName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_enumeratedType_6389 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-struct.galgas", 163)) ;
    }
  }
  if (kBoolFalse == test_6) {
    {
    const GALGAS_structDeclarationAST temp_8 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_8.readProperty_mEnumeratedElementTypeName (), var_enumeratedType_6389, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 165)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_6687 = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_6751 (var_typedPropertyList_4705, kENUMERATION_UP) ;
  bool bool_9 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_6687.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_6751.hasCurrentObject () && bool_9) {
    while (enumerator_6751.hasCurrentObject () && bool_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsEqual, extensionGetter_definition (enumerator_6751.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 173)).readProperty_defaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).operator_or (extensionGetter_definition (enumerator_6751.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 173)).readProperty_mIsConcrete ().operator_not (SOURCE_FILE ("type-struct.galgas", 173)) COMMA_SOURCE_FILE ("type-struct.galgas", 173)).boolEnum () ;
        if (kBoolTrue == test_10) {
          var_defaultConstructorName_6687 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_6751.gotoNextObject () ;
      if (enumerator_6751.hasCurrentObject ()) {
        bool_9 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_6687.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_structDeclarationAST temp_11 = this ;
  const GALGAS_structDeclarationAST temp_12 = this ;
  const GALGAS_structDeclarationAST temp_13 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_7029 = GALGAS_unifiedTypeDefinition::constructor_new (temp_11.readProperty_mStructTypeName (), temp_12.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-struct.galgas", 182)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("type-struct.galgas", 183)), GALGAS_bool (false), var_typedPropertyList_4705, var_propertyMap_4557, var_typedPropertyList_4705, var_constructorMap_4598, var_getterMap_5817, var_setterMap_5862, var_instanceMethodMap_5928, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 192)), var_optionalMethodMap_4360, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 194)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-struct.galgas", 195)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-struct.galgas", 195)) COMMA_SOURCE_FILE ("type-struct.galgas", 195)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 196)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 197)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 198)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 199)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 200)), GALGAS_bool (false), var_enumeratedType_6389, var_defaultConstructorName_6687, GALGAS_string ("struct-").add_operation (temp_13.readProperty_mStructTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-struct.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 204)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-struct.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 178)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7029.readProperty_mTypeName (), var_typeDefinition_7029, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 207)) ;
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
  GALGAS_lstring var_structNameForUsefulness_8624 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mStructTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 222)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_8624, var_structNameForUsefulness_8624, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 223)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_structDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mStructurePropertyList ().getter_count (SOURCE_FILE ("type-struct.galgas", 225)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructTypeName ().readProperty_location (), GALGAS_string ("a structure cannot be empty: it must have at least one property"), fixItArray4  COMMA_SOURCE_FILE ("type-struct.galgas", 226)) ;
    }
  }
  GALGAS_typedPropertyList var_typedPropertyList_8989 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 228)) ;
  GALGAS_typedPropertyList var_constructorArgumentList_9039 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 229)) ;
  GALGAS_propertyIndexMap var_propertyMap_9094 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 230)) ;
  const GALGAS_structDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_9176 (temp_5.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_9176.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_9236 = function_typeNameForUsefulEntitiesGraph (enumerator_9176.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 232)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_8624, var_propertyTypeNameForUsefulness_9236 COMMA_SOURCE_FILE ("type-struct.galgas", 233)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_9425 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_9176.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 234)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 235)).getter_hasKey (enumerator_9176.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-struct.galgas", 235)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_m_9560 = GALGAS_string ("an property cannot be named:") ;
        cEnumerator_stringset enumerator_9636 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 237)), kENUMERATION_UP) ;
        while (enumerator_9636.hasCurrentObject ()) {
          var_m_9560.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_9636.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 238)) ;
          enumerator_9636.gotoNextObject () ;
        }
        var_m_9560.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 240)) ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_9176.current_mPropertyName (HERE).readProperty_location (), var_m_9560, fixItArray7  COMMA_SOURCE_FILE ("type-struct.galgas", 241)) ;
      }
    }
    {
    var_propertyMap_9094.setter_insertKey (enumerator_9176.current_mPropertyName (HERE), var_t_9425, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 243)) ;
    }
    switch (enumerator_9176.current_mInitialization (HERE).enumValue ()) {
    case GALGAS_propertyInCollectionInitializationAST::kNotBuilt:
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_none:
      {
        var_constructorArgumentList_9039.addAssign_operation (var_t_9425, enumerator_9176.current_mPropertyName (HERE), enumerator_9176.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 249)), enumerator_9176.current_selector (HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 246)) ;
      }
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_some:
      {
      }
      break ;
    }
    var_typedPropertyList_8989.addAssign_operation (var_t_9425, enumerator_9176.current_mPropertyName (HERE), enumerator_9176.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 256)), enumerator_9176.current_selector (HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 253)) ;
    enumerator_9176.gotoNextObject () ;
  }
  GALGAS_string var_initializationCode_10220 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_10252 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 261)) ;
  GALGAS_uint var_temporaryVariableIndex_10295 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_stringset temp_8 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 263)) ;
  temp_8.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 263))  COMMA_SOURCE_FILE ("type-struct.galgas", 263)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_10330 = temp_8 ;
  GALGAS_usefulEntitiesGraph var_usefulEntitiesGraph_10419 = GALGAS_usefulEntitiesGraph::constructor_emptyGraph (SOURCE_FILE ("type-struct.galgas", 264)) ;
  const GALGAS_structDeclarationAST temp_9 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10497 (temp_9.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_10497.hasCurrentObject ()) {
    switch (enumerator_10497.current_mInitialization (HERE).enumValue ()) {
    case GALGAS_propertyInCollectionInitializationAST::kNotBuilt:
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_none:
      {
      }
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_some:
      {
        const cEnumAssociatedValues_propertyInCollectionInitializationAST_some * extractPtr_11854 = (const cEnumAssociatedValues_propertyInCollectionInitializationAST_some *) (enumerator_10497.current_mInitialization (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_10609_expressionAST = extractPtr_11854->mAssociatedValue0 ;
        GALGAS_localVarManager var_variableMap_10638 = GALGAS_localVarManager::constructor_new (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 269)) ;
        GALGAS_analysisContext var_analysisContext_10705 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("type-struct.galgas", 274)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 270)) ;
        GALGAS_unifiedTypeMapEntry var_propertyType_10915 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_10497.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 278)) ;
        GALGAS_semanticExpressionForGeneration var_expression_11235 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_10609_expressionAST.ptr (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-struct.galgas", 280)), var_usefulEntitiesGraph_10419, var_propertyType_10915, var_analysisContext_10705, ioArgument_ioTypeMap, var_variableMap_10638, var_expression_11235, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 279)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_propertyType_10915, var_expression_11235.readProperty_mResultType (), enumerator_10497.current_mPropertyName (HERE).readProperty_location (), var_expression_11235, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 289)) ;
        }
        GALGAS_string var_sourceVar_11661 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) var_expression_11235.ptr (), var_initializationCode_10220, var_inclusionSet_10252, var_temporaryVariableIndex_10295, var_unusedVariableCppNameSet_10330, var_sourceVar_11661, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 295)) ;
        var_initializationCode_10220.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (var_propertyType_10915, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 302)) ;
        var_initializationCode_10220.plusAssign_operation(GALGAS_string (" in_").add_operation (enumerator_10497.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 303)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 303)).add_operation (var_sourceVar_11661, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 303)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 303)) ;
      }
      break ;
    }
    enumerator_10497.gotoNextObject () ;
  }
  GALGAS_bool var_constructorNeedsCompilerVar_11897 = var_unusedVariableCppNameSet_10330.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 308)) COMMA_SOURCE_FILE ("type-struct.galgas", 308)).operator_not (SOURCE_FILE ("type-struct.galgas", 308)) ;
  const GALGAS_structDeclarationAST temp_10 = this ;
  const GALGAS_structDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (temp_10.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 310)), GALGAS_structTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_11.readProperty_mStructTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 312)), var_typedPropertyList_8989, var_constructorArgumentList_9039, var_initializationCode_10220, var_constructorNeedsCompilerVar_11897  COMMA_SOURCE_FILE ("type-struct.galgas", 311))  COMMA_SOURCE_FILE ("type-struct.galgas", 309)) ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public AC_GALGAS_root {\n//--------------------------------- Properties\n") ;
  GALGAS_uint index_445_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_445 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_445.hasCurrentObject ()) {
      result.addString ("  public: GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_445.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue ()) ;
      result.addString (" mProperty_") ;
      result.addString (enumerator_445.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue ()) ;
      result.addString (" ;\n  public: inline GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_445.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue ()) ;
      result.addString (" readProperty_") ;
      result.addString (enumerator_445.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue ()) ;
      result.addString (" (void) const {\n    return mProperty_") ;
      result.addString (enumerator_445.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 13)).stringValue ()) ;
      result.addString (" ;\n  }\n\n") ;
      index_445_.increment () ;
      enumerator_445.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//--------------------------------- Property setters\n") ;
  GALGAS_uint index_1200_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1200 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1200.hasCurrentObject ()) {
      result.addString ("  public: inline void setter_set") ;
      result.addString (enumerator_1200.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 26)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 26)).stringValue ()) ;
      result.addString (" (const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_1200.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 26)).stringValue ()) ;
      result.addString (" & inValue COMMA_UNUSED_LOCATION_ARGS) {\n    mProperty_") ;
      result.addString (enumerator_1200.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 27)).stringValue ()) ;
      result.addString (" = inValue ;\n  }\n\n") ;
      index_1200_.increment () ;
      enumerator_1200.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------- Virtual destructor (in debug mode)\n  public: virtual ~ GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1803_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1803 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1803.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_1803.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 35)).stringValue ()) ;
      result.addString (" & in_") ;
      result.addString (enumerator_1803.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 35)).stringValue ()) ;
      if (enumerator_1803.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1803_.increment () ;
      enumerator_1803.gotoNextObject () ;
    }
  }
  result.addString (") ;\n\n") ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) :\n") ;
  GALGAS_uint index_248_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_248 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_248.hasCurrentObject ()) {
      result.addString ("mProperty_") ;
      result.addString (enumerator_248.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 6)).stringValue ()) ;
      result.addString (" ()") ;
      if (enumerator_248.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_248_.increment () ;
      enumerator_248.gotoNextObject () ;
    }
  }
  result.addString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::~ GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_751_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_751 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_751.hasCurrentObject ()) {
      result.addString ("const GALGAS_") ;
      result.addString (extensionGetter_identifierRepresentation (enumerator_751.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue ()) ;
      result.addString (" & inOperand") ;
      result.addString (index_751_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue ()) ;
      if (enumerator_751.hasNextObject ()) {
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_751_IDX.increment () ;
      enumerator_751.gotoNextObject () ;
    }
  }
  result.addString (") :\n") ;
  GALGAS_uint index_958_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_958 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_958.hasCurrentObject ()) {
      result.addString ("mProperty_") ;
      result.addString (enumerator_958.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue ()) ;
      result.addString (" (inOperand") ;
      result.addString (index_958_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue ()) ;
      result.addString (")") ;
      if (enumerator_958.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_958_IDX.increment () ;
      enumerator_958.gotoNextObject () ;
    }
  }
  result.addString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_new (") ;
  columnMarker = result.currentColumn () ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 33)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    const enumGalgasBool test_1 = in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR.boolEnum () ;
    switch (test_1) {
    case kBoolTrue : {
      result.addString ("Compiler * inCompiler\n") ;
      } break ;
    case kBoolFalse : {
      result.addString ("Compiler * /* inCompiler */\n") ;
      } break ;
    default :
      break ;
    }
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_UNUSED_LOCATION_ARGS) {\n") ;
    } break ;
  case kBoolFalse : {
    GALGAS_uint index_1519_ (0) ;
    if (in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1519 (in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1519.hasCurrentObject ()) {
        result.addString ("const GALGAS_") ;
        result.addString (extensionGetter_identifierRepresentation (enumerator_1519.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 42)).stringValue ()) ;
        result.addString (" & in_") ;
        result.addString (enumerator_1519.current_mPropertyName (HERE).readProperty_string ().stringValue ()) ;
        result.addString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_1519_.increment () ;
        enumerator_1519.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_2 = in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR.boolEnum () ;
    switch (test_2) {
    case kBoolTrue : {
      result.addString ("Compiler * inCompiler\n") ;
      } break ;
    case kBoolFalse : {
      result.addString ("Compiler * /* inCompiler */\n") ;
      } break ;
    default :
      break ;
    }
    result.appendSpacesUntilColumn (columnMarker) ;
    result.addString ("COMMA_UNUSED_LOCATION_ARGS) {\n") ;
    } break ;
  default :
    break ;
  }
  result.addString (in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue ()) ;
  result.addString ("  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  if (") ;
  GALGAS_uint index_1896_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1896 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1896.hasCurrentObject ()) {
      result.addString ("in_") ;
      result.addString (enumerator_1896.current_mPropertyName (HERE).readProperty_string ().stringValue ()) ;
      result.addString (".isValid ()") ;
      if (enumerator_1896.hasNextObject ()) {
        result.addString (" && ") ;
      }
      index_1896_.increment () ;
      enumerator_1896.gotoNextObject () ;
    }
  }
  result.addString (") {\n    result = GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  GALGAS_uint index_2068_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2068 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2068.hasCurrentObject ()) {
      result.addString ("in_") ;
      result.addString (enumerator_2068.current_mPropertyName (HERE).readProperty_string ().stringValue ()) ;
      if (enumerator_2068.hasNextObject ()) {
        result.addString (", ") ;
      }
      index_2068_.increment () ;
      enumerator_2068.gotoNextObject () ;
    }
  }
  result.addString (") ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::objectCompare (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand) const {\n   typeComparisonResult result = kOperandEqual ;\n") ;
  GALGAS_uint index_2496_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2496 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2496.hasCurrentObject ()) {
      result.addString ("  if (result == kOperandEqual) {\n    result = mProperty_") ;
      result.addString (enumerator_2496.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 76)).stringValue ()) ;
      result.addString (".objectCompare (inOperand.mProperty_") ;
      result.addString (enumerator_2496.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 76)).stringValue ()) ;
      result.addString (") ;\n  }\n") ;
      index_2496_.increment () ;
      enumerator_2496.gotoNextObject () ;
    }
  }
  result.addString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::isValid (void) const {\n  return ") ;
  GALGAS_uint index_2987_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2987 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2987.hasCurrentObject ()) {
      result.addString ("mProperty_") ;
      result.addString (enumerator_2987.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 87)).stringValue ()) ;
      result.addString (".isValid ()") ;
      if (enumerator_2987.hasNextObject ()) {
        result.addString (" && ") ;
      }
      index_2987_.increment () ;
      enumerator_2987.gotoNextObject () ;
    }
  }
  result.addString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::drop (void) {\n") ;
  GALGAS_uint index_3328_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3328 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3328.hasCurrentObject ()) {
      result.addString ("  mProperty_") ;
      result.addString (enumerator_3328.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 97)).stringValue ()) ;
      result.addString (".drop () ;\n") ;
      index_3328_.increment () ;
      enumerator_3328.gotoNextObject () ;
    }
  }
  result.addString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const int32_t inIndentation) const {\n  ioString.addString (\"<struct @") ;
  result.addString (in_TYPE_5F_NAME.stringValue ()) ;
  result.addString (":\") ;\n  if (! isValid ()) {\n    ioString.addString (\" not built\") ;\n  }else{\n") ;
  GALGAS_uint index_3861_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3861 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3861.hasCurrentObject ()) {
      result.addString ("    mProperty_") ;
      result.addString (enumerator_3861.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 111)).stringValue ()) ;
      result.addString (".description (ioString, inIndentation+1) ;\n") ;
      if (enumerator_3861.hasNextObject ()) {
        result.addString ("    ioString.addString (\", \") ;\n") ;
      }
      index_3861_IDX.increment () ;
      enumerator_3861.gotoNextObject () ;
    }
  }
  result.addString ("  }\n  ioString.addString (\">\") ;\n}\n\n") ;
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
  cEnumerator_typedPropertyList enumerator_13940 (temp_0.readProperty_mTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_13940.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_13940.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 361)) ;
    enumerator_13940.gotoNextObject () ;
  }
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_14035 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 363)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (inCompiler, var_selfTypedefinition_14035.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 366)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList () COMMA_SOURCE_FILE ("type-struct.galgas", 364))) ;
  const GALGAS_structTypeForGeneration temp_5 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_14035.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 372)), var_selfTypedefinition_14035.readProperty_mIsConcrete (), var_selfTypedefinition_14035.readProperty_mConstructorMap (), var_selfTypedefinition_14035.readProperty_mGetterMap (), var_selfTypedefinition_14035.readProperty_mSetterMap (), var_selfTypedefinition_14035.readProperty_mInstanceMethodMap (), var_selfTypedefinition_14035.readProperty_mClassMethodMap (), var_selfTypedefinition_14035.readProperty_mOptionalMethodMap (), var_selfTypedefinition_14035.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_14035.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_14035.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_14035.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-struct.galgas", 370))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 370)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 394)) ;
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_15353 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 395)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  const GALGAS_structTypeForGeneration temp_5 = this ;
  const GALGAS_structTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (inCompiler, var_selfTypedefinition_15353.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 398)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), temp_6.readProperty_mConstructorNeedsCompilerVar () COMMA_SOURCE_FILE ("type-struct.galgas", 396))) ;
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
  result_result = GALGAS_string ("typealias @").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 141)) ;
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
                                                                   GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                   GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                   GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                   GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typealiasDeclarationAST temp_0 = this ;
  const GALGAS_typealiasDeclarationAST temp_1 = this ;
  GALGAS_lstring var_aliasKey_6551 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 157)), temp_1.readProperty_mAliasTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 157)) ;
  {
  const GALGAS_typealiasDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_aliasKey_6551, temp_2, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 158)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_3 = this ;
  const GALGAS_typealiasDeclarationAST temp_4 = this ;
  GALGAS_lstring var_referenceKey_6704 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mDefinedTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 159)), temp_4.readProperty_mDefinedTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 159)) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_aliasKey_6551, var_referenceKey_6704 COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 160)) ;
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
  GALGAS_unifiedTypeMapEntry var_definedTypeEntry_7596 ;
  {
  const GALGAS_typealiasDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mDefinedTypeName ().readProperty_string (), var_definedTypeEntry_7596, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 171)) ;
  }
  switch (var_definedTypeEntry_7596.enumValue ()) {
  case GALGAS_unifiedTypeMapEntry::kNotBuilt:
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_null:
    {
      const GALGAS_typealiasDeclarationAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mDefinedTypeName ().readProperty_location (), GALGAS_string ("Undefined type"), fixItArray2  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 174)) ;
    }
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_element:
    {
      const cEnumAssociatedValues_unifiedTypeMapEntry_element * extractPtr_9386 = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) (var_definedTypeEntry_7596.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapElementClass_2D_weak extractedValue_7762_weakElement = extractPtr_9386->mAssociatedValue0 ;
      switch (extractedValue_7762_weakElement.bang_unifiedTypeMapElementClass_2D_weak (inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 176)).readProperty_mDefinition ().enumValue ()) {
      case GALGAS_typeDefinition::kNotBuilt:
        break ;
      case GALGAS_typeDefinition::kEnum_unsolved:
        {
          const GALGAS_typealiasDeclarationAST temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mDefinedTypeName ().readProperty_location (), GALGAS_string ("Undefined type"), fixItArray4  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 178)) ;
        }
        break ;
      case GALGAS_typeDefinition::kEnum_solved:
        {
          const cEnumAssociatedValues_typeDefinition_solved * extractPtr_9378 = (const cEnumAssociatedValues_typeDefinition_solved *) (extractedValue_7762_weakElement.bang_unifiedTypeMapElementClass_2D_weak (inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 176)).readProperty_mDefinition ().unsafePointer ()) ;
          const GALGAS_unifiedTypeDefinition extractedValue_7938_def = extractPtr_9378->mAssociatedValue0 ;
          const GALGAS_typealiasDeclarationAST temp_5 = this ;
          GALGAS_unifiedTypeDefinition var_definition_7957 = GALGAS_unifiedTypeDefinition::constructor_new (extractedValue_7938_def.readProperty_mTypeName (), GALGAS_bool (false), extractedValue_7938_def.readProperty_mIsConcrete (), extractedValue_7938_def.readProperty_mSuperType (), extractedValue_7938_def.readProperty_mTypeKindEnum (), extractedValue_7938_def.readProperty_mSupportCollectionValue (), extractedValue_7938_def.readProperty_mAllTypedPropertyList (), extractedValue_7938_def.readProperty_mPropertyMap (), extractedValue_7938_def.readProperty_mCurrentTypedPropertyList (), extractedValue_7938_def.readProperty_mConstructorMap (), extractedValue_7938_def.readProperty_mGetterMap (), extractedValue_7938_def.readProperty_mSetterMap (), extractedValue_7938_def.readProperty_mInstanceMethodMap (), extractedValue_7938_def.readProperty_mClassMethodMap (), extractedValue_7938_def.readProperty_mOptionalMethodMap (), extractedValue_7938_def.readProperty_mEnumerationDescriptor (), extractedValue_7938_def.readProperty_mHandledOperatorFlags (), extractedValue_7938_def.readProperty_mAddAssignOperatorArguments (), extractedValue_7938_def.readProperty_mEnumConstantMap (), extractedValue_7938_def.readProperty_mEnumConstantList (), extractedValue_7938_def.readProperty_mMapSearchMethodList (), extractedValue_7938_def.readProperty_mMapEntrySearchConstructorList (), extractedValue_7938_def.readProperty_mGenerateHeaderInSeparateFile (), extractedValue_7938_def.readProperty_mTypeForEnumeratedElement (), extractedValue_7938_def.readProperty_defaultConstructorName (), GALGAS_string ("typealias-").add_operation (temp_5.readProperty_mAliasTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 206)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 180)) ;
          {
          const GALGAS_typealiasDeclarationAST temp_6 = this ;
          extensionSetter_insertType (ioArgument_ioTypeMap, temp_6.readProperty_mAliasTypeName (), var_definition_7957, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 209)) ;
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
  GALGAS_lstring var_nameForUsefulness_10145 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mAliasTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 224)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10145, var_nameForUsefulness_10145, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 225)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_1 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_10303 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mDefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 226)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10145, var_elementTypeNameForUsefulness_10303 COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 227)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_t_10542 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_2.readProperty_mDefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 229)) ;
  const GALGAS_typealiasDeclarationAST temp_3 = this ;
  const GALGAS_typealiasDeclarationAST temp_4 = this ;
  const GALGAS_typealiasDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("typealias ").add_operation (temp_3.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 231)), GALGAS_aliasTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_4.readProperty_mAliasTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 232)), temp_5.readProperty_mAliasTypeName ().readProperty_string (), var_t_10542  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 232))  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 230)) ;
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
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_mReferencedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 251)) ;
  const GALGAS_aliasTypeForGeneration temp_1 = this ;
  const GALGAS_aliasTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_typeAliasTypeHeader_31_ (inCompiler, temp_1.readProperty_mAliasTypeName ().getter_identifierRepresentation (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 253)), extensionGetter_identifierRepresentation (temp_2.readProperty_mReferencedType (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 254)) COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 252))) ;
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
  result_result = GALGAS_string ("abstract extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 133)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 133)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 133)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                      GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  const GALGAS_abstractExtensionGetterAST temp_1 = this ;
  const GALGAS_abstractExtensionGetterAST temp_2 = this ;
  GALGAS_lstring var_key_6199 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 147)) ;
  {
  const GALGAS_abstractExtensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6199, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 151)) ;
  }
  {
  const GALGAS_abstractExtensionGetterAST temp_4 = this ;
  const GALGAS_abstractExtensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6199, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 152)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 152)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 152)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 154)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 154)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-getter.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 155)) ;
      }
    }
  }
  const GALGAS_abstractExtensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_6716 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 160)) ;
  if (nullptr != objectArray_6716) {
    macroValidSharedObject (objectArray_6716, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionGetterAST temp_10 = this ;
    const GALGAS_abstractExtensionGetterAST temp_11 = this ;
    const GALGAS_abstractExtensionGetterAST temp_12 = this ;
    objectArray_6716->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionGetterName (), temp_11.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_12.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("extension-abstract-getter.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 161)) ;
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
  GALGAS_unifiedTypeMapEntry var_selfType_8641 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 197)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8641, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 199)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-abstract-getter.galgas", 199)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 199)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionGetterAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an extension getter: '@").add_operation (extensionGetter_definition (var_selfType_8641, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 200)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8641, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 202)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionGetterAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_8641, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 204)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 204)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 204)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 203)) ;
      }
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9253 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-getter.galgas", 207)) ;
  const GALGAS_abstractExtensionGetterAST temp_7 = this ;
  cEnumerator_formalInputParameterListAST enumerator_9360 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), kENUMERATION_UP) ;
  while (enumerator_9360.hasCurrentObject ()) {
    var_formalParameterListForGeneration_9253.addAssign_operation (enumerator_9360.current_mFormalSelector (HERE), extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_9360.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 211)), enumerator_9360.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_9360.current_mFormalArgumentName (HERE), enumerator_9360.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 209)) ;
    enumerator_9360.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterAST temp_8 = this ;
  const GALGAS_abstractExtensionGetterAST temp_9 = this ;
  const GALGAS_abstractExtensionGetterAST temp_10 = this ;
  const GALGAS_abstractExtensionGetterAST temp_11 = this ;
  const GALGAS_abstractExtensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)), GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 221)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 221)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 221)), var_selfType_8641, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_searchKey (ioArgument_ioTypeMap, temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 224)), var_formalParameterListForGeneration_9253  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 219))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 217)) ;
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
  ioArgument_ioAbstractExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 247)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 264)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 274)).readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 273))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 289)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 288)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 289)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 290))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 288)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 291)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 292)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_4 = this ;
  cEnumerator_formalInputParameterListForGeneration enumerator_13747 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_13747.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13747.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 294)) ;
    enumerator_13747.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_6 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_7 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 297)).readProperty_mTypeName ().readProperty_string (), temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_8.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 296))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                      GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  const GALGAS_abstractExtensionMethodAST temp_1 = this ;
  const GALGAS_abstractExtensionMethodAST temp_2 = this ;
  GALGAS_lstring var_key_4936 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)), temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)) ;
  {
  const GALGAS_abstractExtensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4936, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 109)) ;
  }
  {
  const GALGAS_abstractExtensionMethodAST temp_4 = this ;
  const GALGAS_abstractExtensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4936, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 110)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 110)) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 110)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 112)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 112)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-method.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 113)) ;
      }
    }
  }
  const GALGAS_abstractExtensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_5453 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 118)) ;
  if (nullptr != objectArray_5453) {
    macroValidSharedObject (objectArray_5453, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionMethodAST temp_10 = this ;
    const GALGAS_abstractExtensionMethodAST temp_11 = this ;
    objectArray_5453->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionMethodName (), temp_11.readProperty_mAbstractExtensionMethodFormalParameterList (), GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("extension-abstract-method.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 119)) ;
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
  result_result = GALGAS_string ("abstract extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 132)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 132)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 132)) ;
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
  GALGAS_unifiedTypeMapEntry var_selfType_7918 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 164)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7918, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 166)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-abstract-method.galgas", 166)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 166)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionMethodAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_7918, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 167)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 167)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 167)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 167)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7918, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 168)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionMethodAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_7918, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 169)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 169)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 169)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 169)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8475 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-method.galgas", 172)) ;
  const GALGAS_abstractExtensionMethodAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_8641 (temp_7.readProperty_mAbstractExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_8641.hasCurrentObject ()) {
    var_formalParameterListForGeneration_8475.addAssign_operation (enumerator_8641.current_mFormalSelector (HERE), enumerator_8641.current_mFormalArgumentPassingMode (HERE), extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_8641.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 177)), enumerator_8641.current_mFormalArgumentName (HERE), enumerator_8641.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 174)) ;
    enumerator_8641.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodAST temp_8 = this ;
  const GALGAS_abstractExtensionMethodAST temp_9 = this ;
  const GALGAS_abstractExtensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (temp_8.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 183)), GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_7918, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)).add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)), var_selfType_7918, temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_8475  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 184))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 182)) ;
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
  ioArgument_ioAbstractExtensionMethodListMapAST.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 210)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 231)).readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), temp_2.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 230))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 240)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 249)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 249)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 249)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 249))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 249)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 250)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_12918 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_12918.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12918.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 252)) ;
    enumerator_12918.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, temp_4.readProperty_mReceiverType (), temp_5.readProperty_mAbstractExtensionMethodName (), temp_6.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 254))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GALGAS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  const GALGAS_abstractExtensionSetterAST temp_1 = this ;
  const GALGAS_abstractExtensionSetterAST temp_2 = this ;
  GALGAS_lstring var_key_2975 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 62)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 62)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 62)), temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 62)) ;
  {
  const GALGAS_abstractExtensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2975, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 63)) ;
  }
  {
  const GALGAS_abstractExtensionSetterAST temp_4 = this ;
  const GALGAS_abstractExtensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2975, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 64)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 64)) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 64)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 66)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 66)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-setter.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 67)) ;
      }
    }
  }
  const GALGAS_abstractExtensionSetterAST temp_9 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_3480 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)) ;
  if (nullptr != objectArray_3480) {
    macroValidSharedObject (objectArray_3480, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionSetterAST temp_10 = this ;
    const GALGAS_abstractExtensionSetterAST temp_11 = this ;
    objectArray_3480->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionSetterName (), temp_11.readProperty_mAbstractExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 73)) ;
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
  result_result = GALGAS_string ("abstract extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 85)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 85)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 85)) ;
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
  GALGAS_unifiedTypeMapEntry var_selfType_5919 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 118)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_5919, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 120)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-abstract-setter.galgas", 120)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionSetterAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_5919, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_5919, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 122)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionSetterAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_5919, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6477 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-setter.galgas", 126)) ;
  const GALGAS_abstractExtensionSetterAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_6643 (temp_7.readProperty_mAbstractExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_6643.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6477.addAssign_operation (enumerator_6643.current_mFormalSelector (HERE), enumerator_6643.current_mFormalArgumentPassingMode (HERE), extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_6643.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 131)), enumerator_6643.current_mFormalArgumentName (HERE), enumerator_6643.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 128)) ;
    enumerator_6643.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterAST temp_8 = this ;
  const GALGAS_abstractExtensionSetterAST temp_9 = this ;
  const GALGAS_abstractExtensionSetterAST temp_10 = this ;
  const GALGAS_abstractExtensionSetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (temp_8.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 137)), GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 140)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 140)).add_operation (temp_10.readProperty_mAbstractExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 140)), var_selfType_5919, temp_11.readProperty_mAbstractExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_6477  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 138))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 136)) ;
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
  ioArgument_ioAbstractExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 165)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 183)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 192)).readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName (), temp_2.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 205)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 205)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 205)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 205))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 205)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 206)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_10675 (temp_3.readProperty_mAbstractExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_10675.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10675.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 208)) ;
    enumerator_10675.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 211)).readProperty_mTypeName ().readProperty_string (), temp_5.readProperty_mAbstractExtensionSetterName (), temp_6.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 210))) ;
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
  result_result = GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 164)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 164)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 164)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  const GALGAS_extensionGetterAST temp_2 = this ;
  GALGAS_lstring var_key_7692 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 177)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 177)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 177)), temp_2.readProperty_mExtensionGetterName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 177)) ;
  {
  const GALGAS_extensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7692, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 178)) ;
  }
  {
  const GALGAS_extensionGetterAST temp_4 = this ;
  const GALGAS_extensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7692, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 179)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 179)) COMMA_SOURCE_FILE ("extension-getter.galgas", 179)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-getter.galgas", 181)).operator_not (SOURCE_FILE ("extension-getter.galgas", 181)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-getter.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 182)) ;
      }
    }
  }
  const GALGAS_extensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_8181 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 187)) ;
  if (nullptr != objectArray_8181) {
    macroValidSharedObject (objectArray_8181, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_extensionGetterAST temp_10 = this ;
    const GALGAS_extensionGetterAST temp_11 = this ;
    const GALGAS_extensionGetterAST temp_12 = this ;
    objectArray_8181->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionGetterName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("extension-getter.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 188)) ;
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
  GALGAS_lstring var_nameForUsefulness_9951 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 224)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9951, var_nameForUsefulness_9951, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 225)) ;
  }
  const GALGAS_extensionGetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_10129 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 226)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_10129, var_nameForUsefulness_9951 COMMA_SOURCE_FILE ("extension-getter.galgas", 227)) ;
  }
  const GALGAS_extensionGetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_10322 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 229)) ;
  GALGAS_string var_selfObjectNameNew_10423 ;
  GALGAS_string var_selfObjectAccessorNew_10455 ;
  GALGAS_bool var_implementedAsFunctionNew_10489 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10322, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 234)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 234)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectNameNew_10423 = GALGAS_string ("this") ;
      var_selfObjectAccessorNew_10455 = GALGAS_string ("this->") ;
      var_implementedAsFunctionNew_10489 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameNew_10423 = GALGAS_string ("inObject") ;
    var_selfObjectAccessorNew_10455 = GALGAS_string ("inObject.") ;
    var_implementedAsFunctionNew_10489 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionGetterAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContextNew_10839 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_10423, GALGAS_selfAvailability::constructor_available (var_selfType_10322, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("extension-getter.galgas", 248)), var_selfObjectAccessorNew_10455, temp_5.readProperty_requiresSelfForAccessingProperty (), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 244)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_11786 ;
  GALGAS_unifiedTypeMapEntry var_returnType_11828 ;
  GALGAS_string var_returnVariableCppName_11848 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11879 ;
  {
  const GALGAS_extensionGetterAST temp_6 = this ;
  GALGAS_typedPropertyList temp_7 ;
  const enumGalgasBool test_8 = extensionGetter_definition (var_selfType_10322, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 258)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 258)).operator_or (GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_10322, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 258)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-getter.galgas", 258)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 258)).operator_or (GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_10322, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 258)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_sharedMapEntryType (SOURCE_FILE ("extension-getter.galgas", 258)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 258)).boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = extensionGetter_definition (var_selfType_10322, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 259)).readProperty_mAllTypedPropertyList () ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-getter.galgas", 260)) ;
  }
  const GALGAS_extensionGetterAST temp_9 = this ;
  const GALGAS_extensionGetterAST temp_10 = this ;
  const GALGAS_extensionGetterAST temp_11 = this ;
  const GALGAS_extensionGetterAST temp_12 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_9951, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_10839, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionGetterFormalInputParameterList (), temp_7, var_selfObjectAccessorNew_10455, temp_9.readProperty_mExtensionGetterInstructionList (), temp_10.readProperty_mExtensionGetterReturnedVariableName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_11786, var_returnType_11828, var_returnVariableCppName_11848, var_semanticInstructionListForGeneration_11879, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 252)) ;
  }
  const GALGAS_extensionGetterAST temp_13 = this ;
  const GALGAS_extensionGetterAST temp_14 = this ;
  const GALGAS_extensionGetterAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (temp_13.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 274)), GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_selfType_10322, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 277)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 277)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 277)).add_operation (temp_14.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 277)), var_selfType_10322, temp_15.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunctionNew_10489, var_returnType_11828, var_returnVariableCppName_11848, var_formalParameterListForGeneration_11786, extensionGetter_definition (var_selfType_10322, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 284)).readProperty_mAllTypedPropertyList (), var_semanticInstructionListForGeneration_11879  COMMA_SOURCE_FILE ("extension-getter.galgas", 275))  COMMA_SOURCE_FILE ("extension-getter.galgas", 273)) ;
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
  ioArgument_ioExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 306)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-getter.galgas", 329)) ;
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
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 338)).readProperty_mTypeName ().readProperty_string (), temp_3.readProperty_mExtensionGetterName (), temp_4.readProperty_mExtensionGetterFormalParameterList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 341)) COMMA_SOURCE_FILE ("extension-getter.galgas", 337))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionGetterForGeneration temp_6 = this ;
    const GALGAS_extensionGetterForGeneration temp_7 = this ;
    const GALGAS_extensionGetterForGeneration temp_8 = this ;
    const GALGAS_extensionGetterForGeneration temp_9 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 345)).readProperty_mTypeName ().readProperty_string (), temp_7.readProperty_mExtensionGetterName (), temp_8.readProperty_mExtensionGetterFormalParameterList (), temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 344))) ;
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
  cEnumerator_formalInputParameterListForGeneration enumerator_16380 (temp_0.readProperty_mExtensionGetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_16380.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16380.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 360)) ;
    enumerator_16380.gotoNextObject () ;
  }
  const GALGAS_extensionGetterForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 362)) ;
  const GALGAS_extensionGetterForGeneration temp_2 = this ;
  GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_16560 = temp_2.readProperty_mExtensionGetterFormalParameterList () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_extensionGetterForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_extensionGetterForGeneration temp_5 = this ;
      var_extensionReaderFormalParameterList_16560.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 366)), temp_5.readProperty_mReceiverType (), GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 369)), GALGAS_bool (true), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 365)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_6 = this ;
      const GALGAS_extensionGetterForGeneration temp_7 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 374)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 373)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 374)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 375))  COMMA_SOURCE_FILE ("extension-getter.galgas", 373)) ;
      GALGAS_string var_code_17422 ;
      {
      const GALGAS_extensionGetterForGeneration temp_8 = this ;
      const GALGAS_extensionGetterForGeneration temp_9 = this ;
      const GALGAS_extensionGetterForGeneration temp_10 = this ;
      const GALGAS_extensionGetterForGeneration temp_11 = this ;
      routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GALGAS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 377)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_16560, temp_9.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GALGAS_bool (false), GALGAS_bool (false), var_code_17422, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 376)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_12 = this ;
      const GALGAS_extensionGetterForGeneration temp_13 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 389)).readProperty_mTypeName ().readProperty_string (), temp_13.readProperty_mExtensionGetterName (), var_code_17422 COMMA_SOURCE_FILE ("extension-getter.galgas", 388))) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_extensionGetterForGeneration temp_14 = this ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 394)) ;
    const GALGAS_extensionGetterForGeneration temp_15 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_17750 = temp_15.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_17794 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 397)).isValid ()) {
      uint32_t variant_17815 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 397)).uintValue () ;
      bool loop_17815 = true ;
      while (loop_17815) {
        loop_17815 = var_searching_17794.isValid () ;
        if (loop_17815) {
          loop_17815 = var_searching_17794.boolValue () ;
        }
        if (loop_17815 && (0 == variant_17815)) {
          loop_17815 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 397)) ;
        }
        if (loop_17815) {
          variant_17815 -- ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = extensionGetter_definition (var_baseType_17750, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 398)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("extension-getter.galgas", 398)).operator_not (SOURCE_FILE ("extension-getter.galgas", 398)).boolEnum () ;
            if (kBoolTrue == test_16) {
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                const GALGAS_extensionGetterForGeneration temp_18 = this ;
                test_17 = extensionGetter_definition (extensionGetter_definition (var_baseType_17750, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 399)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 399)).readProperty_mGetterMap ().getter_hasKey (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas", 399)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  var_baseType_17750 = extensionGetter_definition (var_baseType_17750, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 400)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_17) {
                var_searching_17794 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_16) {
            var_searching_17794 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionGetterForGeneration temp_19 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_17750, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 409)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 408)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 409)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 410))  COMMA_SOURCE_FILE ("extension-getter.galgas", 408)) ;
    GALGAS_string var_extensionGetterCode_18757 ;
    {
    const GALGAS_extensionGetterForGeneration temp_20 = this ;
    const GALGAS_extensionGetterForGeneration temp_21 = this ;
    const GALGAS_extensionGetterForGeneration temp_22 = this ;
    const GALGAS_extensionGetterForGeneration temp_23 = this ;
    const GALGAS_extensionGetterForGeneration temp_24 = this ;
    routine_generateExtensionGetterNew_3F__26__3F__3F__3F__3F__3F__21_ (GALGAS_string ("cPtr_").add_operation (extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 412)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 412)).add_operation (GALGAS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 412)).add_operation (temp_21.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 412)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_16560, temp_22.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("Compiler"), temp_23.readProperty_mResultType (), temp_24.readProperty_mResultVarCppName (), var_extensionGetterCode_18757, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 411)) ;
    }
    const GALGAS_extensionGetterForGeneration temp_25 = this ;
    const GALGAS_extensionGetterForGeneration temp_26 = this ;
    const GALGAS_extensionGetterForGeneration temp_27 = this ;
    const GALGAS_extensionGetterForGeneration temp_28 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, extensionGetter_definition (temp_25.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 422)).readProperty_mTypeName ().readProperty_string (), temp_26.readProperty_mExtensionGetterName (), temp_27.readProperty_mExtensionGetterFormalParameterList (), var_extensionGetterCode_18757, temp_28.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 421))) ;
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
  result_result = GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 130)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 130)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 130)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  const GALGAS_extensionMethodAST temp_2 = this ;
  GALGAS_lstring var_key_6635 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 144)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 144)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 144)), temp_2.readProperty_mExtensionMethodName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 143)) ;
  {
  const GALGAS_extensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6635, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 147)) ;
  }
  {
  const GALGAS_extensionMethodAST temp_4 = this ;
  const GALGAS_extensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6635, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 148)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 148)) COMMA_SOURCE_FILE ("extension-method.galgas", 148)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-method.galgas", 150)).operator_not (SOURCE_FILE ("extension-method.galgas", 150)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-method.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 151)) ;
      }
    }
  }
  const GALGAS_extensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_7137 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 156)) ;
  if (nullptr != objectArray_7137) {
    macroValidSharedObject (objectArray_7137, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_extensionMethodAST temp_10 = this ;
    const GALGAS_extensionMethodAST temp_11 = this ;
    objectArray_7137->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mExtensionMethodName (), temp_11.readProperty_mExtensionMethodFormalParameterList (), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("extension-method.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 157)) ;
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
  GALGAS_lstring var_nameForUsefulness_8858 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 192)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8858, var_nameForUsefulness_8858, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 193)) ;
  }
  const GALGAS_extensionMethodAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_9036 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 194)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9036, var_nameForUsefulness_8858 COMMA_SOURCE_FILE ("extension-method.galgas", 195)) ;
  }
  const GALGAS_extensionMethodAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9230 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 197)) ;
  GALGAS_string var_selfObjectNameNew_9294 ;
  GALGAS_string var_selfObjectAccessorNew_9326 ;
  GALGAS_bool var_implementedAsFunction_9360 ;
  GALGAS_bool var_isReferenceClass_9420 = GALGAS_bool (false) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_isReference_9519 ;
    const bool optionalResult9491 = extensionGetter_definition (var_selfType_9230, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 203)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_9519) ;
    if (!optionalResult9491) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      var_isReferenceClass_9420 = var_isReference_9519 ;
      var_selfObjectNameNew_9294 = GALGAS_string ("this") ;
      var_selfObjectAccessorNew_9326 = GALGAS_string ("this->") ;
      var_implementedAsFunction_9360 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameNew_9294 = GALGAS_string ("inObject") ;
    var_selfObjectAccessorNew_9326 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_9360 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionMethodAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContextNew_9831 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_9294, GALGAS_selfAvailability::constructor_available (var_selfType_9230, GALGAS_bool (false), var_isReferenceClass_9420  COMMA_SOURCE_FILE ("extension-method.galgas", 218)), var_selfObjectAccessorNew_9326, temp_5.readProperty_requiresSelfForAccessingProperty (), inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 214)) ;
  GALGAS_bool var_isRefClass_10156 = GALGAS_bool (false) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    GALGAS_bool var_reference_10249 ;
    const bool optionalResult10221 = extensionGetter_definition (var_selfType_9230, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 223)).readProperty_mTypeKindEnum ().optional_classType (var_reference_10249) ;
    if (!optionalResult10221) {
      test_6 = kBoolFalse ;
    }
    if (kBoolTrue == test_6) {
      var_isRefClass_10156 = var_reference_10249 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_10304 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 226)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_10352 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 227)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_9230, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 228)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-method.galgas", 228)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_nonMutableProperties_10352 = extensionGetter_definition (var_selfType_9230, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 229)).readProperty_mAllTypedPropertyList () ;
    }
  }
  if (kBoolFalse == test_7) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_bool var_isReference_10606 ;
      const bool optionalResult10578 = extensionGetter_definition (var_selfType_9230, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 230)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_10606) ;
      if (!optionalResult10578) {
        test_8 = kBoolFalse ;
      }
      if (kBoolTrue == test_8) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_isReference_10606.boolEnum () ;
          if (kBoolTrue == test_9) {
            var_mutableProperties_10304 = extensionGetter_definition (var_selfType_9230, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 232)).readProperty_mAllTypedPropertyList () ;
          }
        }
        if (kBoolFalse == test_9) {
          var_nonMutableProperties_10352 = extensionGetter_definition (var_selfType_9230, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 234)).readProperty_mAllTypedPropertyList () ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11150 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_11196 ;
  {
  const GALGAS_extensionMethodAST temp_10 = this ;
  const GALGAS_extensionMethodAST temp_11 = this ;
  const GALGAS_extensionMethodAST temp_12 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_8858, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_9831, ioArgument_ioTypeMap, temp_10.readProperty_mExtensionMethodFormalParameterList (), var_nonMutableProperties_10352, var_mutableProperties_10304, temp_11.readProperty_mExtensionMethodInstructionList (), temp_12.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_11150, var_formalParameterListForGeneration_11196, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 237)) ;
  }
  const GALGAS_extensionMethodAST temp_13 = this ;
  const GALGAS_extensionMethodAST temp_14 = this ;
  const GALGAS_extensionMethodAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (temp_13.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 252)), GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_9230, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)).add_operation (temp_14.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)), var_selfType_9230, temp_15.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_9360, var_formalParameterListForGeneration_11196, extensionGetter_definition (var_selfType_9230, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 260)).readProperty_mAllTypedPropertyList (), var_semanticInstructionListForGeneration_11150  COMMA_SOURCE_FILE ("extension-method.galgas", 253))  COMMA_SOURCE_FILE ("extension-method.galgas", 251)) ;
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
  ioArgument_ioExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-method.galgas", 283)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-method.galgas", 302)) ;
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
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 312)).readProperty_mTypeName ().readProperty_string (), temp_3.readProperty_mExtensionMethodName (), temp_4.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 311))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_5 = this ;
    const GALGAS_extensionMethodForGeneration temp_6 = this ;
    const GALGAS_extensionMethodForGeneration temp_7 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 318)).readProperty_mTypeName ().readProperty_string (), temp_6.readProperty_mExtensionMethodName (), temp_7.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 317))) ;
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
      GALGAS_formalParameterListForGeneration var_extensionMethodFormalParameterList_15298 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GALGAS_extensionMethodForGeneration temp_3 = this ;
      var_extensionMethodFormalParameterList_15298.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 335)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 336)), temp_3.readProperty_mReceiverType (), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 338)), GALGAS_string ("inObject"), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 334)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_4 = this ;
      const GALGAS_extensionMethodForGeneration temp_5 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 342)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 342)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 342)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 342))  COMMA_SOURCE_FILE ("extension-method.galgas", 342)) ;
      GALGAS_string var_code_16252 ;
      {
      const GALGAS_extensionMethodForGeneration temp_6 = this ;
      const GALGAS_extensionMethodForGeneration temp_7 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GALGAS_bool (false), GALGAS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 345)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_15298, temp_7.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_16252, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 343)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_8 = this ;
      const GALGAS_extensionMethodForGeneration temp_9 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 357)).readProperty_mTypeName ().readProperty_string (), temp_9.readProperty_mExtensionMethodName (), var_code_16252 COMMA_SOURCE_FILE ("extension-method.galgas", 356))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_10 = this ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 362)) ;
    const GALGAS_extensionMethodForGeneration temp_11 = this ;
    cEnumerator_formalParameterListForGeneration enumerator_16586 (temp_11.readProperty_mExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
    while (enumerator_16586.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_16586.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 364)) ;
      enumerator_16586.gotoNextObject () ;
    }
    const GALGAS_extensionMethodForGeneration temp_12 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_16736 = temp_12.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_16780 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 368)).isValid ()) {
      uint32_t variant_16801 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 368)).uintValue () ;
      bool loop_16801 = true ;
      while (loop_16801) {
        loop_16801 = var_searching_16780.isValid () ;
        if (loop_16801) {
          loop_16801 = var_searching_16780.boolValue () ;
        }
        if (loop_16801 && (0 == variant_16801)) {
          loop_16801 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 368)) ;
        }
        if (loop_16801) {
          variant_16801 -- ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = extensionGetter_definition (var_baseType_16736, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 369)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("extension-method.galgas", 369)).operator_not (SOURCE_FILE ("extension-method.galgas", 369)).boolEnum () ;
            if (kBoolTrue == test_13) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                const GALGAS_extensionMethodForGeneration temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_16736, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 370)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 370)).readProperty_mInstanceMethodMap ().getter_hasKey (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas", 370)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  var_baseType_16736 = extensionGetter_definition (var_baseType_16736, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 371)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_14) {
                var_searching_16780 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_13) {
            var_searching_16780 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionMethodForGeneration temp_16 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (var_baseType_16736, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 380)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 380)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 380)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 381))  COMMA_SOURCE_FILE ("extension-method.galgas", 379)) ;
    GALGAS_string var_methodImplementation_17580 ;
    {
    const GALGAS_extensionMethodForGeneration temp_17 = this ;
    const GALGAS_extensionMethodForGeneration temp_18 = this ;
    const GALGAS_extensionMethodForGeneration temp_19 = this ;
    const GALGAS_extensionMethodForGeneration temp_20 = this ;
    routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_17.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_17580, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 382)) ;
    }
    const GALGAS_extensionMethodForGeneration temp_21 = this ;
    const GALGAS_extensionMethodForGeneration temp_22 = this ;
    const GALGAS_extensionMethodForGeneration temp_23 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, extensionGetter_definition (temp_21.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 391)).readProperty_mTypeName ().readProperty_string (), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_17580 COMMA_SOURCE_FILE ("extension-method.galgas", 390))) ;
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
  result_result = GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 129)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 129)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 129)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionSetterAST temp_0 = this ;
  const GALGAS_extensionSetterAST temp_1 = this ;
  const GALGAS_extensionSetterAST temp_2 = this ;
  GALGAS_lstring var_key_6526 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 143)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 143)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 143)), temp_2.readProperty_mExtensionSetterName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 142)) ;
  {
  const GALGAS_extensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6526, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 146)) ;
  }
  {
  const GALGAS_extensionSetterAST temp_4 = this ;
  const GALGAS_extensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6526, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 147)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 147)) COMMA_SOURCE_FILE ("extension-setter.galgas", 147)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-setter.galgas", 149)).operator_not (SOURCE_FILE ("extension-setter.galgas", 149)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-setter.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 150)) ;
      }
    }
  }
  const GALGAS_extensionSetterAST temp_9 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_7027 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-setter.galgas", 155)) ;
  if (nullptr != objectArray_7027) {
    macroValidSharedObject (objectArray_7027, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_extensionSetterAST temp_10 = this ;
    const GALGAS_extensionSetterAST temp_11 = this ;
    objectArray_7027->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionSetterName (), temp_11.readProperty_mExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 156)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_lstring var_nameForUsefulness_8731 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 189)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8731, var_nameForUsefulness_8731, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 190)) ;
  }
  const GALGAS_extensionSetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_8909 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 191)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_8909, var_nameForUsefulness_8731 COMMA_SOURCE_FILE ("extension-setter.galgas", 192)) ;
  }
  const GALGAS_extensionSetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9102 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 194)) ;
  GALGAS_string var_selfObjectName_9165 ;
  GALGAS_string var_selfObjectAccessor_9194 ;
  GALGAS_bool var_implementedAsFunction_9225 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_9102, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 199)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-setter.galgas", 199)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectName_9165 = GALGAS_string ("object") ;
      var_selfObjectAccessor_9194 = GALGAS_string ("object->") ;
      var_implementedAsFunction_9225 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_9165 = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor_9194 = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction_9225 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionSetterAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContext_9590 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_9165, GALGAS_selfAvailability::constructor_available (var_selfType_9102, GALGAS_bool (true), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-setter.galgas", 213)), var_selfObjectAccessor_9194, temp_5.readProperty_requiresSelfForAccessingProperty (), inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 209)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_10239 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_10285 ;
  {
  const GALGAS_extensionSetterAST temp_6 = this ;
  const GALGAS_extensionSetterAST temp_7 = this ;
  const GALGAS_extensionSetterAST temp_8 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_8731, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_9590, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionSetterFormalParameterList (), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 223)), extensionGetter_definition (var_selfType_9102, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 224)).readProperty_mAllTypedPropertyList (), temp_7.readProperty_mExtensionSetterInstructionList (), temp_8.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_10239, var_formalParameterListForGeneration_10285, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 217)) ;
  }
  const GALGAS_extensionSetterAST temp_9 = this ;
  const GALGAS_extensionSetterAST temp_10 = this ;
  const GALGAS_extensionSetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (temp_9.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 232)), GALGAS_extensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (extensionGetter_definition (var_selfType_9102, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 235)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 235)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 235)).add_operation (temp_10.readProperty_mExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 235)), var_selfType_9102, temp_11.readProperty_mExtensionSetterName ().readProperty_string (), var_implementedAsFunction_9225, var_formalParameterListForGeneration_10285, extensionGetter_definition (var_selfType_9102, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 240)).readProperty_mAllTypedPropertyList (), var_semanticInstructionListForGeneration_10239  COMMA_SOURCE_FILE ("extension-setter.galgas", 233))  COMMA_SOURCE_FILE ("extension-setter.galgas", 231)) ;
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
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionSetterAST temp_0 = this ;
  const GALGAS_extensionSetterAST temp_1 = this ;
  ioArgument_ioExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-setter.galgas", 262)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-setter.galgas", 283)) ;
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
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 293)).readProperty_mTypeName ().readProperty_string (), temp_3.readProperty_mExtensionSetterName (), temp_4.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 292))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionSetterForGeneration temp_5 = this ;
    const GALGAS_extensionSetterForGeneration temp_6 = this ;
    const GALGAS_extensionSetterForGeneration temp_7 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 299)).readProperty_mTypeName ().readProperty_string (), temp_6.readProperty_mExtensionSetterName (), temp_7.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 298))) ;
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
  cEnumerator_formalParameterListForGeneration enumerator_14342 (temp_0.readProperty_mExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_14342.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14342.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 314)) ;
    enumerator_14342.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_extensionSetterForGeneration temp_2 = this ;
    test_1 = temp_2.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_extensionSetterForGeneration temp_3 = this ;
      GALGAS_formalParameterListForGeneration var_extensionSetterFormalParameterList_14505 = temp_3.readProperty_mExtensionSetterFormalParameterList () ;
      {
      const GALGAS_extensionSetterForGeneration temp_4 = this ;
      var_extensionSetterFormalParameterList_14505.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas", 319)), GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.galgas", 320)), temp_4.readProperty_mReceiverType (), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 322)), GALGAS_string ("ioObject"), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 318)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_5 = this ;
      const GALGAS_extensionSetterForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 326)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 326)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 326)).add_operation (temp_6.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 326))  COMMA_SOURCE_FILE ("extension-setter.galgas", 326)) ;
      GALGAS_string var_code_15455 ;
      {
      const GALGAS_extensionSetterForGeneration temp_7 = this ;
      const GALGAS_extensionSetterForGeneration temp_8 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GALGAS_bool (false), GALGAS_string ("extensionSetter_").add_operation (temp_7.readProperty_mExtensionSetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 329)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_14505, temp_8.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_15455, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 327)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_9 = this ;
      const GALGAS_extensionSetterForGeneration temp_10 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_9.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 341)).readProperty_mTypeName ().readProperty_string (), temp_10.readProperty_mExtensionSetterName (), var_code_15455 COMMA_SOURCE_FILE ("extension-setter.galgas", 340))) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_extensionSetterForGeneration temp_11 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_15723 = temp_11.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_15767 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 348)).isValid ()) {
      uint32_t variant_15788 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 348)).uintValue () ;
      bool loop_15788 = true ;
      while (loop_15788) {
        loop_15788 = var_searching_15767.isValid () ;
        if (loop_15788) {
          loop_15788 = var_searching_15767.boolValue () ;
        }
        if (loop_15788 && (0 == variant_15788)) {
          loop_15788 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas", 348)) ;
        }
        if (loop_15788) {
          variant_15788 -- ;
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = extensionGetter_definition (var_baseType_15723, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 349)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("extension-setter.galgas", 349)).operator_not (SOURCE_FILE ("extension-setter.galgas", 349)).boolEnum () ;
            if (kBoolTrue == test_12) {
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                const GALGAS_extensionSetterForGeneration temp_14 = this ;
                test_13 = extensionGetter_definition (extensionGetter_definition (var_baseType_15723, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 350)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 350)).readProperty_mSetterMap ().getter_hasKey (temp_14.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-setter.galgas", 350)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_baseType_15723 = extensionGetter_definition (var_baseType_15723, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 351)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_13) {
                var_searching_15767 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_12) {
            var_searching_15767 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionSetterForGeneration temp_15 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (var_baseType_15723, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 359)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 359)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 359)).add_operation (temp_15.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 359))  COMMA_SOURCE_FILE ("extension-setter.galgas", 359)) ;
    extensionMethod_addHeaderFileName (var_baseType_15723, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 360)) ;
    GALGAS_string var_setterImplementation_16635 ;
    {
    const GALGAS_extensionSetterForGeneration temp_16 = this ;
    const GALGAS_extensionSetterForGeneration temp_17 = this ;
    const GALGAS_extensionSetterForGeneration temp_18 = this ;
    const GALGAS_extensionSetterForGeneration temp_19 = this ;
    routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 362)).readProperty_mTypeName ().readProperty_string (), GALGAS_string::makeEmptyString (), temp_17.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionSetterFormalParameterList (), temp_19.readProperty_mSemanticInstructionListForGeneration (), var_setterImplementation_16635, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 361)) ;
    }
    const GALGAS_extensionSetterForGeneration temp_20 = this ;
    const GALGAS_extensionSetterForGeneration temp_21 = this ;
    const GALGAS_extensionSetterForGeneration temp_22 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (inCompiler, extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 371)).readProperty_mTypeName ().readProperty_string (), temp_21.readProperty_mExtensionSetterName (), temp_22.readProperty_mExtensionSetterFormalParameterList (), var_setterImplementation_16635 COMMA_SOURCE_FILE ("extension-setter.galgas", 370))) ;
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
  result_result = GALGAS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 137)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 137)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 137)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 150)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_overridingAbstractExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 152)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 152)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_overridingAbstractExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 153)) ;
      }
    }
  }
  const GALGAS_overridingAbstractExtensionGetterAST temp_4 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_6771 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 158)) ;
  if (nullptr != objectArray_6771) {
    macroValidSharedObject (objectArray_6771, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_overridingAbstractExtensionGetterAST temp_5 = this ;
    const GALGAS_overridingAbstractExtensionGetterAST temp_6 = this ;
    const GALGAS_overridingAbstractExtensionGetterAST temp_7 = this ;
    objectArray_6771->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mAbstractExtensionGetterName (), temp_6.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::constructor_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 159)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_unifiedTypeMapEntry var_selfType_8881 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 198)) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_returnType_8953 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_1.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 200)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_selfType_8881, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 202)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 202)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 202)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_8881, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 203)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 203)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 203)), fixItArray4  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 203)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = extensionGetter_definition (var_selfType_8881, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 204)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_overridingAbstractExtensionGetterAST temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_8881, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 205)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 205)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 205)), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 205)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_9542 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_9587 = extensionGetter_definition (var_selfType_8881, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 209)).readProperty_mSuperType () ;
  GALGAS_functionSignature var_inheritedSignature_9657 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 210)) ;
  GALGAS_unifiedTypeMapEntry var_inheritedReturnType_9708 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 211)) ;
  GALGAS_location var_inheritedDeclarationLocation_9754 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 212)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 213)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 213)).isValid ()) {
    uint32_t variant_9802 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 213)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 213)).uintValue () ;
    bool loop_9802 = true ;
    while (loop_9802) {
      loop_9802 = var_superType_9587.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 214)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 214)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_9542.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 214)).isValid () ;
      if (loop_9802) {
        loop_9802 = var_superType_9587.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 214)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 214)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_9542.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 214)).boolValue () ;
      }
      if (loop_9802 && (0 == variant_9802)) {
        loop_9802 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 213)) ;
      }
      if (loop_9802) {
        variant_9802 -- ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          const GALGAS_overridingAbstractExtensionGetterAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_superType_9587, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 215)).readProperty_mGetterMap ().getter_hasKey (temp_9.readProperty_mAbstractExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 215)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_methodQualifier var_qualifier_10211 ;
            const GALGAS_overridingAbstractExtensionGetterAST temp_10 = this ;
            GALGAS_methodKind joker_10089 ; // Joker input parameter
            GALGAS_bool joker_10166 ; // Joker input parameter
            GALGAS_string joker_10229 ; // Joker input parameter
            extensionGetter_definition (var_superType_9587, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 216)).readProperty_mGetterMap ().method_searchKey (temp_10.readProperty_mAbstractExtensionGetterName (), joker_10089, var_inheritedSignature_9657, var_inheritedDeclarationLocation_9754, joker_10166, var_inheritedReturnType_9708, var_qualifier_10211, joker_10229, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 216)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsInfOrEqual, var_qualifier_10211.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 226)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_baseTypeName_9542 = extensionGetter_definition (var_superType_9587, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 227)).readProperty_mTypeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_9587 = extensionGetter_definition (var_superType_9587, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).readProperty_mSuperType () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, var_baseTypeName_9542.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_13 = this ;
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 233)) ;
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_baseTypeName_9542.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_10619 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 237)) ;
      const GALGAS_overridingAbstractExtensionGetterAST temp_16 = this ;
      cEnumerator_formalInputParameterListAST enumerator_10767 (temp_16.readProperty_mAbstractExtensionGetterFormalInputParameterList (), kENUMERATION_UP) ;
      while (enumerator_10767.hasCurrentObject ()) {
        var_formalParameterListForGeneration_10619.addAssign_operation (enumerator_10767.current_mFormalSelector (HERE), extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_10767.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 241)), enumerator_10767.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_10767.current_mFormalArgumentName (HERE), enumerator_10767.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 239)) ;
        enumerator_10767.gotoNextObject () ;
      }
      {
      const GALGAS_overridingAbstractExtensionGetterAST temp_17 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_10619, var_returnType_8953, temp_17.readProperty_mAbstractExtensionGetterName ().readProperty_location (), var_inheritedSignature_9657, var_inheritedReturnType_9708, var_inheritedDeclarationLocation_9754, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 246)) ;
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
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = this ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = this ;
  ioArgument_ioOverridingAbstractExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 274)) ;
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
  result_result = GALGAS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 104)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 104)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 104)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 118)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_overridingAbstractExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 120)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_overridingAbstractExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 121)) ;
      }
    }
  }
  const GALGAS_overridingAbstractExtensionMethodAST temp_4 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_5651 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 126)) ;
  if (nullptr != objectArray_5651) {
    macroValidSharedObject (objectArray_5651, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_overridingAbstractExtensionMethodAST temp_5 = this ;
    const GALGAS_overridingAbstractExtensionMethodAST temp_6 = this ;
    objectArray_5651->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GALGAS_methodQualifier::constructor_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_unifiedTypeMapEntry var_selfType_7844 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 166)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7844, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 168)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 168)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 168)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_7844, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 169)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 169)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 169)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 169)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7844, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 170)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionMethodAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_7844, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 171)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 171)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 171)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 171)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_8404 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_8449 = extensionGetter_definition (var_selfType_7844, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 175)).readProperty_mSuperType () ;
  GALGAS_formalParameterSignature var_inheritedSignature_8500 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 176)) ;
  GALGAS_location var_inheritedDeclarationLocation_8566 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 177)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 178)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 178)).isValid ()) {
    uint32_t variant_8614 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 178)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 178)).uintValue () ;
    bool loop_8614 = true ;
    while (loop_8614) {
      loop_8614 = var_superType_8449.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 179)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 179)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_8404.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 179)).isValid () ;
      if (loop_8614) {
        loop_8614 = var_superType_8449.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 179)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 179)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_8404.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 179)).boolValue () ;
      }
      if (loop_8614 && (0 == variant_8614)) {
        loop_8614 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 178)) ;
      }
      if (loop_8614) {
        variant_8614 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingAbstractExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_8449, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 180)).readProperty_mInstanceMethodMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 180)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_9014 ;
            const GALGAS_overridingAbstractExtensionMethodAST temp_9 = this ;
            GALGAS_methodKind joker_8921 ; // Joker input parameter
            GALGAS_bool joker_8998 ; // Joker input parameter
            GALGAS_string joker_9032 ; // Joker input parameter
            extensionGetter_definition (var_superType_8449, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 181)).readProperty_mInstanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_8921, var_inheritedSignature_8500, var_inheritedDeclarationLocation_8566, joker_8998, var_qualifier_9014, joker_9032, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 181)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_9014.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 190)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_8404 = extensionGetter_definition (var_superType_8449, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 191)).readProperty_mTypeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_8449 = extensionGetter_definition (var_superType_8449, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 194)).readProperty_mSuperType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_8404.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 197)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_9406 = GALGAS_localVarManager::constructor_new (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 200)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_9601 ;
  {
  const GALGAS_overridingAbstractExtensionMethodAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), var_variableMap_9406, var_formalParameterListForGeneration_9601, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 201)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_baseTypeName_8404.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GALGAS_overridingAbstractExtensionMethodAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_9601, temp_16.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_8500, var_inheritedDeclarationLocation_8566, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 210)) ;
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
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = this ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_1 = this ;
  ioArgument_ioOverridingAbstractExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 237)) ;
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
  result_result = GALGAS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 57)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 57)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 57)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 71)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_unifiedTypeMapEntry var_selfType_5335 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 104)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_5335, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 106)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 106)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 106)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_5335, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 107)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 107)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 107)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_5335, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 108)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionSetterAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_5335, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 109)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 109)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 109)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 109)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_5895 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_5940 = extensionGetter_definition (var_selfType_5335, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 113)).readProperty_mSuperType () ;
  GALGAS_formalParameterSignature var_inheritedSignature_5991 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 114)) ;
  GALGAS_location var_inheritedDeclarationLocation_6047 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 115)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)).isValid ()) {
    uint32_t variant_6095 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)).uintValue () ;
    bool loop_6095 = true ;
    while (loop_6095) {
      loop_6095 = var_superType_5940.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 117)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 117)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5895.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 117)).isValid () ;
      if (loop_6095) {
        loop_6095 = var_superType_5940.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 117)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 117)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5895.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 117)).boolValue () ;
      }
      if (loop_6095 && (0 == variant_6095)) {
        loop_6095 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)) ;
      }
      if (loop_6095) {
        variant_6095 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingAbstractExtensionSetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_5940, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 118)).readProperty_mSetterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 118)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_6401 ;
            const GALGAS_overridingAbstractExtensionSetterAST temp_9 = this ;
            GALGAS_methodKind joker_6370 ; // Joker input parameter
            GALGAS_bool joker_6393 ; // Joker input parameter
            GALGAS_string joker_6411 ; // Joker input parameter
            extensionGetter_definition (var_superType_5940, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 119)).readProperty_mSetterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_6370, var_inheritedSignature_5991, joker_6393, var_qualifier_6401, joker_6411, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 119)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_6401.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 120)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_5895 = extensionGetter_definition (var_superType_5940, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 121)).readProperty_mTypeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_5940 = extensionGetter_definition (var_superType_5940, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)).readProperty_mSuperType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_5895.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 127)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_6777 = GALGAS_localVarManager::constructor_new (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 130)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6972 ;
  {
  const GALGAS_overridingAbstractExtensionSetterAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionSetterFormalParameterList (), var_variableMap_6777, var_formalParameterListForGeneration_6972, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 131)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5895.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GALGAS_overridingAbstractExtensionSetterAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_6972, temp_16.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_5991, var_inheritedDeclarationLocation_6047, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 140)) ;
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
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = this ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_1 = this ;
  ioArgument_ioOverridingAbstractExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 166)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingExtensionGetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 179)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_overridingExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 181)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 181)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_overridingExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-overriding-getter.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 182)) ;
      }
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_4 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_7612 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 187)) ;
  if (nullptr != objectArray_7612) {
    macroValidSharedObject (objectArray_7612, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_overridingExtensionGetterAST temp_5 = this ;
    const GALGAS_overridingExtensionGetterAST temp_6 = this ;
    const GALGAS_overridingExtensionGetterAST temp_7 = this ;
    objectArray_7612->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionGetterName (), temp_6.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_7.readProperty_mOverridingExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::constructor_isVirtualOverriding (SOURCE_FILE ("extension-overriding-getter.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 188)) ;
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
  result_result = GALGAS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 202)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 202)).add_operation (temp_1.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 202)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_lstring var_nameForUsefulness_9909 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 231)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9909, var_nameForUsefulness_9909, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 232)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_10097 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 233)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_10097, var_nameForUsefulness_9909 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 234)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_10290 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 236)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10290, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 238)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 238)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 238)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionGetterAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_10290, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 239)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 239)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 239)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 239)) ;
    }
  }
  GALGAS_string var_baseTypeName_10629 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_10674 = extensionGetter_definition (var_selfType_10290, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 243)).readProperty_mSuperType () ;
  GALGAS_functionSignature var_inheritedSignature_10744 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 244)) ;
  GALGAS_unifiedTypeMapEntry var_inheritedReturnType_10774 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("extension-overriding-getter.galgas", 245)) ;
  GALGAS_location var_inheritedDeclarationLocation_10840 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 246)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 247)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 247)).isValid ()) {
    uint32_t variant_10888 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 247)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 247)).uintValue () ;
    bool loop_10888 = true ;
    while (loop_10888) {
      loop_10888 = var_superType_10674.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 248)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 248)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_10629.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 248)).isValid () ;
      if (loop_10888) {
        loop_10888 = var_superType_10674.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 248)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 248)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_10629.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 248)).boolValue () ;
      }
      if (loop_10888 && (0 == variant_10888)) {
        loop_10888 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas", 247)) ;
      }
      if (loop_10888) {
        variant_10888 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionGetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_10674, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 249)).readProperty_mGetterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 249)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_11318 ;
            const GALGAS_overridingExtensionGetterAST temp_9 = this ;
            GALGAS_methodKind joker_11179 ; // Joker input parameter
            GALGAS_bool joker_11256 ; // Joker input parameter
            GALGAS_string joker_11336 ; // Joker input parameter
            extensionGetter_definition (var_superType_10674, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 250)).readProperty_mGetterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionGetterName (), joker_11179, var_inheritedSignature_10744, var_inheritedDeclarationLocation_10840, joker_11256, var_inheritedReturnType_10774, var_qualifier_11318, joker_11336, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 250)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_11318.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas", 260)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_10629 = extensionGetter_definition (var_superType_10674, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 261)).readProperty_mTypeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_10674 = extensionGetter_definition (var_superType_10674, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 264)).readProperty_mSuperType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_10629.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionGetterAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 267)) ;
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_14 = this ;
  GALGAS_analysisContext var_analysisContext_11706 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("this"), GALGAS_selfAvailability::constructor_available (var_selfType_10290, GALGAS_bool (false), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 274)), GALGAS_string ("object."), temp_14.readProperty_requiresSelfForAccessingProperty (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 270)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_12607 ;
  GALGAS_unifiedTypeMapEntry var_returnType_12670 ;
  GALGAS_string var_returnVariableCppName_12698 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_12767 ;
  {
  const GALGAS_overridingExtensionGetterAST temp_15 = this ;
  GALGAS_typedPropertyList temp_16 ;
  const enumGalgasBool test_17 = extensionGetter_definition (var_selfType_10290, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 284)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 284)).operator_or (GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_10290, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 284)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-overriding-getter.galgas", 284)))) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 284)).boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = extensionGetter_definition (var_selfType_10290, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 285)).readProperty_mAllTypedPropertyList () ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 286)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_18 = this ;
  const GALGAS_overridingExtensionGetterAST temp_19 = this ;
  const GALGAS_overridingExtensionGetterAST temp_20 = this ;
  const GALGAS_overridingExtensionGetterAST temp_21 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_9909, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_11706, ioArgument_ioTypeMap, temp_15.readProperty_mOverridingExtensionGetterFormalInputParameterList (), temp_16, GALGAS_string ("this->"), temp_18.readProperty_mOverridingExtensionGetterInstructionList (), temp_19.readProperty_mOverridingExtensionGetterReturnedVariableName (), temp_20.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_21.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_12607, var_returnType_12670, var_returnVariableCppName_12698, var_semanticInstructionListForGeneration_12767, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 278)) ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsNotEqual, var_baseTypeName_10629.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      const GALGAS_overridingExtensionGetterAST temp_23 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_12607, var_returnType_12670, temp_23.readProperty_mOverridingExtensionGetterName ().readProperty_location (), var_inheritedSignature_10744, var_inheritedReturnType_10774, var_inheritedDeclarationLocation_10840, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 300)) ;
      }
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_24 = this ;
  const GALGAS_overridingExtensionGetterAST temp_25 = this ;
  const GALGAS_overridingExtensionGetterAST temp_26 = this ;
  const GALGAS_overridingExtensionGetterAST temp_27 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (temp_24.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 311)), GALGAS_overrideExtensionGetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (temp_25.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 314)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 314)).add_operation (temp_26.readProperty_mOverridingExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 314)), var_selfType_10290, var_baseTypeName_10629, temp_27.readProperty_mOverridingExtensionGetterName ().readProperty_string (), var_returnType_12670, var_returnVariableCppName_12698, var_formalParameterListForGeneration_12607, extensionGetter_definition (var_selfType_10290, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 321)).readProperty_mAllTypedPropertyList (), var_semanticInstructionListForGeneration_12767  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 312))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 310)) ;
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
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingExtensionGetterAST temp_0 = this ;
  const GALGAS_overridingExtensionGetterAST temp_1 = this ;
  ioArgument_ioOverridingExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 343)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overrideExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_overrideExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas", 366)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 375)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 375))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 375)) ;
  GALGAS_string var_extensionGetterCode_17230 ;
  {
  const GALGAS_overrideExtensionGetterForGeneration temp_1 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_2 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_3 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_4 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_5 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_6 = this ;
  routine_generateExtensionGetterNew_3F__26__3F__3F__3F__3F__3F__21_ (GALGAS_string ("cPtr_").add_operation (extensionGetter_definition (temp_1.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 377)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 377)).add_operation (GALGAS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 377)).add_operation (temp_2.readProperty_mOverridingExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 377)), ioArgument_ioInclusionSet, temp_3.readProperty_mOverridingExtensionGetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("Compiler"), temp_5.readProperty_mResultType (), temp_6.readProperty_mResultVarCppName (), var_extensionGetterCode_17230, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 376)) ;
  }
  const GALGAS_overrideExtensionGetterForGeneration temp_7 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_8 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_9 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 387)).readProperty_mTypeName ().readProperty_string (), temp_8.readProperty_mOverridingExtensionGetterName (), var_extensionGetterCode_17230, temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 386))) ;
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
  result_result = GALGAS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingExtensionMethodAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 145)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_overridingExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 147)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 147)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_overridingExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-overriding-method.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 148)) ;
      }
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_4 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_6971 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 153)) ;
  if (nullptr != objectArray_6971) {
    macroValidSharedObject (objectArray_6971, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_overridingExtensionMethodAST temp_5 = this ;
    const GALGAS_overridingExtensionMethodAST temp_6 = this ;
    objectArray_6971->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GALGAS_methodQualifier::constructor_isVirtualOverriding (SOURCE_FILE ("extension-overriding-method.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 154)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_lstring var_nameForUsefulness_8744 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 187)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8744, var_nameForUsefulness_8744, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 188)) ;
  }
  const GALGAS_overridingExtensionMethodAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_8932 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 189)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_8932, var_nameForUsefulness_8744 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 190)) ;
  }
  const GALGAS_overridingExtensionMethodAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9125 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 192)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_9125, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 194)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-overriding-method.galgas", 194)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 194)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionMethodAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_9125, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 195)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 195)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 195)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 195)) ;
    }
  }
  GALGAS_string var_baseTypeName_9464 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_9509 = extensionGetter_definition (var_selfType_9125, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 199)).readProperty_mSuperType () ;
  GALGAS_formalParameterSignature var_inheritedSignature_9560 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 200)) ;
  GALGAS_location var_inheritedDeclarationLocation_9626 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 201)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 202)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 202)).isValid ()) {
    uint32_t variant_9674 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 202)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 202)).uintValue () ;
    bool loop_9674 = true ;
    while (loop_9674) {
      loop_9674 = var_superType_9509.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 203)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 203)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_9464.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 203)).isValid () ;
      if (loop_9674) {
        loop_9674 = var_superType_9509.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 203)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 203)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_9464.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 203)).boolValue () ;
      }
      if (loop_9674 && (0 == variant_9674)) {
        loop_9674 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas", 202)) ;
      }
      if (loop_9674) {
        variant_9674 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_9509, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 204)).readProperty_mInstanceMethodMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 204)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_10074 ;
            const GALGAS_overridingExtensionMethodAST temp_9 = this ;
            GALGAS_methodKind joker_9981 ; // Joker input parameter
            GALGAS_bool joker_10058 ; // Joker input parameter
            GALGAS_string joker_10092 ; // Joker input parameter
            extensionGetter_definition (var_superType_9509, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 205)).readProperty_mInstanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_9981, var_inheritedSignature_9560, var_inheritedDeclarationLocation_9626, joker_10058, var_qualifier_10074, joker_10092, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 205)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_10074.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas", 214)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_9464 = extensionGetter_definition (var_superType_9509, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 215)).readProperty_mTypeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_9509 = extensionGetter_definition (var_superType_9509, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 218)).readProperty_mSuperType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_9464.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionMethodAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("this method is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 221)) ;
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_14 = this ;
  GALGAS_analysisContext var_analysisContext_10462 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("this"), GALGAS_selfAvailability::constructor_available (var_selfType_9125, GALGAS_bool (false), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 228)), GALGAS_string ("this->"), temp_14.readProperty_requiresSelfForAccessingProperty (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 224)) ;
  GALGAS_bool var_isRefClass_10747 = GALGAS_bool (false) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    GALGAS_bool var_reference_10840 ;
    const bool optionalResult10812 = extensionGetter_definition (var_selfType_9125, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 233)).readProperty_mTypeKindEnum ().optional_classType (var_reference_10840) ;
    if (!optionalResult10812) {
      test_15 = kBoolFalse ;
    }
    if (kBoolTrue == test_15) {
      var_isRefClass_10747 = var_reference_10840 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_10895 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 236)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_10943 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 237)) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_9125, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 238)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-overriding-method.galgas", 238)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      var_nonMutableProperties_10943 = extensionGetter_definition (var_selfType_9125, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 239)).readProperty_mAllTypedPropertyList () ;
    }
  }
  if (kBoolFalse == test_16) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      GALGAS_bool var_isReference_11197 ;
      const bool optionalResult11169 = extensionGetter_definition (var_selfType_9125, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 240)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_11197) ;
      if (!optionalResult11169) {
        test_17 = kBoolFalse ;
      }
      if (kBoolTrue == test_17) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = var_isReference_11197.boolEnum () ;
          if (kBoolTrue == test_18) {
            var_mutableProperties_10895 = extensionGetter_definition (var_selfType_9125, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 242)).readProperty_mAllTypedPropertyList () ;
          }
        }
        if (kBoolFalse == test_18) {
          var_nonMutableProperties_10943 = extensionGetter_definition (var_selfType_9125, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 244)).readProperty_mAllTypedPropertyList () ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11758 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_11804 ;
  {
  const GALGAS_overridingExtensionMethodAST temp_19 = this ;
  const GALGAS_overridingExtensionMethodAST temp_20 = this ;
  const GALGAS_overridingExtensionMethodAST temp_21 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_8744, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10462, ioArgument_ioTypeMap, temp_19.readProperty_mOverridingExtensionMethodFormalParameterList (), var_nonMutableProperties_10943, var_mutableProperties_10895, temp_20.readProperty_mOverridingExtensionMethodInstructionList (), temp_21.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_11758, var_formalParameterListForGeneration_11804, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 247)) ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsNotEqual, var_baseTypeName_9464.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      const GALGAS_overridingExtensionMethodAST temp_23 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_11804, temp_23.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_9560, var_inheritedDeclarationLocation_9626, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 262)) ;
      }
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_24 = this ;
  const GALGAS_overridingExtensionMethodAST temp_25 = this ;
  const GALGAS_overridingExtensionMethodAST temp_26 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (temp_24.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 271)), GALGAS_overridingExtensionMethodForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_9125, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 274)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 274)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 274)).add_operation (temp_25.readProperty_mOverridingExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 274)), var_selfType_9125, var_baseTypeName_9464, temp_26.readProperty_mOverridingExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_11804, extensionGetter_definition (var_selfType_9125, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 279)).readProperty_mAllTypedPropertyList (), var_semanticInstructionListForGeneration_11758  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 272))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 270)) ;
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
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingExtensionMethodAST temp_0 = this ;
  const GALGAS_overridingExtensionMethodAST temp_1 = this ;
  ioArgument_ioOverridingExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 301)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_overridingExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-method.galgas", 322)) ;
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
  GALGAS_string var_methodImplementation_15788 ;
  {
  const GALGAS_overridingExtensionMethodForGeneration temp_0 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_1 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_2 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_3 = this ;
  routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_0.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_1.readProperty_mExtensionMethodName (), temp_2.readProperty_mExtensionMethodFormalParameterList (), temp_3.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_15788, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 331)) ;
  }
  const GALGAS_overridingExtensionMethodForGeneration temp_4 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 340)).readProperty_mTypeName ().readProperty_string (), temp_5.readProperty_mExtensionMethodName (), var_methodImplementation_15788 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 339))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingExtensionSetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 81)) ;
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
  result_result = GALGAS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 89)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 89)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 89)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_lstring var_nameForUsefulness_5880 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 118)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_5880, var_nameForUsefulness_5880, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 119)) ;
  }
  const GALGAS_overridingExtensionSetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_6068 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 120)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_6068, var_nameForUsefulness_5880 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 121)) ;
  }
  const GALGAS_overridingExtensionSetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_6261 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 123)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_6261, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 125)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-overriding-setter.galgas", 125)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 125)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionSetterAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_6261, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 126)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 126)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 126)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 126)) ;
    }
  }
  GALGAS_string var_baseTypeName_6600 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_6645 = extensionGetter_definition (var_selfType_6261, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 130)).readProperty_mSuperType () ;
  GALGAS_formalParameterSignature var_inheritedSignature_6696 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 131)) ;
  GALGAS_location var_inheritedDeclarationLocation_6762 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 132)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 133)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 133)).isValid ()) {
    uint32_t variant_6810 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 133)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 133)).uintValue () ;
    bool loop_6810 = true ;
    while (loop_6810) {
      loop_6810 = var_superType_6645.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 134)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 134)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6600.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 134)).isValid () ;
      if (loop_6810) {
        loop_6810 = var_superType_6645.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 134)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 134)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6600.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 134)).boolValue () ;
      }
      if (loop_6810 && (0 == variant_6810)) {
        loop_6810 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 133)) ;
      }
      if (loop_6810) {
        variant_6810 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionSetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_6645, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 135)).readProperty_mSetterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 135)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_7116 ;
            const GALGAS_overridingExtensionSetterAST temp_9 = this ;
            GALGAS_methodKind joker_7085 ; // Joker input parameter
            GALGAS_bool joker_7108 ; // Joker input parameter
            GALGAS_string joker_7126 ; // Joker input parameter
            extensionGetter_definition (var_superType_6645, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 136)).readProperty_mSetterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_7085, var_inheritedSignature_6696, joker_7108, var_qualifier_7116, joker_7126, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 136)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_7116.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-setter.galgas", 137)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_6600 = extensionGetter_definition (var_superType_6645, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 138)).readProperty_mTypeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_6645 = extensionGetter_definition (var_superType_6645, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 141)).readProperty_mSuperType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_6600.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionSetterAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 144)) ;
    }
  }
  const GALGAS_overridingExtensionSetterAST temp_14 = this ;
  GALGAS_analysisContext var_analysisContext_7488 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("object"), GALGAS_selfAvailability::constructor_available (var_selfType_6261, GALGAS_bool (true), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 151)), GALGAS_string ("object->"), temp_14.readProperty_requiresSelfForAccessingProperty (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 147)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8162 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8208 ;
  {
  const GALGAS_overridingExtensionSetterAST temp_15 = this ;
  const GALGAS_overridingExtensionSetterAST temp_16 = this ;
  const GALGAS_overridingExtensionSetterAST temp_17 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_5880, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_7488, ioArgument_ioTypeMap, temp_15.readProperty_mOverridingExtensionSetterFormalParameterList (), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 161)), extensionGetter_definition (var_selfType_6261, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 162)).readProperty_mAllTypedPropertyList (), temp_16.readProperty_mOverridingExtensionSetterInstructionList (), temp_17.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_8162, var_formalParameterListForGeneration_8208, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 155)) ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6600.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      {
      const GALGAS_overridingExtensionSetterAST temp_19 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_8208, temp_19.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_6696, var_inheritedDeclarationLocation_6762, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 170)) ;
      }
    }
  }
  const GALGAS_overridingExtensionSetterAST temp_20 = this ;
  const GALGAS_overridingExtensionSetterAST temp_21 = this ;
  const GALGAS_overridingExtensionSetterAST temp_22 = this ;
  const GALGAS_overridingExtensionSetterAST temp_23 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (temp_20.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 179)), GALGAS_overridingExtensionSetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (temp_21.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 182)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 182)).add_operation (temp_22.readProperty_mOverridingExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 182)), var_selfType_6261, var_baseTypeName_6600, temp_23.readProperty_mOverridingExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_8208, extensionGetter_definition (var_selfType_6261, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 187)).readProperty_mAllTypedPropertyList (), var_semanticInstructionListForGeneration_8162  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 180))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 178)) ;
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
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_overridingExtensionSetterAST temp_0 = this ;
  const GALGAS_overridingExtensionSetterAST temp_1 = this ;
  ioArgument_ioOverridingExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 210)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_overridingExtensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-setter.galgas", 231)) ;
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
  GALGAS_string var_methodImplementation_12048 ;
  {
  const GALGAS_overridingExtensionSetterForGeneration temp_0 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_1 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_2 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_3 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_4 = this ;
  routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 241)).readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mBaseTypeName (), temp_2.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_3.readProperty_mExtensionSetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_12048, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 240)) ;
  }
  const GALGAS_overridingExtensionSetterForGeneration temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_baseType_12100 = temp_5.readProperty_mReceiverType () ;
  GALGAS_bool var_searching_12142 = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 251)).isValid ()) {
    uint32_t variant_12161 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 251)).uintValue () ;
    bool loop_12161 = true ;
    while (loop_12161) {
      loop_12161 = var_searching_12142.isValid () ;
      if (loop_12161) {
        loop_12161 = var_searching_12142.boolValue () ;
      }
      if (loop_12161 && (0 == variant_12161)) {
        loop_12161 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 251)) ;
      }
      if (loop_12161) {
        variant_12161 -- ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = extensionGetter_definition (var_baseType_12100, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 252)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 252)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 252)).boolEnum () ;
          if (kBoolTrue == test_6) {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              const GALGAS_overridingExtensionSetterForGeneration temp_8 = this ;
              test_7 = extensionGetter_definition (extensionGetter_definition (var_baseType_12100, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 253)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 253)).readProperty_mSetterMap ().getter_hasKey (temp_8.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 253)).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_baseType_12100 = extensionGetter_definition (var_baseType_12100, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 254)).readProperty_mSuperType () ;
              }
            }
            if (kBoolFalse == test_7) {
              var_searching_12142 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_6) {
          var_searching_12142 = GALGAS_bool (false) ;
        }
      }
    }
  }
  const GALGAS_overridingExtensionSetterForGeneration temp_9 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (var_baseType_12100, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 262)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 262)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 262)).add_operation (temp_9.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 262))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 262)) ;
  const GALGAS_overridingExtensionSetterForGeneration temp_10 = this ;
  extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 263)) ;
  const GALGAS_overridingExtensionSetterForGeneration temp_11 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_12 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_11.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 265)).readProperty_mTypeName ().readProperty_string (), temp_12.readProperty_mExtensionSetterName (), var_methodImplementation_12048 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 264))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externProcedureDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 92)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externProcedureDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_externProcedureDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_externProcedureDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("routine ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 98)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 98)) ;
  const GALGAS_externProcedureDeclarationAST temp_1 = this ;
  cEnumerator_formalParameterListAST enumerator_4216 (temp_1.readProperty_mFormalArgumentListAST (), kENUMERATION_UP) ;
  while (enumerator_4216.hasCurrentObject ()) {
    switch (enumerator_4216.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        result_result.plusAssign_operation(GALGAS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 103)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        result_result.plusAssign_operation(GALGAS_string ("\?!"), inCompiler  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 105)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        result_result.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 107)) ;
      }
      break ;
    }
    result_result.plusAssign_operation(enumerator_4216.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 109)) ;
    if (enumerator_4216.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 111)) ;
    }
    enumerator_4216.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 113)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externProcedureDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_routineSignature_5218 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extern-procedure-declaration.galgas", 125)) ;
  const GALGAS_externProcedureDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_5291 (temp_0.readProperty_mFormalArgumentListAST (), kENUMERATION_UP) ;
  while (enumerator_5291.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_5385 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5291.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_5385, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 127)) ;
    }
    var_routineSignature_5218.addAssign_operation (enumerator_5291.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_5385, enumerator_5291.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_5291.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 128)) ;
    enumerator_5291.gotoNextObject () ;
  }
  {
  const GALGAS_externProcedureDeclarationAST temp_1 = this ;
  const GALGAS_externProcedureDeclarationAST temp_2 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_mRoutineMap, temp_1.readProperty_mRoutineName (), var_routineSignature_5218, temp_2.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 135)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externProcedureDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration var_formalArgumentList_6474 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extern-procedure-declaration.galgas", 152)) ;
  GALGAS_formalParameterSignature var_routineSignature_6540 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extern-procedure-declaration.galgas", 153)) ;
  const GALGAS_externProcedureDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_6613 (temp_0.readProperty_mFormalArgumentListAST (), kENUMERATION_UP) ;
  while (enumerator_6613.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_6649 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_6613.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 155)) ;
    var_formalArgumentList_6474.addAssign_operation (enumerator_6613.current (HERE).readProperty_mFormalSelector (), enumerator_6613.current (HERE).readProperty_mFormalArgumentPassingMode (), var_parameterType_6649, enumerator_6613.current (HERE).readProperty_mFormalArgumentName (), enumerator_6613.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 156)) ;
    var_routineSignature_6540.addAssign_operation (enumerator_6613.current (HERE).readProperty_mFormalSelector (), var_parameterType_6649, enumerator_6613.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_6613.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 162)) ;
    enumerator_6613.gotoNextObject () ;
  }
  const GALGAS_externProcedureDeclarationAST temp_1 = this ;
  GALGAS_lstring var_mangledName_7123 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_6540, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 168)) ;
  GALGAS_lstring var_nameForUsefulness_7232 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_7123, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 170)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7232, var_nameForUsefulness_7232, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 171)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_externProcedureDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_7232  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 173)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (var_mangledName_7123.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 177)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (var_mangledName_7123.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extern-procedure-declaration.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 180)), var_mangledName_7123.readProperty_string (), var_formalArgumentList_6474  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 178))  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 176)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@routinePrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_routinePrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extern-procedure-declaration.galgas", 203)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routinePrototypeDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_routinePrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_string & outArgument_outHeader,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routinePrototypeDeclarationForGeneration temp_0 = this ;
  const GALGAS_routinePrototypeDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, temp_0.readProperty_routineMangledName (), temp_1.readProperty_mFormalArgumentList () COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 210))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_routineSignature_6379 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("procedure-declaration.galgas", 164)) ;
  const GALGAS_procDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_6452 (temp_0.readProperty_mFormalArgumentListAST (), kENUMERATION_UP) ;
  while (enumerator_6452.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_6546 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6452.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_6546, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 166)) ;
    }
    var_routineSignature_6379.addAssign_operation (enumerator_6452.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_6546, enumerator_6452.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_6452.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 167)) ;
    enumerator_6452.gotoNextObject () ;
  }
  const GALGAS_procDeclarationAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mRoutineInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 174)) ;
  {
  const GALGAS_procDeclarationAST temp_2 = this ;
  const GALGAS_procDeclarationAST temp_3 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_mRoutineMap, temp_2.readProperty_mRoutineName (), var_routineSignature_6379, temp_3.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 176)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_routineSignature_7746 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("procedure-declaration.galgas", 193)) ;
  const GALGAS_procDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_7819 (temp_0.readProperty_mFormalArgumentListAST (), kENUMERATION_UP) ;
  while (enumerator_7819.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_7855 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_7819.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 195)) ;
    var_routineSignature_7746.addAssign_operation (enumerator_7819.current (HERE).readProperty_mFormalSelector (), var_parameterType_7855, enumerator_7819.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_7819.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 196)) ;
    enumerator_7819.gotoNextObject () ;
  }
  const GALGAS_procDeclarationAST temp_1 = this ;
  GALGAS_lstring var_mangledName_8116 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_7746, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 202)) ;
  GALGAS_lstring var_nameForUsefulness_8225 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_8116, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 204)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8225, var_nameForUsefulness_8225, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 205)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_procDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_8225  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 207)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_8499 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("procedure-declaration.galgas", 214)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 210)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_9032 ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList_9059 ;
  {
  const GALGAS_procDeclarationAST temp_4 = this ;
  const GALGAS_procDeclarationAST temp_5 = this ;
  const GALGAS_procDeclarationAST temp_6 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_8225, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8499, ioArgument_ioTypeMap, temp_4.readProperty_mFormalArgumentListAST (), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("procedure-declaration.galgas", 224)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("procedure-declaration.galgas", 225)), temp_5.readProperty_mRoutineInstructionList (), temp_6.readProperty_mEndOfRoutineInstructionList (), var_instructionList_9032, var_formalArgumentList_9059, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 218)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (var_mangledName_8116.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 232)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (var_mangledName_8116.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 235)), var_mangledName_8116.readProperty_string (), var_formalArgumentList_9059, GALGAS_bool (false), var_instructionList_9032  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 233))  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 231)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routineImplementationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_routineImplementationForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_generateHeader ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_routineImplementationForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_2.readProperty_routineMangledName ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 265))  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 265)) ;
    }
  }
  GALGAS_string var_code_11086 ;
  {
  const GALGAS_routineImplementationForGeneration temp_3 = this ;
  const GALGAS_routineImplementationForGeneration temp_4 = this ;
  const GALGAS_routineImplementationForGeneration temp_5 = this ;
  const GALGAS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (temp_3.readProperty_mGenerateStatic (), GALGAS_string ("routine_").add_operation (temp_4.readProperty_routineMangledName ().getter_identifierRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 269)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GALGAS_bool (false), GALGAS_string ("Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_11086, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 267)) ;
  }
  const GALGAS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, temp_7.readProperty_routineMangledName (), var_code_11086 COMMA_SOURCE_FILE ("procedure-declaration.galgas", 280))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Once function 'generateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bool onceFunction_generateFewHeaderFiles (Compiler *
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_generateFewHeaderFiles = false ;
static GALGAS_bool gOnceFunctionResult_generateFewHeaderFiles ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool function_generateFewHeaderFiles (class Compiler * inCompiler
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

C_PrologueEpilogue gEpilogueForOnceFunction_generateFewHeaderFiles (nullptr,
                                                                    releaseOnceFunctionResult_generateFewHeaderFiles) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateFewHeaderFiles [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateFewHeaderFiles (Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
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
//Overriding extension method '@stringsetPredefinedTypeAST getEnumerationList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getEnumerationList (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                 GALGAS_string & outArgument_outEnumeratedType,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_1708 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_1708, inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 25)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 26)) ;
  outArgument_outEnumerationList.addAssign_operation (var_stringTypeIndex_1708, GALGAS_string ("key")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 27)) ;
  outArgument_outEnumeratedType = GALGAS_string ("string") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getEnumerationList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getEnumerationList (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                            GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                            GALGAS_string & outArgument_outEnumeratedType,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_uintTypeIndex_2181 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), var_uintTypeIndex_2181, inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 38)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 39)) ;
  outArgument_outEnumerationList.addAssign_operation (var_uintTypeIndex_2181, GALGAS_string ("data")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 40)) ;
  outArgument_outEnumeratedType = GALGAS_string ("uint") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@applicationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_applicationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 51)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@bigintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_bigintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 57)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 57)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 57)).operator_or (GALGAS_operators::constructor_prefixMinusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 57)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 57)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 58)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 57)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 58)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 58)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 58)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 58)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 58)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 58)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 59)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 58)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 59)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 59)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 60)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 59)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 60)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 60)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 60)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 60)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 60)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 60)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 61)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 60)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 61)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 61)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 62)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 61)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 62)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 62)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 63)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 62)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 63)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 63)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_timerPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 69)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@objectPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_objectPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 75)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_stringPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@charPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_charPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 88)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 88)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 88)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_boolPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)).operator_or (GALGAS_operators::constructor_prefixNotOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 95)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 95)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 95)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_uintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 101)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 101)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 101)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 101)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 101)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 101)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 101)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 102)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 101)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 102)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 102)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 102)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 102)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 102)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)).operator_or (GALGAS_operators::constructor_incDecOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)).operator_or (GALGAS_operators::constructor_infixAddOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 105)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)).operator_or (GALGAS_operators::constructor_infixSubOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 105)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 105)).operator_or (GALGAS_operators::constructor_infixMulOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 105)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 105)).operator_or (GALGAS_operators::constructor_infixDivOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 105)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 105)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 106)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 105)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 106)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 106)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 107)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 106)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 107)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 107)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_sintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 114)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 114)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 114)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 114)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 114)).operator_or (GALGAS_operators::constructor_prefixMinusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 115)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 114)).operator_or (GALGAS_operators::constructor_prefixMinusOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 115)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 115)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 115)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)).operator_or (GALGAS_operators::constructor_incDecOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)).operator_or (GALGAS_operators::constructor_infixAddOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 118)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)).operator_or (GALGAS_operators::constructor_infixSubOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 118)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 118)).operator_or (GALGAS_operators::constructor_infixMulOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 118)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 118)).operator_or (GALGAS_operators::constructor_infixDivOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 118)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 118)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 118)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 120)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 120)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 120)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_uint_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)).operator_or (GALGAS_operators::constructor_incDecOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)).operator_or (GALGAS_operators::constructor_infixAddOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 130)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)).operator_or (GALGAS_operators::constructor_infixSubOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 130)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 130)).operator_or (GALGAS_operators::constructor_infixMulOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 130)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 130)).operator_or (GALGAS_operators::constructor_infixDivOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 130)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 130)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 131)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 130)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 131)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 131)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 131)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) ;
//---
  return result_result ;
}


