#include "all-declarations-21.h"
//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                    GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                    GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                    GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                    GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                    GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationAST temp_0 = this ;
  const GGS_externTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_key_9579 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 244)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_9579, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 245)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@externTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_externTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_externTypeDeclarationAST temp_0 = this ;
  result = GGS_string ("extern @").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 251)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externTypeDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                              const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                              const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                              const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                              const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_getterMap var_getterMap_10627 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_10627, inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 265)) ;
  }
  GGS_setterMap var_setterMap_10709 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_10752 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_10821 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GGS_externTypeDeclarationAST temp_0 = this ;
  UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ enumerator_10870 (temp_0.readProperty_externTypeInitializerList ()) ;
  while (enumerator_10870.hasCurrentObject ()) {
    GGS__5B_functionSignatureElement_5D_ var_arguments_11030 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_typeNameFormalParameterName_5D_ enumerator_11069 (enumerator_10870.current (HERE)) ;
    while (enumerator_11069.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentTypeEntry_11156 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11069.current (HERE).readProperty_mFormalParameterTypeName (), var_argumentTypeEntry_11156, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 276)) ;
      }
      var_arguments_11030.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_11069.current (HERE).readProperty_mFormalSelector (), var_argumentTypeEntry_11156, enumerator_11069.current (HERE).readProperty_mFormalParameterName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 277)) ;
      enumerator_11069.gotoNextObject () ;
    }
    const GGS_externTypeDeclarationAST temp_1 = this ;
    GGS_lstring var_initializerName_11320 = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (enumerator_10870.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 280)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    var_initializerMap_10821.setter_insertKey (var_initializerName_11320, var_arguments_11030, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 281)) ;
    }
    enumerator_10870.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_2 = this ;
  UpEnumerator__5B_externTypeGetter_5D_ enumerator_11514 (temp_2.readProperty_mExternTypeGetterList ()) ;
  while (enumerator_11514.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_returnedTypeEntry_11598 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11514.current (HERE).readProperty_mResultTypeName (), var_returnedTypeEntry_11598, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 285)) ;
    }
    GGS__5B_functionSignatureElement_5D_ var_arguments_11665 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_typeNameFormalParameterName_5D_ enumerator_11712 (enumerator_11514.current (HERE).readProperty_mParameterList ()) ;
    while (enumerator_11712.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentTypeEntry_11802 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11712.current (HERE).readProperty_mFormalParameterTypeName (), var_argumentTypeEntry_11802, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 289)) ;
      }
      var_arguments_11665.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_11712.current (HERE).readProperty_mFormalSelector (), var_argumentTypeEntry_11802, enumerator_11712.current (HERE).readProperty_mFormalParameterName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 290)) ;
      enumerator_11712.gotoNextObject () ;
    }
    {
    var_getterMap_10627.setter_insertKey (enumerator_11514.current (HERE).readProperty_mGetterName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas4", 295)), var_arguments_11665, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 297)), GGS_bool (true), var_returnedTypeEntry_11598, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas4", 300)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 293)) ;
    }
    enumerator_11514.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_3 = this ;
  UpEnumerator__5B_externTypeSetter_5D_ enumerator_12329 (temp_3.readProperty_mExternTypeSetterList ()) ;
  while (enumerator_12329.hasCurrentObject ()) {
    GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_12399 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalParameterAST_5D_ enumerator_12453 (enumerator_12329.current (HERE).readProperty_mFormalParameterList ()) ;
    while (enumerator_12453.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_12590 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12453.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_12590, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 308)) ;
      }
      var_routineSignature_12399.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_12453.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_12590, enumerator_12453.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_12453.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 312)) ;
      enumerator_12453.gotoNextObject () ;
    }
    {
    var_setterMap_10709.setter_insertKey (enumerator_12329.current (HERE).readProperty_mSetterName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas4", 317)), var_routineSignature_12399, GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas4", 320)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 315)) ;
    }
    enumerator_12329.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_4 = this ;
  UpEnumerator__5B_externTypeMethod_5D_ enumerator_13090 (temp_4.readProperty_mExternTypeMethodList ()) ;
  while (enumerator_13090.hasCurrentObject ()) {
    GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_13125 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalParameterAST_5D_ enumerator_13213 (enumerator_13090.current (HERE).readProperty_mFormalParameterList ()) ;
    while (enumerator_13213.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_13329 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_13213.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_13329, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 328)) ;
      }
      var_routineSignature_13125.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_13213.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_13329, enumerator_13213.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_13213.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 332)) ;
      enumerator_13213.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_10752.setter_insertKey (enumerator_13090.current (HERE).readProperty_mMethodName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas4", 337)), var_routineSignature_13125, enumerator_13090.current (HERE).readProperty_mDeclarationLocation (), GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas4", 341)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 335)) ;
    }
    enumerator_13090.gotoNextObject () ;
  }
  GGS_typeFeatures var_features_13843 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  {
  const GGS_externTypeDeclarationAST temp_5 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_5.readProperty_mExternTypeName (), var_features_13843, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 346)) ;
  }
  const GGS_externTypeDeclarationAST temp_6 = this ;
  const GGS_externTypeDeclarationAST temp_7 = this ;
  const GGS_externTypeDeclarationAST temp_8 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_14098 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_6.readProperty_mExternTypeName (), temp_7.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas4", 359)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-extern.galgas4", 360)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_10821, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_10627, var_setterMap_10709, var_instanceMethodMap_10752, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas4", 371)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_13843, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas4", 377)), GGS_string ("externtype-").add_operation (temp_8.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-extern.galgas4", 378)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 378)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-extern.galgas4", 379)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14098.readProperty_typeName (), var_typeDefinition_14098, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 381)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                             const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                             GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_15871 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 402)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15871, var_nameForUsefulness_15871, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 403)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externTypeDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_15871  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 405)) ;
    }
  }
  const GGS_externTypeDeclarationAST temp_3 = this ;
  UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ enumerator_16149 (temp_3.readProperty_externTypeInitializerList ()) ;
  while (enumerator_16149.hasCurrentObject ()) {
    const GGS_externTypeDeclarationAST temp_4 = this ;
    GGS_lstring var_initializerNameForUsefulness_16186 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mExternTypeName (), extensionGetter_initializerSignature (enumerator_16149.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 411)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 409)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_16186, var_initializerNameForUsefulness_16186, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 413)) ;
    }
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_16186, var_nameForUsefulness_15871 COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 414)) ;
    }
    enumerator_16149.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_5 = this ;
  const GGS_externTypeDeclarationAST temp_6 = this ;
  const GGS_externTypeDeclarationAST temp_7 = this ;
  const GGS_externTypeDeclarationAST temp_8 = this ;
  const GGS_externTypeDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_externTypeDeclarationForGeneration::init_21_infoMessage_21__21__21__21_ (GGS_string ("extern type ").add_operation (temp_5.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 418)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_6.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 419)), temp_7.readProperty_mExternTypeName ().readProperty_string (), temp_8.readProperty_mCppPreDeclarationCode (), temp_9.readProperty_mCppClassCode (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 417)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externTypeDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                            GGS_string & outArgument_outHeader,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_17490 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 441)) ;
  const GGS_externTypeDeclarationForGeneration temp_1 = this ;
  const GGS_externTypeDeclarationForGeneration temp_2 = this ;
  const GGS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_typeGenerationTemplate::class_func_externTypeHeader_31_ (var_selfTypeDefinition_17490.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 444)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 442)) ;
  const GGS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_17490.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 450)), var_selfTypeDefinition_17490.readProperty_isConcrete (), var_selfTypeDefinition_17490.readProperty_initializerMap (), var_selfTypeDefinition_17490.readProperty_classFunctionMap (), var_selfTypeDefinition_17490.readProperty_getterMap (), var_selfTypeDefinition_17490.readProperty_setterMap (), var_selfTypeDefinition_17490.readProperty_instanceMethodMap (), var_selfTypeDefinition_17490.readProperty_classMethodMap (), var_selfTypeDefinition_17490.readProperty_readSubscriptMap (), var_selfTypeDefinition_17490.readProperty_writeSubscriptMap (), var_selfTypeDefinition_17490.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_17490.readProperty_features (), var_selfTypeDefinition_17490.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_17490.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 448)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 448)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'gGenerateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

static GGS_bool onceFunction_gGenerateFewHeaderFiles (Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_gGenerateFewHeaderFiles = false ;
static GGS_bool gOnceFunctionResult_gGenerateFewHeaderFiles ;

//--------------------------------------------------------------------------------------------------

GGS_bool function_gGenerateFewHeaderFiles (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_gGenerateFewHeaderFiles) {
    gOnceFunctionResult_gGenerateFewHeaderFiles = onceFunction_gGenerateFewHeaderFiles (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_gGenerateFewHeaderFiles = true ;
  }
  return gOnceFunctionResult_gGenerateFewHeaderFiles ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_gGenerateFewHeaderFiles (void) {
  gOnceFunctionResult_gGenerateFewHeaderFiles.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_gGenerateFewHeaderFiles (nullptr,
                                                                   releaseOnceFunctionResult_gGenerateFewHeaderFiles) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'gLexicalTypeMap'
//
//--------------------------------------------------------------------------------------------------

static GGS_lexicalTypeMap onceFunction_gLexicalTypeMap (Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeMap result ; // Returned variable
  result = GGS_lexicalTypeMap::init (inCompiler COMMA_HERE) ;
  {
  result.setter_insertKey (GGS_string ("string").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 341)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 341)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 341)) ;
  }
  {
  result.setter_insertKey (GGS_string ("char").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 342)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 342)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 342)) ;
  }
  {
  result.setter_insertKey (GGS_string ("u32").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 343)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 343)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 343)) ;
  }
  {
  result.setter_insertKey (GGS_string ("u64").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 344)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 344)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 344)) ;
  }
  {
  result.setter_insertKey (GGS_string ("s32").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 345)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 345)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 345)) ;
  }
  {
  result.setter_insertKey (GGS_string ("s64").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 346)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 346)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 346)) ;
  }
  {
  result.setter_insertKey (GGS_string ("f64").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 347)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 347)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 347)) ;
  }
  {
  result.setter_insertKey (GGS_string ("bigint").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 348)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 348)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 348)) ;
  }
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_gLexicalTypeMap = false ;
static GGS_lexicalTypeMap gOnceFunctionResult_gLexicalTypeMap ;

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap function_gLexicalTypeMap (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_gLexicalTypeMap) {
    gOnceFunctionResult_gLexicalTypeMap = onceFunction_gLexicalTypeMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_gLexicalTypeMap = true ;
  }
  return gOnceFunctionResult_gLexicalTypeMap ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_gLexicalTypeMap (void) {
  gOnceFunctionResult_gLexicalTypeMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_gLexicalTypeMap (nullptr,
                                                           releaseOnceFunctionResult_gLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap??&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap_3F__3F__26_ (const GGS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                                   const GGS__5B_lexicalAttributeAST_5D_ constinArgument_inLexicalAttributeList,
                                                   GGS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_lexicalAttributeAST_5D_ enumerator_13633 (constinArgument_inLexicalAttributeList) ;
  while (enumerator_13633.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_contains (enumerator_13633.current (HERE).readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 368)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_lexicalTypeEnum var_lexicalType_13817 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_13633.current (HERE).readProperty_mTypeName (), var_lexicalType_13817, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 369)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_13633.current (HERE).readProperty_mName (), var_lexicalType_13817, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 370)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_m_13935 = GGS_string::makeEmptyString () ;
      var_m_13935.plusAssignOperation(GGS_string ("the @").add_operation (enumerator_13633.current (HERE).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 373)).add_operation (GGS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 373)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 373)) ;
      UpEnumerator_lexicalTypeMap enumerator_14071 (constinArgument_inLexicalTypeMap) ;
      while (enumerator_14071.hasCurrentObject ()) {
        var_m_13935.plusAssignOperation(GGS_string (" @").add_operation (enumerator_14071.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 375)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 375)) ;
        enumerator_14071.gotoNextObject () ;
        if (enumerator_14071.hasCurrentObject ()) {
          var_m_13935.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 377)) ;
        }
      }
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_13633.current (HERE).readProperty_mTypeName ().readProperty_location (), var_m_13935, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 379)) ;
    }
    enumerator_13633.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'groupSyntaxComponentsGalgas3??&'
//
//--------------------------------------------------------------------------------------------------

void routine_groupSyntaxComponentsGalgas_33__3F__3F__26_ (const GGS__5B_syntaxComponentAST_5D_ constinArgument_inAllSyntaxComponents,
                                                          const GGS_syntaxExtensions constinArgument_inSyntaxExtensions,
                                                          GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioDeclarationList,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_componentNameSet_1613 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_syntaxComponentAST_5D_ enumerator_1655 (constinArgument_inAllSyntaxComponents) ;
  while (enumerator_1655.hasCurrentObject ()) {
    var_componentNameSet_1613.plusPlusAssignOperation (enumerator_1655.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string ()  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 33)) ;
    GGS__5B_nonterminalDeclarationAST_5D_ var_nonterminalDeclarationList_1751 = enumerator_1655.current (HERE).readProperty_mNonterminalDeclarationList () ;
    GGS__5B_syntaxRuleAST_5D_ var_ruleList_1826 = enumerator_1655.current (HERE).readProperty_mRuleList () ;
    UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ enumerator_1952 (extensionGetter_listForKey (constinArgument_inSyntaxExtensions, enumerator_1655.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 36))) ;
    while (enumerator_1952.hasCurrentObject ()) {
      var_nonterminalDeclarationList_1751.plusAssignOperation(enumerator_1952.current (HERE).readProperty_mNonterminalDeclarationList (), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 37)) ;
      var_ruleList_1826.plusAssignOperation(enumerator_1952.current (HERE).readProperty_mRuleList (), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 38)) ;
      enumerator_1952.gotoNextObject () ;
    }
    ioArgument_ioDeclarationList.plusPlusAssignOperation (GGS_galgas_33_SyntaxComponentAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), enumerator_1655.current (HERE).readProperty_mSyntaxComponentName (), enumerator_1655.current (HERE).readProperty_mImportedLexiqueFilePath (), var_nonterminalDeclarationList_1751, var_ruleList_1826, enumerator_1655.current (HERE).readProperty_mHasTranslateFeature (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 40)) ;
    enumerator_1655.gotoNextObject () ;
  }
  UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ enumerator_2402 (constinArgument_inSyntaxExtensions.readProperty_dictionary ()) ;
  while (enumerator_2402.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_componentNameSet_1613.getter_contains (enumerator_2402.current_key (HERE) COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 51)).operator_not (SOURCE_FILE ("syntaxCompilation.galgas4", 51)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ enumerator_2520 (enumerator_2402.current_value (HERE)) ;
        while (enumerator_2520.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_2520.current (HERE).readProperty_mSyntaxComponentName ().readProperty_location (), GGS_string ("there is no '").add_operation (enumerator_2520.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 53)).add_operation (GGS_string ("' syntax component"), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 53)), fixItArray1  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 53)) ;
          enumerator_2520.gotoNextObject () ;
        }
      }
    }
    enumerator_2402.gotoNextObject () ;
  }
}


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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_1721 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1721, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 30)) ;
  }
  {
  GGS__5B_functionSignatureElement_5D_ temp_0 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 36)) ;
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 35)), inCompiler COMMA_HERE), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_1721 COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 34)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_2471 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2471, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 52)) ;
  }
  GGS_unifiedTypeMapEntry var_t_2558 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_2558, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 53)) ;
  }
  {
  GGS__5B_functionSignatureElement_5D_ temp_0 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 56)) ;
  temp_0.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 56)), var_t_2558, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 56)) ;
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 55)), inCompiler COMMA_HERE), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_2471 COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 54)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_3447 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3447, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 73)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_3472 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_3549 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3549, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 76)) ;
  }
  var_argumentTypeList_3472.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 77)), var_t_3549, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 77)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_3549, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 78)) ;
  }
  var_argumentTypeList_3472.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 79)), var_t_3549, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 79)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 81)), inCompiler COMMA_HERE), var_argumentTypeList_3472, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_3447 COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 80)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_4734 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4734, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 101)) ;
  }
  GGS_unifiedTypeMapEntry var_t_4821 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4821, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 102)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_4858 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argumentTypeList_4858.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 104)), var_t_4821, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 104)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4821, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 105)) ;
  }
  var_argumentTypeList_4858.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 106)), var_t_4821, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 106)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_4821, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 107)) ;
  }
  var_argumentTypeList_4858.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 108)), var_t_4821, constinArgument_inArgument_33_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 108)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (constinArgument_inClassFunctionName.getter_here (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 110)), var_argumentTypeList_4858, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_4734 COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 109)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxSignatureOfInstructionList'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionForGeneration_5D_ function_syntaxSignatureOfInstructionList (const GGS_string & constinArgument_inPosfix,
                                                                                        const GGS__5B_semanticInstructionForGeneration_5D_ & constinArgument_inInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_semanticInstructionForGeneration_5D_ result ; // Returned variable
  result = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_2041 (constinArgument_inInstructionList) ;
  while (enumerator_2041.hasCurrentObject ()) {
    callExtensionMethod_appendSyntaxSignature ((cPtr_semanticInstructionForGeneration *) enumerator_2041.current (HERE).ptr (), constinArgument_inPosfix, result, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 43)) ;
    enumerator_2041.gotoNextObject () ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'compareSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool function_compareSyntaxSignature (const GGS__5B_semanticInstructionForGeneration_5D_ & constinArgument_inReferenceSignature,
                                          const GGS__5B_semanticInstructionForGeneration_5D_ & constinArgument_inTestedSignature,
                                          const GGS_location & constinArgument_inErrorLocation,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_2903 (constinArgument_inReferenceSignature) ;
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_2933 (constinArgument_inTestedSignature) ;
  bool bool_0 = result.isValidAndTrue () ;
  if (enumerator_2903.hasCurrentObject () && enumerator_2933.hasCurrentObject () && bool_0) {
    while (enumerator_2903.hasCurrentObject () && enumerator_2933.hasCurrentObject () && bool_0) {
      result = callExtensionGetter_compareInstructionSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_2903.current (HERE).ptr (), enumerator_2933.current (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 70)) ;
      enumerator_2903.gotoNextObject () ;
      enumerator_2933.gotoNextObject () ;
      if (enumerator_2903.hasCurrentObject () && enumerator_2933.hasCurrentObject ()) {
        bool_0 = result.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = result.operator_and (GGS_bool (ComparisonKind::lowerThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 72)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 72)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_semanticInstructionForGeneration var_instruction_3148 = constinArgument_inTestedSignature.readSubscript__3F_ (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 73)), inCompiler COMMA_HERE) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_syntaxInstructionForGeneration var_si_3220 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3148.ptr ())) ;
        if (nullptr == var_si_3220.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_si_3220.readProperty_mInstructionLocation (), GGS_string ("syntax signature error, exceeding instruction; this branch has more syntax instructions than reference branch"), fixItArray3  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 75)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 78)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = result.operator_and (GGS_bool (ComparisonKind::greaterThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 80)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 80)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 80)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("syntax signature error, missing instruction; this branch has less syntax instructions than reference branch"), fixItArray6  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 81)) ;
        GGS_semanticInstructionForGeneration var_instruction_3756 = constinArgument_inReferenceSignature.readSubscript__3F_ (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 83)), inCompiler COMMA_HERE) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_syntaxInstructionForGeneration var_si_3828 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3756.ptr ())) ;
          if (nullptr == var_si_3828.ptr ()) {
            test_7 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_7) {
            GenericArray <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (var_si_3828.readProperty_mInstructionLocation (), GGS_string ("this is the syntax instruction in reference branch that corresponds to the first missing instruction"), fixItArray8  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 85)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 88)) ;
        }
      }
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_performProjectCreation_3F_ (const GGS_string constinArgument_inProjectPath,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_projectName_2451 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas4", 44)) ;
  GGS_string var_s_31__2503 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_project (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 45)) ;
  var_s_31__2503.method_writeToFile (constinArgument_inProjectPath.add_operation (GGS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 46)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 46)).add_operation (GGS_string (".galgas4project"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 46)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 46)) ;
  GGS_string var_galgas_5F_sources_5F_DIR_2672 = constinArgument_inProjectPath.add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 48)) ;
  var_galgas_5F_sources_5F_DIR_2672.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 49)) ;
  GGS_string var_s_32__2764 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_cocoa (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 50)) ;
  var_s_32__2764.method_writeToFile (var_galgas_5F_sources_5F_DIR_2672.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 51)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 51)).add_operation (GGS_string ("-cocoa.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 51)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 51)) ;
  GGS_string var_s_33__2905 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_grammar (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 52)) ;
  var_s_33__2905.method_writeToFile (var_galgas_5F_sources_5F_DIR_2672.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 53)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 53)).add_operation (GGS_string ("-grammar.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 53)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 53)) ;
  GGS_string var_s_34__3050 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_lexique (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 54)) ;
  var_s_34__3050.method_writeToFile (var_galgas_5F_sources_5F_DIR_2672.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 55)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 55)).add_operation (GGS_string ("-lexique.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 55)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 55)) ;
  GGS_string var_s_36__3195 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_program (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 56)) ;
  var_s_36__3195.method_writeToFile (var_galgas_5F_sources_5F_DIR_2672.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 57)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 57)).add_operation (GGS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 57)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 57)) ;
  GGS_string var_s_37__3339 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_semantics (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 58)) ;
  var_s_37__3339.method_writeToFile (var_galgas_5F_sources_5F_DIR_2672.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 59)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 59)).add_operation (GGS_string ("-semantics.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 59)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 59)) ;
  GGS_string var_s_38__3488 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_syntax (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 60)) ;
  var_s_38__3488.method_writeToFile (var_galgas_5F_sources_5F_DIR_2672.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 61)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 61)).add_operation (GGS_string ("-syntax.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 61)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 61)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_buildOptionValue::class_func_quiet (SOURCE_FILE ("projectCreation.galgas4", 63)).operator_not (SOURCE_FILE ("projectCreation.galgas4", 63)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** DONE ***"), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 64)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_projectCreation_3F_ (const GGS_string constinArgument_inProjectPath,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inProjectPath.getter_count (SOURCE_FILE ("projectCreation.galgas4", 71)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_buildOptionValue::class_func_quiet (SOURCE_FILE ("projectCreation.galgas4", 72)).operator_not (SOURCE_FILE ("projectCreation.galgas4", 72)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          routine_println_3F_ (GGS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 73)).add_operation (GGS_string (" option) ***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 73)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 73)) ;
          }
        }
      }
      GGS_string var_projectName_4147 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas4", 76)) ;
      GGS_bool var_ok_4207 = var_projectName_4147.getter_characterAtIndex (GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 77)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas4", 77)) ;
      GGS_u_33__32_ var_idx_4266 = GGS_u_33__32_ (uint32_t (1U)) ;
      if (var_projectName_4147.getter_count (SOURCE_FILE ("projectCreation.galgas4", 79)).isValid ()) {
        uint32_t variant_4278 = var_projectName_4147.getter_count (SOURCE_FILE ("projectCreation.galgas4", 79)).uintValue () ;
        bool loop_4278 = true ;
        while (loop_4278) {
          loop_4278 = GGS_bool (ComparisonKind::lowerThan, var_idx_4266.objectCompare (var_projectName_4147.getter_count (SOURCE_FILE ("projectCreation.galgas4", 80)))).operator_and (var_ok_4207 COMMA_SOURCE_FILE ("projectCreation.galgas4", 80)).isValid () ;
          if (loop_4278) {
            loop_4278 = GGS_bool (ComparisonKind::lowerThan, var_idx_4266.objectCompare (var_projectName_4147.getter_count (SOURCE_FILE ("projectCreation.galgas4", 80)))).operator_and (var_ok_4207 COMMA_SOURCE_FILE ("projectCreation.galgas4", 80)).boolValue () ;
          }
          if (loop_4278 && (0 == variant_4278)) {
            loop_4278 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas4", 79)) ;
          }
          if (loop_4278) {
            variant_4278 -= 1 ;
            GGS_char var_c_4363 = var_projectName_4147.getter_characterAtIndex (var_idx_4266, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 81)) ;
            var_ok_4207 = var_c_4363.getter_isalnum (SOURCE_FILE ("projectCreation.galgas4", 82)).operator_or (GGS_bool (ComparisonKind::equal, var_c_4363.objectCompare (GGS_char (utf32 (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas4", 82)) ;
            var_idx_4266.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 83)) ;
          }
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_ok_4207.operator_not (SOURCE_FILE ("projectCreation.galgas4", 85)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          routine_println_3F_ (GGS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4147, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 86)).add_operation (GGS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character."), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 87)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 86)) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_ok_4207.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_ok_4207 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas4", 91)).operator_not (SOURCE_FILE ("projectCreation.galgas4", 91)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = var_ok_4207.operator_not (SOURCE_FILE ("projectCreation.galgas4", 92)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              {
              routine_println_3F_ (GGS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 93)).add_operation (GGS_string ("' directory already exists.***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 93)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 93)) ;
              }
            }
          }
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_ok_4207.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          {
          routine_performProjectCreation_3F_ (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 97)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'gCompilerCppName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_gCompilerCppName (Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("inCompiler") ;
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_gCompilerCppName = false ;
static GGS_string gOnceFunctionResult_gCompilerCppName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_gCompilerCppName (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_gCompilerCppName) {
    gOnceFunctionResult_gCompilerCppName = onceFunction_gCompilerCppName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_gCompilerCppName = true ;
  }
  return gOnceFunctionResult_gCompilerCppName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_gCompilerCppName (void) {
  gOnceFunctionResult_gCompilerCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_gCompilerCppName (nullptr,
                                                            releaseOnceFunctionResult_gCompilerCppName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'gSyntaxDirectedTranslationResultVarName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_gSyntaxDirectedTranslationResultVarName (Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("ioSyntaxDirectedTranslationResult") ;
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_gSyntaxDirectedTranslationResultVarName = false ;
static GGS_string gOnceFunctionResult_gSyntaxDirectedTranslationResultVarName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_gSyntaxDirectedTranslationResultVarName (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_gSyntaxDirectedTranslationResultVarName) {
    gOnceFunctionResult_gSyntaxDirectedTranslationResultVarName = onceFunction_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_gSyntaxDirectedTranslationResultVarName = true ;
  }
  return gOnceFunctionResult_gSyntaxDirectedTranslationResultVarName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_gSyntaxDirectedTranslationResultVarName (void) {
  gOnceFunctionResult_gSyntaxDirectedTranslationResultVarName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_gSyntaxDirectedTranslationResultVarName (nullptr,
                                                                                   releaseOnceFunctionResult_gSyntaxDirectedTranslationResultVarName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@galgas3SyntaxComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_SyntaxComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  result = GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 256)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@predefinedTypeAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_predefinedTypeAST::getter_keyRepresentation (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_predefinedTypeAST temp_0 = this ;
  result = GGS_string ("predefined type @").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 262)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@externFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_externFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  result = GGS_string ("extern function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 268)) ;
//---
  return result ;
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
                                                                                                    GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
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
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inExtensionGetterMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 291)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_extensionGetterMapForType var_extensionGetterMapForType_12488 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_12488, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 292)) ;
      UpEnumerator_extensionGetterMapForType enumerator_12542 (var_extensionGetterMapForType_12488) ;
      while (enumerator_12542.hasCurrentObject ()) {
        GGS__5B_functionSignatureElement_5D_ var_formalArgumentList_12609 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_12683 (enumerator_12542.current (HERE).readProperty_mInputFormalParameterList ()) ;
        while (enumerator_12683.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_12793 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12683.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_12793, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 296)) ;
          }
          var_formalArgumentList_12609.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_12683.current (HERE).readProperty_mFormalSelector (), var_typeIndex_12793, enumerator_12683.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_12683.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 297)) ;
          enumerator_12683.gotoNextObject () ;
        }
        GGS_unifiedTypeMapEntry var_returnedType_13084 ;
        {
        extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12542.current (HERE).readProperty_mResultTypeName (), var_returnedType_13084, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 303)) ;
        }
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::equal, enumerator_12542.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 304)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = ioArgument_ioGetterMap.getter_contains (enumerator_12542.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 305)).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                {
                ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 306)), enumerator_12542.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 306)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, enumerator_12542.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 308)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = ioArgument_ioGetterMap.getter_contains (enumerator_12542.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 309)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 310)), enumerator_12542.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 310)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_12542.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas4", 312)))) COMMA_SOURCE_FILE ("semanticContext.galgas4", 312)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                ioArgument_ioGetterMap.setter_insertKey (enumerator_12542.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 315)), var_formalArgumentList_12609, enumerator_12542.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), var_returnedType_13084, GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas4", 320)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 313)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_5) {
              {
              ioArgument_ioGetterMap.setter_insertKey (enumerator_12542.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 326)), var_formalArgumentList_12609, enumerator_12542.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), var_returnedType_13084, enumerator_12542.current (HERE).readProperty_mQualifier (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 324)) ;
              }
            }
          }
        }
        enumerator_12542.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = constinArgument_inExtensionMethodMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 338)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_extensionMethodMapForType var_extensionMethodMapForType_14490 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_14490, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 339)) ;
      UpEnumerator_extensionMethodMapForType enumerator_14544 (var_extensionMethodMapForType_14490) ;
      while (enumerator_14544.hasCurrentObject ()) {
        GGS__5B_formalParameterSignatureElement_5D_ var_formalArgumentList_14583 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_formalParameterAST_5D_ enumerator_14681 (enumerator_14544.current (HERE).readProperty_mFormalParameterList ()) ;
        while (enumerator_14681.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_14818 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_14681.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_14818, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 343)) ;
          }
          var_formalArgumentList_14583.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_14681.current (HERE).readProperty_mFormalSelector (), var_typeIndex_14818, enumerator_14681.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_14681.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 347)) ;
          enumerator_14681.gotoNextObject () ;
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::equal, enumerator_14544.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 353)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              test_8 = ioArgument_ioInstanceMethodMap.getter_contains (enumerator_14544.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 354)).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 355)), enumerator_14544.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 355)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, enumerator_14544.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 357)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = ioArgument_ioInstanceMethodMap.getter_contains (enumerator_14544.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 358)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  {
                  ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 359)), enumerator_14544.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 359)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_14544.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas4", 361)))) COMMA_SOURCE_FILE ("semanticContext.galgas4", 361)).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                {
                ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_14544.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 364)), var_formalArgumentList_14583, enumerator_14544.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas4", 368)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 362)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              {
              ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_14544.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 374)), var_formalArgumentList_14583, enumerator_14544.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), enumerator_14544.current (HERE).readProperty_mQualifier (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 372)) ;
              }
            }
          }
        }
        enumerator_14544.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = constinArgument_inExtensionSetterMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 385)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_extensionSetterMapForType var_extensionSetterMapForType_16379 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_16379, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 386)) ;
      UpEnumerator_extensionSetterMapForType enumerator_16433 (var_extensionSetterMapForType_16379) ;
      while (enumerator_16433.hasCurrentObject ()) {
        GGS__5B_formalParameterSignatureElement_5D_ var_formalArgumentList_16507 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_formalParameterAST_5D_ enumerator_16571 (enumerator_16433.current (HERE).readProperty_mFormalParameterList ()) ;
        while (enumerator_16571.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_16666 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16571.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_16666, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 390)) ;
          }
          var_formalArgumentList_16507.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_16571.current (HERE).readProperty_mFormalSelector (), var_typeIndex_16666, enumerator_16571.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_16571.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 391)) ;
          enumerator_16571.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_16433.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 399)), var_formalArgumentList_16507, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas4", 402)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 397)) ;
        }
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          test_13 = constinArgument_inAcceptSetters.operator_not (SOURCE_FILE ("semanticContext.galgas4", 405)).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_16433.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a class does not accept any mutating proc; use proc instead"), fixItArray14  COMMA_SOURCE_FILE ("semanticContext.galgas4", 406)) ;
          }
        }
        enumerator_16433.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = constinArgument_inExtensionInitializerMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 411)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_extensionInitializerMapForType var_initializerMapForType_17458 ;
      constinArgument_inExtensionInitializerMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_initializerMapForType_17458, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 412)) ;
      UpEnumerator_extensionInitializerMapForType enumerator_17504 (var_initializerMapForType_17458) ;
      while (enumerator_17504.hasCurrentObject ()) {
        GGS__5B_functionSignatureElement_5D_ var_formalArgumentList_17567 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_17624 (enumerator_17504.current (HERE).readProperty_mFormalParameterList ()) ;
        while (enumerator_17624.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_17716 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17624.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_17716, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 416)) ;
          }
          var_formalArgumentList_17567.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_17624.current (HERE).readProperty_mFormalSelector (), var_typeIndex_17716, enumerator_17624.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_17624.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 417)) ;
          enumerator_17624.gotoNextObject () ;
        }
        {
        ioArgument_ioInitializerMap.setter_insertKey (enumerator_17504.current (HERE).readProperty_lkey (), var_formalArgumentList_17567, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 419)) ;
        }
        enumerator_17504.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externFunctionDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_functionSignatureElement_5D_ var_functionSignature_18829 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_18901 (temp_0.readProperty_mFormalArgumentList ()) ;
  while (enumerator_18901.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_18988 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18901.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_18988, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 439)) ;
    }
    var_functionSignature_18829.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_18901.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_18988, enumerator_18901.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), enumerator_18901.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 440)) ;
    enumerator_18901.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_resultTypeIndex_19216 ;
  {
  const GGS_externFunctionDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mResultTypeName (), var_resultTypeIndex_19216, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 443)) ;
  }
  {
  const GGS_externFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_2.readProperty_mFunctionName (), var_functionSignature_18829, var_resultTypeIndex_19216, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 445)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3SyntaxComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                  GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_2 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (temp_0.readProperty_mSyntaxComponentName (), temp_1.readProperty_mLexiqueName (), temp_2.readProperty_mNonterminalDeclarationList (), temp_3.readProperty_mRuleList (), temp_4.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 464)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3GrammarComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                   const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                   const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                   const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_grammarLabelMap var_grammarLabelMap_21063 = GGS_grammarLabelMap::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  UpEnumerator__5B_nonTerminalLabelAST_5D_ enumerator_21116 (temp_0.readProperty_mStartSymbolLabelList ()) ;
  while (enumerator_21116.hasCurrentObject ()) {
    GGS__5B_formalParameterSignatureElement_5D_ var_formalArgumentList_21210 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalParameterAST_5D_ enumerator_21270 (enumerator_21116.current (HERE).readProperty_mFormalArgumentList ()) ;
    while (enumerator_21270.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentType_21359 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21270.current (HERE).readProperty_mFormalArgumentTypeName (), var_argumentType_21359, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 490)) ;
      }
      var_formalArgumentList_21210.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_21270.current (HERE).readProperty_mFormalSelector (), var_argumentType_21359, enumerator_21270.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_21270.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 491)) ;
      enumerator_21270.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_21063.setter_insertKey (enumerator_21116.current (HERE).readProperty_mLabelName (), var_formalArgumentList_21210, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 497)) ;
    }
    enumerator_21116.gotoNextObject () ;
  }
  {
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  ioArgument_ioSemanticContext.mProperty_mGrammarMap.setter_insertGrammar (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_21063, temp_2.readProperty_mHasIndexing ().readProperty_bool (), temp_3.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 503)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externFunctionDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas4", 535)) ;
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
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_1754 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_1754, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 31)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_1814 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_1814.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 33)), var_argumentTypeIndex_1754, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas4", 33)), constinArgument_inInputArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 33)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 35)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas4", 36)), var_argList_1814, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas4", 39)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 34)) ;
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
  GGS_unifiedTypeMapEntry var_outputArgumentTypeIndex_2706 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inOutputArgumentTypeName, var_outputArgumentTypeIndex_2706, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 54)) ;
  }
  GGS_unifiedTypeMapEntry var_inputArgumentTypeIndex_2803 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_inputArgumentTypeIndex_2803, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 55)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_2868 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_2868.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 57)), var_outputArgumentTypeIndex_2706, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticsSetters.galgas4", 57)), constinArgument_inOutputArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 57)) ;
  var_argList_2868.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 58)), var_inputArgumentTypeIndex_2803, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas4", 58)), constinArgument_inInputArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 58)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 60)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas4", 61)), var_argList_2868, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas4", 64)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 59)) ;
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
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_3796 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_3900 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex_3900, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 80)) ;
  }
  var_argList_3796.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 81)), var_argumentTypeIndex_3900, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas4", 81)), constinArgument_inInputArgument_31_Name, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 81)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex_3900, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 82)) ;
  }
  var_argList_3796.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 83)), var_argumentTypeIndex_3900, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas4", 83)), constinArgument_inInputArgument_32_Name, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 83)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 85)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas4", 86)), var_argList_3796, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas4", 89)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 84)) ;
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
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 100)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas4", 101)), GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas4", 104)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 99)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis!'
//
//--------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis_21_ (GGS_stringset & outArgument_outUnicodeTestFunctions,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnicodeTestFunctions.drop () ; // Release 'out' argument
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas4", 31)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas4", 31)) ;
  outArgument_outUnicodeTestFunctions = temp_0 ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_routineMangledName (const GGS_lstring & constinArgument_inRoutineName,
                                         const GGS__5B_formalParameterSignatureElement_5D_ & constinArgument_inRoutineFormalParameters,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  GGS_string var_str_1483 = constinArgument_inRoutineName.readProperty_string () ;
  UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_1529 (constinArgument_inRoutineFormalParameters) ;
  while (enumerator_1529.hasCurrentObject ()) {
    switch (enumerator_1529.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        var_str_1483.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 29)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        var_str_1483.plusAssignOperation(GGS_string ("&"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 31)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        var_str_1483.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 33)) ;
      }
      break ;
    }
    var_str_1483.plusAssignOperation(enumerator_1529.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 35)) ;
    enumerator_1529.gotoNextObject () ;
  }
  result = GGS_lstring::init_21__21_ (var_str_1483, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'routineArgumentFromFormalParameters'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_routineArgumentFromFormalParameters (const GGS__5B_formalParameterSignatureElement_5D_ & constinArgument_inRoutineFormalParameters,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("(") ;
  UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_2110 (constinArgument_inRoutineFormalParameters) ;
  while (enumerator_2110.hasCurrentObject ()) {
    switch (enumerator_2110.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        result.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 48)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        result.plusAssignOperation(GGS_string ("!\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 50)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        result.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 52)) ;
      }
      break ;
    }
    result.plusAssignOperation(enumerator_2110.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 54)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 54)) ;
    enumerator_2110.gotoNextObject () ;
    if (enumerator_2110.hasCurrentObject ()) {
      result.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 56)) ;
    }
  }
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 58)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3SyntaxComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GGS_lstring var_key_14674 = GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 346)), temp_1.readProperty_mSyntaxComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_SyntaxComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_14674, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 347)) ;
  }
  {
  const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_14674, GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 348)), temp_4.readProperty_mLexiqueName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 348)) ;
  }
  const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_14968 (temp_5.readProperty_mRuleList ()) ;
  while (enumerator_14968.hasCurrentObject ()) {
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_15007 (enumerator_14968.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_15007.hasCurrentObject ()) {
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_15050 (enumerator_15007.current (HERE).readProperty_mFormalArguments ()) ;
      while (enumerator_15050.hasCurrentObject ()) {
        switch (enumerator_15050.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_14674, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_15050.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 353)), enumerator_15050.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 353)) ;
            }
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          break ;
        }
        enumerator_15050.gotoNextObject () ;
      }
      enumerator_15007.gotoNextObject () ;
    }
    enumerator_14968.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                              GGS_string & outArgument_outHeader,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarForGeneration temp_0 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_2319 (temp_0.readProperty_mSyntaxComponents ()) ;
  while (enumerator_2319.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("syntax-").add_operation (enumerator_2319.current (HERE).readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 44)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 44))  COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 44)) ;
    enumerator_2319.gotoNextObject () ;
  }
  const GGS_grammarForGeneration temp_1 = this ;
  const GGS_grammarForGeneration temp_2 = this ;
  const GGS_grammarForGeneration temp_3 = this ;
  const GGS_grammarForGeneration temp_4 = this ;
  const GGS_grammarForGeneration temp_5 = this ;
  const GGS_grammarForGeneration temp_6 = this ;
  const GGS_grammarForGeneration temp_7 = this ;
  outArgument_outHeader = GGS_grammarGenerationTemplate::class_func_grammarZone_33_HeaderGalgas_33_ (temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 47)), temp_2.readProperty_mNonTerminalMapForGrammarAnalysis (), temp_3.readProperty_mNonTerminalToAddList (), temp_4.readProperty_mStartSymbolName (), temp_5.readProperty_mHasTranslateFeature (), temp_6.readProperty_mGrammarName (), temp_7.readProperty_mSyntaxComponents (), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 46)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_string & outArgument_outImplementation,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 62)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 62))  COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 62)) ;
  const GGS_grammarForGeneration temp_1 = this ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3191 (temp_1.readProperty_mNonTerminalMapForGrammarAnalysis ()) ;
  while (enumerator_3191.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_3280 (enumerator_3191.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_3280.hasCurrentObject ()) {
      UpEnumerator__5B_signatureElementForGrammarAnalysis_5D_ enumerator_3364 (enumerator_3280.current (HERE).readProperty_mFormalParametersList ()) ;
      while (enumerator_3364.hasCurrentObject ()) {
        switch (enumerator_3364.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            GGS_unifiedTypeMapEntry var_t_3525 = extensionGetter_typeMapEntryForLKey (constinArgument_inUnifiedTypeMap, enumerator_3364.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 68)) ;
            extensionMethod_addHeaderFileName (var_t_3525, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 69)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_3364.gotoNextObject () ;
      }
      enumerator_3280.gotoNextObject () ;
    }
    enumerator_3191.gotoNextObject () ;
  }
  const GGS_grammarForGeneration temp_2 = this ;
  const GGS_grammarForGeneration temp_3 = this ;
  const GGS_grammarForGeneration temp_4 = this ;
  const GGS_grammarForGeneration temp_5 = this ;
  const GGS_grammarForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_grammarGenerationTemplate::class_func_grammarImplementation (temp_2.readProperty_mGrammarName (), temp_3.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 79)), temp_4.readProperty_mTemplateUnicodeStringToGenerate (), temp_5.readProperty_mTemplateReplacementList (), temp_6.readProperty_mCppFileContents (), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 77)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_grammarForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_grammarForGeneration temp_0 = this ;
  result = GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 89)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 89)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_grammarForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_grammarForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 101)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_grammarForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalOrExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalOrExpressionAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  result = callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 37)) ;
  result.plusAssignOperation(GGS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 38)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 39)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 39)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterIntervalMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
  result = GGS_string ("self.testForInputFromChar (") ;
  const GGS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_u_33__32_ (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 49)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 49)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 49)) ;
  result.plusAssignOperation(GGS_string (", toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 50)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_u_33__32_ (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 51)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 51)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 51)) ;
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 52)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStringMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalStringMatchAST temp_0 = this ;
  result = GGS_string ("self.testForInputString (").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 60)) ;
  result.plusAssignOperation(GGS_string (", advance: true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 61)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStringNotMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringNotMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("self.notTestForInputString (") ;
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  result.plusAssignOperation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 70)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 70)) ;
  result.plusAssignOperation(GGS_string (", error: &scanningOk)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 71)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("self.testForInputChar (") ;
  const GGS_lexicalCharacterMatchAST temp_0 = this ;
  result.plusAssignOperation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_u_33__32_ (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 80)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 80)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 80)) ;
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 81)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterSetMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterSetMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalCharacterSetMatchAST temp_0 = this ;
  result = GGS_string ("self.testForChar_").add_operation (temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 88)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 88)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalAttributeInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result = GGS_string ("mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 101)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result = temp_0.readProperty_mCharacter ().readProperty_char ().getter_u_33__32_ (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 108)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 108)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalUnsignedInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 114)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCurrentCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("self.previousChar") ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalFunctionInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result = GGS_string ("scanner_cocoa_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 128)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 128)) ;
  const GGS_lexicalFunctionInputArgumentAST temp_1 = this ;
  UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ enumerator_5644 (temp_1.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_5644.hasCurrentObject ()) {
    result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_5644.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 130)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 130)) ;
    enumerator_5644.gotoNextObject () ;
    if (enumerator_5644.hasCurrentObject ()) {
      result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 131)) ;
    }
  }
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 133)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSendTerminalByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GGS_string constinArgument_inScannerClassName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 147)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 147)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 147)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 147)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 147)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalErrorByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                    Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("scanningOk = false\n") ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalImplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalImplicitRuleAST::getter_generateSwiftCocoaCode (const GGS_string constinArgument_inScannerClassName,
                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  GGS_sortedTokenArray var_tokenSortedList_7531 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_7522 ; // Joker input parameter
  GGS_bool joker_7548 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_7522, var_tokenSortedList_7531, joker_7548, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 173)) ;
  result = GGS_string::makeEmptyString () ;
  DownEnumerator_sortedTokenArray enumerator_7583 (var_tokenSortedList_7531) ;
  while (enumerator_7583.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if scanningOk && self.testForInputString ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 176)) ;
    result.plusAssignOperation(enumerator_7583.current (HERE).readProperty_mName ().getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 177)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 177)) ;
    result.plusAssignOperation(GGS_string (", advance: true) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 178)) ;
    result.plusAssignOperation(GGS_string ("  tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 179)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 179)).add_operation (enumerator_7583.current (HERE).readProperty_mTerminalName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 179)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 179)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 179)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 179)) ;
    result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 180)) ;
    enumerator_7583.gotoNextObject () ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalExplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalExplicitRuleAST::getter_generateSwiftCocoaCode (const GGS_string constinArgument_inScannerClassName,
                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("if scanningOk && (") ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 191)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 191)) ;
  result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 192)) ;
  {
  result.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 193)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_8368 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_8368.hasCurrentObject ()) {
    result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8368.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 195)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 195)) ;
    enumerator_8368.gotoNextObject () ;
  }
  {
  result.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 197)) ;
  }
  result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 198)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction?&&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (const GGS__5B_templateInstructionForGeneration_5D_ constinArgument_inInstructionList,
                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GGS_bool & ioArgument_ioUseColumnMarker,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_templateInstructionForGeneration_5D_ enumerator_1918 (constinArgument_inInstructionList) ;
  while (enumerator_1918.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((cPtr_templateInstructionForGeneration *) enumerator_1918.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 33)) ;
    enumerator_1918.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionStringForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                 GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                 GGS_bool & /* ioArgument__5F_ioUseColumnMarker */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendString (").add_operation (temp_0.readProperty_mTemplateString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("templateCodeGeneration.galgas4", 51)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 51)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 51)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 51)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateBlockInstructionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_indendationVarCppName_3119 ;
  const GGS_templateBlockInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_3119, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 63)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_3119, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 64)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 64)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 64)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (int32_t (").add_operation (var_indendationVarCppName_3119, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 65)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 65)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 65)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 66)) ;
  {
  const GGS_templateBlockInstructionForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 67)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_3119, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 75)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 75)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 75)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (- int32_t (").add_operation (var_indendationVarCppName_3119, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 76)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 76)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 76)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 77)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                            GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                            GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                            GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                            GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 89)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                             GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                             GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                             GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 101)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionIfForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionIfForGeneration temp_0 = this ;
  UpEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ enumerator_5361 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_5361.hasCurrentObject ()) {
    GGS_string var_ifVarCppName_5614 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_5361.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_5614, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 114)) ;
    GGS_string var_testVar_5641 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas4", 121)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 121)) ;
    ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 122)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GalgasBool ").add_operation (var_testVar_5641, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 123)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 123)).add_operation (var_ifVarCppName_5614, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 123)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 123)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 123)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_testVar_5641, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 124)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 124)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 124)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolTrue : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 125)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 126)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_5361.current (HERE).readProperty_mInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 127)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 135)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 136)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolFalse : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 137)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 138)) ;
    }
    enumerator_5361.gotoNextObject () ;
  }
  {
  const GGS_templateInstructionIfForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 141)) ;
  }
  const GGS_templateInstructionIfForGeneration temp_2 = this ;
  UpEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ enumerator_6664 (temp_2.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_6664.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 150)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  } break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 151)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolNotValid :\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 152)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 153)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 154)) ;
    enumerator_6664.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionForeachAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_6544 ;
  const GGS_templateInstructionForeachAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_6544, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 190)) ;
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_6664 = extensionGetter_definition (var_expression_6544.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 198)).readProperty_enumerationDescriptorList () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_enumerationDescriptor_6664.getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 199)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_6544.readProperty_mLocation (), GGS_string ("expression of '@").add_operation (extensionGetter_definition (var_expression_6544.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 200)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 200)).add_operation (GGS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 200)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 200)) ;
    }
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_beforeInstructionList_6960 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_3 = this ;
  routine_templateInstructionListAnalysis_5F_EX_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_6960, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 204)) ;
  }
  const GGS_templateInstructionForeachAST temp_4 = this ;
  GGS_string var_enumeratorCppName_7258 = GGS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 213)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 213)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 213)) ;
  GGS_templateVariableMap var_doVariableMap_7357 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GGS_templateInstructionForeachAST temp_5 = this ;
  const GGS_templateInstructionForeachAST temp_6 = this ;
  GGS_string var_cppIndexVarName_7418 = GGS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 215)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 215)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 215)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 215)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas4", 216)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 216)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_templateInstructionForeachAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      {
      const GGS_templateInstructionForeachAST temp_9 = this ;
      var_doVariableMap_7357.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_7418, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 218)) ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_templateInstructionForeachAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 220)).objectCompare (var_enumerationDescriptor_6664.getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 220)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_templateInstructionForeachAST temp_12 = this ;
      const GGS_templateInstructionForeachAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfProperties (), var_enumerationDescriptor_6664.getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 222)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 222)).add_operation (GGS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 222)).add_operation (temp_13.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 223)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 222)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 222)).add_operation (GGS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 223)), fixItArray14  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 221)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    const GGS_templateInstructionForeachAST temp_15 = this ;
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_7980 (var_enumerationDescriptor_6664) ;
    UpEnumerator__5B_lstring_5D_ enumerator_8017 (temp_15.readProperty_mEnumeration ()) ;
    while (enumerator_7980.hasCurrentObject () && enumerator_8017.hasCurrentObject ()) {
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::notEqual, enumerator_8017.current (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          {
          var_doVariableMap_7357.setter_insertKey (enumerator_8017.current (HERE), enumerator_7980.current (HERE).readProperty_mEnumeratedType (), var_enumeratorCppName_7258.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 230)).add_operation (enumerator_7980.current (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 230)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 227)) ;
          }
        }
      }
      enumerator_7980.gotoNextObject () ;
      enumerator_8017.gotoNextObject () ;
    }
  }
  GGS_templateAnalysisContext var_doAnalysisContext_8321 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_7357, inCompiler COMMA_HERE) ;
  GGS__5B_templateInstructionForGeneration_5D_ var_doInstructionList_8473 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_17 = this ;
  routine_templateInstructionListAnalysis_5F_EX_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_8321, ioArgument_ioTypeMap, temp_17.readProperty_mDoInstructionList (), var_doInstructionList_8473, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 240)) ;
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_betweenInstructionList_8764 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_18 = this ;
  routine_templateInstructionListAnalysis_5F_EX_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_18.readProperty_mBetweenInstructionList (), var_betweenInstructionList_8764, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 250)) ;
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_afterInstructionList_9068 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_19 = this ;
  routine_templateInstructionListAnalysis_5F_EX_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_19.readProperty_mAfterInstructionList (), var_afterInstructionList_9068, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 260)) ;
  }
  const GGS_templateInstructionForeachAST temp_20 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionForeachForGeneration::init_21__21__21__21__21__21__21__21_ (temp_20.readProperty_mIsAscending (), var_expression_6544, var_enumeratorCppName_7258, var_beforeInstructionList_6960, var_doInstructionList_8473, var_cppIndexVarName_7418, var_betweenInstructionList_8764, var_afterInstructionList_9068, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 269)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionForeachForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_foreachVarCppName_10870 ;
  const GGS_templateInstructionForeachForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_10870, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 305)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateInstructionForeachForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 307)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionForeachForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_u_33__32_ ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 308)).add_operation (GGS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 308)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 308)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_foreachVarCppName_10870, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 311)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 311)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 311)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 312)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_mIsAscending ().boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string ("Up") ;
  }else if (GalgasBool::boolFalse == test_6) {
    temp_5 = GGS_string ("Down") ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_5, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 313)) ;
  const GGS_templateInstructionForeachForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("Enumerator_").add_operation (extensionGetter_identifierRepresentation (temp_7.readProperty_mExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 314)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 314)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 314)) ;
  const GGS_templateInstructionForeachForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (temp_8.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)).add_operation (var_foreachVarCppName_10870, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_templateInstructionForeachForGeneration temp_10 = this ;
    const GGS_templateInstructionForeachForGeneration temp_11 = this ;
    test_9 = GGS_bool (ComparisonKind::greaterThan, temp_10.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 317)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 317)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 317)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_templateInstructionForeachForGeneration temp_12 = this ;
      const GGS_templateInstructionForeachForGeneration temp_13 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)).add_operation (GGS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_templateInstructionForeachForGeneration temp_15 = this ;
    test_14 = GGS_bool (ComparisonKind::greaterThan, temp_15.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 320)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_templateInstructionForeachForGeneration temp_16 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 321)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 321)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 321)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 322)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_17 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 323)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 331)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 332)) ;
    }
  }
  const GGS_templateInstructionForeachForGeneration temp_18 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 334)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 334)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 334)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 335)) ;
  }
  {
  const GGS_templateInstructionForeachForGeneration temp_19 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 337)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_20 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_20.readProperty_mEnumeratorCppName ().add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 346)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 346)) ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_templateInstructionForeachForGeneration temp_22 = this ;
    test_21 = GGS_bool (ComparisonKind::greaterThan, temp_22.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 348)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_templateInstructionForeachForGeneration temp_23 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (temp_23.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 349)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 349)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 349)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 350)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_24 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_24.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 351)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 359)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 360)) ;
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    const GGS_templateInstructionForeachForGeneration temp_26 = this ;
    test_25 = GGS_bool (ComparisonKind::greaterThan, temp_26.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 363)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_templateInstructionForeachForGeneration temp_27 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_27.readProperty_mIndexCppName ().add_operation (GGS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 364)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 364)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 366)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 367)) ;
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    const GGS_templateInstructionForeachForGeneration temp_29 = this ;
    test_28 = GGS_bool (ComparisonKind::greaterThan, temp_29.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 369)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      const GGS_templateInstructionForeachForGeneration temp_30 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 370)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 370)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 370)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 371)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_31 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 372)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 380)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 381)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 384)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 385)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateStringEx&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateStringEx_26_ (GGS__5B_templateInstructionAST_5F_EX_5D_ & ioArgument_outResultingInstructionList,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_21237 = GGS_string::class_func_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 575)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_s_21237.getter_count (SOURCE_FILE ("templateSyntax.galgas4", 576)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_outResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionStringAST_5F_EX::init_21_ (var_s_21237, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 577)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateGetterCallInExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_receiverExpression_3357 ;
  const GGS_templateGetterCallInExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_receiverExpression_3357, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 66)) ;
  GGS_unifiedTypeMapEntry var_receiverType_3407 = var_receiverExpression_3357.readProperty_mResultType () ;
  GGS_string var_receiverTypeName_3459 = extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 74)).readProperty_typeName ().readProperty_string () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_bool test_2 = extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 76)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas4", 76)) ;
    if (GalgasBool::boolTrue != test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 76)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas4", 76)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateGetterCallInExpressionAST temp_3 = this ;
      test_1 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 77)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_templateGetterCallInExpressionAST temp_4 = this ;
        test_1 = extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 78)).readProperty_propertyMap ().getter_contains (temp_4.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 78)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_templateGetterCallInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead of func call"), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 79)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_getterMap var_getterMap_3929 = extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 82)).readProperty_getterMap () ;
    GGS__5B_functionSignatureElement_5D_ var_getterFormalArgumentTypeList_4037 ;
    GGS_methodKind var_kind_4086 ;
    GGS_bool var_hasCompilerArgument_4105 ;
    GGS_unifiedTypeMapEntry var_returnedType_4154 ;
    GGS__5B_string_5D_ var_fieldList_4175 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
    const GGS_templateGetterCallInExpressionAST temp_7 = this ;
    GGS_string var_actualGetterName_4208 = temp_7.readProperty_mGetterName ().readProperty_string () ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_templateGetterCallInExpressionAST temp_9 = this ;
      test_8 = var_getterMap_3929.getter_contains (temp_9.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 90)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GGS_string var_actualGetterNameString_4497 ;
        const GGS_templateGetterCallInExpressionAST temp_10 = this ;
        GGS_location joker_4415 ; // Joker input parameter
        GGS_methodQualifier joker_4480 ; // Joker input parameter
        var_getterMap_3929.method_searchKey (temp_10.readProperty_mGetterName (), var_kind_4086, var_getterFormalArgumentTypeList_4037, joker_4415, var_hasCompilerArgument_4105, var_returnedType_4154, joker_4480, var_actualGetterNameString_4497, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 91)) ;
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, var_actualGetterNameString_4497.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_templateGetterCallInExpressionAST temp_12 = this ;
            GenericArray <FixItDescription> fixItArray13 ;
            appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, var_actualGetterName_4208) ;
            inCompiler->emitSemanticError (temp_12.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 101)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GGS_u_33__32_ var_matchingReaderCount_4688 = GGS_u_33__32_ (uint32_t (0U)) ;
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 105)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas4", 105)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          var_getterFormalArgumentTypeList_4037 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
          var_hasCompilerArgument_4105 = GGS_bool (true) ;
          var_returnedType_4154 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("templateAnalysis.galgas4", 108)) ;
          var_kind_4086 = GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas4", 109)) ;
          UpEnumerator__5B_typedProperty_5D_ enumerator_5006 (extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 110)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_5006.hasCurrentObject ()) {
            GGS_getterMap var_aMap_5059 = extensionGetter_definition (enumerator_5006.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 111)).readProperty_getterMap () ;
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              const GGS_templateGetterCallInExpressionAST temp_16 = this ;
              const GGS_getterMap_2E_element var_entry_5123 = var_aMap_5059.readSubscript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
              if (!var_aMap_5059.readSubscript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
                test_15 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_15) {
                var_matchingReaderCount_4688.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 113)) ;
                var_getterFormalArgumentTypeList_4037 = var_entry_5123.readProperty_mArgumentTypeList () ;
                var_hasCompilerArgument_4105 = var_entry_5123.readProperty_mHasCompilerArgument () ;
                var_returnedType_4154 = var_entry_5123.readProperty_mReturnedType () ;
                var_kind_4086 = var_entry_5123.readProperty_mKind () ;
                GalgasBool test_17 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_17) {
                  test_17 = GGS_bool (ComparisonKind::notEqual, var_entry_5123.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_17) {
                    var_actualGetterName_4208 = var_entry_5123.readProperty_mGetterNameThatObsoletesInvokationName () ;
                  }
                }
                var_fieldList_4175.plusPlusAssignOperation (enumerator_5006.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 121)) ;
              }
            }
            enumerator_5006.gotoNextObject () ;
          }
          GalgasBool test_18 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_18) {
            test_18 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_4688.objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
              const GGS_templateGetterCallInExpressionAST temp_19 = this ;
              const GGS_templateGetterCallInExpressionAST temp_20 = this ;
              GenericArray <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_19.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 126)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 126)).add_operation (temp_20.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 126)).add_operation (GGS_string ("' func, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 126)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 125)) ;
              var_getterFormalArgumentTypeList_4037.drop () ; // Release error dropped variable
              var_hasCompilerArgument_4105.drop () ; // Release error dropped variable
              var_returnedType_4154.drop () ; // Release error dropped variable
              var_kind_4086.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_18) {
            GalgasBool test_22 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_22) {
              test_22 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_4688.objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_22) {
                GGS_string var_s_6035 = GGS_string::makeEmptyString () ;
                UpEnumerator__5B_string_5D_ enumerator_6065 (var_fieldList_4175) ;
                while (enumerator_6065.hasCurrentObject ()) {
                  var_s_6035.plusAssignOperation(enumerator_6065.current (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 132)) ;
                  enumerator_6065.gotoNextObject () ;
                  if (enumerator_6065.hasCurrentObject ()) {
                    var_s_6035.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 133)) ;
                  }
                }
                const GGS_templateGetterCallInExpressionAST temp_23 = this ;
                const GGS_templateGetterCallInExpressionAST temp_24 = this ;
                GenericArray <FixItDescription> fixItArray25 ;
                inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 136)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 136)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 136)).add_operation (GGS_string ("' func, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 136)).add_operation (var_s_6035, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 137)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 137)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 135)) ;
                var_getterFormalArgumentTypeList_4037.drop () ; // Release error dropped variable
                var_hasCompilerArgument_4105.drop () ; // Release error dropped variable
                var_returnedType_4154.drop () ; // Release error dropped variable
                var_kind_4086.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        GalgasBool test_26 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_26) {
          test_26 = GGS_bool (ComparisonKind::equal, var_getterMap_3929.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 140)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_26) {
            const GGS_templateGetterCallInExpressionAST temp_27 = this ;
            GenericArray <FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 142)).add_operation (GGS_string ("' type does not define any func"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 142)), fixItArray28  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 141)) ;
            var_getterFormalArgumentTypeList_4037.drop () ; // Release error dropped variable
            var_hasCompilerArgument_4105.drop () ; // Release error dropped variable
            var_returnedType_4154.drop () ; // Release error dropped variable
            var_kind_4086.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_26) {
          const GGS_templateGetterCallInExpressionAST temp_29 = this ;
          const GGS_templateGetterCallInExpressionAST temp_30 = this ;
          GenericArray <FixItDescription> fixItArray31 ;
          appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, var_getterMap_3929.getter_keyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 148))) ;
          inCompiler->emitSemanticError (temp_29.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 146)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 146)).add_operation (temp_30.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 146)).add_operation (GGS_string ("' func"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 146)), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 145)) ;
          var_getterFormalArgumentTypeList_4037.drop () ; // Release error dropped variable
          var_hasCompilerArgument_4105.drop () ; // Release error dropped variable
          var_returnedType_4154.drop () ; // Release error dropped variable
          var_kind_4086.drop () ; // Release error dropped variable
        }
      }
    }
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      const GGS_templateGetterCallInExpressionAST temp_33 = this ;
      test_32 = GGS_bool (ComparisonKind::notEqual, temp_33.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 152)).objectCompare (var_getterFormalArgumentTypeList_4037.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 152)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        const GGS_templateGetterCallInExpressionAST temp_34 = this ;
        const GGS_templateGetterCallInExpressionAST temp_35 = this ;
        const GGS_templateGetterCallInExpressionAST temp_36 = this ;
        GenericArray <FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (temp_34.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_35.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)).add_operation (GGS_string ("' func of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)).add_operation (var_receiverTypeName_3459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)).add_operation (var_getterFormalArgumentTypeList_4037.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 154)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 154)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 154)).add_operation (temp_36.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 155)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 155)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 154)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 155)), fixItArray37  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_32) {
      GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_7445 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_templateGetterCallInExpressionAST temp_38 = this ;
      UpEnumerator__5B_templateExpressionElementAST_5D_ enumerator_7510 (temp_38.readProperty_mExpressionList ()) ;
      UpEnumerator__5B_functionSignatureElement_5D_ enumerator_7537 (var_getterFormalArgumentTypeList_4037) ;
      while (enumerator_7510.hasCurrentObject () && enumerator_7537.hasCurrentObject ()) {
        GalgasBool test_39 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_39) {
          test_39 = GGS_bool (ComparisonKind::notEqual, enumerator_7537.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_7510.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_39) {
            GGS_string temp_40 ;
            const GalgasBool test_41 = GGS_bool (ComparisonKind::notEqual, enumerator_7537.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_41) {
              temp_40 = enumerator_7537.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 160)) ;
            }else if (GalgasBool::boolFalse == test_41) {
              temp_40 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_7670 = GGS_string ("!").add_operation (temp_40, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 160)) ;
            GenericArray <FixItDescription> fixItArray42 ;
            appendFixItActions (fixItArray42, EnumFixItKind::fixItReplace, var_s_7670) ;
            inCompiler->emitSemanticError (enumerator_7510.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_7670, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 161)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 161)), fixItArray42  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 161)) ;
          }
        }
        GGS_semanticExpressionForGeneration var_exp_8108 ;
        callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_7510.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_8108, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 163)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_7537.current (HERE).readProperty_mFormalArgumentType (), var_exp_8108.readProperty_mResultType (), enumerator_7510.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_8108, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 170)) ;
        }
        var_constructorEffectiveParameterList_7445.plusPlusAssignOperation (var_exp_8108  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 171)) ;
        enumerator_7510.gotoNextObject () ;
        enumerator_7537.gotoNextObject () ;
      }
      GalgasBool test_43 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_43) {
        const GGS_templateGetterCallInExpressionAST temp_44 = this ;
        test_43 = GGS_bool (ComparisonKind::notEqual, var_actualGetterName_4208.objectCompare (temp_44.readProperty_mGetterName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_43) {
          const GGS_templateGetterCallInExpressionAST temp_45 = this ;
          GenericArray <FixItDescription> fixItArray46 ;
          appendFixItActions (fixItArray46, EnumFixItKind::fixItReplace, var_actualGetterName_4208) ;
          inCompiler->emitSemanticError (temp_45.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray46  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 174)) ;
        }
      }
      const GGS_templateGetterCallInExpressionAST temp_47 = this ;
      outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_4154, temp_47.readProperty_mGetterName ().readProperty_location (), var_kind_4086, var_receiverExpression_3357, var_fieldList_4175, var_actualGetterName_4208, var_constructorEffectiveParameterList_7445, var_hasCompilerArgument_4105, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateClassFunctionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateClassFunctionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateClassFunctionAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_constructorType_9321 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 201)) ;
  GGS_classFunctionMap var_classFunctionMap_9453 = extensionGetter_definition (var_constructorType_9321, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 203)).readProperty_classFunctionMap () ;
  GGS_unifiedTypeMapEntry var_returnedType_9571 ;
  GGS_bool var_hasCompilerArgument_9596 ;
  GGS__5B_functionSignatureElement_5D_ var_classFuncFormalArgumentTypeList_9650 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateClassFunctionAST temp_2 = this ;
    const GGS_classFunctionMap_2E_element var_entry_9691 = var_classFunctionMap_9453.readSubscript__3F_ (temp_2.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_classFunctionMap_9453.readSubscript__3F_ (temp_2.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      var_classFuncFormalArgumentTypeList_9650 = var_entry_9691.readProperty_argumentTypeList () ;
      var_hasCompilerArgument_9596 = var_entry_9691.readProperty_hasCompilerArgument () ;
      var_returnedType_9571 = var_entry_9691.readProperty_returnedType () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_9453.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 213)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_templateClassFunctionAST temp_4 = this ;
        const GGS_templateClassFunctionAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 215)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 215)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 214)) ;
        var_classFuncFormalArgumentTypeList_9650.drop () ; // Release error dropped variable
        var_hasCompilerArgument_9596.drop () ; // Release error dropped variable
        var_returnedType_9571.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_templateClassFunctionAST temp_7 = this ;
      const GGS_templateClassFunctionAST temp_8 = this ;
      const GGS_templateClassFunctionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, EnumFixItKind::fixItReplace, var_classFunctionMap_9453.getter_keyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 221))) ;
      inCompiler->emitSemanticError (temp_7.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_8.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 219)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 219)).add_operation (temp_9.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 219)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 219)), fixItArray10  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 218)) ;
      var_classFuncFormalArgumentTypeList_9650.drop () ; // Release error dropped variable
      var_hasCompilerArgument_9596.drop () ; // Release error dropped variable
      var_returnedType_9571.drop () ; // Release error dropped variable
    }
  }
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_10493 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_semanticExpressionForGeneration_5D_ var_classFunctionEffectiveParameterList_10554 ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_templateClassFunctionAST temp_12 = this ;
    test_11 = GGS_bool (ComparisonKind::notEqual, temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 227)).objectCompare (var_classFuncFormalArgumentTypeList_9650.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 227)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_templateClassFunctionAST temp_13 = this ;
      const GGS_templateClassFunctionAST temp_14 = this ;
      const GGS_templateClassFunctionAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_14.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (extensionGetter_definition (var_constructorType_9321, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (var_classFuncFormalArgumentTypeList_9650.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 230)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 230)).add_operation (temp_15.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 231)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 231)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 230)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 231)), fixItArray16  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 228)) ;
      var_classFunctionEffectiveParameterList_10554.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_11) {
    var_classFunctionEffectiveParameterList_10554 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    const GGS_templateClassFunctionAST temp_17 = this ;
    UpEnumerator__5B_templateExpressionElementAST_5D_ enumerator_11140 (temp_17.readProperty_mExpressionList ()) ;
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_11167 (var_classFuncFormalArgumentTypeList_9650) ;
    while (enumerator_11140.hasCurrentObject () && enumerator_11167.hasCurrentObject ()) {
      {
      var_requiredTypes_10493.setter_append (enumerator_11167.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 236)) ;
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::notEqual, enumerator_11167.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_11140.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GGS_string temp_19 ;
          const GalgasBool test_20 = GGS_bool (ComparisonKind::notEqual, enumerator_11167.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            temp_19 = enumerator_11167.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 238)) ;
          }else if (GalgasBool::boolFalse == test_20) {
            temp_19 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_11357 = GGS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 238)) ;
          GenericArray <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, EnumFixItKind::fixItReplace, var_s_11357) ;
          inCompiler->emitSemanticError (enumerator_11140.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11357, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 239)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 239)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 239)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_exp_11778 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_11140.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_11778, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 241)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11167.current (HERE).readProperty_mFormalArgumentType (), var_exp_11778.readProperty_mResultType (), enumerator_11140.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_11778, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 248)) ;
      }
      var_classFunctionEffectiveParameterList_10554.plusPlusAssignOperation (var_exp_11778  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 249)) ;
      enumerator_11140.gotoNextObject () ;
      enumerator_11167.gotoNextObject () ;
    }
  }
  const GGS_templateClassFunctionAST temp_22 = this ;
  const GGS_templateClassFunctionAST temp_23 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_9571, temp_22.readProperty_mClassFunctionName ().readProperty_location (), var_constructorType_9321, temp_23.readProperty_mClassFunctionName ().readProperty_string (), var_classFunctionEffectiveParameterList_10554, var_hasCompilerArgument_9596, var_requiredTypes_10493, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFileWrapperTemplateCallAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mFileWrapperName ().readProperty_location (), GGS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 275)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateAndOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateAndOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_13718 ;
  const GGS_templateAndOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_13718, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 290)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_13962 ;
  const GGS_templateAndOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_13962, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 298)) ;
  {
  const GGS_templateAndOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_13718.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 307)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas4", 307)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 307)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_13718, var_rightExpression_13962, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 306)) ;
  }
  const GGS_templateAndOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_13718.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_13718, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas4", 318)), var_rightExpression_13962, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateOrOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateOrOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_15061 ;
  const GGS_templateOrOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_15061, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 333)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_15305 ;
  const GGS_templateOrOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_15305, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 341)) ;
  {
  const GGS_templateOrOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_15061.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 350)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas4", 350)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 350)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_15061, var_rightExpression_15305, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 349)) ;
  }
  const GGS_templateOrOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_15061.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_15061, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas4", 361)), var_rightExpression_15305, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateXorOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateXorOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16404 ;
  const GGS_templateXorOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_16404, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 376)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16649 ;
  const GGS_templateXorOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_16649, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 384)) ;
  {
  const GGS_templateXorOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16404.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 393)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas4", 393)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 393)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16404, var_rightExpression_16649, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 392)) ;
  }
  const GGS_templateXorOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16404.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16404, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas4", 404)), var_rightExpression_16649, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateTrueBoolAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateTrueBoolAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                  GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                  const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                  GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateTrueBoolAST temp_0 = this ;
  outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateFalseBoolAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFalseBoolAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                   GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                   const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFalseBoolAST temp_0 = this ;
  outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralStringExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralStringExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_18570 = GGS_string::makeEmptyString () ;
  const GGS_templateLiteralStringExpressionAST temp_0 = this ;
  UpEnumerator__5B_string_5D_ enumerator_18597 (temp_0.readProperty_mLiteralStringList ()) ;
  while (enumerator_18597.hasCurrentObject ()) {
    var_s_18570.plusAssignOperation(enumerator_18597.current (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 444)) ;
    enumerator_18597.gotoNextObject () ;
  }
  const GGS_templateLiteralStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_18570, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralUIntExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralUIntExpressionAST temp_0 = this ;
  const GGS_templateLiteralUIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralCharExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralCharExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralCharExpressionAST temp_0 = this ;
  const GGS_templateLiteralCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mLiteralChar ().readProperty_location (), temp_1.readProperty_mLiteralChar ().readProperty_char (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralDoubleExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralDoubleExpressionAST temp_0 = this ;
  const GGS_templateLiteralDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalDoubleExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mLiteralDouble ().readProperty_location (), temp_1.readProperty_mLiteralDouble ().readProperty_f_36__34_ (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateNotOperatorAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateNotOperatorAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_21101 ;
  const GGS_templateNotOperatorAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_21101, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 505)) ;
  GGS_unifiedTypeMapEntry var_type_21177 = var_expression_21101.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_21177, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 514)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas4", 514)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 514)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 514)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateNotOperatorAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_21177, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 516)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 516)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 516)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 515)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateNotOperatorAST temp_4 = this ;
    outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_21177, temp_4.readProperty_mOperatorLocation (), var_expression_21101, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLogicalNegateAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLogicalNegateAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_22182 ;
  const GGS_templateLogicalNegateAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_22182, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 538)) ;
  GGS_unifiedTypeMapEntry var_type_22258 = var_expression_22182.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_22258, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 547)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas4", 547)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 547)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 547)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateLogicalNegateAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_22258, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 549)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 549)).add_operation (GGS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 549)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 548)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateLogicalNegateAST temp_4 = this ;
    outArgument_outExpression = GGS_tildeExpressionForGeneration::init_21__21__21_ (var_type_22258, temp_4.readProperty_mOperatorLocation (), var_expression_22182, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateTestDynamicClassAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_23310 ;
  const GGS_templateTestDynamicClassAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_23310, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 570)) ;
  const GGS_templateTestDynamicClassAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_castType_23359 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 578)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_23310.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 580)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas4", 580)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_23605 = var_castType_23359 ;
      GGS_bool var_found_23632 = GGS_bool (ComparisonKind::equal, var_t_23605.objectCompare (var_expression_23310.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 584)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 584)).isValid ()) {
        uint32_t variant_23672 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 584)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 584)).uintValue () ;
        bool loop_23672 = true ;
        while (loop_23672) {
          loop_23672 = var_found_23632.operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 585)).operator_and (extensionGetter_definition (var_t_23605, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 585)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas4", 585)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 585)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 585)).isValid () ;
          if (loop_23672) {
            loop_23672 = var_found_23632.operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 585)).operator_and (extensionGetter_definition (var_t_23605, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 585)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas4", 585)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 585)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 585)).boolValue () ;
          }
          if (loop_23672 && (0 == variant_23672)) {
            loop_23672 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas4", 584)) ;
          }
          if (loop_23672) {
            variant_23672 -= 1 ;
            var_t_23605 = extensionGetter_definition (var_t_23605, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 586)).readProperty_superType () ;
            var_found_23632 = GGS_bool (ComparisonKind::equal, var_t_23605.objectCompare (var_expression_23310.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_23632.operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 589)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_templateTestDynamicClassAST temp_4 = this ;
          const GGS_templateTestDynamicClassAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 591)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 591)).add_operation (extensionGetter_definition (var_expression_23310.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 591)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 591)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 591)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 590)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GenericArray <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_23310.readProperty_mLocation (), GGS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_23310.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 595)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 594)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 595)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 594)) ;
  }
  const GGS_templateTestDynamicClassAST temp_8 = this ;
  outArgument_outExpression = GGS_testDynamicClassInExpressionForGeneration::init_21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_23310, var_castType_23359, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateFunctionCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFunctionCallAST temp_0 = this ;
  GGS_lstring var_usefulnessName_24964 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 617)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_24964 COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 618)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_functionSignature_25285 ;
  GGS_unifiedTypeMapEntry var_resultType_25334 ;
  GGS_bool var_isInternal_25361 ;
  const GGS_templateFunctionCallAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_25285, var_resultType_25334, var_isInternal_25361, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 620)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_25361.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateFunctionCallAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_25426 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 628)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_templateFunctionCallAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 629)).objectCompare (var_procDeclarationLocation_25426.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 629)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_templateFunctionCallAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_25426.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 630)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 630)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 630)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 630)) ;
        }
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_templateFunctionCallAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_25285.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 634)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 634)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_templateFunctionCallAST temp_10 = this ;
      const GGS_templateFunctionCallAST temp_11 = this ;
      const GGS_templateFunctionCallAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 636)).add_operation (GGS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 636)).add_operation (var_functionSignature_25285.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 636)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 636)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 636)).add_operation (GGS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 636)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 637)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 637)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 637)).add_operation (GGS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 637)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 635)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GGS__5B_semanticExpressionForGeneration_5D_ var_semanticExpressionListForGeneration_26135 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    const GGS_templateFunctionCallAST temp_14 = this ;
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_26229 (var_functionSignature_25285) ;
    UpEnumerator__5B_templateExpressionElementAST_5D_ enumerator_26263 (temp_14.readProperty_mExpressionList ()) ;
    while (enumerator_26229.hasCurrentObject () && enumerator_26263.hasCurrentObject ()) {
      GGS_semanticExpressionForGeneration var_expression_26496 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_26263.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_26496, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 643)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_26229.current (HERE).readProperty_mFormalArgumentType (), var_expression_26496.readProperty_mResultType (), enumerator_26263.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_26496, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 650)) ;
      }
      var_semanticExpressionListForGeneration_26135.plusPlusAssignOperation (var_expression_26496  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 651)) ;
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_26229.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_26263.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_26229.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = enumerator_26229.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 653)) ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_26817 = GGS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 653)) ;
          GenericArray <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, EnumFixItKind::fixItReplace, var_s_26817) ;
          inCompiler->emitSemanticError (enumerator_26263.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_26817, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 654)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 654)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 654)) ;
        }
      }
      enumerator_26229.gotoNextObject () ;
      enumerator_26263.gotoNextObject () ;
    }
    const GGS_templateFunctionCallAST temp_19 = this ;
    const GGS_templateFunctionCallAST temp_20 = this ;
    outArgument_outExpression = GGS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_25334, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_26135, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateExtensionTemplateCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                               GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateExtensionTemplateCallAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mTemplateName ().readProperty_location (), GGS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 676)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateVarInExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_templateVarInExpressionAST temp_1 = this ;
    const GGS_globalConstantMap_2E_element var_globalConstant_28555 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGlobalConstantMap ().readSubscript__3F_ (temp_1.readProperty_mVarName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGlobalConstantMap ().readSubscript__3F_ (temp_1.readProperty_mVarName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_templateVarInExpressionAST temp_2 = this ;
      const GGS_templateVarInExpressionAST temp_3 = this ;
      outArgument_outExpression = GGS_globalConstantInExpressionForGeneration::init_21__21__21_ (var_globalConstant_28555.readProperty_mType (), temp_2.readProperty_mVarName ().readProperty_location (), temp_3.readProperty_mVarName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_type_28893 ;
    GGS_string var_sourceVariableCppName_28904 ;
    const GGS_templateVarInExpressionAST temp_4 = this ;
    constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_4.readProperty_mVarName (), var_type_28893, var_sourceVariableCppName_28904, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 698)) ;
    const GGS_templateVarInExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_28893, temp_5.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_28904, var_sourceVariableCppName_28904, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateAddOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateAddOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_29860 ;
  const GGS_templateAddOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_29860, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 720)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_30104 ;
  const GGS_templateAddOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_30104, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 728)) ;
  {
  const GGS_templateAddOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_29860.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 737)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas4", 737)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 737)), GGS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_29860, var_rightExpression_30104, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 736)) ;
  }
  const GGS_templateAddOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_29860.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_29860, GGS_binaryOperator::class_func_add (SOURCE_FILE ("templateAnalysis.galgas4", 748)), var_rightExpression_30104, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateSubOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSubOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_31346 ;
  const GGS_templateSubOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_31346, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 765)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_31590 ;
  const GGS_templateSubOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_31590, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 773)) ;
  {
  const GGS_templateSubOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_31346.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 782)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas4", 782)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 782)), GGS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_31346, var_rightExpression_31590, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 781)) ;
  }
  const GGS_templateSubOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_31346.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_31346, GGS_binaryOperator::class_func_sub (SOURCE_FILE ("templateAnalysis.galgas4", 793)), var_rightExpression_31590, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateMultiplyOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateMultiplyOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_32841 ;
  const GGS_templateMultiplyOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_32841, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 810)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_33085 ;
  const GGS_templateMultiplyOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_33085, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 818)) ;
  {
  const GGS_templateMultiplyOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_32841.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 827)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas4", 827)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 827)), GGS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_32841, var_rightExpression_33085, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 826)) ;
  }
  const GGS_templateMultiplyOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_32841.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_32841, GGS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas4", 838)), var_rightExpression_33085, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateDivideOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateDivideOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_34337 ;
  const GGS_templateDivideOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_34337, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 855)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_34581 ;
  const GGS_templateDivideOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_34581, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 863)) ;
  {
  const GGS_templateDivideOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_34337.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 872)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas4", 872)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 872)), GGS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_34337, var_rightExpression_34581, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 871)) ;
  }
  const GGS_templateDivideOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_34337.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_34337, GGS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas4", 883)), var_rightExpression_34581, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateModuloOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateModuloOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_35827 ;
  const GGS_templateModuloOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_35827, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 900)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_36071 ;
  const GGS_templateModuloOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_36071, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 908)) ;
  {
  const GGS_templateModuloOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_35827.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 917)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas4", 917)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 917)), GGS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_35827, var_rightExpression_36071, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 916)) ;
  }
  const GGS_templateModuloOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_35827.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_35827, GGS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas4", 928)), var_rightExpression_36071, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateUnaryMinusOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateUnaryMinusOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_37283 ;
  const GGS_templateUnaryMinusOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_37283, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 945)) ;
  GGS_unifiedTypeMapEntry var_type_37359 = var_expression_37283.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_37359, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 954)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas4", 954)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 954)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 954)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateUnaryMinusOperationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_37359, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 956)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 956)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 956)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 955)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateUnaryMinusOperationAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_37359, temp_4.readProperty_mOperatorLocation (), var_expression_37283, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_38589 ;
  const GGS_structFieldAccessTemplateExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_38589, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 979)) ;
  GGS_unifiedTypeMapEntry var_type_38669 = var_expression_38589.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_bool test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_type_38669, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 988)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas4", 988)))) ;
    if (GalgasBool::boolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_type_38669, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 988)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas4", 988)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 988)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_structFieldAccessTemplateExpressionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GGS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 989)) ;
    }
  }
  GGS_propertyMap var_propertyMap_38906 = extensionGetter_definition (var_type_38669, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 991)).readProperty_propertyMap () ;
  GGS_AccessControl var_accessControl_39001 ;
  const GGS_structFieldAccessTemplateExpressionAST temp_5 = this ;
  GGS_bool joker_39016 ; // Joker input parameter
  var_propertyMap_38906.method_searchKey (temp_5.readProperty_mStructFieldName (), var_accessControl_39001, joker_39016, var_type_38669, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 992)) ;
  const GGS_structFieldAccessTemplateExpressionAST temp_6 = this ;
  extensionMethod_checkSetAccess (var_accessControl_39001, GGS_selfAvailability::class_func_none (SOURCE_FILE ("templateAnalysis.galgas4", 993)), temp_6.readProperty_mStructFieldName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 993)) ;
  const GGS_structFieldAccessTemplateExpressionAST temp_7 = this ;
  const GGS_structFieldAccessTemplateExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_type_38669, temp_7.readProperty_mOperatorLocation (), var_expression_38589, temp_8.readProperty_mStructFieldName ().readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_40018 ;
  const GGS_templateEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_40018, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1015)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_40266 ;
  const GGS_templateEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_40266, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1023)) ;
  {
  const GGS_templateEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_40018.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1032)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("templateAnalysis.galgas4", 1032)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1032)).operator_or (extensionGetter_definition (var_leftExpression_40018.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1032)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1032)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1032)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1032)), GGS_string ("=="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_40018, var_rightExpression_40266, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1031)) ;
  }
  const GGS_templateEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_40018, GGS_comparison::class_func_equal (SOURCE_FILE ("templateAnalysis.galgas4", 1043)), var_rightExpression_40266, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateNonEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_41439 ;
  const GGS_templateNonEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_41439, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1058)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_41687 ;
  const GGS_templateNonEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_41687, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1066)) ;
  {
  const GGS_templateNonEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_41439.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1075)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("templateAnalysis.galgas4", 1075)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1075)).operator_or (extensionGetter_definition (var_leftExpression_41439.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1075)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1075)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1075)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1075)), GGS_string ("!="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_41439, var_rightExpression_41687, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1074)) ;
  }
  const GGS_templateNonEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_41439, GGS_comparison::class_func_notEqual (SOURCE_FILE ("templateAnalysis.galgas4", 1086)), var_rightExpression_41687, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateStrictInfTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_42864 ;
  const GGS_templateStrictInfTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_42864, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1101)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_43112 ;
  const GGS_templateStrictInfTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_43112, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1109)) ;
  {
  const GGS_templateStrictInfTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_42864.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1118)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1118)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1118)), GGS_string ("<"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_42864, var_rightExpression_43112, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1117)) ;
  }
  const GGS_templateStrictInfTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_42864, GGS_comparison::class_func_lowerThan (SOURCE_FILE ("templateAnalysis.galgas4", 1129)), var_rightExpression_43112, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInfOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_44219 ;
  const GGS_templateInfOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_44219, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1144)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_44467 ;
  const GGS_templateInfOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_44467, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1152)) ;
  {
  const GGS_templateInfOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_44219.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1161)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1161)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1161)), GGS_string ("<="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_44219, var_rightExpression_44467, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1160)) ;
  }
  const GGS_templateInfOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_44219, GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas4", 1172)), var_rightExpression_44467, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateStrictSupTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_45577 ;
  const GGS_templateStrictSupTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_45577, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1187)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_45825 ;
  const GGS_templateStrictSupTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_45825, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1195)) ;
  {
  const GGS_templateStrictSupTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_45577.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1204)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1204)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1204)), GGS_string (">"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_45577, var_rightExpression_45825, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1203)) ;
  }
  const GGS_templateStrictSupTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_45577, GGS_comparison::class_func_greaterThan (SOURCE_FILE ("templateAnalysis.galgas4", 1215)), var_rightExpression_45825, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateSupOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_46934 ;
  const GGS_templateSupOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_46934, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1230)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_47182 ;
  const GGS_templateSupOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_47182, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1238)) ;
  {
  const GGS_templateSupOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_46934.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1247)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1247)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1247)), GGS_string (">="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_46934, var_rightExpression_47182, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1246)) ;
  }
  const GGS_templateSupOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_46934, GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas4", 1258)), var_rightExpression_47182, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLeftShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_48299 ;
  const GGS_templateLeftShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_48299, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1273)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_48547 ;
  const GGS_templateLeftShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_48547, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1281)) ;
  GGS_unifiedTypeMapEntry var_leftType_48629 = var_leftExpression_48299.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_48694 = var_rightExpression_48547.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_48629, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1291)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas4", 1291)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1291)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 1291)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateLeftShiftOperationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_48629, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1293)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1293)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1293)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1292)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_48694, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1295)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("u32"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateLeftShiftOperationAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@u32': it is '@").add_operation (extensionGetter_definition (var_rightType_48694, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1297)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1297)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1297)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1296)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateLeftShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_48629, temp_8.readProperty_mOperatorLocation (), var_leftExpression_48299, GGS_binaryOperator::class_func_leftShift (SOURCE_FILE ("templateAnalysis.galgas4", 1305)), var_rightExpression_48547, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateRightShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_50066 ;
  const GGS_templateRightShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_50066, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1321)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_50314 ;
  const GGS_templateRightShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_50314, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1329)) ;
  GGS_unifiedTypeMapEntry var_leftType_50396 = var_leftExpression_50066.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_50461 = var_rightExpression_50314.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_50396, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1339)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas4", 1339)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1339)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 1339)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateRightShiftOperationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_50396, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1341)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1341)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1341)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1340)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_50461, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1343)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("u32"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateRightShiftOperationAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@u32': it is '@").add_operation (extensionGetter_definition (var_rightType_50461, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1345)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1345)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1345)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1344)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateRightShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_50396, temp_8.readProperty_mOperatorLocation (), var_leftExpression_50066, GGS_binaryOperator::class_func_rightShift (SOURCE_FILE ("templateAnalysis.galgas4", 1353)), var_rightExpression_50314, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionStringAST_EX templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST_5F_EX::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                  GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                  const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                  GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringAST_5F_EX temp_0 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionStringForGeneration::init_21_ (temp_0.readProperty_mTemplateString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1393)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionExpressionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_53130 ;
  const GGS_templateInstructionExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_53130, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1405)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_53130.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1412)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GGS_string ("expression type should be '@string' (it is '@").add_operation (extensionGetter_definition (var_expression_53130.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1413)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1413)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1413)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1413)) ;
    }
  }
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionExpressionForGeneration::init_21_ (var_expression_53130, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1415)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateBlockInstructionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_54008 ;
  const GGS_templateBlockInstructionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_54008, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1427)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_54008.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1434)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bigint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_getterCallExpressionForGeneration var_conversionExpression_54103 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_expression_54008.readProperty_mResultType (), var_expression_54008.readProperty_mLocation (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas4", 1438)), var_expression_54008, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), GGS_string ("u32"), GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE) ;
      var_expression_54008 = var_conversionExpression_54103 ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_54008.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1446)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("u32"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_templateBlockInstructionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mLocation (), GGS_string ("expression type should be '@u32' (it is '@").add_operation (extensionGetter_definition (var_expression_54008.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1447)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1447)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1447)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1447)) ;
      }
    }
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_blockInstructionList_54566 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateBlockInstructionAST temp_5 = this ;
  routine_templateInstructionListAnalysis_5F_EX_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mBlockInstructionList (), var_blockInstructionList_54566, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1450)) ;
  }
  const GGS_templateBlockInstructionAST temp_6 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateBlockInstructionForGeneration::init_21__21__21_ (var_expression_54008, temp_6.readProperty_mLocation (), var_blockInstructionList_54566, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1458)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                       GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                       const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                       GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                       GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionGetColumnLocationForGeneration::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1470)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                        const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                        GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionGotoColumnLocationForGeneration::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1482)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionIfAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_templateInstructionIfBranchForGeneration_5D_ var_templateInstructionIfBranchList_56380 = GGS__5B_templateInstructionIfBranchForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_templateInstructionIfAST temp_0 = this ;
  UpEnumerator__5B_templateInstructionIfBranchAST_5D_ enumerator_56503 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_56503.hasCurrentObject ()) {
    GGS_semanticExpressionForGeneration var_expression_56734 ;
    callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_56503.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_56734, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1497)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_56734.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1504)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_56734.readProperty_mLocation (), GGS_string ("'if' expression type should be '@bool' (it is '@").add_operation (extensionGetter_definition (var_expression_56734.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1505)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1505)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1505)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1505)) ;
      }
    }
    GGS__5B_templateInstructionForGeneration_5D_ var_instructionList_56984 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    {
    routine_templateInstructionListAnalysis_5F_EX_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_56503.current (HERE).readProperty_mInstructionList (), var_instructionList_56984, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1508)) ;
    }
    var_templateInstructionIfBranchList_56380.plusPlusAssignOperation (GGS_templateInstructionIfBranchForGeneration::init_21__21_ (var_expression_56734, var_instructionList_56984, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1516)) ;
    enumerator_56503.gotoNextObject () ;
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_elseInstructionList_57364 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionIfAST temp_3 = this ;
  routine_templateInstructionListAnalysis_5F_EX_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_57364, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1520)) ;
  }
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionIfForGeneration::init_21__21_ (var_templateInstructionIfBranchList_56380, var_elseInstructionList_57364, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1529)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionSwitchAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_switchExpression_5456 ;
  const GGS_templateInstructionSwitchAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_switchExpression_5456, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 134)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_enumType var_enumType_5486 = extensionGetter_definition (var_switchExpression_5456.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 141)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas4", 141)).unwrappedValue () ;
    if (!extensionGetter_definition (var_switchExpression_5456.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 141)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas4", 141)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GGS_stringset var_constantsNamedInSwitchInstruction_5582 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ var_templateInstructionSwitchBranchList_5703 = GGS__5B_templateInstructionSwitchBranchForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_templateInstructionSwitchAST temp_2 = this ;
      UpEnumerator__5B_templateInstructionSwitchBranchAST_5D_ enumerator_5793 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
      while (enumerator_5793.hasCurrentObject ()) {
        GGS__5B_extractedAssociatedValueForGeneration_5D_ var_extractedAssociatedValuesForGeneration_5883 = GGS__5B_extractedAssociatedValueForGeneration_5D_::init (inCompiler COMMA_HERE) ;
        GGS_templateAnalysisContext var_analysisContext_5938 = constinArgument_inAnalysisContext ;
        UpEnumerator__5B_lstring_5D_ enumerator_6032 (enumerator_5793.current (HERE).readProperty_constantList ()) ;
        while (enumerator_6032.hasCurrentObject ()) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_enumType_5486.readProperty_constantMap ().getter_contains (enumerator_6032.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 149)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = var_constantsNamedInSwitchInstruction_5582.getter_contains (enumerator_6032.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 150)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (enumerator_6032.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6032.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 152)).add_operation (GGS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 152)), fixItArray5  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 151)) ;
                }
              }
              var_constantsNamedInSwitchInstruction_5582.plusPlusAssignOperation (enumerator_6032.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 154)) ;
              GGS__5B_associatedValueDescriptor_5D_ var_associatedTypeList_6501 ;
              GGS_u_33__32_ joker_6463 ; // Joker input parameter
              var_enumType_5486.readProperty_constantMap ().method_searchKey (enumerator_6032.current (HERE), joker_6463, var_associatedTypeList_6501, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 155)) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6501.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 156)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_5793.current (HERE).readProperty_associatedValuesExtraction ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 156)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 156)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_6032.current (HERE).readProperty_location (), GGS_string ("the associated values of '").add_operation (enumerator_6032.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 158)).add_operation (GGS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 158)), fixItArray7  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 157)) ;
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_associatedTypeList_6501.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 159)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_5793.current (HERE).readProperty_associatedValuesExtraction ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 159)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 159)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (enumerator_6032.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6032.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 161)).add_operation (GGS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 161)), fixItArray9  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 160)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::notEqual, var_associatedTypeList_6501.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 162)).objectCompare (enumerator_5793.current (HERE).readProperty_associatedValuesExtraction ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 162)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GGS_string temp_11 ;
                      const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6501.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 165)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_12) {
                        temp_11 = GGS_string ("s") ;
                      }else if (GalgasBool::boolFalse == test_12) {
                        temp_11 = GGS_string::makeEmptyString () ;
                      }
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_6032.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6032.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (GGS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (var_associatedTypeList_6501.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 164)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas4", 164)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (GGS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)), fixItArray13  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 163)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_7375 (var_associatedTypeList_6501) ;
                    UpEnumerator__5B_switchExtractedValuesAST_5D_ enumerator_7446 (enumerator_5793.current (HERE).readProperty_associatedValuesExtraction ()) ;
                    GGS_u_33__32_ index_7357 (uint32_t (0)) ;
                    while (enumerator_7375.hasCurrentObject () && enumerator_7446.hasCurrentObject ()) {
                      GalgasBool test_14 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_14) {
                        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_7446.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_14) {
                          GalgasBool test_15 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_15) {
                            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_7375.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 169)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_7446.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ())).boolEnum () ;
                            if (GalgasBool::boolTrue == test_15) {
                              GenericArray <FixItDescription> fixItArray16 ;
                              inCompiler->emitSemanticError (enumerator_7446.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_location (), GGS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_7375.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)), fixItArray16  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)) ;
                            }
                          }
                        }
                      }
                      GGS_string var_cppName_7892 = GGS_string ("extractedValue_").add_operation (enumerator_7446.current (HERE).readProperty_mExtractedValueName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 173)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas4", 173)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 173)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 173)).add_operation (enumerator_7446.current (HERE).readProperty_mExtractedValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 174)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 174)).add_operation (index_7357.getter_string (SOURCE_FILE ("template-switch-instruction.galgas4", 174)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 174)) ;
                      var_extractedAssociatedValuesForGeneration_5883.plusPlusAssignOperation (GGS_extractedAssociatedValueForGeneration::init_21__21__21_ (enumerator_7375.current (HERE).readProperty_type (), var_cppName_7892, enumerator_7375.current (HERE).readProperty_name (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 175)) ;
                      GalgasBool test_17 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_17) {
                        test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_7446.current (HERE).readProperty_mExtractedValueName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_17) {
                          {
                          var_analysisContext_5938.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_7446.current (HERE).readProperty_mExtractedValueName (), enumerator_7375.current (HERE).readProperty_type (), var_cppName_7892, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 180)) ;
                          }
                        }
                      }
                      enumerator_7375.gotoNextObject () ;
                      enumerator_7446.gotoNextObject () ;
                      index_7357.plusAssignOperation (GGS_u_33__32_ (1), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 167)) ;
                    }
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_6032.current (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_6032.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 190)).add_operation (GGS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 190)).add_operation (extensionGetter_definition (var_switchExpression_5456.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 191)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 190)).add_operation (GGS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 191)), fixItArray18  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 189)) ;
          }
          enumerator_6032.gotoNextObject () ;
        }
        GGS__5B_templateInstructionForGeneration_5D_ var_templateInstructionList_8790 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
        {
        routine_templateInstructionListAnalysis_5F_EX_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_5938, ioArgument_ioTypeMap, enumerator_5793.current (HERE).readProperty_instructionList (), var_templateInstructionList_8790, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 195)) ;
        }
        var_templateInstructionSwitchBranchList_5703.plusPlusAssignOperation (GGS_templateInstructionSwitchBranchForGeneration::init_21__21__21__21_ (enumerator_5793.current (HERE).readProperty_constantList (), var_extractedAssociatedValuesForGeneration_5883, enumerator_5793.current (HERE).readProperty_endOfBranch ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 206)), var_templateInstructionList_8790, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 203)) ;
        enumerator_5793.gotoNextObject () ;
      }
      GGS_stringset var_forgottenConstants_9402 = var_enumType_5486.readProperty_constantMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 211)).subtract_operation (var_constantsNamedInSwitchInstruction_5582, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 211)) ;
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::greaterThan, var_forgottenConstants_9402.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 212)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          GGS_string var_s_9546 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_9564 (var_forgottenConstants_9402) ;
          while (enumerator_9564.hasCurrentObject ()) {
            var_s_9546.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_9564.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 215)) ;
            enumerator_9564.gotoNextObject () ;
          }
          const GGS_templateInstructionSwitchAST temp_20 = this ;
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (temp_20.readProperty_switchExpressionEndLocation (), GGS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_9546, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 218)), fixItArray21  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 217)) ;
        }
      }
      ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionSwitchForGeneration::init_21__21__21_ (var_switchExpression_5456.readProperty_mResultType (), var_switchExpression_5456, var_templateInstructionSwitchBranchList_5703, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 221)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GenericArray <FixItDescription> fixItArray22 ;
    inCompiler->emitSemanticError (var_switchExpression_5456.readProperty_mLocation (), GGS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (extensionGetter_definition (var_switchExpression_5456.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 228)).readProperty_typeKind (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 227)).add_operation (GGS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 228)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 227)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionSwitchForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                                 GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_switchVarCppName_11605 ;
  const GGS_templateInstructionSwitchForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_switchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_11605, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 261)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_switchVarCppName_11605, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 269)).add_operation (GGS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 269)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 269)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 270)) ;
  const GGS_templateInstructionSwitchForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_1.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 271)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 271)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::invalid :\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 272)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 273)) ;
  const GGS_templateInstructionSwitchForGeneration temp_2 = this ;
  UpEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ enumerator_11931 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
  while (enumerator_11931.hasCurrentObject ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_12001 (enumerator_11931.current (HERE).readProperty_mConstantList ()) ;
    while (enumerator_12001.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 277)) ;
      const GGS_templateInstructionSwitchForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_3.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 278)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 278)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::enum_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 279)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_12001.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas4", 280)).add_operation (GGS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 280)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 280)) ;
      enumerator_12001.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 282)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 283)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_11931.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 284)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ enumerator_12449 (enumerator_11931.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12449.hasCurrentObject ()) {
          extensionMethod_addHeaderFileName (enumerator_12449.current (HERE).readProperty_mType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 286)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12449.current (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 287)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 287)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 287)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_12449.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 288)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 288)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 288)) ;
          enumerator_12449.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_switchVarCppName_11605, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 290)).add_operation (GGS_string (".getAssociatedValuesFor_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 290)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 290)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_11931.current (HERE).readProperty_mConstantList ().readSubscript__3F_ (GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas4", 291)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 291)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 291)) ;
        UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ enumerator_12924 (enumerator_11931.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12924.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_12924.current (HERE).readProperty_mCppName (), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 293)) ;
          enumerator_12924.gotoNextObject () ;
          if (enumerator_12924.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 294)) ;
          }
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 296)) ;
      }
    }
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_11931.current (HERE).readProperty_mInstructionList ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 298)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 299)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_11931.current (HERE).readProperty_mInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 300)) ;
        }
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 308)) ;
        }
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 310)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 311)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 312)) ;
    }
    enumerator_11931.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 315)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateSendInstructionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSendInstructionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_localVarManager & ioArgument_ioVariableMap,
                                                                          GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_3293 ;
  const GGS_templateSendInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3293, inCompiler COMMA_SOURCE_FILE ("template-instruction-emit-expression.galgas4", 58)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_3293.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-instruction-emit-expression.galgas4", 74)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateSendInstructionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GGS_string ("expression type should be '@string' (it is '@").add_operation (extensionGetter_definition (var_expression_3293.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-instruction-emit-expression.galgas4", 75)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-instruction-emit-expression.galgas4", 75)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("template-instruction-emit-expression.galgas4", 75)), fixItArray3  COMMA_SOURCE_FILE ("template-instruction-emit-expression.galgas4", 75)) ;
    }
  }
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionExpressionForGeneration::init_21_ (var_expression_3293, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-instruction-emit-expression.galgas4", 77)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionExpressionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GGS_bool & /* ioArgument__5F_ioUseColumnMarker */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_cppName_4806 ;
  const GGS_templateInstructionExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_4806, inCompiler COMMA_SOURCE_FILE ("template-instruction-emit-expression.galgas4", 96)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendString (").add_operation (var_cppName_4806, inCompiler COMMA_SOURCE_FILE ("template-instruction-emit-expression.galgas4", 103)).add_operation (GGS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-instruction-emit-expression.galgas4", 103)), inCompiler  COMMA_SOURCE_FILE ("template-instruction-emit-expression.galgas4", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateString_26_ (GGS__5B_templateAbstractInstructionAST_5D_ & ioArgument_outResultingInstructionList,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_1495 = GGS_string::class_func_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("template-instruction-emit-string.galgas4", 27)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_s_1495.getter_count (SOURCE_FILE ("template-instruction-emit-string.galgas4", 28)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_outResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionStringAST::init_21_ (var_s_1495, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-instruction-emit-string.galgas4", 29)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionStringAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                            GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                            const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                            GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                            GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                            GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringAST temp_0 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionStringForGeneration::init_21_ (temp_0.readProperty_mTemplateString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-instruction-emit-string.galgas4", 46)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@procDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_4533 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  UpEnumerator__5B_formalParameterAST_5D_ enumerator_4615 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_4615.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_4709 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_4615.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_4709, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 112)) ;
    }
    var_routineSignature_4533.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_4615.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_4709, enumerator_4615.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_4615.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 113)) ;
    enumerator_4615.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mRoutineInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 120)) ;
  {
  const GGS_procDeclarationAST temp_2 = this ;
  const GGS_procDeclarationAST temp_3 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_mRoutineMap, temp_2.readProperty_mRoutineName (), var_routineSignature_4533, temp_3.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 122)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@procDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_5894 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  UpEnumerator__5B_formalParameterAST_5D_ enumerator_5976 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_5976.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_6012 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_5976.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 141)) ;
    var_routineSignature_5894.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_5976.current (HERE).readProperty_mFormalSelector (), var_parameterType_6012, enumerator_5976.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_5976.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 142)) ;
    enumerator_5976.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  GGS_lstring var_mangledName_6286 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_5894, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 148)) ;
  GGS_lstring var_nameForUsefulness_6395 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_6286, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 150)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6395, var_nameForUsefulness_6395, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 151)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_procDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_6395  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 153)) ;
    }
  }
  GGS_analysisContext var_analysisContext_6668 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("procedure-declaration.galgas4", 160)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_instructionList_7120 ;
  GGS__5B_formalParameterForGeneration_5D_ var_formalArgumentList_7148 ;
  {
  const GGS_procDeclarationAST temp_4 = this ;
  const GGS_procDeclarationAST temp_5 = this ;
  const GGS_procDeclarationAST temp_6 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_6395, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6668, ioArgument_ioTypeMap, temp_4.readProperty_mFormalArgumentListAST (), temp_5.readProperty_mRoutineInstructionList (), temp_6.readProperty_mEndOfRoutineInstructionList (), var_instructionList_7120, var_formalArgumentList_7148, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 163)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("proc ").add_operation (var_mangledName_6286.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 175)), GGS_bool (true), GGS_string ("proc-").add_operation (var_mangledName_6286.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 177)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 177)), var_mangledName_6286.readProperty_string (), var_formalArgumentList_7148, GGS_bool (false), var_instructionList_7120, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 174)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@routineImplementationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_string & outArgument_outImplementation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_routineImplementationForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_generateHeader ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_routineImplementationForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (temp_2.readProperty_routineMangledName ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 207)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 207))  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 207)) ;
    }
  }
  GGS_string var_code_8958 ;
  {
  const GGS_routineImplementationForGeneration temp_3 = this ;
  const GGS_routineImplementationForGeneration temp_4 = this ;
  const GGS_routineImplementationForGeneration temp_5 = this ;
  const GGS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (temp_3.readProperty_mGenerateStatic (), GGS_string ("routine_").add_operation (temp_4.readProperty_routineMangledName ().getter_identifierRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 211)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 211)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_8958, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 209)) ;
  }
  const GGS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_routineImplementation (temp_7.readProperty_routineMangledName (), var_code_8958, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 222)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_classFuncExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_typeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_classFuncExpressionAST temp_2 = this ;
      GGS_unifiedTypeMapEntry joker_3578 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_typeName (), joker_3578, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 85)) ;
      }
    }
  }
  const GGS_classFuncExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_expressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 87)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedType_4588 ;
  GGS_unifiedTypeMapEntry var_classFuncType_4634 ;
  GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_4695 ;
  GGS_bool var_hasCompilerArgument_4747 ;
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_4802 ;
  {
  const GGS_classFuncExpressionAST temp_0 = this ;
  const GGS_classFuncExpressionAST temp_1 = this ;
  const GGS_classFuncExpressionAST temp_2 = this ;
  routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_typeName (), temp_1.readProperty_classFuncName (), temp_2.readProperty_expressions (), var_returnedType_4588, var_classFuncType_4634, var_constructorEffectiveParameterList_4695, var_hasCompilerArgument_4747, var_requiredTypes_4802, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 100)) ;
  }
  const GGS_classFuncExpressionAST temp_3 = this ;
  GGS_lstring var_typeUsefulnessName_4838 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_classFuncType_4634, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 117)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 117)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_4838 COMMA_SOURCE_FILE ("expression-class-func.galgas4", 118)) ;
  }
  const GGS_classFuncExpressionAST temp_4 = this ;
  GGS_lstring var_returnedTypeUsefulnessName_5058 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_returnedType_4588, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 119)).readProperty_typeName ().readProperty_string (), temp_4.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 119)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_5058 COMMA_SOURCE_FILE ("expression-class-func.galgas4", 120)) ;
  }
  const GGS_classFuncExpressionAST temp_5 = this ;
  const GGS_classFuncExpressionAST temp_6 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_4588, temp_5.readProperty_classFuncName ().readProperty_location (), var_classFuncType_4634, temp_6.readProperty_classFuncName ().readProperty_string (), var_constructorEffectiveParameterList_4695, var_hasCompilerArgument_4747, var_requiredTypes_4802, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation?&??&&???!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                   const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                   const GGS_lstring constinArgument_inTypeName,
                                                                                                   const GGS_lstring constinArgument_inConstructorName,
                                                                                                   const GGS__5B_actualOutputArgumentAST_5D_ constinArgument_inInitializerEffectiveParameterExpressions,
                                                                                                   GGS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                                   GGS_unifiedTypeMapEntry & outArgument_outConstructorType,
                                                                                                   GGS__5B_semanticExpressionForGeneration_5D_ & outArgument_outConstructorEffectiveParameterList,
                                                                                                   GGS_bool & outArgument_outHasCompilerArgument,
                                                                                                   GGS__5B_unifiedTypeMapEntry_5D_ & outArgument_outRequiredTypes,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outRequiredTypes.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  outArgument_outRequiredTypes = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outConstructorType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 156)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-class-func.galgas4", 158)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 159)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_classFunctionMap var_classFunctionMap_7110 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 164)).readProperty_classFunctionMap () ;
    GGS__5B_functionSignatureElement_5D_ var_constructorFormalArgumentTypeList_7238 ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_classFunctionMap_2E_element var_entry_7283 = var_classFunctionMap_7110.readSubscript__3F_ (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_classFunctionMap_7110.readSubscript__3F_ (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        var_constructorFormalArgumentTypeList_7238 = var_entry_7283.readProperty_argumentTypeList () ;
        outArgument_outHasCompilerArgument = var_entry_7283.readProperty_hasCompilerArgument () ;
        outArgument_outReturnedType = var_entry_7283.readProperty_returnedType () ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_7110.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 172)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 174)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 174)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 174)), fixItArray5  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 173)) ;
          var_constructorFormalArgumentTypeList_7238.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray6 ;
        appendFixItActions (fixItArray6, EnumFixItKind::fixItReplace, var_classFunctionMap_7110.getter_keyList (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 182))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 179)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 179)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 179)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 180)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 180)), fixItArray6  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 178)) ;
        var_constructorFormalArgumentTypeList_7238.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 186)).objectCompare (var_constructorFormalArgumentTypeList_7238.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 186)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 188)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 188)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 189)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 188)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 189)).add_operation (var_constructorFormalArgumentTypeList_7238.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 190)).getter_string (SOURCE_FILE ("expression-class-func.galgas4", 190)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 189)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 190)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 191)).getter_string (SOURCE_FILE ("expression-class-func.galgas4", 191)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 190)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 191)), fixItArray8  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 187)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_8700 (constinArgument_inInitializerEffectiveParameterExpressions) ;
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_8765 (var_constructorFormalArgumentTypeList_7238) ;
    while (enumerator_8700.hasCurrentObject () && enumerator_8765.hasCurrentObject ()) {
      outArgument_outRequiredTypes.plusPlusAssignOperation (enumerator_8765.current (HERE).readProperty_mFormalArgumentType ()  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 196)) ;
      GGS_semanticExpressionForGeneration var_exp_9194 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8700.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8765.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9194, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 197)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8765.current (HERE).readProperty_mFormalArgumentType (), var_exp_9194.readProperty_mResultType (), enumerator_8700.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_9194, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 206)) ;
      }
      outArgument_outConstructorEffectiveParameterList.plusPlusAssignOperation (var_exp_9194  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 212)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::notEqual, enumerator_8765.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_8700.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GGS_string temp_10 ;
          const GalgasBool test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_8765.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            temp_10 = enumerator_8765.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 215)) ;
          }else if (GalgasBool::boolFalse == test_11) {
            temp_10 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_9558 = GGS_string ("!").add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 214)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, EnumFixItKind::fixItReplace, var_s_9558) ;
          inCompiler->emitSemanticError (enumerator_8700.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_9558, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 219)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 219)), fixItArray12  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 218)) ;
        }
      }
      enumerator_8700.gotoNextObject () ;
      enumerator_8765.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                       GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       GGS_string & outArgument_outCppExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classFuncExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_classFuncType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 243)) ;
  const GGS_classFuncExpressionForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 244)) ;
  const GGS_classFuncExpressionForGeneration temp_2 = this ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_10973 (temp_2.readProperty_requiredTypes ()) ;
  while (enumerator_10973.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10973.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 246)) ;
    enumerator_10973.gotoNextObject () ;
  }
  GGS__5B_string_5D_ var_parameterList_11064 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_classFuncExpressionForGeneration temp_3 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_11111 (temp_3.readProperty_mEffectiveParameterList ()) ;
  while (enumerator_11111.hasCurrentObject ()) {
    GGS_string var_parameter_11324 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_11111.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_11324, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 250)) ;
    var_parameterList_11064.plusPlusAssignOperation (var_parameter_11324  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 257)) ;
    enumerator_11111.gotoNextObject () ;
  }
  const GGS_classFuncExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_4.readProperty_classFuncType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 259)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 259)) ;
  const GGS_classFuncExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string ("::class_func_").add_operation (temp_5.readProperty_classFuncName ().getter_identifierRepresentation (SOURCE_FILE ("expression-class-func.galgas4", 260)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 260)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 260)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 261)) ;
  UpEnumerator__5B_string_5D_ enumerator_11594 (var_parameterList_11064) ;
  while (enumerator_11594.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_11594.current (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 263)) ;
    enumerator_11594.gotoNextObject () ;
    if (enumerator_11594.hasCurrentObject ()) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 264)) ;
    }
  }
  GGS_bool var_needsComma_11704 = GGS_bool (ComparisonKind::greaterThan, var_parameterList_11064.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 266)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_classFuncExpressionForGeneration temp_7 = this ;
    test_6 = temp_7.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = var_needsComma_11704.boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 269)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-class-func.galgas4", 271)) ;
      }
      outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 272)) ;
      var_needsComma_11704 = GGS_bool (true) ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_needsComma_11704.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_classFuncExpressionForGeneration temp_10 = this ;
      outArgument_outCppExpression.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_10.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 276)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 276)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 276)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 276)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_classFuncExpressionForGeneration temp_11 = this ;
    outArgument_outCppExpression.plusAssignOperation(extensionGetter_sourceFile (temp_11.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 278)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 278)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 278)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@collectionValueAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_collectionValueAST temp_0 = this ;
  UpEnumerator__5B_collectionValueElementAST_5D_ enumerator_3388 (temp_0.readProperty_mExpressionList ()) ;
  while (enumerator_3388.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3388.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 84)) ;
    enumerator_3388.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@collectionValueAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_4262 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_collectionValueAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_targetType_4262 = constinArgument_inType ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_collectionValueAST temp_2 = this ;
    var_targetType_4262 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 102)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_targetType_4262.objectCompare (GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-primary-collection-value.galgas4", 105)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_collectionValueAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 106)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 107)).readProperty_supportArrayLiteral ().operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas4", 107)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_collectionValueAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mEndOfCollectionValue (), GGS_string ("the @").add_operation (extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 109)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 109)).add_operation (GGS_string (" type does not array literal value"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 109)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 108)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GGS_initializerMap var_initializerMap_4771 = extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 112)).readProperty_initializerMap () ;
      GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_4863 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_initializerMap_4771.getter_contains (extensionGetter_initializerSignature (var_emptyArgumentList_4863, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 114)) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 114)).operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas4", 114)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_collectionValueAST temp_10 = this ;
          const GGS_collectionValueAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 115)).add_operation (GGS_string (" has no @() initializer"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 115)), fixItArray12  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 115)) ;
        }
      }
      GGS_lstring var_nameForUsefulness_5105 = function_initializerNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 119)).readProperty_typeName (), extensionGetter_initializerSignature (var_emptyArgumentList_4863, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 120)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 118)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_5105 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 122)) ;
      }
      GGS_unifiedTypeMapEntry var_elementType_5380 = extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 124)).readProperty_typeForEnumeratedElement () ;
      GGS__5B_collectionValueElementForGeneration_5D_ var_expressionListForGeneration_5490 = GGS__5B_collectionValueElementForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_collectionValueAST temp_13 = this ;
      UpEnumerator__5B_collectionValueElementAST_5D_ enumerator_5546 (temp_13.readProperty_mExpressionList ()) ;
      while (enumerator_5546.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expressionForGeneration_5854 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5546.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_elementType_5380, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_5854, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 127)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_elementType_5380, var_expressionForGeneration_5854.readProperty_mResultType (), enumerator_5546.current (HERE).readProperty_location (), var_expressionForGeneration_5854, inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 137)) ;
        }
        var_expressionListForGeneration_5490.plusPlusAssignOperation (GGS_collectionValueElementForGeneration::init_21__21_ (var_expressionForGeneration_5854, enumerator_5546.current (HERE).readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 143)) ;
        enumerator_5546.gotoNextObject () ;
      }
      const GGS_collectionValueAST temp_14 = this ;
      outArgument_outExpression = GGS_expressionCollectionForGeneration::init_21__21__21_ (var_targetType_4262, temp_14.readProperty_mEndOfCollectionValue (), var_expressionListForGeneration_5490, inCompiler COMMA_HERE) ;
      GGS_lstring var_typeUsefulnessName_6419 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 151)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 151)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_6419 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 152)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@expressionCollectionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_expressionCollectionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 180)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-collection-value.galgas4", 182)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 182)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 183)) ;
  const GGS_expressionCollectionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)) ;
  const GGS_expressionCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 186)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 186)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 186)) ;
  const GGS_expressionCollectionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::init (").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 188)) ;
  }
  const GGS_expressionCollectionForGeneration temp_4 = this ;
  UpEnumerator__5B_collectionValueElementForGeneration_5D_ enumerator_8305 (temp_4.readProperty_expressionList ()) ;
  while (enumerator_8305.hasCurrentObject ()) {
    GGS_string var_argumentCppName_8504 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8305.current (HERE).readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_8504, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 191)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (".plusPlusAssignOperation ("), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 198)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 198)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(var_argumentCppName_8504.add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 199)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 199)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (enumerator_8305.current (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 200)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 200)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 200)) ;
    enumerator_8305.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_2766 ;
  GGS_string var_sourceVariableCppName_2791 ;
  GGS_string var_nameForCheckingFormalParameterUsing_2833 ;
  {
  const GGS_varInExpressionAST temp_0 = this ;
  extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, temp_0.readProperty_mVarName (), var_type_2766, var_sourceVariableCppName_2791, var_nameForCheckingFormalParameterUsing_2833, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 56)) ;
  }
  const GGS_varInExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_2766, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_2791, var_nameForCheckingFormalParameterUsing_2833, inCompiler COMMA_HERE) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, var_nameForCheckingFormalParameterUsing_2833.objectCompare (function_gCompilerCppName (inCompiler COMMA_HERE))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_varInExpressionAST temp_3 = this ;
      GGS_lstring var_usefulnessName_3186 = function_functionNameForUsefulEntitiesGraph (temp_3.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 70)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3186 COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 71)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_varInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 94)) ;
  {
  const GGS_varInExpressionForGeneration temp_1 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 95)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_varInExpressionForGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mNameForCheckingFormalParameterUsing ().objectCompare (function_gCompilerCppName (inCompiler COMMA_HERE))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_varInExpressionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_4.readProperty_mCppVarName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-var.galgas4", 98)), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 98))  COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 98)) ;
      const GGS_varInExpressionForGeneration temp_5 = this ;
      outArgument_outCppExpression = GGS_string ("function_").add_operation (temp_5.readProperty_mCppVarName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 99)).add_operation (GGS_string (" (inCompiler COMMA_HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 99)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_varInExpressionForGeneration temp_6 = this ;
    outArgument_outCppExpression = temp_6.readProperty_mCppVarName () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@globalConstantInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_globalConstantInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                              GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GGS_string & outArgument_outCppExpression,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_globalConstantInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 122)) ;
  const GGS_globalConstantInExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_1.readProperty_mGlobalConstantName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-var.galgas4", 124)), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 124))  COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 124)) ;
  const GGS_globalConstantInExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GGS_string ("function_").add_operation (temp_2.readProperty_mGlobalConstantName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 126)).add_operation (GGS_string (" (inCompiler COMMA_HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 126)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 127)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                      GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                      GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionAST temp_0 = this ;
  const GGS_literalCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mCharacter ().readProperty_location (), temp_1.readProperty_mCharacter ().readProperty_char (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                         GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_char (utf32 (").add_operation (temp_0.readProperty_mCharacter ().getter_u_33__32_ (SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)).getter_string (SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionAST temp_0 = this ;
  const GGS_literalBigIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalUIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                         GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_u_33__32_ (uint32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 103)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 103)).add_operation (GGS_string ("U))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalUInt64ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                 GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_u_36__34_ (uint64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 116)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 116)).add_operation (GGS_string ("ULL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 116)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalU8ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalU_38_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                          GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                          GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                          GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalU_38_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_u_38_ (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 130)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 130)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 130)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalSIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                         GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_s_33__32_ (int32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 148)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 148)).add_operation (GGS_string ("L))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 148)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalSInt64ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                 GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_s_36__34_ (int64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 165)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 165)).add_operation (GGS_string ("LL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 165)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                           GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_bigint (\"").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 182)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 182)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 182)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 183)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 184)) ;
  const GGS_literalBigIntExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 185)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 185)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 185)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_3157 = GGS_string::makeEmptyString () ;
  const GGS_literalStringExpressionAST temp_0 = this ;
  UpEnumerator__5B_string_5D_ enumerator_3184 (temp_0.readProperty_mStringSequence ()) ;
  while (enumerator_3184.hasCurrentObject ()) {
    var_s_3157.plusAssignOperation(enumerator_3184.current (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 72)) ;
    enumerator_3184.gotoNextObject () ;
  }
  const GGS_literalStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_3157, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                           GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_literalStringExpressionForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mString ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCppExpression = GGS_string ("GGS_string::makeEmptyString ()") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_literalStringExpressionForGeneration temp_2 = this ;
    outArgument_outCppExpression = GGS_string ("GGS_string (").add_operation (temp_2.readProperty_mString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("expression-primary-literal-string.galgas4", 96)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 96)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 96)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 54)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_3429 ;
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-minus.galgas4", 72)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3429, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 69)) ;
  GGS_unifiedTypeMapEntry var_type_3505 = var_expression_3429.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_literalBigIntExpressionForGeneration var_exp_3544 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_3429.ptr ())) ;
    if (nullptr == var_exp_3544.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_3544.readProperty_mResultType (), var_exp_3544.readProperty_mLocation (), var_exp_3544.readProperty_mValue ().operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 83)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3505, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 86)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("expression-unary-minus.galgas4", 86)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 86)).operator_not (SOURCE_FILE ("expression-unary-minus.galgas4", 86)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_unaryMinusExpressionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3505, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 88)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 88)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 88)), fixItArray4  COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 87)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      const GGS_unaryMinusExpressionAST temp_5 = this ;
      outArgument_outExpression = GGS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_3505, temp_5.readProperty_mOperatorLocation (), var_expression_3429, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 115)) ;
  GGS_string var_operand_5366 ;
  const GGS_unaryMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5366, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 117)) ;
  const GGS_unaryMinusExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5366.add_operation (GGS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 126)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4090 ;
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-not.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4090, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4166 = var_expression_4090.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (nullptr != dynamic_cast <const cPtr_trueExpressionForGeneration *> (var_expression_4090.ptr ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_notExpressionAST temp_2 = this ;
      outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_falseExpressionForGeneration *> (var_expression_4090.ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_notExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = extensionGetter_definition (var_type_4166, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 101)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("expression-not.galgas4", 101)) COMMA_SOURCE_FILE ("expression-not.galgas4", 101)).operator_not (SOURCE_FILE ("expression-not.galgas4", 101)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_notExpressionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4166, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas4", 102)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_notExpressionAST temp_8 = this ;
        outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_4166, temp_8.readProperty_mOperatorLocation (), var_expression_4090, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                 GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                 GGS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 131)) ;
  GGS_string var_operand_5855 ;
  const GGS_notExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5855, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 133)) ;
  const GGS_notExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5855.add_operation (GGS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4163 ;
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4163, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4239 = var_expression_4163.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4239, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)) COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unaryWrappingMinusExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4239, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_unaryWrappingMinusExpressionAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryWrappingMinusExpressionForGeneration::init_21__21__21_ (var_type_4239, temp_4.readProperty_mOperatorLocation (), var_expression_4163, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 126)) ;
  GGS_string var_operand_5663 ;
  const GGS_unaryWrappingMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5663, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 128)) ;
  outArgument_outCppExpression = var_operand_5663.add_operation (GGS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 136)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_string_5D_ var_directoryList_3293 ;
  GGS_string var_fileName_3323 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_filewrapperInExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mFilewrapperPath ().readProperty_string ().getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 68)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_filewrapperInExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("path is empty"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 69)) ;
      var_directoryList_3293.drop () ; // Release error dropped variable
      var_fileName_3323.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_filewrapperInExpressionAST temp_5 = this ;
      test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 70)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_filewrapperInExpressionAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the path should not begin with '/'"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 71)) ;
        var_directoryList_3293.drop () ; // Release error dropped variable
        var_fileName_3323.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      const GGS_filewrapperInExpressionAST temp_8 = this ;
      var_directoryList_3293 = temp_8.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GGS_string ("/") COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 73)) ;
      {
      var_directoryList_3293.setter_removeLast (var_fileName_3323, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 74)) ;
      }
    }
  }
  GGS_wrapperFileMap var_filewrapperFileMap_3950 ;
  GGS_wrapperDirectoryMap var_filewrapperDirectoryMap_4002 ;
  GGS_bool var_isInternal_4044 ;
  const GGS_filewrapperInExpressionAST temp_9 = this ;
  GGS_lstring joker_3909 ; // Joker input parameter
  GGS__5B_lstring_5D_ joker_3919 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_9.readProperty_mFilewrapperName (), joker_3909, joker_3919, var_filewrapperFileMap_3950, var_filewrapperDirectoryMap_4002, var_isInternal_4044, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 77)) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_isInternal_4044.boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_filewrapperInExpressionAST temp_11 = this ;
      GGS_location var_filewrapperDeclarationLocation_4117 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_11.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 87)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_filewrapperInExpressionAST temp_13 = this ;
        test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 88)).objectCompare (var_filewrapperDeclarationLocation_4117.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 88)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_filewrapperInExpressionAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_4117.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 89)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 89)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 89)), fixItArray15  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 89)) ;
        }
      }
    }
  }
  GGS_string var_builtPath_4516 = GGS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_4002.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)).isValid ()) {
    uint32_t variant_4535 = var_filewrapperDirectoryMap_4002.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)).uintValue () ;
    bool loop_4535 = true ;
    while (loop_4535) {
      loop_4535 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_3293.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).isValid () ;
      if (loop_4535) {
        loop_4535 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_3293.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolValue () ;
      }
      if (loop_4535 && (0 == variant_4535)) {
        loop_4535 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)) ;
      }
      if (loop_4535) {
        variant_4535 -= 1 ;
        GGS_string var_directoryName_4649 ;
        {
        var_directoryList_3293.setter_removeFirst (var_directoryName_4649, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 95)) ;
        }
        var_builtPath_4516.plusAssignOperation(var_directoryName_4649.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 96)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 96)) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = var_filewrapperDirectoryMap_4002.getter_contains (var_directoryName_4649 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 97)).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            GGS_u_33__32_ joker_4917 ; // Joker input parameter
            var_filewrapperDirectoryMap_4002.method_searchKey (var_directoryName_4649.getter_here (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 99)), var_filewrapperFileMap_3950, var_filewrapperDirectoryMap_4002, joker_4917, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 98)) ;
          }
        }
        if (GalgasBool::boolFalse == test_16) {
          const GGS_filewrapperInExpressionAST temp_17 = this ;
          const GGS_filewrapperInExpressionAST temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_builtPath_4516, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 105)).add_operation (GGS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 105)).add_operation (temp_18.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 105)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 105)), fixItArray19  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 105)) ;
          var_filewrapperFileMap_3950.drop () ; // Release error dropped variable
          GGS__5B_string_5D_ temp_20 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 106)) ;
          var_directoryList_3293 = temp_20 ;
        }
      }
    }
  }
  GGS_u_33__32_ var_fileIndex_5181 ;
  GGS_bool var_isTextFile_5205 ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    test_21 = var_filewrapperFileMap_3950.getter_contains (var_fileName_3323 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 111)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      GGS_string joker_5340 ; // Joker input parameter
      GGS_u_33__32_ joker_5357 ; // Joker input parameter
      var_filewrapperFileMap_3950.method_searchKey (GGS_lstring::init_21__21_ (var_fileName_3323, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 112)), inCompiler COMMA_HERE), joker_5340, var_isTextFile_5205, joker_5357, var_fileIndex_5181, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 112)) ;
    }
  }
  if (GalgasBool::boolFalse == test_21) {
    const GGS_filewrapperInExpressionAST temp_22 = this ;
    const GGS_filewrapperInExpressionAST temp_23 = this ;
    GenericArray <FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_fileName_3323, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)).add_operation (GGS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)).add_operation (var_builtPath_4516, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)).add_operation (GGS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)).add_operation (temp_23.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)), fixItArray24  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 114)) ;
    var_fileIndex_5181.drop () ; // Release error dropped variable
    var_isTextFile_5205.drop () ; // Release error dropped variable
  }
  const GGS_filewrapperInExpressionAST temp_25 = this ;
  GGS_unifiedTypeMapEntry var_fileWrapperType_5644 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_25.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 119)) ;
  GGS_unifiedTypeMapEntry temp_26 ;
  const GalgasBool test_27 = var_isTextFile_5205.boolEnum () ;
  if (GalgasBool::boolTrue == test_27) {
    temp_26 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  }else if (GalgasBool::boolFalse == test_27) {
    temp_26 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_string ("data").getter_here (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 124)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 124)) ;
  }
  const GGS_filewrapperInExpressionAST temp_28 = this ;
  const GGS_filewrapperInExpressionAST temp_29 = this ;
  outArgument_outExpression = GGS_filewrapperStaticPathInExpressionForGeneration::init_21__21__21__21__21__21_ (temp_26, temp_28.readProperty_mFilewrapperName ().readProperty_location (), var_fileWrapperType_5644, temp_29.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_5181, var_isTextFile_5205, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                     GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                     GGS_string & outArgument_outCppExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_filewrapperType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 156)) ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_1 = this ;
  GGS_string temp_2 ;
  const GalgasBool test_3 = temp_1.readProperty_mIsTextFile ().boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_string ("GGS_string") ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_string ("GGS_data") ;
  }
  outArgument_outCppExpression = temp_2 ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_4 = this ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerCallAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_initializerCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_initializerCallAST temp_2 = this ;
      GGS_unifiedTypeMapEntry joker_5829 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_5829, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 140)) ;
      }
    }
  }
  const GGS_initializerCallAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 142)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerCallAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_instanciedType_6748 ;
  GGS_lstring var_initializerName_6784 ;
  GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_6847 ;
  {
  const GGS_initializerCallAST temp_0 = this ;
  const GGS_initializerCallAST temp_1 = this ;
  const GGS_initializerCallAST temp_2 = this ;
  routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mExpressions (), temp_2.readProperty_mEndOfExpressions (), var_instanciedType_6748, var_initializerName_6784, var_constructorEffectiveParameterList_6847, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 155)) ;
  }
  GGS_lstring var_typeUsefulnessName_6924 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_instanciedType_6748, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 170)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 170)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_6924 COMMA_SOURCE_FILE ("expression-initializer.galgas4", 171)) ;
  }
  const GGS_initializerCallAST temp_3 = this ;
  outArgument_outExpression = GGS_initializerCallForGeneration::init_21__21__21__21_ (var_instanciedType_6748, temp_3.readProperty_mEndOfExpressions (), var_initializerName_6784.readProperty_string (), var_constructorEffectiveParameterList_6847, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerInvocation?&??&&???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                           const GGS_lstring constinArgument_inTypeName,
                                                                                           const GGS__5B_actualOutputArgumentAST_5D_ constinArgument_inInvocationArguments,
                                                                                           const GGS_location constinArgument_inEndOfExpressions,
                                                                                           GGS_unifiedTypeMapEntry & outArgument_outInstanciedType,
                                                                                           GGS_lstring & outArgument_outInitializerName,
                                                                                           GGS__5B_semanticExpressionForGeneration_5D_ & outArgument_outConstructorEffectiveParameterList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanciedType.drop () ; // Release 'out' argument
  outArgument_outInitializerName.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outInstanciedType = constinArgument_inType ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outInstanciedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 201)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outInstanciedType.getter_isNull (SOURCE_FILE ("expression-initializer.galgas4", 203)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 204)) ;
      outArgument_outInstanciedType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outInitializerName.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_unifiedTypeDefinition var_instanciedTypeDefinition_8602 = extensionGetter_definition (outArgument_outInstanciedType, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 208)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_instanciedTypeDefinition_8602.readProperty_isConcrete ().operator_not (SOURCE_FILE ("expression-initializer.galgas4", 209)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot instanciate an abstract class"), fixItArray4  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 210)) ;
        outArgument_outInstanciedType.drop () ; // Release error dropped variable
        outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
        outArgument_outInitializerName.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_lstring var_nameForUsefulness_8918 = function_initializerNameForUsefulEntitiesGraph (var_instanciedTypeDefinition_8602.readProperty_typeName (), extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 217)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 215)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_8918 COMMA_SOURCE_FILE ("expression-initializer.galgas4", 219)) ;
      }
      outArgument_outInitializerName = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 221)), constinArgument_inEndOfExpressions, inCompiler COMMA_HERE) ;
      GGS_initializerMap var_initializerMap_9312 = var_instanciedTypeDefinition_8602.readProperty_initializerMap () ;
      GGS__5B_functionSignatureElement_5D_ var_formalSignature_9407 ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_initializerMap_9312.getter_contains (outArgument_outInitializerName.readProperty_string () COMMA_SOURCE_FILE ("expression-initializer.galgas4", 224)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          var_initializerMap_9312.method_searchKey (outArgument_outInitializerName, var_formalSignature_9407, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 225)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GGS_string var_s_9577 = GGS_string ("@").add_operation (var_instanciedTypeDefinition_8602.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 227)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 227)) ;
        UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_9653 (constinArgument_inInvocationArguments) ;
        while (enumerator_9653.hasCurrentObject ()) {
          var_s_9577.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 230)) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_9653.current (HERE).readProperty_mActualSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_s_9577.plusAssignOperation(enumerator_9653.current (HERE).readProperty_mActualSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 232)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 232)) ;
            }
          }
          enumerator_9653.gotoNextObject () ;
          if (enumerator_9653.hasCurrentObject ()) {
            var_s_9577.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 235)) ;
          }
        }
        var_s_9577.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 237)) ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (outArgument_outInitializerName.readProperty_location (), GGS_string ("the ").add_operation (var_s_9577, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 239)).add_operation (GGS_string (" initializer is not declared"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 239)), fixItArray7  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 238)) ;
        var_formalSignature_9407.drop () ; // Release error dropped variable
      }
      outArgument_outConstructorEffectiveParameterList = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_10133 (constinArgument_inInvocationArguments) ;
      UpEnumerator__5B_functionSignatureElement_5D_ enumerator_10179 (var_formalSignature_9407) ;
      while (enumerator_10133.hasCurrentObject () && enumerator_10179.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_exp_10549 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10133.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10179.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_10549, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 246)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_10179.current (HERE).readProperty_mFormalArgumentType (), var_exp_10549.readProperty_mResultType (), enumerator_10133.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_10549, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 255)) ;
        }
        outArgument_outConstructorEffectiveParameterList.plusPlusAssignOperation (var_exp_10549  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 261)) ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_10179.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10133.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_string temp_9 ;
            const GalgasBool test_10 = GGS_bool (ComparisonKind::notEqual, enumerator_10179.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              temp_9 = enumerator_10179.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 264)) ;
            }else if (GalgasBool::boolFalse == test_10) {
              temp_9 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_10933 = GGS_string ("!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 263)) ;
            GenericArray <FixItDescription> fixItArray11 ;
            appendFixItActions (fixItArray11, EnumFixItKind::fixItReplace, var_s_10933) ;
            inCompiler->emitSemanticError (enumerator_10133.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_10933, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 268)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 268)), fixItArray11  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 267)) ;
          }
        }
        enumerator_10133.gotoNextObject () ;
        enumerator_10179.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerCallForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerCallForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 290)) ;
  GGS__5B_string_5D_ var_parameterList_12166 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_initializerCallForGeneration temp_1 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_12213 (temp_1.readProperty_mEffectiveParameterList ()) ;
  while (enumerator_12213.hasCurrentObject ()) {
    GGS_string var_parameter_12425 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12213.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_12425, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 293)) ;
    var_parameterList_12166.plusPlusAssignOperation (var_parameter_12425  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 300)) ;
    enumerator_12213.gotoNextObject () ;
  }
  const GGS_initializerCallForGeneration temp_2 = this ;
  const GGS_initializerCallForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 302)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 302)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 302)).add_operation (temp_3.readProperty_initializerName ().getter_identifierRepresentation (SOURCE_FILE ("expression-initializer.galgas4", 303)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 303)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 303)) ;
  UpEnumerator__5B_string_5D_ enumerator_12681 (var_parameterList_12166) ;
  while (enumerator_12681.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_12681.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 306)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 306)) ;
    enumerator_12681.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-initializer.galgas4", 308)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 309)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" COMMA_HERE)"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 310)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 163)) ;
  const GGS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 164)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_8068 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8068, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 178)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8409 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8068.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8409, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 188)) ;
  {
  const GGS_multiplicationExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_8068.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 199)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas4", 199)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 199)), GGS_string ("&*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_8068, var_rightExpression_8409, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 198)) ;
  }
  const GGS_multiplicationExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_8068.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_8068, GGS_binaryOperator::class_func_wrappingMul (SOURCE_FILE ("expression-multiplicative.galgas4", 210)), var_rightExpression_8409, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 221)) ;
  const GGS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 222)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                         const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_localVarManager & ioArgument_ioVariableMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_10106 ;
  const GGS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_10106, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 236)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10447 ;
  const GGS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_10106.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10447, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 246)) ;
  {
  const GGS_multiplicationExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_10106.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 257)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("expression-multiplicative.galgas4", 257)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 257)), GGS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_10106, var_rightExpression_10447, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 256)) ;
  }
  const GGS_multiplicationExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_10106.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_10106, GGS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas4", 268)), var_rightExpression_10447, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 278)) ;
  const GGS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 279)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_12151 ;
  const GGS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12151, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 293)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12492 ;
  const GGS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12151.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12492, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 303)) ;
  {
  const GGS_divisionExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_12151.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 314)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas4", 314)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 314)), GGS_string ("&/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_12151, var_rightExpression_12492, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 313)) ;
  }
  const GGS_divisionExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_12151.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_12151, GGS_binaryOperator::class_func_wrappingDiv (SOURCE_FILE ("expression-multiplicative.galgas4", 325)), var_rightExpression_12492, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 335)) ;
  const GGS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 336)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14175 ;
  const GGS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14175, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 350)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14516 ;
  const GGS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14175.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14516, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 360)) ;
  {
  const GGS_divisionExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14175.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 371)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("expression-multiplicative.galgas4", 371)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 371)), GGS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14175, var_rightExpression_14516, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 370)) ;
  }
  const GGS_divisionExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14175.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14175, GGS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas4", 382)), var_rightExpression_14516, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@moduloExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 392)) ;
  const GGS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 393)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@moduloExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16194 ;
  const GGS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16194, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 407)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16535 ;
  const GGS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16194.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16535, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 417)) ;
  {
  const GGS_moduloExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16194.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 428)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("expression-multiplicative.galgas4", 428)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 428)), GGS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16194, var_rightExpression_16535, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 427)) ;
  }
  const GGS_moduloExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16194.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16194, GGS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas4", 439)), var_rightExpression_16535, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                 GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_3510 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("expression-primary-self.galgas4", 80)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("expression-primary-self.galgas4", 80)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_selfCppName_3595 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      const GGS_selfInExpressionAST temp_1 = this ;
      outArgument_outExpression = GGS_selfInExpressionForGeneration::init_21__21__21_ (var_selfAvailable_3510.readProperty_type (), temp_1.readProperty_mSelfLocation (), var_selfCppName_3595, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfInExpressionAST temp_2 = this ;
    GenericArray <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (temp_2.readProperty_mSelfLocation (), GGS_string ("'self' not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 84)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                    GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                    GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GGS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-self.galgas4", 104)), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 104)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 105)) ;
  const GGS_selfInExpressionForGeneration temp_0 = this ;
  const GGS_selfInExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (temp_1.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)) ;
  {
  const GGS_selfInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 107)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@trueExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@trueExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                               const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                               GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                               GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_trueExpressionAST temp_0 = this ;
  outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@falseExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@falseExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_falseExpressionAST temp_0 = this ;
  outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@trueExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                  GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                  GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                  GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                  GGS_string & outArgument_outCppExpression,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("GGS_bool (true)") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@falseExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                   GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                   GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                   GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("GGS_bool (false)") ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@trueExpressionForGeneration isTrueExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_trueExpressionForGeneration::getter_isTrueExpression (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryPlusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryPlusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-plus.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4142 = outArgument_outExpression.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4142, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("expression-unary-plus.galgas4", 97)) COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 97)).operator_not (SOURCE_FILE ("expression-unary-plus.galgas4", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unaryPlusExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4142, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 99)).add_operation (GGS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 115)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testDynamicClassInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_5289 ;
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas4", 133)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5289, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 130)) ;
  const GGS_testDynamicClassInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_castType_5338 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 140)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_5289.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 142)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas4", 142)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_5584 = var_castType_5338 ;
      GGS_bool var_found_5611 = GGS_bool (ComparisonKind::equal, var_t_5584.objectCompare (var_expression_5289.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 146)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 146)).isValid ()) {
        uint32_t variant_5651 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 146)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 146)).uintValue () ;
        bool loop_5651 = true ;
        while (loop_5651) {
          loop_5651 = var_found_5611.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_and (extensionGetter_definition (var_t_5584, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).isValid () ;
          if (loop_5651) {
            loop_5651 = var_found_5611.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_and (extensionGetter_definition (var_t_5584, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).boolValue () ;
          }
          if (loop_5651 && (0 == variant_5651)) {
            loop_5651 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas4", 146)) ;
          }
          if (loop_5651) {
            variant_5651 -= 1 ;
            var_t_5584 = extensionGetter_definition (var_t_5584, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 148)).readProperty_superType () ;
            var_found_5611 = GGS_bool (ComparisonKind::equal, var_t_5584.objectCompare (var_expression_5289.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_5611.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 151)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_testDynamicClassInExpressionAST temp_4 = this ;
          const GGS_testDynamicClassInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).add_operation (extensionGetter_definition (var_expression_5289.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 152)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GenericArray <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_5289.readProperty_mLocation (), GGS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_5289.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 157)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 156)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 157)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 156)) ;
  }
  const GGS_testDynamicClassInExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_testDynamicClassInExpressionForGeneration::init_21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_5289, var_castType_5338, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@castInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 173)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@castInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_7547 ;
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas4", 191)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7547, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 188)) ;
  const GGS_castInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_type_7597 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 198)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_7547.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 200)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas4", 200)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_7837 = var_type_7597 ;
      GGS_bool var_found_7860 = GGS_bool (ComparisonKind::equal, var_t_7837.objectCompare (var_expression_7547.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 204)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 204)).isValid ()) {
        uint32_t variant_7900 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 204)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 204)).uintValue () ;
        bool loop_7900 = true ;
        while (loop_7900) {
          loop_7900 = var_found_7860.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_and (extensionGetter_definition (var_t_7837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).isValid () ;
          if (loop_7900) {
            loop_7900 = var_found_7860.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_and (extensionGetter_definition (var_t_7837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).boolValue () ;
          }
          if (loop_7900 && (0 == variant_7900)) {
            loop_7900 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas4", 204)) ;
          }
          if (loop_7900) {
            variant_7900 -= 1 ;
            var_t_7837 = extensionGetter_definition (var_t_7837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 206)).readProperty_superType () ;
            var_found_7860 = GGS_bool (ComparisonKind::equal, var_t_7837.objectCompare (var_expression_7547.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_7860.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 209)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_castInExpressionAST temp_4 = this ;
          const GGS_castInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 211)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 211)).add_operation (extensionGetter_definition (var_expression_7547.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 212)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 211)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 212)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 210)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GenericArray <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_7547.readProperty_mLocation (), GGS_string ("cast expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_7547.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 217)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 216)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 217)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 215)) ;
  }
  const GGS_castInExpressionAST temp_8 = this ;
  const GGS_castInExpressionAST temp_9 = this ;
  outArgument_outExpression = GGS_castInExpressionForGeneration::init_21__21__21__21__21_ (var_type_7597, temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_7547, temp_9.readProperty_mTypeName ().readProperty_string (), var_type_7597, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testDynamicClassInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionForGeneration temp_0 = this ;
  GGS_string var_typeNameRepresentation_9426 = extensionGetter_definition (temp_0.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 246)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 246)) ;
  GGS_string var_receiverExpression_9719 ;
  const GGS_testDynamicClassInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_9719, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 248)) ;
  const GGS_testDynamicClassInExpressionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 256)) ;
  outArgument_outCppExpression = GGS_string ("GGS_bool (nullptr != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_9426, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 257)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 258)).add_operation (var_receiverExpression_9719, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 259)).add_operation (GGS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 259)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@castInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                    GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GGS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_castInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 271)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas4", 272)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 272)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 273)) ;
  GGS_string var_receiverExpression_10651 ;
  const GGS_castInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_10651, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 275)) ;
  const GGS_castInExpressionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (temp_2.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 283)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 283)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 283)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 284)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 284)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 284)).add_operation (var_receiverExpression_10651, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 285)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 285)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 283)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 286)) ;
  }
  const GGS_castInExpressionForGeneration temp_3 = this ;
  const GGS_castInExpressionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (temp_3.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 290)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 289)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 290)).add_operation (var_receiverExpression_10651, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 291)).add_operation (GGS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 291)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 291)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (GGS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (temp_4.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 292)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (var_receiverExpression_10651, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (GGS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 293)).add_operation (GGS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 293)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 288)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 295)) ;
  }
  const GGS_castInExpressionForGeneration temp_5 = this ;
  const GGS_castInExpressionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 297)).add_operation (temp_5.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 298)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 297)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 298)).add_operation (var_receiverExpression_10651, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 299)).add_operation (GGS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 299)).add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 299)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 300)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 296)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 301)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 302)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 303)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 304)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 305)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@rightShiftExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 130)) ;
  const GGS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 131)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@rightShiftExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_6551 ;
  const GGS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_6551, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 146)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_6915 ;
  const GGS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_6915, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 156)) ;
  GGS_unifiedTypeMapEntry var_leftType_6996 = var_leftExpression_6551.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_left_7043 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_6551.ptr ())) ;
    if (nullptr == var_left_7043.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS_literalUIntExpressionForGeneration var_right_7116 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_6915.ptr ())) ;
      if (nullptr == var_right_7116.ptr ()) {
        test_2 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_2) {
        const GGS_rightShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_7043.readProperty_mValue ().right_shift_operation (var_right_7116.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 172)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_literalBigIntExpressionForGeneration var_left_7384 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_6551.ptr ())) ;
      if (nullptr == var_left_7384.ptr ()) {
        test_4 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_4) {
        GGS_literalBigIntExpressionForGeneration var_right_7457 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_6915.ptr ())) ;
        if (nullptr == var_right_7457.ptr ()) {
          test_4 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_4) {
          const GGS_rightShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_7384.readProperty_mValue ().right_shift_operation (var_right_7457.readProperty_mValue ().getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 179)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 179)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_6996, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 181)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas4", 181)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 181)).operator_not (SOURCE_FILE ("expression-additive.galgas4", 181)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_rightShiftExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_6996, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 183)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 183)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 183)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas4", 182)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_rightShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_6996, temp_9.readProperty_mOperatorLocation (), var_leftExpression_6551, GGS_binaryOperator::class_func_rightShift (SOURCE_FILE ("expression-additive.galgas4", 191)), var_rightExpression_6915, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@leftShiftExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 202)) ;
  const GGS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 203)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@leftShiftExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_9392 ;
  const GGS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9392, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 218)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_9756 ;
  const GGS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9756, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 228)) ;
  GGS_unifiedTypeMapEntry var_leftType_9837 = var_leftExpression_9392.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_left_9884 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_9392.ptr ())) ;
    if (nullptr == var_left_9884.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS_literalUIntExpressionForGeneration var_right_9957 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_9756.ptr ())) ;
      if (nullptr == var_right_9957.ptr ()) {
        test_2 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_2) {
        const GGS_leftShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_9884.readProperty_mValue ().left_shift_operation (var_right_9957.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 244)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_literalBigIntExpressionForGeneration var_left_10225 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_9392.ptr ())) ;
      if (nullptr == var_left_10225.ptr ()) {
        test_4 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_4) {
        GGS_literalBigIntExpressionForGeneration var_right_10298 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_9756.ptr ())) ;
        if (nullptr == var_right_10298.ptr ()) {
          test_4 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_4) {
          const GGS_leftShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_10225.readProperty_mValue ().left_shift_operation (var_right_10298.readProperty_mValue ().getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 251)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 251)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_9837, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 253)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas4", 253)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 253)).operator_not (SOURCE_FILE ("expression-additive.galgas4", 253)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_leftShiftExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_9837, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 255)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 255)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 255)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas4", 254)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_leftShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_9837, temp_9.readProperty_mOperatorLocation (), var_leftExpression_9392, GGS_binaryOperator::class_func_leftShift (SOURCE_FILE ("expression-additive.galgas4", 263)), var_rightExpression_9756, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 274)) ;
  const GGS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 275)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_12240 ;
  const GGS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12240, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 290)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12581 ;
  const GGS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12240.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12581, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 300)) ;
  {
  const GGS_addExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_12240.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 311)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas4", 311)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 311)), GGS_string ("&+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_12240, var_rightExpression_12581, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 310)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_12886 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_12240.ptr ())) ;
    if (nullptr == var_leftBigint_12886.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_12966 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_12581.ptr ())) ;
      if (nullptr == var_rightBigint_12966.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_addExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_12886.readProperty_mValue ().add_operation (var_rightBigint_12966.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 323)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_addExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_12240.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_12240, GGS_binaryOperator::class_func_wrappingAdd (SOURCE_FILE ("expression-additive.galgas4", 330)), var_rightExpression_12581, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 341)) ;
  const GGS_addExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 342)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14640 ;
  const GGS_addExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14640, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 356)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14981 ;
  const GGS_addExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14640.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14981, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 366)) ;
  {
  const GGS_addExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14640.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 377)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("expression-additive.galgas4", 377)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 377)), GGS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14640, var_rightExpression_14981, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 376)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_15280 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_14640.ptr ())) ;
    if (nullptr == var_leftBigint_15280.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_15360 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_14981.ptr ())) ;
      if (nullptr == var_rightBigint_15360.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_addExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_15280.readProperty_mValue ().add_operation (var_rightBigint_15360.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 389)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_addExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14640.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_14640, GGS_binaryOperator::class_func_add (SOURCE_FILE ("expression-additive.galgas4", 396)), var_rightExpression_14981, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 407)) ;
  const GGS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 408)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_17046 ;
  const GGS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_17046, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 423)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_17387 ;
  const GGS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_17046.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_17387, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 433)) ;
  {
  const GGS_subExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_17046.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 444)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas4", 444)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 444)), GGS_string ("&-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_17046, var_rightExpression_17387, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 443)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_17692 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_17046.ptr ())) ;
    if (nullptr == var_leftBigint_17692.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_17772 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_17387.ptr ())) ;
      if (nullptr == var_rightBigint_17772.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_subExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_17692.readProperty_mValue ().subtract_operation (var_rightBigint_17772.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 456)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_subExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_17046.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_17046, GGS_binaryOperator::class_func_wrappingSub (SOURCE_FILE ("expression-additive.galgas4", 463)), var_rightExpression_17387, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 474)) ;
  const GGS_subExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 475)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_19446 ;
  const GGS_subExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_19446, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 489)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_19787 ;
  const GGS_subExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_19446.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_19787, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 499)) ;
  {
  const GGS_subExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_19446.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 510)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("expression-additive.galgas4", 510)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 510)), GGS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_19446, var_rightExpression_19787, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 509)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_20086 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_19446.ptr ())) ;
    if (nullptr == var_leftBigint_20086.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_20166 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_19787.ptr ())) ;
      if (nullptr == var_rightBigint_20166.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_subExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_20086.readProperty_mValue ().subtract_operation (var_rightBigint_20166.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 522)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_subExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_19446.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_19446, GGS_binaryOperator::class_func_sub (SOURCE_FILE ("expression-additive.galgas4", 529)), var_rightExpression_19787, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@binaryOperatorExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                            GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GGS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_binaryOperatorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 572)) ;
  GGS_string var_leftTemporaryOperand_22086 ;
  const GGS_binaryOperatorExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_22086, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 574)) ;
  GGS_string var_rightTemporaryOperand_22272 ;
  const GGS_binaryOperatorExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_22272, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 576)) ;
  GGS_string var_operatorString_22335 ;
  GGS_bool var_hasCompilerOption_22362 ;
  const GGS_binaryOperatorExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mOperator ().enumValue ()) {
  case GGS_binaryOperator::Enumeration::invalid:
    break ;
  case GGS_binaryOperator::Enumeration::enum_rightShift:
    {
      var_operatorString_22335 = GGS_string ("right_shift_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_leftShift:
    {
      var_operatorString_22335 = GGS_string ("left_shift_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_add:
    {
      var_operatorString_22335 = GGS_string ("add_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_wrappingAdd:
    {
      var_operatorString_22335 = GGS_string ("wrapping_add_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_sub:
    {
      var_operatorString_22335 = GGS_string ("subtract_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_wrappingSub:
    {
      var_operatorString_22335 = GGS_string ("wrapping_subtract_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_and:
    {
      var_operatorString_22335 = GGS_string ("operator_and") ;
      var_hasCompilerOption_22362 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_or:
    {
      var_operatorString_22335 = GGS_string ("operator_or") ;
      var_hasCompilerOption_22362 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_xor:
    {
      var_operatorString_22335 = GGS_string ("operator_xor") ;
      var_hasCompilerOption_22362 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_wrappingMul:
    {
      var_operatorString_22335 = GGS_string ("wrapping_multiply_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_multiply_5F_operation:
    {
      var_operatorString_22335 = GGS_string ("multiply_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_divide_5F_operation:
    {
      var_operatorString_22335 = GGS_string ("divide_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_wrappingDiv:
    {
      var_operatorString_22335 = GGS_string ("wrapping_divide_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_modulo_5F_operation:
    {
      var_operatorString_22335 = GGS_string ("modulo_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  }
  outArgument_outCppExpression = var_leftTemporaryOperand_22086.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 624)).add_operation (var_operatorString_22335, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 624)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 624)) ;
  outArgument_outCppExpression.plusAssignOperation(var_rightTemporaryOperand_22272, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 625)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_hasCompilerOption_22362.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 627)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 627)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-additive.galgas4", 628)) ;
      }
    }
  }
  const GGS_binaryOperatorExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_commaSourceFile (temp_5.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 630)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 630)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 630)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 116)) ;
  const GGS_orExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 117)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_6013 ;
  const GGS_orExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_6013, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 131)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_6355 ;
  const GGS_orExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6013.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_6355, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 141)) ;
  {
  const GGS_orExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_6013.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 152)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas4", 152)) COMMA_SOURCE_FILE ("expression-or.galgas4", 152)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_6013, var_rightExpression_6355, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 151)) ;
  }
  const GGS_orExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_6013.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_6013, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("expression-or.galgas4", 162)), var_rightExpression_6355, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orShortExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 172)) ;
  const GGS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 173)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orShortExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                  GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_8004 ;
  const GGS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8004, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 187)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8346 ;
  const GGS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8004.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8346, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 197)) ;
  {
  const GGS_orShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_8004.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 208)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas4", 208)) COMMA_SOURCE_FILE ("expression-or.galgas4", 208)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_8004, var_rightExpression_8346, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 207)) ;
  }
  const GGS_orShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_orShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_8004.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_8004, var_rightExpression_8346, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@xorExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 227)) ;
  const GGS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 228)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@xorExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_9985 ;
  const GGS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9985, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 242)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10327 ;
  const GGS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_9985.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10327, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 252)) ;
  {
  const GGS_xorExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_9985.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 263)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("expression-or.galgas4", 263)) COMMA_SOURCE_FILE ("expression-or.galgas4", 263)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_9985, var_rightExpression_10327, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 262)) ;
  }
  const GGS_xorExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_9985.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_9985, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("expression-or.galgas4", 274)), var_rightExpression_10327, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@closedSliceExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 284)) ;
  const GGS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 285)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@closedSliceExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument__5F_inInferenceType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_12041 ;
  const GGS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12041, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 300)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12405 ;
  const GGS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12405, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 310)) ;
  GGS_unifiedTypeMapEntry var_leftType_12486 = var_leftExpression_12041.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_leftType_12486, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 321)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("u32"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_12041.readProperty_mLocation (), GGS_string ("the left expression or '...' operator should an @u32"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas4", 322)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_rightType_12704 = var_rightExpression_12405.readProperty_mResultType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_12704, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 325)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("u32"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_12405.readProperty_mLocation (), GGS_string ("the right expression or '...' operator should an @u32"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas4", 326)) ;
    }
  }
  const GGS_closedSliceExpressionAST temp_6 = this ;
  outArgument_outExpression = GGS_closedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_12041.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 330)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_12041, var_rightExpression_12405, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@openedSliceExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 342)) ;
  const GGS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 343)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@openedSliceExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument__5F_inInferenceType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14634 ;
  const GGS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14634, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 357)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14997 ;
  const GGS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14997, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 367)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_leftExpression_14634.readProperty_mResultType (), var_leftExpression_14634.readProperty_mLocation (), var_leftExpression_14634, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 377)) ;
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_rightExpression_14997.readProperty_mResultType (), var_rightExpression_14997.readProperty_mLocation (), var_rightExpression_14997, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 383)) ;
  }
  const GGS_openedSliceExpressionAST temp_2 = this ;
  outArgument_outExpression = GGS_openedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_14634.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 391)), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14634, var_rightExpression_14997, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orShortExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     GGS_string & outArgument_outCppExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 429)) ;
  GGS_string var_leftTemporaryOperand_17311 ;
  const GGS_orShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_17311, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 431)) ;
  GGS_string var_testVar_17368 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas4", 439)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 439)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 440)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_bool ").add_operation (var_testVar_17368, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 441)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 441)).add_operation (var_leftTemporaryOperand_17311, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 441)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 441)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 441)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue != ").add_operation (var_testVar_17368, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 442)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 442)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 442)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 444)) ;
  }
  GGS_string var_rightTemporaryOperand_17850 ;
  const GGS_orShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_17850, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 445)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_testVar_17368.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 452)).add_operation (var_rightTemporaryOperand_17850, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 452)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 452)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 452)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 453)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 454)) ;
  outArgument_outCppExpression = var_testVar_17368 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@closedSliceExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_closedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 466)) ;
  GGS_string var_leftTemporaryOperand_18638 ;
  const GGS_closedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_18638, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 468)) ;
  GGS_string var_rightTemporaryOperand_18847 ;
  const GGS_closedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_18847, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 476)) ;
  const GGS_closedSliceExpressionForGeneration temp_3 = this ;
  const GGS_closedSliceExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_18638, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 485)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 485)).add_operation (var_rightTemporaryOperand_18847, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 485)).add_operation (GGS_string (".subtract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (var_leftTemporaryOperand_18638, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (GGS_string (").add_operation (GGS_u_33__32_ (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@openedSliceExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_openedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 498)) ;
  GGS_string var_leftTemporaryOperand_19800 ;
  const GGS_openedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19800, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 500)) ;
  GGS_string var_rightTemporaryOperand_20009 ;
  const GGS_openedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20009, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 508)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-or.galgas4", 516)) ;
  }
  const GGS_openedSliceExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_19800, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 518)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 518)).add_operation (var_rightTemporaryOperand_20009, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 518)).add_operation (GGS_string (".subtract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (var_leftTemporaryOperand_19800, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 520)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 520)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structPropertyAccessExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpressionGeneration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_exprGeneration_4285 ;
  const GGS_structPropertyAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 100)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exprGeneration_4285, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 97)) ;
  GGS_unifiedTypeMapEntry var_expressionType_4375 = var_exprGeneration_4285.readProperty_mResultType () ;
  GGS_propertyMap var_propertyMap_4427 = extensionGetter_definition (var_expressionType_4375, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 108)).readProperty_propertyMap () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_structPropertyAccessExpressionAST temp_2 = this ;
    const GGS_propertyMap_2E_element var_prop_4490 = var_propertyMap_4427.readSubscript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_propertyMap_4427.readSubscript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionForGeneration *> (var_exprGeneration_4285.ptr ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          {
          const GGS_structPropertyAccessExpressionAST temp_4 = this ;
          const GGS_structPropertyAccessExpressionAST temp_5 = this ;
          GGS_unifiedTypeMapEntry joker_4713_3 ; // Joker input parameter
          GGS_string joker_4713_2 ; // Joker input parameter
          GGS_string joker_4713_1 ; // Joker input parameter
          extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (temp_4.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 112)), temp_5.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_4713_3, joker_4713_2, joker_4713_1, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 111)) ;
          }
        }
      }
      const GGS_structPropertyAccessExpressionAST temp_6 = this ;
      extensionMethod_checkGetAccess (var_prop_4490.readProperty_mAccessControl (), constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_6.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 116)) ;
      const GGS_structPropertyAccessExpressionAST temp_7 = this ;
      const GGS_structPropertyAccessExpressionAST temp_8 = this ;
      outArgument_outExpressionGeneration = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_4490.readProperty_mPropertyType (), temp_7.readProperty_operatorLocation (), var_exprGeneration_4285, temp_8.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_getterMap var_getterMap_5080 = extensionGetter_definition (var_expressionType_4375, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 125)).readProperty_getterMap () ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_structPropertyAccessExpressionAST temp_10 = this ;
      const GGS_getterMap_2E_element var_theGetter_5141 = var_getterMap_5080.readSubscript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_getterMap_5080.readSubscript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_9 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_9) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, var_theGetter_5141.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 127)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_structPropertyAccessExpressionAST temp_12 = this ;
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_propertyName ().readProperty_location (), GGS_string ("for being called as a property read, the func should have no formal argument (has ").add_operation (var_theGetter_5141.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 130)).getter_string (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 129)), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 129)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 130)), fixItArray13  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 128)) ;
            outArgument_outExpressionGeneration.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_11) {
          const GGS_structPropertyAccessExpressionAST temp_14 = this ;
          GGS_string temp_15 ;
          const GalgasBool test_16 = GGS_bool (ComparisonKind::equal, var_theGetter_5141.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_structPropertyAccessExpressionAST temp_17 = this ;
            temp_15 = temp_17.readProperty_propertyName ().readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_16) {
            temp_15 = var_theGetter_5141.readProperty_mGetterNameThatObsoletesInvokationName () ;
          }
          outArgument_outExpressionGeneration = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_theGetter_5141.readProperty_mReturnedType (), temp_14.readProperty_propertyName ().readProperty_location (), var_theGetter_5141.readProperty_mKind (), var_exprGeneration_4285, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), temp_15, GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), var_theGetter_5141.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      GGS_string var_s_6012 = GGS_string ("undefined property, undefined func") ;
      UpEnumerator_propertyMap enumerator_6077 (var_propertyMap_4427) ;
      while (enumerator_6077.hasCurrentObject ()) {
        var_s_6012.plusAssignOperation(GGS_string ("\n  -- property: ").add_operation (enumerator_6077.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 150)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 150)) ;
        enumerator_6077.gotoNextObject () ;
      }
      UpEnumerator_getterMap enumerator_6178 (var_getterMap_5080) ;
      while (enumerator_6178.hasCurrentObject ()) {
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, enumerator_6178.current (HERE).readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 153)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            var_s_6012.plusAssignOperation(GGS_string ("\n  -- func: ").add_operation (enumerator_6178.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 154)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 154)) ;
          }
        }
        enumerator_6178.gotoNextObject () ;
      }
      const GGS_structPropertyAccessExpressionAST temp_19 = this ;
      GenericArray <FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_propertyName ().readProperty_location (), var_s_6012, fixItArray20  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 157)) ;
      outArgument_outExpressionGeneration.drop () ; // Release error dropped variable
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@propertyAccessExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_propertyAccessExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                            GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GGS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_propertyAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 179)) ;
  GGS_string var_operand_7500 ;
  const GGS_propertyAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_7500, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 181)) ;
  outArgument_outCppExpression = var_operand_7500.add_operation (GGS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 189)) ;
  const GGS_propertyAccessExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression.plusAssignOperation(temp_2.readProperty_structFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 190)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 190)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subcriptReadAccessExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_subcriptReadAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subcriptReadAccessExpressionAST temp_0 = this ;
  UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_8434 (temp_0.readProperty_actualArgumentList ()) ;
  while (enumerator_8434.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_8434.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 210)) ;
    enumerator_8434.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subcriptReadAccessExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subcriptReadAccessExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_9561 ;
  const GGS_subcriptReadAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 228)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_9561, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 225)) ;
  GGS_unifiedTypeMapEntry var_expressionType_9607 = var_expression_9561.readProperty_mResultType () ;
  const GGS_subcriptReadAccessExpressionAST temp_1 = this ;
  GGS_string var_invocationSignature_9693 = extensionGetter_subcriptSignature (temp_1.readProperty_actualArgumentList (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 236)) ;
  GGS_readSubscriptMap var_subcriptMap_9801 = extensionGetter_definition (var_expressionType_9607, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 238)).readProperty_readSubscriptMap () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_readSubscriptMap_2E_element var_aSubscript_9869 = var_subcriptMap_9801.readSubscript__3F_ (var_invocationSignature_9693, inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_subcriptMap_9801.readSubscript__3F_ (var_invocationSignature_9693, inCompiler COMMA_HERE).isValuated ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS__5B_semanticExpressionForGeneration_5D_ var_semanticExpressionListForGeneration_9971 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_subcriptReadAccessExpressionAST temp_3 = this ;
      UpEnumerator__5B_functionSignatureElement_5D_ enumerator_10081 (var_aSubscript_9869.readProperty_argumentTypeList ()) ;
      UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_10117 (temp_3.readProperty_actualArgumentList ()) ;
      while (enumerator_10081.hasCurrentObject () && enumerator_10117.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expression_10480 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10117.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10081.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10480, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 243)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_10081.current (HERE).readProperty_mFormalArgumentType (), var_expression_10480.readProperty_mResultType (), enumerator_10117.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_10480, inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 252)) ;
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_10081.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10117.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GGS_string temp_5 ;
            const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_10081.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              temp_5 = enumerator_10081.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 260)) ;
            }else if (GalgasBool::boolFalse == test_6) {
              temp_5 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_10814 = GGS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 259)) ;
            GenericArray <FixItDescription> fixItArray7 ;
            appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, var_s_10814) ;
            inCompiler->emitSemanticError (enumerator_10117.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_10814, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 263)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 263)), fixItArray7  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 263)) ;
          }
        }
        var_semanticExpressionListForGeneration_9971.plusPlusAssignOperation (var_expression_10480  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 266)) ;
        enumerator_10081.gotoNextObject () ;
        enumerator_10117.gotoNextObject () ;
      }
      const GGS_subcriptReadAccessExpressionAST temp_8 = this ;
      outArgument_outExpression = GGS_subcriptReadAccessExpressionForGeneration::init_21__21__21__21__21_ (var_aSubscript_9869.readProperty_valueType (), temp_8.readProperty_endOfArgsLocation (), var_expression_9561, var_invocationSignature_9693, var_semanticExpressionListForGeneration_9971, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_subcriptReadAccessExpressionAST temp_9 = this ;
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_endOfArgsLocation (), GGS_string ("unknown subcript signature"), fixItArray10  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 277)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subcriptReadAccessExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subcriptReadAccessExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subcriptReadAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 299)) ;
  GGS_string var_operand_12720 ;
  const GGS_subcriptReadAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_12720, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 301)) ;
  GGS__5B_string_5D_ var_subcriptArgumentList_12777 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_subcriptReadAccessExpressionForGeneration temp_2 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_12830 (temp_2.readProperty_actualExpressionList ()) ;
  while (enumerator_12830.hasCurrentObject ()) {
    GGS_string var_actualArgOperand_13039 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12830.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_actualArgOperand_13039, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 311)) ;
    {
    var_subcriptArgumentList_12777.setter_append (var_actualArgOperand_13039, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 318)) ;
    }
    enumerator_12830.gotoNextObject () ;
  }
  outArgument_outCppExpression = var_operand_12720.add_operation (GGS_string (".readSubscript_"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 321)) ;
  const GGS_subcriptReadAccessExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssignOperation(temp_3.readProperty_subcriptInvocationName ().getter_identifierRepresentation (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 322)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 322)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 323)) ;
  UpEnumerator__5B_string_5D_ enumerator_13320 (var_subcriptArgumentList_12777) ;
  while (enumerator_13320.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_13320.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 325)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 325)) ;
    enumerator_13320.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 327)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string (" COMMA_HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 328)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 328)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@tildeExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 47)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@tildeExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_3190 ;
  const GGS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3190, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 62)) ;
  GGS_unifiedTypeMapEntry var_type_3272 = var_expression_3190.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_literalBigIntExpressionForGeneration var_exp_3313 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_3190.ptr ())) ;
    if (nullptr == var_exp_3313.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_3313.readProperty_mResultType (), var_exp_3313.readProperty_mLocation (), var_exp_3313.readProperty_mValue ().operator_tilde (SOURCE_FILE ("expression-tilde.galgas4", 76)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3272, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 79)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas4", 79)) COMMA_SOURCE_FILE ("expression-tilde.galgas4", 79)).operator_not (SOURCE_FILE ("expression-tilde.galgas4", 79)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_tildeExpressionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3272, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 81)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 81)).add_operation (GGS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 81)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas4", 80)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      const GGS_tildeExpressionAST temp_5 = this ;
      outArgument_outExpression = GGS_tildeExpressionForGeneration::init_21__21__21_ (var_type_3272, temp_5.readProperty_mOperatorLocation (), var_expression_3190, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@tildeExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tildeExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 114)) ;
  GGS_string var_operand_4968 ;
  const GGS_tildeExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4968, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 116)) ;
  const GGS_tildeExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_4968.add_operation (GGS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 118)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 118)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 118)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 118)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@comparisonExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 181)) ;
  const GGS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 182)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@comparisonExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_8997 ;
  const GGS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8997, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 197)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_9342 ;
  const GGS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8997.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9342, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 207)) ;
  GGS_bool var_isEquatable_9388 = extensionGetter_definition (var_leftExpression_8997.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 217)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("expression-comparison.galgas4", 217)) COMMA_SOURCE_FILE ("expression-comparison.galgas4", 217)) ;
  GGS_bool var_isComparable_9477 = extensionGetter_definition (var_leftExpression_8997.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 218)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("expression-comparison.galgas4", 218)) COMMA_SOURCE_FILE ("expression-comparison.galgas4", 218)) ;
  GGS_bool var_isReferenceEquatable_9568 = extensionGetter_definition (var_leftExpression_8997.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 219)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("expression-comparison.galgas4", 219)) COMMA_SOURCE_FILE ("expression-comparison.galgas4", 219)) ;
  GGS_bool var_operatorIsAvailable_9681 ;
  GGS_string var_operatorName_9715 ;
  const GGS_comparisonExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
    {
      var_operatorName_9715 = GGS_string ("==") ;
      var_operatorIsAvailable_9681 = var_isEquatable_9388 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
    {
      var_operatorName_9715 = GGS_string ("!=") ;
      var_operatorIsAvailable_9681 = var_isEquatable_9388 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_9715 = GGS_string ("<=") ;
      var_operatorIsAvailable_9681 = var_isComparable_9477 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_9715 = GGS_string ("<") ;
      var_operatorIsAvailable_9681 = var_isComparable_9477 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_9715 = GGS_string (">=") ;
      var_operatorIsAvailable_9681 = var_isComparable_9477 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_9715 = GGS_string (">") ;
      var_operatorIsAvailable_9681 = var_isComparable_9477 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_9715 = GGS_string ("===") ;
      var_operatorIsAvailable_9681 = var_isReferenceEquatable_9568 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_9715 = GGS_string ("!==") ;
      var_operatorIsAvailable_9681 = var_isReferenceEquatable_9568 ;
    }
    break ;
  }
  {
  const GGS_comparisonExpressionAST temp_3 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (var_operatorIsAvailable_9681, var_operatorName_9715, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8997, var_rightExpression_9342, inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 249)) ;
  }
  const GGS_comparisonExpressionAST temp_4 = this ;
  const GGS_comparisonExpressionAST temp_5 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), var_leftExpression_8997, temp_5.readProperty_mComparison (), var_rightExpression_9342, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@comparisonExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_comparisonExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 285)) ;
  GGS_string var_leftTemporaryOperand_11941 ;
  const GGS_comparisonExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_11941, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 287)) ;
  GGS_string var_rightTemporaryOperand_12151 ;
  const GGS_comparisonExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_12151, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 295)) ;
  GGS_string var_operatorName_12211 ;
  const GGS_comparisonExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_12211 = GGS_string ("ComparisonKind::equal") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_12211 = GGS_string ("ComparisonKind::notEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_12211 = GGS_string ("ComparisonKind::lowerOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_12211 = GGS_string ("ComparisonKind::lowerThan") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_12211 = GGS_string ("ComparisonKind::greaterOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_12211 = GGS_string ("ComparisonKind::greaterThan") ;
    }
    break ;
  }
  outArgument_outCppExpression = GGS_string ("GGS_bool (").add_operation (var_operatorName_12211, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (var_leftTemporaryOperand_11941, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (GGS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (var_rightTemporaryOperand_12151, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalDoubleExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalDoubleExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalDoubleExpressionAST temp_0 = this ;
  const GGS_literalDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalDoubleExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_f_36__34_ (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalDoubleExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                           GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalDoubleExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_f_36__34_ (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-double.galgas4", 89)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 89)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 89)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionCallExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionAST temp_0 = this ;
  UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_2546 (temp_0.readProperty_mExpressionList ()) ;
  while (enumerator_2546.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_2546.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 53)) ;
    enumerator_2546.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionCallExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_3190 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 68)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3190 COMMA_SOURCE_FILE ("expression-function-call.galgas4", 69)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_functionSignature_3520 ;
  GGS_unifiedTypeMapEntry var_resultType_3571 ;
  GGS_bool var_isInternal_3600 ;
  const GGS_functionCallExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_3520, var_resultType_3571, var_isInternal_3600, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 71)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_3600.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_functionCallExpressionAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_3673 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 79)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_functionCallExpressionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 80)).objectCompare (var_procDeclarationLocation_3673.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 80)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_functionCallExpressionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_3673.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 81)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 81)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 81)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 81)) ;
        }
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_functionCallExpressionAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_3520.getter_count (SOURCE_FILE ("expression-function-call.galgas4", 85)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas4", 85)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_functionCallExpressionAST temp_10 = this ;
      const GGS_functionCallExpressionAST temp_11 = this ;
      const GGS_functionCallExpressionAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 87)).add_operation (GGS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 87)).add_operation (var_functionSignature_3520.getter_count (SOURCE_FILE ("expression-function-call.galgas4", 87)).getter_string (SOURCE_FILE ("expression-function-call.galgas4", 87)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 87)).add_operation (GGS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 87)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas4", 88)).getter_string (SOURCE_FILE ("expression-function-call.galgas4", 88)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 88)).add_operation (GGS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 88)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 86)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GGS__5B_semanticExpressionForGeneration_5D_ var_semanticExpressionListForGeneration_4407 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    const GGS_functionCallExpressionAST temp_14 = this ;
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_4506 (var_functionSignature_3520) ;
    UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_4543 (temp_14.readProperty_mExpressionList ()) ;
    while (enumerator_4506.hasCurrentObject () && enumerator_4543.hasCurrentObject ()) {
      GGS_semanticExpressionForGeneration var_expression_4903 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_4543.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_4506.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4903, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 94)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_4506.current (HERE).readProperty_mFormalArgumentType (), var_expression_4903.readProperty_mResultType (), enumerator_4543.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_4903, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 103)) ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_4506.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_4543.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_4506.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = enumerator_4506.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 111)) ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_5237 = GGS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 110)) ;
          GenericArray <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, EnumFixItKind::fixItReplace, var_s_5237) ;
          inCompiler->emitSemanticError (enumerator_4543.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_5237, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 114)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 114)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 114)) ;
        }
      }
      var_semanticExpressionListForGeneration_4407.plusPlusAssignOperation (var_expression_4903  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 117)) ;
      enumerator_4506.gotoNextObject () ;
      enumerator_4543.gotoNextObject () ;
    }
    const GGS_functionCallExpressionAST temp_19 = this ;
    const GGS_functionCallExpressionAST temp_20 = this ;
    outArgument_outExpression = GGS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_3571, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_4407, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionCallExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 148)) ;
  const GGS_functionCallExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas4", 150)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 150))  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 150)) ;
  GGS__5B_string_5D_ var_parameterList_6959 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_functionCallExpressionForGeneration temp_2 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_7008 (temp_2.readProperty_mExpressions ()) ;
  while (enumerator_7008.hasCurrentObject ()) {
    GGS_string var_parameter_7154 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_7008.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_7154, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 154)) ;
    var_parameterList_6959.plusPlusAssignOperation (var_parameter_7154  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 155)) ;
    enumerator_7008.gotoNextObject () ;
  }
  const GGS_functionCallExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas4", 157)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 157)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 157)) ;
  UpEnumerator__5B_string_5D_ enumerator_7312 (var_parameterList_6959) ;
  while (enumerator_7312.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_7312.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 159)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 159)) ;
    enumerator_7312.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-function-call.galgas4", 161)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 162)) ;
  const GGS_functionCallExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 163)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 163)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 163)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 103)) ;
  const GGS_andExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 104)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_5550 ;
  const GGS_andExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_5550, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 118)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_5891 ;
  const GGS_andExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_5550.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_5891, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 128)) ;
  {
  const GGS_andExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_5550.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 139)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas4", 139)) COMMA_SOURCE_FILE ("expression-and.galgas4", 139)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_5550, var_rightExpression_5891, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 138)) ;
  }
  const GGS_andExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_5550.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_5550, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("expression-and.galgas4", 150)), var_rightExpression_5891, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andShortExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 160)) ;
  const GGS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 161)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andShortExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_7569 ;
  const GGS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7569, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 175)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_7910 ;
  const GGS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7569.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7910, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 185)) ;
  {
  const GGS_andShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7569.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 196)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas4", 196)) COMMA_SOURCE_FILE ("expression-and.galgas4", 196)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7569, var_rightExpression_7910, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 195)) ;
  }
  const GGS_andShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_andShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_7569.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7569, var_rightExpression_7910, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andShortExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      GGS_string & outArgument_outCppExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 227)) ;
  GGS_string var_leftTemporaryOperand_9389 ;
  const GGS_andShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_9389, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 229)) ;
  GGS_string var_testVar_9446 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas4", 237)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 237)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_bool ").add_operation (var_testVar_9446, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)).add_operation (var_leftTemporaryOperand_9389, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 238)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_9446, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 239)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 239)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 239)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 241)) ;
  }
  GGS_string var_rightTemporaryOperand_9928 ;
  const GGS_andShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_9928, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 242)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_testVar_9446.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 249)).add_operation (var_rightTemporaryOperand_9928, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 249)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 249)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 249)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 250)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 251)) ;
  outArgument_outCppExpression = var_testVar_9446 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 115)) ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 116)) ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 117)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_if_5F_expression_5384 ;
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_if_5F_expression_5384, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 132)) ;
  GGS_semanticExpressionForGeneration var_then_5F_expression_5675 ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_then_5F_expression_5675, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 142)) ;
  GGS_semanticExpressionForGeneration var_else_5F_expression_5968 ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_else_5F_expression_5968, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 152)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_if_5F_expression_5384.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 162)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ifExpressionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mOperatorLocation (), GGS_string ("the test expression type is '@").add_operation (extensionGetter_definition (var_if_5F_expression_5384.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 164)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 164)).add_operation (GGS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 164)), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 163)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::notEqual, var_then_5F_expression_5675.readProperty_mResultType ().objectCompare (var_else_5F_expression_5968.readProperty_mResultType ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_ifExpressionAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("operand expression types are '@").add_operation (extensionGetter_definition (var_then_5F_expression_5675.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).add_operation (GGS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).add_operation (extensionGetter_definition (var_else_5F_expression_5968.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).add_operation (GGS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 167)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      const GGS_ifExpressionAST temp_9 = this ;
      outArgument_outExpression = GGS_ifExpressionForGeneration::init_21__21__21__21__21_ (var_then_5F_expression_5675.readProperty_mResultType (), temp_9.readProperty_mOperatorLocation (), var_if_5F_expression_5384, var_then_5F_expression_5675, var_else_5F_expression_5968, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                GGS_string & outArgument_outCppExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_ifExpression_7834 ;
  const GGS_ifExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_7834, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 202)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-if.galgas4", 210)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 210)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 211)) ;
  const GGS_ifExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mThenExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)) ;
  GGS_string var_testVar_8096 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-if.galgas4", 213)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 213)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 214)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GalgasBool ").add_operation (var_testVar_8096, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)).add_operation (var_ifExpression_7834, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_8096, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 216)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 216)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 218)) ;
  }
  GGS_string var_thenExpression_8573 ;
  const GGS_ifExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mThenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_8573, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 219)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)).add_operation (var_thenExpression_8573, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 227)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else if (GalgasBool::boolFalse == ").add_operation (var_testVar_8096, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 229)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 229)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 229)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 230)) ;
  }
  GGS_string var_elseExpression_9008 ;
  const GGS_ifExpressionForGeneration temp_3 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_3.readProperty_mElseExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_9008, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 231)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)).add_operation (var_elseExpression_9008, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 239)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 240)) ;
}

