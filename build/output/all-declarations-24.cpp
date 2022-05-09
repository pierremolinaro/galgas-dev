#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_14669 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_14711 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_14669.operator_not (SOURCE_FILE ("type-enum.galgas", 387)).isValidAndTrue () ;
  if (enumerator_14711.hasCurrentObject () && bool_1) {
    while (enumerator_14711.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_14669 = GALGAS_bool (kIsStrictSup, enumerator_14711.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 388)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_14711.gotoNextObject () ;
      if (enumerator_14711.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_14669.operator_not (SOURCE_FILE ("type-enum.galgas", 387)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 391)), temp_3.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 392)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_14669 COMMA_SOURCE_FILE ("type-enum.galgas", 390))) ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  const GALGAS_enumTypeForGeneration temp_6 = object ;
  const GALGAS_enumTypeForGeneration temp_7 = object ;
  const GALGAS_enumTypeForGeneration temp_8 = object ;
  const GALGAS_enumTypeForGeneration temp_9 = object ;
  const GALGAS_enumTypeForGeneration temp_10 = object ;
  const GALGAS_enumTypeForGeneration temp_11 = object ;
  const GALGAS_enumTypeForGeneration temp_12 = object ;
  const GALGAS_enumTypeForGeneration temp_13 = object ;
  const GALGAS_enumTypeForGeneration temp_14 = object ;
  const GALGAS_enumTypeForGeneration temp_15 = object ;
  const GALGAS_enumTypeForGeneration temp_16 = object ;
  const GALGAS_enumTypeForGeneration temp_17 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_5.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 397)), temp_6.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 398)), temp_7.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 399)), temp_8.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 400)), temp_9.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 401)), temp_10.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 402)), temp_11.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 403)), temp_12.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 404)), temp_13.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 405)), temp_14.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 406)), temp_15.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 407)), temp_16.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 408)), temp_17.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 409)) COMMA_SOURCE_FILE ("type-enum.galgas", 396))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 396)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_16025 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_16067 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_16025.operator_not (SOURCE_FILE ("type-enum.galgas", 421)).isValidAndTrue () ;
  if (enumerator_16067.hasCurrentObject () && bool_1) {
    while (enumerator_16067.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_16025 = GALGAS_bool (kIsStrictSup, enumerator_16067.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 422)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_16067.gotoNextObject () ;
      if (enumerator_16067.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_16025.operator_not (SOURCE_FILE ("type-enum.galgas", 421)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_16227 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_16227.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMap_2D_entryList enumerator_16268 (enumerator_16227.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_16268.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_16268.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 426)) ;
      enumerator_16268.gotoNextObject () ;
    }
    enumerator_16227.gotoNextObject () ;
  }
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 430)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 431)), temp_5.readProperty_mConstantList (), var_hasAssociatedValues_16025 COMMA_SOURCE_FILE ("type-enum.galgas", 429))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_32_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_16895 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_16937 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_16895.operator_not (SOURCE_FILE ("type-enum.galgas", 445)).isValidAndTrue () ;
  if (enumerator_16937.hasCurrentObject () && bool_1) {
    while (enumerator_16937.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_16895 = GALGAS_bool (kIsStrictSup, enumerator_16937.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 446)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_16937.gotoNextObject () ;
      if (enumerator_16937.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_16895.operator_not (SOURCE_FILE ("type-enum.galgas", 445)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 448)) ;
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 450)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 451)), temp_5.readProperty_mConstantList (), var_hasAssociatedValues_16895 COMMA_SOURCE_FILE ("type-enum.galgas", 449))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                                     extensionMethod_enumTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_11974 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 313)), temp_1.readProperty_mExternTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-extern.galgas", 313)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11974, temp_2, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 314)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                                extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                             const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                             const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_getterMap var_getterMap_12865 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_12865, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 327)) ;
  }
  GALGAS_constructorMap var_constructorMap_12904 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 328)) ;
  GALGAS_setterMap var_setterMap_12936 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 329)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_12984 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 330)) ;
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  cEnumerator_externTypeConstructorList enumerator_13105 (temp_0.readProperty_mExternTypeConstructorList (), kENUMERATION_UP) ;
  while (enumerator_13105.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_returnedTypeEntry_13228 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13105.current_mResultTypeName (HERE), var_returnedTypeEntry_13228, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 334)) ;
    }
    GALGAS_functionSignature var_arguments_13273 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 336)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_13349 (enumerator_13105.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_13349.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_argumentTypeEntry_13466 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13349.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_13466, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 338)) ;
      }
      var_arguments_13273.addAssign_operation (enumerator_13349.current_mFormalSelector (HERE), var_argumentTypeEntry_13466, enumerator_13349.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 339)) ;
      enumerator_13349.gotoNextObject () ;
    }
    {
    var_constructorMap_12904.setter_insertKey (enumerator_13105.current_mConstructorName (HERE), var_arguments_13273, GALGAS_bool (true), var_returnedTypeEntry_13228, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 342)) ;
    }
    enumerator_13105.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  cEnumerator_externTypeGetterList enumerator_13785 (temp_1.readProperty_mExternTypeGetterList (), kENUMERATION_UP) ;
  while (enumerator_13785.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_returnedTypeEntry_13903 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13785.current_mResultTypeName (HERE), var_returnedTypeEntry_13903, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 351)) ;
    }
    GALGAS_functionSignature var_arguments_13948 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 353)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_14024 (enumerator_13785.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_14024.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_argumentTypeEntry_14141 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_14024.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_14141, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 355)) ;
      }
      var_arguments_13948.addAssign_operation (enumerator_14024.current_mFormalSelector (HERE), var_argumentTypeEntry_14141, enumerator_14024.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 356)) ;
      enumerator_14024.gotoNextObject () ;
    }
    {
    var_getterMap_12865.setter_insertKey (enumerator_13785.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 361)), var_arguments_13948, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 363)), GALGAS_bool (true), var_returnedTypeEntry_13903, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 366)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 359)) ;
    }
    enumerator_13785.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  cEnumerator_externTypeSetterList enumerator_14565 (temp_2.readProperty_mExternTypeSetterList (), kENUMERATION_UP) ;
  while (enumerator_14565.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_14650 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 372)) ;
    cEnumerator_formalParameterListAST enumerator_14753 (enumerator_14565.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_14753.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_14914 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_14753.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_14914, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 374)) ;
      }
      var_routineSignature_14650.addAssign_operation (enumerator_14753.current_mFormalSelector (HERE), var_parameterTypeIndex_14914, enumerator_14753.current_mFormalArgumentPassingMode (HERE), enumerator_14753.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 378)) ;
      enumerator_14753.gotoNextObject () ;
    }
    {
    var_setterMap_12936.setter_insertKey (enumerator_14565.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 383)), var_routineSignature_14650, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 386)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 381)) ;
    }
    enumerator_14565.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = object ;
  cEnumerator_externTypeMethodList enumerator_15359 (temp_3.readProperty_mExternTypeMethodList (), kENUMERATION_UP) ;
  while (enumerator_15359.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_15418 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 392)) ;
    cEnumerator_formalParameterListAST enumerator_15547 (enumerator_15359.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_15547.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_15686 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_15547.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_15686, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 394)) ;
      }
      var_routineSignature_15418.addAssign_operation (enumerator_15547.current_mFormalSelector (HERE), var_parameterTypeIndex_15686, enumerator_15547.current_mFormalArgumentPassingMode (HERE), enumerator_15547.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 398)) ;
      enumerator_15547.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_12984.setter_insertKey (enumerator_15359.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 403)), var_routineSignature_15418, enumerator_15359.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 407)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-extern.galgas", 408)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 401)) ;
    }
    enumerator_15359.gotoNextObject () ;
  }
  {
  const GALGAS_externTypeDeclarationAST temp_4 = object ;
  const GALGAS_externTypeDeclarationAST temp_5 = object ;
  const GALGAS_externTypeDeclarationAST temp_6 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_4.readProperty_mExternTypeName (), temp_5.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-extern.galgas", 417)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 418)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 420)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 421)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 422)), var_constructorMap_12904, var_getterMap_12865, var_setterMap_12936, var_instanceMethodMap_12984, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 427)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 428)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 429)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-extern.galgas", 430)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 431)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 432)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 433)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 434)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 435)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-extern.galgas", 437)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (temp_6.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 439)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 413)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                               extensionMethod_externTypeDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterInSemanticContext (defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_17564 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 457)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17564, var_nameForUsefulness_17564, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 458)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  const GALGAS_externTypeDeclarationAST temp_3 = object ;
  const GALGAS_externTypeDeclarationAST temp_4 = object ;
  const GALGAS_externTypeDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 461)), GALGAS_externTypeDeclarationForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_2.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 463)), temp_3.readProperty_mExternTypeName ().readProperty_string (), temp_4.readProperty_mCppPreDeclarationCode (), temp_5.readProperty_mCppClassCode ()  COMMA_SOURCE_FILE ("type-extern.galgas", 462))  COMMA_SOURCE_FILE ("type-extern.galgas", 460)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                         extensionMethod_externTypeDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationAST_semanticAnalysis (defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationForGeneration * object = (const cPtr_externTypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationForGeneration) ;
  const GALGAS_externTypeDeclarationForGeneration temp_0 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_1 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_2 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 486)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 487)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("type-extern.galgas", 485))) ;
  const GALGAS_externTypeDeclarationForGeneration temp_4 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_5 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_6 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_7 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_8 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_9 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_10 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_11 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_12 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_13 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_14 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_15 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_16 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 492)), temp_5.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 493)), temp_6.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 494)), temp_7.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 495)), temp_8.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 496)), temp_9.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 497)), temp_10.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 498)), temp_11.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 499)), temp_12.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 500)), temp_13.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 501)), temp_14.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 502)), temp_15.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 503)), temp_16.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 504)) COMMA_SOURCE_FILE ("type-extern.galgas", 491))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 491)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  const GALGAS_graphDeclarationAST temp_0 = object ;
  const GALGAS_graphDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_3883 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 104)), temp_1.readProperty_mGraphTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 104)) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3883, temp_2, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 105)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = object ;
  const GALGAS_graphDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3883, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 106)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 106)) COMMA_SOURCE_FILE ("type-graph.galgas", 106)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                                extensionMethod_graphDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeEntry_4924 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeEntry_4924, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 119)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeEntry_5067 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_5067, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 124)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_graphTypeEntry_5206 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mGraphTypeName (), var_graphTypeEntry_5206, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 129)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeEntry_5373 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_5373, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 134)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringListTypeEntry_5529 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_5529, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 139)) ;
  }
  GALGAS_getterMap var_getterMap_5623 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5623, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 144)) ;
  }
  GALGAS_constructorMap var_constructorMap_5662 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 145)) ;
  GALGAS_setterMap var_setterMap_5694 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 146)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5742 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 147)) ;
  GALGAS_formalParameterSignature var_formalParameterList_5833 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 149)) ;
  var_formalParameterList_5833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 151)), var_associatedListTypeEntry_5373, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 153)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 150)) ;
  var_formalParameterList_5833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 156)), var_lstringListTypeEntry_5529, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 158)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 155)) ;
  var_formalParameterList_5833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 161)), var_associatedListTypeEntry_5373, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 163)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 160)) ;
  var_formalParameterList_5833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 166)), var_lstringListTypeEntry_5529, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 168)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 165)) ;
  {
  var_instanceMethodMap_5742.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 171))  COMMA_SOURCE_FILE ("type-graph.galgas", 171)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 172)), var_formalParameterList_5833, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 174)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 176)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 177)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 170)) ;
  }
  {
  var_instanceMethodMap_5742.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 181))  COMMA_SOURCE_FILE ("type-graph.galgas", 181)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 182)), var_formalParameterList_5833, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 184)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 186)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 187)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 180)) ;
  }
  var_formalParameterList_5833 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 192)) ;
  var_formalParameterList_5833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 194)), var_associatedListTypeEntry_5373, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 196)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 193)) ;
  var_formalParameterList_5833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 199)), var_lstringListTypeEntry_5529, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 201)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 198)) ;
  {
  var_instanceMethodMap_5742.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 204))  COMMA_SOURCE_FILE ("type-graph.galgas", 204)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 205)), var_formalParameterList_5833, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 207)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 209)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 210)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 203)) ;
  }
  {
  var_instanceMethodMap_5742.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 214))  COMMA_SOURCE_FILE ("type-graph.galgas", 214)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 215)), var_formalParameterList_5833, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 217)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 219)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 220)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 213)) ;
  }
  {
  var_instanceMethodMap_5742.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 224))  COMMA_SOURCE_FILE ("type-graph.galgas", 224)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 225)), var_formalParameterList_5833, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 227)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 229)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 230)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 223)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = object ;
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5623, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("reversedGraph"), temp_2.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 235)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5623, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 243)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5623, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 251)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5623, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 259)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5623, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 267)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_5623, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 275)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_5623, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 285)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5623, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 295)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5623, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 303)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5623, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 311)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = object ;
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_5623, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 319)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_5623, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 331)) ;
  }
  {
  var_constructorMap_5662.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 342))  COMMA_SOURCE_FILE ("type-graph.galgas", 342)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 343)), GALGAS_bool (false), var_graphTypeEntry_5206, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 341)) ;
  }
  var_formalParameterList_5833 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 348)) ;
  var_formalParameterList_5833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 350)), var_lstringTypeEntry_5067, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 352)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 349)) ;
  cEnumerator_functionSignature enumerator_11895 (var_associatedListTypeEntry_5373.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 354)), kENUMERATION_UP) ;
  while (enumerator_11895.hasCurrentObject ()) {
    var_formalParameterList_5833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 356)), enumerator_11895.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 358)), enumerator_11895.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 355)) ;
    enumerator_11895.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_4 = object ;
  cEnumerator_graphInsertModifierList enumerator_12140 (temp_4.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_12140.hasCurrentObject ()) {
    {
    var_setterMap_5694.setter_insertOrReplace (enumerator_12140.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 364)), var_formalParameterList_5833, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 367)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 362)) ;
    }
    enumerator_12140.gotoNextObject () ;
  }
  {
  var_setterMap_5694.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 374))  COMMA_SOURCE_FILE ("type-graph.galgas", 374)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 375)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 376)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 378)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 373)) ;
  }
  var_formalParameterList_5833 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 382)) ;
  var_formalParameterList_5833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 383)), var_stringTypeEntry_4924, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 383)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 383)) ;
  {
  var_setterMap_5694.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 385))  COMMA_SOURCE_FILE ("type-graph.galgas", 385)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 386)), var_formalParameterList_5833, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 389)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 384)) ;
  }
  var_formalParameterList_5833 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 394)) ;
  var_formalParameterList_5833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 395)), var_lstringTypeEntry_5067, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 395)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 395)) ;
  var_formalParameterList_5833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 396)), var_lstringTypeEntry_5067, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 396)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 396)) ;
  {
  var_setterMap_5694.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 398))  COMMA_SOURCE_FILE ("type-graph.galgas", 398)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 399)), var_formalParameterList_5833, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 402)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 397)) ;
  }
  var_formalParameterList_5833 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 407)) ;
  var_formalParameterList_5833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 408)), var_lstringTypeEntry_5067, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 408)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 408)) ;
  {
  var_setterMap_5694.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 410))  COMMA_SOURCE_FILE ("type-graph.galgas", 410)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 411)), var_formalParameterList_5833, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 414)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 409)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_5 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_5.readProperty_mGraphTypeName (), var_getterMap_5623, var_setterMap_5694, var_instanceMethodMap_5742, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 419)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_6 = object ;
  const GALGAS_graphDeclarationAST temp_7 = object ;
  const GALGAS_graphDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_6.readProperty_mGraphTypeName (), temp_7.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-graph.galgas", 435)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 436)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 438)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 439)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 440)), var_constructorMap_5662, var_getterMap_5623, var_setterMap_5694, var_instanceMethodMap_5742, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 445)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 446)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 447)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 448)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 449)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 450)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 451)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 452)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 453)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-graph.galgas", 455)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (temp_8.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 457)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 431)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                               extensionMethod_graphDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationAST_enterInSemanticContext (defineExtensionMethod_graphDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  const GALGAS_graphDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_16075 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 475)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16075, var_nameForUsefulness_16075, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 476)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = object ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_16243 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 477)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16075, var_associatedTypeNameForUsefulness_16243 COMMA_SOURCE_FILE ("type-graph.galgas", 478)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_graphTypeEntry_16422 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_2.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 480)) ;
  const GALGAS_graphDeclarationAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeEntry_16514 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 481)) ;
  const GALGAS_graphDeclarationAST temp_4 = object ;
  const GALGAS_graphDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListElementTypeEntry_16622 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_4.readProperty_mAssociatedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 483)), temp_5.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 482)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, var_associatedListTypeEntry_16514.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 485)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 485)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_graphDeclarationAST temp_7 = object ;
      const GALGAS_graphDeclarationAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_8.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 486)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 486)), fixItArray9  COMMA_SOURCE_FILE ("type-graph.galgas", 486)) ;
    }
  }
  GALGAS_stringset temp_10 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 489)) ;
  temp_10.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 489)) ;
  temp_10.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 489)) ;
  GALGAS_stringset var_reservedModifierNames_17046 = temp_10 ;
  const GALGAS_graphDeclarationAST temp_11 = object ;
  cEnumerator_graphInsertModifierList enumerator_17120 (temp_11.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_17120.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_reservedModifierNames_17046.getter_hasKey (enumerator_17120.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-graph.galgas", 491)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_17120.current_mInsertModifierName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17120.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)), fixItArray13  COMMA_SOURCE_FILE ("type-graph.galgas", 492)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_17120.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 494)) ;
    }
    enumerator_17120.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_14 = object ;
  const GALGAS_graphDeclarationAST temp_15 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_14.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 498)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeEntry_16422, var_associatedListTypeEntry_16514, var_associatedListElementTypeEntry_16622, temp_15.readProperty_mInsertModifierList ()  COMMA_SOURCE_FILE ("type-graph.galgas", 499))  COMMA_SOURCE_FILE ("type-graph.galgas", 497)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                         extensionMethod_graphDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationAST_semanticAnalysis (defineExtensionMethod_graphDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_string & outArgument_outHeader,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  const GALGAS_graphDeclarationForGeneration temp_0 = object ;
  const GALGAS_graphDeclarationForGeneration temp_1 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 523)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 524)) COMMA_SOURCE_FILE ("type-graph.galgas", 522))) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = object ;
  const GALGAS_graphDeclarationForGeneration temp_3 = object ;
  const GALGAS_graphDeclarationForGeneration temp_4 = object ;
  const GALGAS_graphDeclarationForGeneration temp_5 = object ;
  const GALGAS_graphDeclarationForGeneration temp_6 = object ;
  const GALGAS_graphDeclarationForGeneration temp_7 = object ;
  const GALGAS_graphDeclarationForGeneration temp_8 = object ;
  const GALGAS_graphDeclarationForGeneration temp_9 = object ;
  const GALGAS_graphDeclarationForGeneration temp_10 = object ;
  const GALGAS_graphDeclarationForGeneration temp_11 = object ;
  const GALGAS_graphDeclarationForGeneration temp_12 = object ;
  const GALGAS_graphDeclarationForGeneration temp_13 = object ;
  const GALGAS_graphDeclarationForGeneration temp_14 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 527)), temp_3.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 528)), temp_4.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 529)), temp_5.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 530)), temp_6.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 531)), temp_7.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 532)), temp_8.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 533)), temp_9.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 534)), temp_10.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 535)), temp_11.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 536)), temp_12.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 537)), temp_13.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 538)), temp_14.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 539)) COMMA_SOURCE_FILE ("type-graph.galgas", 526))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 526)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                              extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_string & outArgument_outImplementation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  const GALGAS_graphDeclarationForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 549)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 550)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 551)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = object ;
  const GALGAS_graphDeclarationForGeneration temp_4 = object ;
  const GALGAS_graphDeclarationForGeneration temp_5 = object ;
  const GALGAS_graphDeclarationForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 554)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("type-graph.galgas", 552))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                                     extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  const GALGAS_listDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_3204 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 84)), temp_1.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 84)) ;
  {
  const GALGAS_listDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3204, temp_2, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 85)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_3364 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_3364.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3364.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 87)), enumerator_3364.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 87)) COMMA_SOURCE_FILE ("type-list.galgas", 87)) ;
    }
    enumerator_3364.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                                extensionMethod_listDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList_4222 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 102)) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_4292 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_4292.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_4406 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_4292.current_mPropertyTypeName (HERE), var_attributeTypeIndex_4406, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 104)) ;
    }
    GALGAS_bool var_hasSelector_4427 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_4451 (enumerator_4292.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_4451.hasCurrentObject ()) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, enumerator_4451.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticWarning (enumerator_4451.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%setter' is obsolete and has no effect"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 108)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_4451.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticWarning (enumerator_4451.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%nogetter' is obsolete and has no effect"), fixItArray4  COMMA_SOURCE_FILE ("type-list.galgas", 110)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_4451.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = var_hasSelector_4427.boolEnum () ;
                if (kBoolTrue == test_6) {
                  TC_Array <C_FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_4451.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '%selector' attribute is already named"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 113)) ;
                }
              }
              var_hasSelector_4427 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            GALGAS_stringlist temp_9 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 119)) ;
            temp_9.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 119)) ;
            appendFixItActions (fixItArray8, kFixItReplace, temp_9) ;
            inCompiler->emitSemanticError (enumerator_4451.current_mValue (HERE).readProperty_location (), GALGAS_string ("only '%selector' attribute is allowed here"), fixItArray8  COMMA_SOURCE_FILE ("type-list.galgas", 117)) ;
          }
        }
      }
      enumerator_4451.gotoNextObject () ;
    }
    var_typedAttributeList_4222.addAssign_operation (var_attributeTypeIndex_4406, enumerator_4292.current_mPropertyName (HERE), enumerator_4292.current_mIsPublic (HERE), var_hasSelector_4427  COMMA_SOURCE_FILE ("type-list.galgas", 122)) ;
    enumerator_4292.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_uintType_5207 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_5207, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 125)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listTypeIndex_5311 ;
  {
  const GALGAS_listDeclarationAST temp_10 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_10.readProperty_mListTypeName (), var_listTypeIndex_5311, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 127)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listElementTypeIndex_5533 ;
  {
  const GALGAS_listDeclarationAST temp_11 = object ;
  const GALGAS_listDeclarationAST temp_12 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_11.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 130)), temp_12.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 130)), var_listElementTypeIndex_5533, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 129)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5618 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 134)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5677 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 135)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_5745 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 136)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_5812 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 137)) ;
  cEnumerator_typedPropertyList enumerator_5881 (var_typedAttributeList_4222, kENUMERATION_UP) ;
  while (enumerator_5881.hasCurrentObject ()) {
    GALGAS_string temp_13 ;
    const enumGalgasBool test_14 = enumerator_5881.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_14) {
      temp_13 = enumerator_5881.current_mPropertyName (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_14) {
      temp_13 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_5924 = temp_13 ;
    var_enumerationDescriptor_5618.addAssign_operation (enumerator_5881.current_mPropertyTypeEntry (HERE), enumerator_5881.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 140)) ;
    var_constructorAttributeTypeList_5677.addAssign_operation (var_selector_5924.getter_nowhere (SOURCE_FILE ("type-list.galgas", 142)), enumerator_5881.current_mPropertyTypeEntry (HERE), enumerator_5881.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 141)) ;
    var_setterOutputFormalArgumentList_5745.addAssign_operation (var_selector_5924.getter_nowhere (SOURCE_FILE ("type-list.galgas", 146)), enumerator_5881.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 148)), enumerator_5881.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 145)) ;
    var_setterInputFormalArgumentList_5812.addAssign_operation (var_selector_5924.getter_nowhere (SOURCE_FILE ("type-list.galgas", 151)), enumerator_5881.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 153)), enumerator_5881.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 150)) ;
    enumerator_5881.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6510 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 157)) ;
  {
  const GALGAS_listDeclarationAST temp_15 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_6510, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyList"), temp_15.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 158)) ;
  }
  {
  var_constructorMap_6510.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 166))  COMMA_SOURCE_FILE ("type-list.galgas", 166)), var_constructorAttributeTypeList_5677, GALGAS_bool (false), var_listTypeIndex_5311, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 165)) ;
  }
  GALGAS_getterMap var_getterMap_6952 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6952, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 172)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6952, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 173)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6952, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 180)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_16 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_6952, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_16.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 187)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_17 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_6952, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_17.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 194)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_18 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_6952, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_18.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 201)) ;
  }
  cEnumerator_typedPropertyList enumerator_8007 (var_typedAttributeList_4222, kENUMERATION_UP) ;
  while (enumerator_8007.hasCurrentObject ()) {
    {
    GALGAS_functionSignature temp_19 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 212)) ;
    temp_19.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 212)), var_uintType_5207, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 212)) ;
    var_getterMap_6952.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_8007.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 210)), enumerator_8007.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 210)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 211)), temp_19, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 213)), GALGAS_bool (true), enumerator_8007.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 216)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 209)) ;
    }
    enumerator_8007.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_8464 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 221)) ;
  {
  var_instanceMethodMap_8464.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 223))  COMMA_SOURCE_FILE ("type-list.galgas", 223)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 224)), var_setterOutputFormalArgumentList_5745, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 226)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 228)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-list.galgas", 229)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 222)) ;
  }
  {
  var_instanceMethodMap_8464.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 233))  COMMA_SOURCE_FILE ("type-list.galgas", 233)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 234)), var_setterOutputFormalArgumentList_5745, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 236)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 238)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-list.galgas", 239)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 232)) ;
  }
  GALGAS_setterMap var_setterMap_9028 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 243)) ;
  {
  GALGAS_formalParameterSignature temp_20 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 247)) ;
  temp_20.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 247)), var_listElementTypeIndex_5533, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-list.galgas", 247)), GALGAS_string ("inElement")  COMMA_SOURCE_FILE ("type-list.galgas", 247)) ;
  var_setterMap_9028.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("append"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 245))  COMMA_SOURCE_FILE ("type-list.galgas", 245)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 246)), temp_20, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 249)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 244)) ;
  }
  {
  var_setterMap_9028.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 253))  COMMA_SOURCE_FILE ("type-list.galgas", 253)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 254)), var_setterOutputFormalArgumentList_5745, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 257)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 252)) ;
  }
  {
  var_setterMap_9028.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 261))  COMMA_SOURCE_FILE ("type-list.galgas", 261)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 262)), var_setterOutputFormalArgumentList_5745, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 265)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 260)) ;
  }
  var_setterOutputFormalArgumentList_5745.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 268)), var_uintType_5207, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 268)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 268)) ;
  {
  var_setterMap_9028.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 270))  COMMA_SOURCE_FILE ("type-list.galgas", 270)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 271)), var_setterOutputFormalArgumentList_5745, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 274)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 269)) ;
  }
  cEnumerator_typedPropertyList enumerator_10110 (var_typedAttributeList_4222, kENUMERATION_UP) ;
  while (enumerator_10110.hasCurrentObject ()) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = enumerator_10110.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_10194 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 280)) ;
        var_setterFormalArgumentList_10194.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 281)), enumerator_10110.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 281)), enumerator_10110.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 281)) ;
        var_setterFormalArgumentList_10194.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 282)), var_uintType_5207, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 282)), enumerator_10110.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 282)) ;
        {
        var_setterMap_9028.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_10110.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 284)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 284)), enumerator_10110.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 284)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 285)), var_setterFormalArgumentList_10194, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 288)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 283)) ;
        }
      }
    }
    enumerator_10110.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_5812.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 294)), var_uintType_5207, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 294)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 294)) ;
  {
  var_setterMap_9028.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 296))  COMMA_SOURCE_FILE ("type-list.galgas", 296)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 297)), var_setterInputFormalArgumentList_5812, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 300)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 295)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_22 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_22.readProperty_mListTypeName (), var_getterMap_6952, var_setterMap_9028, var_instanceMethodMap_8464, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 305)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_23 = object ;
  const GALGAS_listDeclarationAST temp_24 = object ;
  const GALGAS_listDeclarationAST temp_25 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_23.readProperty_mListTypeName (), temp_24.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-list.galgas", 321)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 322)), GALGAS_bool (true), var_typedAttributeList_4222, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 325)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 326)), var_constructorMap_6510, var_getterMap_6952, var_setterMap_9028, var_instanceMethodMap_8464, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 331)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 332)), var_enumerationDescriptor_5618, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 334)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 334)) COMMA_SOURCE_FILE ("type-list.galgas", 334)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 334)) COMMA_SOURCE_FILE ("type-list.galgas", 334)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-list.galgas", 334)) COMMA_SOURCE_FILE ("type-list.galgas", 334)), var_constructorAttributeTypeList_5677, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 336)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 337)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 338)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 339)), GALGAS_bool (false), var_listElementTypeIndex_5533, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (temp_25.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 343)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 317)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                               extensionMethod_listDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_enterInSemanticContext (defineExtensionMethod_listDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_12739 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 353)) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_12798 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12798.hasCurrentObject ()) {
    var_structAttributeList_12739.addAssign_operation (enumerator_12798.current_isConstant (HERE), enumerator_12798.current_mPropertyTypeName (HERE), enumerator_12798.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 360))  COMMA_SOURCE_FILE ("type-list.galgas", 355)) ;
    enumerator_12798.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = object ;
  const GALGAS_listDeclarationAST temp_2 = object ;
  const GALGAS_listDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 364)), temp_3.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 364)), var_structAttributeList_12739, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 362))  COMMA_SOURCE_FILE ("type-list.galgas", 362)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                             extensionMethod_listDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_addAssociatedElement (defineExtensionMethod_listDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_13879 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 384)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13879, var_nameForUsefulness_13879, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 385)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = object ;
  const GALGAS_listDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_14043 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 386)), temp_2.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 386)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_13879, var_elementTypeNameForUsefulness_14043 COMMA_SOURCE_FILE ("type-list.galgas", 387)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_14279 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 389)) ;
  GALGAS_propertyIndexMap var_attributeMap_14321 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 390)) ;
  const GALGAS_listDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_14392 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_14392.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_14456 = function_typeNameForUsefulEntitiesGraph (enumerator_14392.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 392)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_13879, var_propertyTypeNameForUsefulness_14456 COMMA_SOURCE_FILE ("type-list.galgas", 393)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_14608 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_14392.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 394)) ;
    GALGAS_bool var_hasSetter_14686 = enumerator_14392.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_14718 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_14742 (enumerator_14392.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14742.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_14742.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (enumerator_14742.current_mValue (HERE).readProperty_location (), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray5  COMMA_SOURCE_FILE ("type-list.galgas", 399)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_14742.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (enumerator_14742.current_mValue (HERE).readProperty_location (), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 401)) ;
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsEqual, enumerator_14742.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_hasSelector_14718.boolEnum () ;
                if (kBoolTrue == test_9) {
                  TC_Array <C_FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (enumerator_14742.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '%selector' attribute is already named"), fixItArray10  COMMA_SOURCE_FILE ("type-list.galgas", 404)) ;
                }
              }
              var_hasSelector_14718 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            GALGAS_stringlist temp_12 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 410)) ;
            temp_12.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 410)) ;
            appendFixItActions (fixItArray11, kFixItReplace, temp_12) ;
            inCompiler->emitSemanticError (enumerator_14742.current_mValue (HERE).readProperty_location (), GALGAS_string ("only '%selector' attribut is allowed here"), fixItArray11  COMMA_SOURCE_FILE ("type-list.galgas", 408)) ;
          }
        }
      }
      enumerator_14742.gotoNextObject () ;
    }
    var_typedAttributeList_14279.addAssign_operation (var_t_14608, enumerator_14392.current_mPropertyName (HERE), var_hasSetter_14686, var_hasSelector_14718  COMMA_SOURCE_FILE ("type-list.galgas", 413)) ;
    {
    var_attributeMap_14321.setter_insertKey (enumerator_14392.current_mPropertyName (HERE), var_t_14608, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 418)) ;
    }
    enumerator_14392.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_13 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_15514 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_13.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 421)) ;
  const GALGAS_listDeclarationAST temp_14 = object ;
  const GALGAS_listDeclarationAST temp_15 = object ;
  const GALGAS_listDeclarationAST temp_16 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_14.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 423)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_15514, extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_15.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 426)), temp_16.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 426)), var_typedAttributeList_14279  COMMA_SOURCE_FILE ("type-list.galgas", 424))  COMMA_SOURCE_FILE ("type-list.galgas", 422)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                         extensionMethod_listDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_semanticAnalysis (defineExtensionMethod_listDeclarationAST_semanticAnalysis, NULL) ;

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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_list {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- List constructor used by listmap\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) ;\n"
    "\n"
    "//--------------------------------- Element constructor\n"
    "  public: static void makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_843_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_843 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_843.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << enumerator_843.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_843.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      index_843_.increment () ;
      enumerator_843.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cCollectionElement {\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mObject ;\n"
    "\n"
    "//--- Constructors\n"
    "  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_601_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_601 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_601.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_601.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_601.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_601.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_601_.increment () ;
      enumerator_601.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public: virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public: virtual cCollectionElement * copy (void) ;\n"
    "\n"
    "//--- Description\n"
    "  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1667_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1667 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1667.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1667.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1667.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      if (enumerator_1667.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1667_.increment () ;
      enumerator_1667.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_1960_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1960 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1960.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_1960.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue () ;
      if (enumerator_1960.hasNextObject ()) {
        result << ", " ;
      }
      index_1960_.increment () ;
      enumerator_1960.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_2434_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2434 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2434.hasCurrentObject ()) {
      result << "inElement.mProperty_" ;
      result << enumerator_2434.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue () ;
      if (enumerator_2434.hasNextObject ()) {
        result << ", " ;
      }
      index_2434_.increment () ;
      enumerator_2434.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mObject.isValid () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cCollectionElement * cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cCollectionElement * result = NULL ;\n"
    "  macroMyNew (result, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_3139_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3139 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3139.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_3139.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue () ;
      if (enumerator_3139.hasNextObject ()) {
        result << ", " ;
      }
      index_3139_.increment () ;
      enumerator_3139.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3593_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3593 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3593.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n"
        "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
        "  ioString << " ;
      result << enumerator_3593.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue () ;
      result << " \":\" ;\n"
        "  mObject.mProperty_" ;
      result << enumerator_3593.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3593_.increment () ;
      enumerator_3593.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  macroValidSharedObject (operand, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return mObject.objectCompare (operand->mObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_list () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) :\n"
    "AC_GALGAS_list (inSharedArray) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (UNUSED_LOCATION_ARGS) {\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "  (capCollectionElementArray ()) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_listWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5416_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5416 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5416.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_5416.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      result << " & inOperand" ;
      result << index_5416_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      if (enumerator_5416.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5416_IDX.increment () ;
      enumerator_5416.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_5704_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5704 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5704.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_5704_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 131)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_5704.hasNextObject ()) {
        result << " && " ;
      }
      index_5704_IDX.increment () ;
      enumerator_5704.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (capCollectionElementArray ()) ;\n"
    "    capCollectionElement attributes ;\n"
    "    GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_6054_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6054 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6054.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_6054_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 139)).stringValue () ;
      index_6054_IDX.increment () ;
      enumerator_6054.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    result.appendObject (attributes) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_6487_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6487 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6487.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_6487.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      result << " & in_" ;
      result << enumerator_6487.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      index_6487_.increment () ;
      enumerator_6487.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6845_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6845 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6845.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_6845.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue () ;
      if (enumerator_6845.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6845_.increment () ;
      enumerator_6845.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "  outAttributes.setPointer (p) ;\n"
    "  macroDetachSharedObject (p) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7283_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7283 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7283.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_7283.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      result << " & inOperand" ;
      result << index_7283_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      if (enumerator_7283.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7283_IDX.increment () ;
      enumerator_7283.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (" ;
  GALGAS_uint index_7556_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7556 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7556.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7556_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 177)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_7556.hasNextObject ()) {
        result << " && " ;
      }
      index_7556_IDX.increment () ;
      enumerator_7556.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7830_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7830 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7830.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7830_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 184)).stringValue () ;
      if (enumerator_7830.hasNextObject ()) {
        result << ", " ;
      }
      index_7830_IDX.increment () ;
      enumerator_7830.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "      capCollectionElement attributes ;\n"
    "      attributes.setPointer (p) ;\n"
    "      macroDetachSharedObject (p) ;\n"
    "      appendObject (attributes) ;\n"
    "    }else{ // Destroy receiver\n"
    "      drop () ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_append (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inElement,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (inElement.isValid ()) {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inElement COMMA_THERE)) ;\n"
    "      capCollectionElement attributes ;\n"
    "      attributes.setPointer (p) ;\n"
    "      macroDetachSharedObject (p) ;\n"
    "      appendObject (attributes) ;\n"
    "    }else{\n"
    "      drop () ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_insertAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9037_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9037 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9037.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_9037.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << " inOperand" ;
      result << index_9037_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9037_IDX.increment () ;
      enumerator_9037.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inInsertionIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (inInsertionIndex.isValid ()" ;
  GALGAS_uint index_9401_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9401 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9401.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_9401_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 229)).stringValue () ;
      result << ".isValid ()" ;
      index_9401_IDX.increment () ;
      enumerator_9401.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_9662_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9662 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9662.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_9662_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 235)).stringValue () ;
      if (enumerator_9662.hasNextObject ()) {
        result << ", " ;
      }
      index_9662_IDX.increment () ;
      enumerator_9662.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "      capCollectionElement attributes ;\n"
    "      attributes.setPointer (p) ;\n"
    "      macroDetachSharedObject (p) ;\n"
    "      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n"
    "    }else{\n"
    "      drop () ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10262_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10262 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10262.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_10262.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << " & outOperand" ;
      result << index_10262_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10262_IDX.increment () ;
      enumerator_10262.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inRemoveIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (inRemoveIndex.isValid ()) {\n"
    "      capCollectionElement attributes ;\n"
    "      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;\n"
    "      cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "      if (NULL == p) {\n" ;
  GALGAS_uint index_10886_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10886 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10886.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_10886_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 266)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10886_IDX.increment () ;
      enumerator_10886.gotoNextObject () ;
    }
  }
  result << "        drop () ;\n"
    "      }else{\n"
    "        macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11150_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11150 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11150.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_11150_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11150.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " ;\n" ;
      index_11150_IDX.increment () ;
      enumerator_11150.gotoNextObject () ;
    }
  }
  result << "      }\n"
    "    }else{\n" ;
  GALGAS_uint index_11385_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11385 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11385.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_11385_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 279)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11385_IDX.increment () ;
      enumerator_11385.gotoNextObject () ;
    }
  }
  result << "      drop () ;    \n"
    "    }\n"
    "  }else{\n" ;
  GALGAS_uint index_11575_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11575 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11575.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11575_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 286)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11575_IDX.increment () ;
      enumerator_11575.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popFirst (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11911_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11911 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11911.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_11911.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << " & outOperand" ;
      result << index_11911_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11911_IDX.increment () ;
      enumerator_11911.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capCollectionElement attributes ;\n"
    "  removeFirstObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_12384_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12384 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12384.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12384_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 305)).stringValue () ;
      result << ".drop () ;\n" ;
      index_12384_IDX.increment () ;
      enumerator_12384.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12618_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12618 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12618.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12618_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12618.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " ;\n" ;
      index_12618_IDX.increment () ;
      enumerator_12618.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popLast (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13012_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13012 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13012.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_13012.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << " & outOperand" ;
      result << index_13012_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13012_IDX.increment () ;
      enumerator_13012.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capCollectionElement attributes ;\n"
    "  removeLastObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_13484_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13484 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13484.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13484_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 330)).stringValue () ;
      result << ".drop () ;\n" ;
      index_13484_IDX.increment () ;
      enumerator_13484.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_13718_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13718 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13718.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13718_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_13718.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " ;\n" ;
      index_13718_IDX.increment () ;
      enumerator_13718.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_first (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14110_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14110 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14110.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_14110.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << " & outOperand" ;
      result << index_14110_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_14110_IDX.increment () ;
      enumerator_14110.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElement attributes ;\n"
    "  readFirst (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_14581_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14581 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14581.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14581_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 355)).stringValue () ;
      result << ".drop () ;\n" ;
      index_14581_IDX.increment () ;
      enumerator_14581.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_14815_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14815 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14815.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14815_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_14815.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " ;\n" ;
      index_14815_IDX.increment () ;
      enumerator_14815.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_last (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_15206_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15206 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15206.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_15206.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << " & outOperand" ;
      result << index_15206_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_15206_IDX.increment () ;
      enumerator_15206.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElement attributes ;\n"
    "  readLast (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_15676_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15676 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15676.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_15676_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 380)).stringValue () ;
      result << ".drop () ;\n" ;
      index_15676_IDX.increment () ;
      enumerator_15676.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_15910_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15910 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15910.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_15910_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_15910.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " ;\n" ;
      index_15910_IDX.increment () ;
      enumerator_15910.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::add_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand,\n"
    "                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    result = *this ;\n"
    "    result.appendList (inOperand) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListWithRange (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_range & inRange,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListFromIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListToIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::plusAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inOperand,\n"
    "                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
    "  appendList (inOperand) ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_18766_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18766 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18766.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_18766.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_18766.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_18766.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
        result << " inOperand,\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_uint inIndex,\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) {\n"
          "  cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;\n"
          "  if (NULL != p) {\n"
          "    macroValidSharedObject (p, cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    macroUniqueSharedObject (p) ;\n"
          "    p->mObject.mProperty_" ;
        result << enumerator_18766.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 454)).stringValue () ;
        result << " = inOperand ;\n"
          "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_18766.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_18766.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue () ;
      result << "AtIndex (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_uint & inIndex,\n"
        "                                              " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                                              " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;\n"
        "  cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes.ptr () ;\n"
        "  GALGAS_" ;
      result << enumerator_18766.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 465)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mObject.mProperty_" ;
      result << enumerator_18766.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 468)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_18766_IDX.increment () ;
      enumerator_18766.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n"
    "                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const typeEnumerationOrder inOrder) :\n"
    "cGenericAbstractEnumerator (inOrder) {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n"
    "  const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return p->mObject ;\n"
    "}\n"
    "\n"
    "\n" ;
  GALGAS_uint index_21736_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21736 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21736.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_21736.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_21736.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n"
        "  macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mObject.mProperty_" ;
      result << enumerator_21736.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 497)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_21736_IDX.increment () ;
      enumerator_21736.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  const GALGAS_listTypeForGeneration temp_0 = object ;
  const GALGAS_listTypeForGeneration temp_1 = object ;
  const GALGAS_listTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 464)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 465)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-list.galgas", 463))) ;
  const GALGAS_listTypeForGeneration temp_3 = object ;
  const GALGAS_listTypeForGeneration temp_4 = object ;
  const GALGAS_listTypeForGeneration temp_5 = object ;
  const GALGAS_listTypeForGeneration temp_6 = object ;
  const GALGAS_listTypeForGeneration temp_7 = object ;
  const GALGAS_listTypeForGeneration temp_8 = object ;
  const GALGAS_listTypeForGeneration temp_9 = object ;
  const GALGAS_listTypeForGeneration temp_10 = object ;
  const GALGAS_listTypeForGeneration temp_11 = object ;
  const GALGAS_listTypeForGeneration temp_12 = object ;
  const GALGAS_listTypeForGeneration temp_13 = object ;
  const GALGAS_listTypeForGeneration temp_14 = object ;
  const GALGAS_listTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 469)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 470)), temp_5.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 471)), temp_6.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 472)), temp_7.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 473)), temp_8.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 474)), temp_9.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 475)), temp_10.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 476)), temp_11.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 477)), temp_12.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 478)), temp_13.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 479)), temp_14.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 480)), temp_15.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 481)) COMMA_SOURCE_FILE ("type-list.galgas", 468))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 468)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                              extensionMethod_listTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  const GALGAS_listTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_18415 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_18415.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18415.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 492)) ;
    enumerator_18415.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 494)) ;
  const GALGAS_listTypeForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 495)) ;
  const GALGAS_listTypeForGeneration temp_3 = object ;
  const GALGAS_listTypeForGeneration temp_4 = object ;
  const GALGAS_listTypeForGeneration temp_5 = object ;
  const GALGAS_listTypeForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 497)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 498)), temp_5.readProperty_mTypedAttributeList (), temp_6.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 500)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 500)) COMMA_SOURCE_FILE ("type-list.galgas", 496))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                                     extensionMethod_listTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_2622 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 63)) ;
  var_structAttributeList_2622.addAssign_operation (GALGAS_bool (false), GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 66)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 67)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 69))  COMMA_SOURCE_FILE ("type-listmap.galgas", 64)) ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  var_structAttributeList_2622.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mAssociatedListTypeName (), GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 73)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 75))  COMMA_SOURCE_FILE ("type-listmap.galgas", 70)) ;
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 79)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 79)), var_structAttributeList_2622, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 77))  COMMA_SOURCE_FILE ("type-listmap.galgas", 77)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                             extensionMethod_listmapDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_addAssociatedElement (defineExtensionMethod_listmapDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                           GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                           GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                           GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_3891 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 95)), temp_1.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 95)) ;
  {
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3891, temp_2, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 96)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  const GALGAS_listmapDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3891, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 97)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 97)) COMMA_SOURCE_FILE ("type-listmap.galgas", 97)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                                extensionMethod_listmapDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum_4971 ;
  GALGAS_typedPropertyList var_listTypedAttributeList_5029 ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  GALGAS_bool joker_4933_3 ; // Joker input parameter
  GALGAS_bool joker_4933_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_4933_1 ; // Joker input parameter
  GALGAS_bool joker_4977 ; // Joker input parameter
  GALGAS_propertyMap joker_5035_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_5035_19 ; // Joker input parameter
  GALGAS_constructorMap joker_5035_18 ; // Joker input parameter
  GALGAS_getterMap joker_5035_17 ; // Joker input parameter
  GALGAS_setterMap joker_5035_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_5035_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_5035_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_5035_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_5035_12 ; // Joker input parameter
  GALGAS_operators joker_5035_11 ; // Joker input parameter
  GALGAS_functionSignature joker_5035_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_5035_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_5035_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_5035_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_5035_6 ; // Joker input parameter
  GALGAS_bool joker_5035_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_5035_4 ; // Joker input parameter
  GALGAS_string joker_5035_3 ; // Joker input parameter
  GALGAS_string joker_5035_2 ; // Joker input parameter
  GALGAS_headerKind joker_5035_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mTypeMap ().method_searchKey (temp_0.readProperty_mAssociatedListTypeName (), joker_4933_3, joker_4933_2, joker_4933_1, var_typeKindEnum_4971, joker_4977, var_listTypedAttributeList_5029, joker_5035_20, joker_5035_19, joker_5035_18, joker_5035_17, joker_5035_16, joker_5035_15, joker_5035_14, joker_5035_13, joker_5035_12, joker_5035_11, joker_5035_10, joker_5035_9, joker_5035_8, joker_5035_7, joker_5035_6, joker_5035_5, joker_5035_4, joker_5035_3, joker_5035_2, joker_5035_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 110)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_4971.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 118)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_listmapDeclarationAST temp_2 = object ;
      const GALGAS_listmapDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 119)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 119)), fixItArray4  COMMA_SOURCE_FILE ("type-listmap.galgas", 119)) ;
      var_listTypedAttributeList_5029 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 120)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_5304 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 123)) ;
  GALGAS_getterMap var_getterMap_5393 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5393, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 124)) ;
  }
  GALGAS_setterMap var_setterMap_5422 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 125)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5470 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 126)) ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeIndex_5608 ;
  {
  const GALGAS_listmapDeclarationAST temp_5 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.readProperty_mAssociatedListTypeName (), var_associatedListTypeIndex_5608, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 128)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_5720 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_5720, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 130)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5393, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 132)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5393, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 139)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5393, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 146)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_6 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_5393, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), temp_6.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 153)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_7 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_5304, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_7.readProperty_mListmapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 163)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_6774 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 171)) ;
  var_enumeratorDescriptor_6774.addAssign_operation (var_stringTypeIndex_5720, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 172)) ;
  var_enumeratorDescriptor_6774.addAssign_operation (var_associatedListTypeIndex_5608, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 173)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_6988 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 175)) ;
  var_addAssignOperatorDescription_6988.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 176)), var_stringTypeIndex_5720, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 176)) ;
  cEnumerator_typedPropertyList enumerator_7130 (var_listTypedAttributeList_5029, kENUMERATION_UP) ;
  while (enumerator_7130.hasCurrentObject ()) {
    var_addAssignOperatorDescription_6988.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 178)), enumerator_7130.current_mPropertyTypeEntry (HERE), enumerator_7130.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 178)) ;
    enumerator_7130.gotoNextObject () ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_8 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_8.readProperty_mListmapTypeName (), var_getterMap_5393, var_setterMap_5422, var_instanceMethodMap_5470, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 181)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listElementTypeIndex_7791 ;
  {
  const GALGAS_listmapDeclarationAST temp_9 = object ;
  const GALGAS_listmapDeclarationAST temp_10 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_9.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 194)), temp_10.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 194)), var_listElementTypeIndex_7791, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 193)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_11 = object ;
  const GALGAS_listmapDeclarationAST temp_12 = object ;
  const GALGAS_listmapDeclarationAST temp_13 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_11.readProperty_mListmapTypeName (), temp_12.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-listmap.galgas", 202)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 203)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 205)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 206)), var_listTypedAttributeList_5029, var_constructorMap_5304, var_getterMap_5393, var_setterMap_5422, var_instanceMethodMap_5470, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 212)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 213)), var_enumeratorDescriptor_6774, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 215)), var_addAssignOperatorDescription_6988, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 217)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 218)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 219)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 220)), GALGAS_bool (false), var_listElementTypeIndex_7791, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (temp_13.readProperty_mListmapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 224)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 198)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                               extensionMethod_listmapDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterInSemanticContext (defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                    GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_9362 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 242)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9362, var_nameForUsefulness_9362, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 243)) ;
  }
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_9532 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 244)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9362, var_associatedTypeNameForUsefulness_9532 COMMA_SOURCE_FILE ("type-listmap.galgas", 245)) ;
  }
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_9720 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 246)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 246)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9362, var_elementTypeNameForUsefulness_9720 COMMA_SOURCE_FILE ("type-listmap.galgas", 247)) ;
  }
  GALGAS_typeKindEnum var_typeKindEnum_10077 ;
  GALGAS_typedPropertyList var_listTypeAttributeList_10134 ;
  const GALGAS_listmapDeclarationAST temp_4 = object ;
  GALGAS_bool joker_10039_3 ; // Joker input parameter
  GALGAS_bool joker_10039_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_10039_1 ; // Joker input parameter
  GALGAS_bool joker_10083 ; // Joker input parameter
  GALGAS_propertyMap joker_10140_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_10140_19 ; // Joker input parameter
  GALGAS_constructorMap joker_10140_18 ; // Joker input parameter
  GALGAS_getterMap joker_10140_17 ; // Joker input parameter
  GALGAS_setterMap joker_10140_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_10140_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_10140_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_10140_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_10140_12 ; // Joker input parameter
  GALGAS_operators joker_10140_11 ; // Joker input parameter
  GALGAS_functionSignature joker_10140_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_10140_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_10140_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_10140_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_10140_6 ; // Joker input parameter
  GALGAS_bool joker_10140_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_10140_4 ; // Joker input parameter
  GALGAS_string joker_10140_3 ; // Joker input parameter
  GALGAS_string joker_10140_2 ; // Joker input parameter
  GALGAS_headerKind joker_10140_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mTypeMap ().method_searchKey (temp_4.readProperty_mAssociatedListTypeName (), joker_10039_3, joker_10039_2, joker_10039_1, var_typeKindEnum_10077, joker_10083, var_listTypeAttributeList_10134, joker_10140_20, joker_10140_19, joker_10140_18, joker_10140_17, joker_10140_16, joker_10140_15, joker_10140_14, joker_10140_13, joker_10140_12, joker_10140_11, joker_10140_10, joker_10140_9, joker_10140_8, joker_10140_7, joker_10140_6, joker_10140_5, joker_10140_4, joker_10140_3, joker_10140_2, joker_10140_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 249)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_10077.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 258)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_listmapDeclarationAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("associated type should be a list type"), fixItArray7  COMMA_SOURCE_FILE ("type-listmap.galgas", 259)) ;
    }
  }
  const GALGAS_listmapDeclarationAST temp_8 = object ;
  const GALGAS_listmapDeclarationAST temp_9 = object ;
  const GALGAS_listmapDeclarationAST temp_10 = object ;
  const GALGAS_listmapDeclarationAST temp_11 = object ;
  const GALGAS_listmapDeclarationAST temp_12 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (temp_8.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 263)), GALGAS_listmapTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_9.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 265)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_10.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 266)), var_listTypeAttributeList_10134, extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_11.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)), temp_12.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268))  COMMA_SOURCE_FILE ("type-listmap.galgas", 264))  COMMA_SOURCE_FILE ("type-listmap.galgas", 262)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                         extensionMethod_listmapDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_semanticAnalysis (defineExtensionMethod_listmapDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  const GALGAS_listmapTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_11540 (temp_0.readProperty_mAssociatedListTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_11540.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_11540.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 288)) ;
    enumerator_11540.gotoNextObject () ;
  }
  const GALGAS_listmapTypeForGeneration temp_1 = object ;
  const GALGAS_listmapTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 292)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 293)) COMMA_SOURCE_FILE ("type-listmap.galgas", 291))) ;
  const GALGAS_listmapTypeForGeneration temp_3 = object ;
  const GALGAS_listmapTypeForGeneration temp_4 = object ;
  const GALGAS_listmapTypeForGeneration temp_5 = object ;
  const GALGAS_listmapTypeForGeneration temp_6 = object ;
  const GALGAS_listmapTypeForGeneration temp_7 = object ;
  const GALGAS_listmapTypeForGeneration temp_8 = object ;
  const GALGAS_listmapTypeForGeneration temp_9 = object ;
  const GALGAS_listmapTypeForGeneration temp_10 = object ;
  const GALGAS_listmapTypeForGeneration temp_11 = object ;
  const GALGAS_listmapTypeForGeneration temp_12 = object ;
  const GALGAS_listmapTypeForGeneration temp_13 = object ;
  const GALGAS_listmapTypeForGeneration temp_14 = object ;
  const GALGAS_listmapTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 296)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 297)), temp_5.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 298)), temp_6.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 299)), temp_7.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 300)), temp_8.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 301)), temp_9.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 302)), temp_10.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 303)), temp_11.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 304)), temp_12.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 305)), temp_13.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 306)), temp_14.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 307)), temp_15.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 308)) COMMA_SOURCE_FILE ("type-listmap.galgas", 295))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 295)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                              extensionMethod_listmapTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  const GALGAS_listmapTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 318)) ;
  const GALGAS_listmapTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListMapElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 319)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = object ;
  const GALGAS_listmapTypeForGeneration temp_3 = object ;
  const GALGAS_listmapTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 321)), temp_3.readProperty_mAssociatedListTypeIndex ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 322)), temp_4.readProperty_mAssociatedListTypedAttributeList () COMMA_SOURCE_FILE ("type-listmap.galgas", 320))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                                     extensionMethod_listmapTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dictDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_dictDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  const GALGAS_dictDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("dict @").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 15)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_dictDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                          extensionGetter_dictDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_dictDeclarationAST_keyRepresentation (defineExtensionGetter_dictDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_3788 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 111)) ;
  const GALGAS_dictDeclarationAST temp_0 = object ;
  var_structAttributeList_3788.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mKeyTypeName (), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 112)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 112))  COMMA_SOURCE_FILE ("type-dict.galgas", 112)) ;
  const GALGAS_dictDeclarationAST temp_1 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_3928 (temp_1.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_3928.hasCurrentObject ()) {
    var_structAttributeList_3788.addAssign_operation (GALGAS_bool (false), enumerator_3928.current_mPropertyTypeName (HERE), enumerator_3928.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 114))  COMMA_SOURCE_FILE ("type-dict.galgas", 114)) ;
    enumerator_3928.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_2 = object ;
  const GALGAS_dictDeclarationAST temp_3 = object ;
  const GALGAS_dictDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_2.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_3.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 118)), temp_4.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 118)), var_structAttributeList_3788, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 116))  COMMA_SOURCE_FILE ("type-dict.galgas", 116)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                             extensionMethod_dictDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictDeclarationAST_addAssociatedElement (defineExtensionMethod_dictDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  const GALGAS_dictDeclarationAST temp_0 = object ;
  const GALGAS_dictDeclarationAST temp_1 = object ;
  GALGAS_lstring var_dictionary_5037 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 135)), temp_1.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 135)) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_5037, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 136)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_3 = object ;
  const GALGAS_dictDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 137)), temp_4.readProperty_mKeyTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 137)) COMMA_SOURCE_FILE ("type-dict.galgas", 137)) ;
  }
  const GALGAS_dictDeclarationAST temp_5 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_5309 (temp_5.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5309.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5309.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 139)), enumerator_5309.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 139)) COMMA_SOURCE_FILE ("type-dict.galgas", 139)) ;
    }
    enumerator_5309.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                                extensionMethod_dictDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_dictDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_keyTypeIndex_6200 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = object ;
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_6200, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 153)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6258 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_keyTypeIndex_6200, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 155)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_6383 = GALGAS_bool (false) ;
  const GALGAS_dictDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_6400 (temp_1.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_6400.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_6400.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_6383.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_6400.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-dict.galgas", 161)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_6383 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_6400.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 165)) ;
    }
    enumerator_6400.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6704 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 169)) ;
  GALGAS_getterMap var_getterMap_6794 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6794, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 170)) ;
  }
  GALGAS_setterMap var_setterMap_6823 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 171)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6871 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 172)) ;
  {
  const GALGAS_dictDeclarationAST temp_6 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_6704, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyDict"), temp_6.readProperty_mDictTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 174)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_7 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_6794, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), temp_7.readProperty_mKeyTypeName ().readProperty_string (), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 182)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6794, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 189)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_7563 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 197)) ;
  GALGAS_typedPropertyList var_typedPropertyList_7611 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 198)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_7693 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 199)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_7693.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 200)), var_keyTypeIndex_6200, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 200)) ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_6383.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_7563.addAssign_operation (temp_8.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 202)), var_keyTypeIndex_6200, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 204)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 201)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_8046 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 206)) ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_6383.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_8046.addAssign_operation (temp_10.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 208)), var_keyTypeIndex_6200, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 210)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 207)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_8299 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 212)) ;
  GALGAS_string temp_12 ;
  const enumGalgasBool test_13 = var_usesSelectorsInInsertAndSearch_6383.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_8299.addAssign_operation (GALGAS_bool (true), temp_12.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 215)), var_keyTypeIndex_6200, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 213)) ;
  GALGAS_unifiedTypeMap_2D_entryList var_typesToIncludeInHeaderCompilation_8486 = GALGAS_unifiedTypeMap_2D_entryList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 218)) ;
  const GALGAS_dictDeclarationAST temp_14 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_8562 (temp_14.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_8562.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_8676 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8562.current_mPropertyTypeName (HERE), var_attributeTypeIndex_8676, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 220)) ;
    }
    GALGAS_bool var_hasSetter_8695 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_8722 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_7693.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 223)), var_attributeTypeIndex_8676, enumerator_8562.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 223)) ;
    var_typedPropertyList_7611.addAssign_operation (var_attributeTypeIndex_8676, enumerator_8562.current_mPropertyName (HERE), var_hasSetter_8695, var_hasSelector_8722  COMMA_SOURCE_FILE ("type-dict.galgas", 224)) ;
    var_typesToIncludeInHeaderCompilation_8486.addAssign_operation (var_attributeTypeIndex_8676  COMMA_SOURCE_FILE ("type-dict.galgas", 225)) ;
    var_enumerationDescriptor_6258.addAssign_operation (var_attributeTypeIndex_8676, enumerator_8562.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 226)) ;
    GALGAS_lstring temp_15 ;
    const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_6383.boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = enumerator_8562.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 228)) ;
    }
    var_insertMethodFormalArgumentList_7563.addAssign_operation (temp_15, var_attributeTypeIndex_8676, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 230)), enumerator_8562.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 227)) ;
    GALGAS_lstring temp_17 ;
    const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_6383.boolEnum () ;
    if (kBoolTrue == test_18) {
      temp_17 = enumerator_8562.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_18) {
      temp_17 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 233)) ;
    }
    var_removeMethodFormalArgumentList_8046.addAssign_operation (temp_17, var_attributeTypeIndex_8676, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-dict.galgas", 235)), enumerator_8562.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 232)) ;
    GALGAS_bool test_19 = var_usesSelectorsInInsertAndSearch_6383 ;
    if (kBoolTrue != test_19.boolEnum ()) {
      test_19 = var_hasSelector_8722 ;
    }
    GALGAS_lstring temp_20 ;
    const enumGalgasBool test_21 = test_19.boolEnum () ;
    if (kBoolTrue == test_21) {
      temp_20 = enumerator_8562.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_21) {
      temp_20 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 239)) ;
    }
    var_optionalMethodSignature_8299.addAssign_operation (GALGAS_bool (false), temp_20, var_attributeTypeIndex_8676, enumerator_8562.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 237)) ;
    enumerator_8562.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_22 = object ;
  var_setterMap_6823.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), temp_22.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 245)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 246)), var_removeMethodFormalArgumentList_8046, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 249)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 244)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_23 = object ;
  const GALGAS_dictDeclarationAST temp_24 = object ;
  var_instanceMethodMap_6871.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("searchKey"), temp_23.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 254)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 255)), var_removeMethodFormalArgumentList_8046, temp_24.readProperty_mDictTypeName ().readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 259)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-dict.galgas", 260)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 253)) ;
  }
  const GALGAS_dictDeclarationAST temp_25 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_10369 (temp_25.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10369.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_10416 = GALGAS_lstring::constructor_new (enumerator_10369.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 265)), enumerator_10369.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 265)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_10578 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10369.current_mPropertyTypeName (HERE), var_attributeTypeIndex_10578, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 266)) ;
    }
    {
    GALGAS_functionSignature temp_26 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 270)) ;
    temp_26.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 270)), var_keyTypeIndex_6200, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 270)) ;
    var_getterMap_6794.setter_insertOrReplace (var_accessorName_10416, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 269)), temp_26, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 271)), GALGAS_bool (true), var_attributeTypeIndex_10578, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 274)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 267)) ;
    }
    enumerator_10369.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_27 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_10984 (temp_27.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10984.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_11031 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_10984.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 281)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 281)), enumerator_10984.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 280)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_11289 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10984.current_mPropertyTypeName (HERE), var_attributeTypeIndex_11289, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 284)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_11330 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 288)) ;
    var_accessorFormalArgumentList_11330.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 289)), var_attributeTypeIndex_11289, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 289)), enumerator_10984.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 289)) ;
    var_accessorFormalArgumentList_11330.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 290)), var_keyTypeIndex_6200, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 290)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 290)) ;
    {
    var_setterMap_6823.setter_insertOrReplace (var_accessorName_11031, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 293)), var_accessorFormalArgumentList_11330, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 296)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 291)) ;
    }
    enumerator_10984.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_28 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_28.readProperty_mDictTypeName (), var_getterMap_6794, var_setterMap_6823, var_instanceMethodMap_6871, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 301)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeEntry_12289 ;
  {
  const GALGAS_dictDeclarationAST temp_29 = object ;
  const GALGAS_dictDeclarationAST temp_30 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_29.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 314)), temp_30.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 314)), var_elementTypeEntry_12289, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 313)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_12342 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 318)) ;
  {
  var_optionalMethodMap_12342.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 319)), var_optionalMethodSignature_8299, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 319)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_31 = object ;
  const GALGAS_dictDeclarationAST temp_32 = object ;
  const GALGAS_dictDeclarationAST temp_33 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_31.readProperty_mDictTypeName (), temp_32.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-dict.galgas", 325)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-dict.galgas", 326)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 328)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 329)), var_typedPropertyList_7611, var_constructorMap_6704, var_getterMap_6794, var_setterMap_6823, var_instanceMethodMap_6871, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 335)), var_optionalMethodMap_12342, var_enumerationDescriptor_6258, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 338)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 338)) COMMA_SOURCE_FILE ("type-dict.galgas", 338)), var_argumentTypeListForAddAssignWithFieldExpressionList_7693, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 340)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 341)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 342)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 343)), GALGAS_bool (false), var_elementTypeEntry_12289, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (temp_33.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 347)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-dict.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 321)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                               extensionMethod_dictDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictDeclarationAST_enterInSemanticContext (defineExtensionMethod_dictDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters (const GALGAS_lstring constinArgument_inString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_13743 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 357)), kENUMERATION_UP) ;
  while (enumerator_13743.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_13780 = enumerator_13743.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 358)) ;
    {
    GALGAS_string joker_13867 ; // Joker input parameter
    var_explodedArray_13780.setter_popFirst (joker_13867, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 359)) ;
    }
    cEnumerator_stringlist enumerator_13885 (var_explodedArray_13780, kENUMERATION_UP) ;
    while (enumerator_13885.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_13885.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 361)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_13960 = enumerator_13885.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 362)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_13960.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 364)) ;
            }
          }
        }
      }
      enumerator_13885.gotoNextObject () ;
    }
    enumerator_13743.gotoNextObject () ;
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
  cEnumerator_stringlist enumerator_14453 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 374)), kENUMERATION_UP) ;
  while (enumerator_14453.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_14490 = enumerator_14453.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 375)) ;
    {
    GALGAS_string joker_14577 ; // Joker input parameter
    var_explodedArray_14490.setter_popFirst (joker_14577, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 376)) ;
    }
    cEnumerator_stringlist enumerator_14595 (var_explodedArray_14490, kENUMERATION_UP) ;
    while (enumerator_14595.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_14595.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 378)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_14670 = enumerator_14595.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 379)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_14670.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_14670.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 380)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 381)) ;
            }
          }
        }
      }
      enumerator_14595.gotoNextObject () ;
    }
    enumerator_14453.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForMapAndDict'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForMapAndDict (C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dict.galgas", 391)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 392)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 393)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 394)) ;
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

static void extensionMethod_dictDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  const GALGAS_dictDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_15683 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 408)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15683, var_nameForUsefulness_15683, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 409)) ;
  }
  const GALGAS_dictDeclarationAST temp_1 = object ;
  const GALGAS_dictDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_15847 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mDictTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 410)), temp_2.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 410)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15683, var_elementTypeNameForUsefulness_15847 COMMA_SOURCE_FILE ("type-dict.galgas", 411)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_16103 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 413)) ;
  GALGAS_propertyIndexMap var_attributeMap_16145 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 414)) ;
  const GALGAS_dictDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_16195 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_16195.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_16259 = function_typeNameForUsefulEntitiesGraph (enumerator_16195.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 416)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15683, var_propertyTypeNameForUsefulness_16259 COMMA_SOURCE_FILE ("type-dict.galgas", 417)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_16433 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_16195.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 418)) ;
    GALGAS_bool var_hasSetter_16511 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_16538 = GALGAS_bool (false) ;
    var_typedAttributeList_16103.addAssign_operation (var_t_16433, enumerator_16195.current_mPropertyName (HERE), var_hasSetter_16511, var_hasSelector_16538  COMMA_SOURCE_FILE ("type-dict.galgas", 421)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 426)).getter_hasKey (enumerator_16195.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-dict.galgas", 426)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_16731 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_16808 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 428)), kENUMERATION_UP) ;
        while (enumerator_16808.hasCurrentObject ()) {
          var_m_16731.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_16808.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 429)) ;
          enumerator_16808.gotoNextObject () ;
        }
        var_m_16731.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 431)) ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_16195.current_mPropertyName (HERE).readProperty_location (), var_m_16731, fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 432)) ;
      }
    }
    {
    var_attributeMap_16145.setter_insertKey (enumerator_16195.current_mPropertyName (HERE), var_t_16433, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 434)) ;
    }
    enumerator_16195.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_6 = object ;
  const GALGAS_dictDeclarationAST temp_7 = object ;
  const GALGAS_dictDeclarationAST temp_8 = object ;
  const GALGAS_dictDeclarationAST temp_9 = object ;
  const GALGAS_dictDeclarationAST temp_10 = object ;
  const GALGAS_dictDeclarationAST temp_11 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_6.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 438)), GALGAS_dictTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_7.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 440)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_8.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 441)), temp_9.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 441)), temp_10.readProperty_mDictTypeName (), var_typedAttributeList_16103, temp_11.readProperty_mKeyTypeName ()  COMMA_SOURCE_FILE ("type-dict.galgas", 439))  COMMA_SOURCE_FILE ("type-dict.galgas", 437)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                         extensionMethod_dictDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictDeclarationAST_semanticAnalysis (defineExtensionMethod_dictDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictTypeForGeneration * object = (const cPtr_dictTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_dictTypeForGeneration) ;
  const GALGAS_dictTypeForGeneration temp_0 = object ;
  const GALGAS_dictTypeForGeneration temp_1 = object ;
  const GALGAS_dictTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 466)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 467)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-dict.galgas", 465))) ;
  const GALGAS_dictTypeForGeneration temp_3 = object ;
  const GALGAS_dictTypeForGeneration temp_4 = object ;
  const GALGAS_dictTypeForGeneration temp_5 = object ;
  const GALGAS_dictTypeForGeneration temp_6 = object ;
  const GALGAS_dictTypeForGeneration temp_7 = object ;
  const GALGAS_dictTypeForGeneration temp_8 = object ;
  const GALGAS_dictTypeForGeneration temp_9 = object ;
  const GALGAS_dictTypeForGeneration temp_10 = object ;
  const GALGAS_dictTypeForGeneration temp_11 = object ;
  const GALGAS_dictTypeForGeneration temp_12 = object ;
  const GALGAS_dictTypeForGeneration temp_13 = object ;
  const GALGAS_dictTypeForGeneration temp_14 = object ;
  const GALGAS_dictTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 471)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 472)), temp_5.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 473)), temp_6.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 474)), temp_7.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 475)), temp_8.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 476)), temp_9.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 477)), temp_10.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 478)), temp_11.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 479)), temp_12.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 480)), temp_13.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 481)), temp_14.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 482)), temp_15.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 483)) COMMA_SOURCE_FILE ("type-dict.galgas", 470))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 470)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_dictTypeForGeneration.mSlotID,
                                              extensionMethod_dictTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_dictTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictTypeForGeneration * object = (const cPtr_dictTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_dictTypeForGeneration) ;
  const GALGAS_dictTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 493)) ;
  const GALGAS_dictTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 494)) ;
  const GALGAS_dictTypeForGeneration temp_2 = object ;
  const GALGAS_dictTypeForGeneration temp_3 = object ;
  const GALGAS_dictTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 496)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 498)) COMMA_SOURCE_FILE ("type-dict.galgas", 495))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_dictTypeForGeneration.mSlotID,
                                                     extensionMethod_dictTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_dictTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@mapDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_mapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 47)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_mapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                          extensionGetter_mapDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_mapDeclarationAST_keyRepresentation (defineExtensionGetter_mapDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_10564 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 310)) ;
  var_structAttributeList_10564.addAssign_operation (GALGAS_bool (false), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 313)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 314)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 316))  COMMA_SOURCE_FILE ("type-map.galgas", 311)) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_10756 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10756.hasCurrentObject ()) {
    var_structAttributeList_10564.addAssign_operation (GALGAS_bool (false), enumerator_10756.current_mPropertyTypeName (HERE), enumerator_10756.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 323))  COMMA_SOURCE_FILE ("type-map.galgas", 318)) ;
    enumerator_10756.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_1 = object ;
  const GALGAS_mapDeclarationAST temp_2 = object ;
  const GALGAS_mapDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 327)), temp_3.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 327)), var_structAttributeList_10564, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 325))  COMMA_SOURCE_FILE ("type-map.galgas", 325)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                             extensionMethod_mapDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_addAssociatedElement (defineExtensionMethod_mapDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  const GALGAS_mapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_11892 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 343)), temp_1.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 343)) ;
  {
  const GALGAS_mapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11892, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 344)) ;
  }
  const GALGAS_mapDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_12050 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12050.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_12050.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 346)), enumerator_12050.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 346)) COMMA_SOURCE_FILE ("type-map.galgas", 346)) ;
    }
    enumerator_12050.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                                extensionMethod_mapDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_mapDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                      const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                      const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_12946 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_12946, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 361)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_locationTypeEntry_13059 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeEntry_13059, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 363)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeIndex_13169 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_13169, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 365)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 367)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_13169, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 367)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_13254 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_13337 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_13370 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_13386 (temp_1.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_13386.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_13386.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_13337.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_13386.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-map.galgas", 374)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_13337 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_13386.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_activateSuggestion_13370.operator_not (SOURCE_FILE ("type-map.galgas", 378)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_13386.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 379)) ;
            }
          }
          var_activateSuggestion_13370 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_13386.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute"), fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 383)) ;
      }
    }
    enumerator_13386.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_13853 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 387)) ;
  GALGAS_getterMap var_getterMap_13943 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_13943, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 388)) ;
  }
  GALGAS_setterMap var_setterMap_13971 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 389)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_14019 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 390)) ;
  {
  const GALGAS_mapDeclarationAST temp_9 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_13853, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_9.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 392)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_10 = object ;
  const GALGAS_mapDeclarationAST temp_11 = object ;
  routine_enterConstructorWithArgument (var_constructorMap_13853, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("mapWithMapToOverride"), temp_10.readProperty_mMapTypeName ().readProperty_string (), GALGAS_string ("inMap"), temp_11.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 399)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13943, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 409)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments (var_getterMap_13943, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 416)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13943, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 427)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13943, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 434)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_13943, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 441)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_13943, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 450)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_12 = object ;
  routine_enterBaseGetterWithoutArgument (var_getterMap_13943, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("overriddenMap"), temp_12.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 459)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13943, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 466)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_16171 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 474)) ;
  GALGAS_typedPropertyList var_typedPropertyList_16226 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 475)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_16305 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 476)) ;
  GALGAS_string temp_13 ;
  const enumGalgasBool test_14 = var_usesSelectorsInInsertAndSearch_13337.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_16305.addAssign_operation (GALGAS_bool (true), temp_13.getter_nowhere (SOURCE_FILE ("type-map.galgas", 479)), var_stringTypeIndex_12946, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 477)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_16532 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 482)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_16532.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 483)), var_lstringTypeIndex_13169, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 483)) ;
  GALGAS_string temp_15 ;
  const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_13337.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_16171.addAssign_operation (temp_15.getter_nowhere (SOURCE_FILE ("type-map.galgas", 485)), var_lstringTypeIndex_13169, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 487)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 484)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_16896 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 489)) ;
  GALGAS_string temp_17 ;
  const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_13337.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_16896.addAssign_operation (temp_17.getter_nowhere (SOURCE_FILE ("type-map.galgas", 491)), var_lstringTypeIndex_13169, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 493)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 490)) ;
  GALGAS_unifiedTypeMap_2D_entryList var_typesToIncludeInHeaderCompilation_17166 = GALGAS_unifiedTypeMap_2D_entryList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 495)) ;
  const GALGAS_mapDeclarationAST temp_19 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_17229 (temp_19.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_17229.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_17343 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_17229.current_mPropertyTypeName (HERE), var_attributeTypeIndex_17343, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 497)) ;
    }
    GALGAS_bool var_hasSetter_17362 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_17389 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_17416 (enumerator_17229.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_17416.hasCurrentObject ()) {
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = GALGAS_bool (kIsEqual, enumerator_17416.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_20) {
          var_hasSelector_17389 = GALGAS_bool (true) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = var_hasSelector_17389 ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = var_usesSelectorsInInsertAndSearch_13337 ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticWarning (enumerator_17416.current_mValue (HERE).readProperty_location (), GALGAS_string ("%selector useless, map has %selectors attributes"), fixItArray23  COMMA_SOURCE_FILE ("type-map.galgas", 504)) ;
            }
          }
        }
      }
      enumerator_17416.gotoNextObject () ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_16532.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 508)), var_attributeTypeIndex_17343, enumerator_17229.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 508)) ;
    var_typedPropertyList_16226.addAssign_operation (var_attributeTypeIndex_17343, enumerator_17229.current_mPropertyName (HERE), var_hasSetter_17362, var_hasSelector_17389  COMMA_SOURCE_FILE ("type-map.galgas", 509)) ;
    var_typesToIncludeInHeaderCompilation_17166.addAssign_operation (var_attributeTypeIndex_17343  COMMA_SOURCE_FILE ("type-map.galgas", 510)) ;
    var_enumerationDescriptor_13254.addAssign_operation (var_attributeTypeIndex_17343, enumerator_17229.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 511)) ;
    GALGAS_bool test_24 = var_usesSelectorsInInsertAndSearch_13337 ;
    if (kBoolTrue != test_24.boolEnum ()) {
      test_24 = var_hasSelector_17389 ;
    }
    GALGAS_lstring temp_25 ;
    const enumGalgasBool test_26 = test_24.boolEnum () ;
    if (kBoolTrue == test_26) {
      temp_25 = enumerator_17229.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_26) {
      temp_25 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 513)) ;
    }
    var_insertMethodFormalArgumentList_16171.addAssign_operation (temp_25, var_attributeTypeIndex_17343, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 515)), enumerator_17229.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 512)) ;
    GALGAS_bool test_27 = var_usesSelectorsInInsertAndSearch_13337 ;
    if (kBoolTrue != test_27.boolEnum ()) {
      test_27 = var_hasSelector_17389 ;
    }
    GALGAS_lstring temp_28 ;
    const enumGalgasBool test_29 = test_27.boolEnum () ;
    if (kBoolTrue == test_29) {
      temp_28 = enumerator_17229.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_29) {
      temp_28 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 518)) ;
    }
    var_removeMethodFormalArgumentList_16896.addAssign_operation (temp_28, var_attributeTypeIndex_17343, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 520)), enumerator_17229.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 517)) ;
    GALGAS_bool test_30 = var_usesSelectorsInInsertAndSearch_13337 ;
    if (kBoolTrue != test_30.boolEnum ()) {
      test_30 = var_hasSelector_17389 ;
    }
    GALGAS_lstring temp_31 ;
    const enumGalgasBool test_32 = test_30.boolEnum () ;
    if (kBoolTrue == test_32) {
      temp_31 = enumerator_17229.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_32) {
      temp_31 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 524)) ;
    }
    var_optionalMethodSignature_16305.addAssign_operation (GALGAS_bool (false), temp_31, var_attributeTypeIndex_17343, enumerator_17229.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 522)) ;
    enumerator_17229.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_33 = object ;
  cEnumerator_insertMethodListAST enumerator_18696 (temp_33.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_18696.hasCurrentObject ()) {
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      test_34 = var_setterMap_13971.getter_hasKey (enumerator_18696.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 530)).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <C_FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (enumerator_18696.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_18696.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 531)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 531)), fixItArray35  COMMA_SOURCE_FILE ("type-map.galgas", 531)) ;
      }
    }
    if (kBoolFalse == test_34) {
      {
      var_setterMap_13971.setter_insertOrReplace (enumerator_18696.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 535)), var_insertMethodFormalArgumentList_16171, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 538)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 533)) ;
      }
    }
    enumerator_18696.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_36 = object ;
  cEnumerator_mapRemoveMethodListAST enumerator_19159 (temp_36.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_19159.hasCurrentObject ()) {
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      test_37 = var_setterMap_13971.getter_hasKey (enumerator_19159.current_mMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 545)).boolEnum () ;
      if (kBoolTrue == test_37) {
        TC_Array <C_FixItDescription> fixItArray38 ;
        inCompiler->emitSemanticError (enumerator_19159.current_mMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_19159.current_mMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 546)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 546)), fixItArray38  COMMA_SOURCE_FILE ("type-map.galgas", 546)) ;
      }
    }
    if (kBoolFalse == test_37) {
      {
      var_setterMap_13971.setter_insertOrReplace (enumerator_19159.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 550)), var_removeMethodFormalArgumentList_16896, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 553)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 548)) ;
      }
    }
    enumerator_19159.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_39 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_19696 (temp_39.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_19696.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_searchMethodFormalArgumentList_19765 = var_removeMethodFormalArgumentList_16896 ;
    enumGalgasBool test_40 = kBoolTrue ;
    if (kBoolTrue == test_40) {
      test_40 = enumerator_19696.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_40) {
        GALGAS_lstring temp_41 ;
        const enumGalgasBool test_42 = var_usesSelectorsInInsertAndSearch_13337.boolEnum () ;
        if (kBoolTrue == test_42) {
          temp_41 = GALGAS_string ("keyLocation").getter_nowhere (SOURCE_FILE ("type-map.galgas", 563)) ;
        }else if (kBoolFalse == test_42) {
          temp_41 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 563)) ;
        }
        var_searchMethodFormalArgumentList_19765.addAssign_operation (temp_41, var_locationTypeEntry_13059, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 565)), GALGAS_string ("outKeyLocation")  COMMA_SOURCE_FILE ("type-map.galgas", 562)) ;
      }
    }
    {
    var_instanceMethodMap_14019.setter_insertKey (enumerator_19696.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 570)), var_searchMethodFormalArgumentList_19765, enumerator_19696.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 574)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-map.galgas", 575)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 568)) ;
    }
    enumerator_19696.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_43 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_20403 (temp_43.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_20403.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_20450 = GALGAS_lstring::constructor_new (enumerator_20403.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 581)), enumerator_20403.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 581)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_20612 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_20403.current_mPropertyTypeName (HERE), var_attributeTypeIndex_20612, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 582)) ;
    }
    {
    GALGAS_functionSignature temp_44 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 586)) ;
    temp_44.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 586)), var_stringTypeIndex_12946, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 586)) ;
    var_getterMap_13943.setter_insertOrReplace (var_accessorName_20450, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 585)), temp_44, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 587)), GALGAS_bool (true), var_attributeTypeIndex_20612, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 590)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 583)) ;
    }
    enumerator_20403.gotoNextObject () ;
  }
  enumGalgasBool test_45 = kBoolTrue ;
  if (kBoolTrue == test_45) {
    const GALGAS_mapDeclarationAST temp_46 = object ;
    test_45 = GALGAS_bool (kIsSupOrEqual, temp_46.readProperty_mInsertOrReplaceDeclarationListAST ().getter_length (SOURCE_FILE ("type-map.galgas", 595)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_45) {
      GALGAS_location var_insertOrReplaceLocation_21090 ;
      const GALGAS_mapDeclarationAST temp_47 = object ;
      temp_47.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_21090, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 596)) ;
      {
      var_setterMap_13971.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_21090  COMMA_SOURCE_FILE ("type-map.galgas", 598)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 599)), var_insertMethodFormalArgumentList_16171, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 602)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 597)) ;
      }
    }
  }
  const GALGAS_mapDeclarationAST temp_48 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_21468 (temp_48.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_21468.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_21515 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_21468.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 609)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 609)), enumerator_21468.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 608)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_21773 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_21468.current_mPropertyTypeName (HERE), var_attributeTypeIndex_21773, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 612)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_21840 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 616)) ;
    var_accessorFormalArgumentList_21840.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 617)), var_attributeTypeIndex_21773, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 617)), enumerator_21468.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 617)) ;
    var_accessorFormalArgumentList_21840.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 618)), var_stringTypeIndex_12946, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 618)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 618)) ;
    {
    var_setterMap_13971.setter_insertOrReplace (var_accessorName_21515, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 621)), var_accessorFormalArgumentList_21840, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 624)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 619)) ;
    }
    enumerator_21468.gotoNextObject () ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_22305 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 629)) ;
  {
  var_optionalMethodMap_22305.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 630)), var_optionalMethodSignature_16305, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 630)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_49 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_49.readProperty_mMapTypeName (), var_getterMap_13943, var_setterMap_13971, var_instanceMethodMap_14019, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 632)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeEntry_22928 ;
  {
  const GALGAS_mapDeclarationAST temp_50 = object ;
  const GALGAS_mapDeclarationAST temp_51 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_50.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 645)), temp_51.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 645)), var_elementTypeEntry_22928, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 644)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_52 = object ;
  const GALGAS_mapDeclarationAST temp_53 = object ;
  const GALGAS_mapDeclarationAST temp_54 = object ;
  const GALGAS_mapDeclarationAST temp_55 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_52.readProperty_mMapTypeName (), temp_53.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-map.galgas", 653)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-map.galgas", 654)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 656)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 657)), var_typedPropertyList_16226, var_constructorMap_13853, var_getterMap_13943, var_setterMap_13971, var_instanceMethodMap_14019, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 663)), var_optionalMethodMap_22305, var_enumerationDescriptor_13254, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 666)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 666)) COMMA_SOURCE_FILE ("type-map.galgas", 666)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 666)) COMMA_SOURCE_FILE ("type-map.galgas", 666)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-map.galgas", 666)) COMMA_SOURCE_FILE ("type-map.galgas", 666)), var_argumentTypeListForAddAssignWithFieldExpressionList_16532, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 668)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 669)), temp_54.readProperty_mSearchMethodList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 671)), GALGAS_bool (false), var_elementTypeEntry_22928, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (temp_55.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 675)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-map.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 649)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                               extensionMethod_mapDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_24925 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 705)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_24925, var_nameForUsefulness_24925, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 706)) ;
  }
  const GALGAS_mapDeclarationAST temp_1 = object ;
  const GALGAS_mapDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_25088 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mMapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 707)), temp_2.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 707)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_24925, var_elementTypeNameForUsefulness_25088 COMMA_SOURCE_FILE ("type-map.galgas", 708)) ;
  }
  GALGAS_bool var_usesSelectorsInInsertAndSearch_25326 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_25359 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_3 = object ;
  cEnumerator_lstringlist enumerator_25375 (temp_3.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_25375.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, enumerator_25375.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_usesSelectorsInInsertAndSearch_25326 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_25375.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_activateSuggestion_25359 = GALGAS_bool (false) ;
        }
      }
    }
    enumerator_25375.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_25638 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 720)) ;
  GALGAS_propertyIndexMap var_attributeMap_25680 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 721)) ;
  const GALGAS_mapDeclarationAST temp_6 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_25730 (temp_6.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_25730.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_25794 = function_typeNameForUsefulEntitiesGraph (enumerator_25730.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 723)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_24925, var_propertyTypeNameForUsefulness_25794 COMMA_SOURCE_FILE ("type-map.galgas", 724)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_25968 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_25730.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 725)) ;
    GALGAS_bool var_hasSetter_26046 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_26073 = GALGAS_bool (false) ;
    var_typedAttributeList_25638.addAssign_operation (var_t_25968, enumerator_25730.current_mPropertyName (HERE), var_hasSetter_26046, var_hasSelector_26073  COMMA_SOURCE_FILE ("type-map.galgas", 728)) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 733)).getter_hasKey (enumerator_25730.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 733)).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_string var_m_26266 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_26343 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 735)), kENUMERATION_UP) ;
        while (enumerator_26343.hasCurrentObject ()) {
          var_m_26266.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_26343.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 736)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 736)) ;
          enumerator_26343.gotoNextObject () ;
        }
        var_m_26266.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 738)) ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_25730.current_mPropertyName (HERE).readProperty_location (), var_m_26266, fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 739)) ;
      }
    }
    {
    var_attributeMap_25680.setter_insertKey (enumerator_25730.current_mPropertyName (HERE), var_t_25968, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 741)) ;
    }
    enumerator_25730.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_26574 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 744)) ;
  const GALGAS_mapDeclarationAST temp_9 = object ;
  cEnumerator_insertMethodListAST enumerator_26638 (temp_9.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_26638.hasCurrentObject ()) {
    {
    var_insertMethodMap_26574.setter_insertKey (enumerator_26638.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 746)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_26638.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 747)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_26638.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 748)) ;
    }
    enumerator_26638.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_26896 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 751)) ;
  const GALGAS_mapDeclarationAST temp_10 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_26942 (temp_10.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_26942.hasCurrentObject ()) {
    {
    var_searchMethodMap_26896.setter_insertKey (enumerator_26942.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 753)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_26942.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 754)) ;
    }
    enumerator_26942.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_11 = object ;
  cEnumerator_mapRemoveMethodListAST enumerator_27137 (temp_11.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_27137.hasCurrentObject ()) {
    {
    var_insertMethodMap_26574.setter_insertKey (enumerator_27137.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 758)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_27137.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 759)) ;
    }
    enumerator_27137.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_12 = object ;
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_27376 (temp_12.readProperty_mInsertOrReplaceDeclarationListAST (), kENUMERATION_UP) ;
  GALGAS_uint index_27339 ((uint32_t) 0) ;
  while (enumerator_27376.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsStrictSup, index_27339.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticWarning (enumerator_27376.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray14  COMMA_SOURCE_FILE ("type-map.galgas", 764)) ;
      }
    }
    enumerator_27376.gotoNextObject () ;
    index_27339.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 762)) ;
  }
  const GALGAS_mapDeclarationAST temp_15 = object ;
  GALGAS_bool var_hasInsertOrReplaceModifier_27603 = GALGAS_bool (kIsStrictSup, temp_15.readProperty_mInsertOrReplaceDeclarationListAST ().getter_length (SOURCE_FILE ("type-map.galgas", 767)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = var_hasInsertOrReplaceModifier_27603.operator_and (var_insertMethodMap_26574.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 768)) COMMA_SOURCE_FILE ("type-map.galgas", 768)).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_27832 ;
      const GALGAS_mapDeclarationAST temp_17 = object ;
      temp_17.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceDeclarationLocation_27832, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 769)) ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_27832, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray18  COMMA_SOURCE_FILE ("type-map.galgas", 770)) ;
    }
  }
  const GALGAS_mapDeclarationAST temp_19 = object ;
  const GALGAS_mapDeclarationAST temp_20 = object ;
  const GALGAS_mapDeclarationAST temp_21 = object ;
  const GALGAS_mapDeclarationAST temp_22 = object ;
  const GALGAS_mapDeclarationAST temp_23 = object ;
  const GALGAS_mapDeclarationAST temp_24 = object ;
  const GALGAS_mapDeclarationAST temp_25 = object ;
  const GALGAS_mapDeclarationAST temp_26 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (temp_19.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 774)), GALGAS_mapTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_20.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 776)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_21.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 777)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 777)), temp_22.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 777)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 777)), temp_23.readProperty_mMapTypeName (), var_typedAttributeList_25638, temp_24.readProperty_mInsertMethodList (), temp_25.readProperty_mSearchMethodList (), temp_26.readProperty_mRemoveMethodList (), var_hasInsertOrReplaceModifier_27603, var_activateSuggestion_25359  COMMA_SOURCE_FILE ("type-map.galgas", 775))  COMMA_SOURCE_FILE ("type-map.galgas", 773)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                         extensionMethod_mapDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_semanticAnalysis (defineExtensionMethod_mapDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  const GALGAS_mapTypeForGeneration temp_0 = object ;
  const GALGAS_mapTypeForGeneration temp_1 = object ;
  const GALGAS_mapTypeForGeneration temp_2 = object ;
  const GALGAS_mapTypeForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 810)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 811)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-map.galgas", 809))) ;
  const GALGAS_mapTypeForGeneration temp_4 = object ;
  const GALGAS_mapTypeForGeneration temp_5 = object ;
  const GALGAS_mapTypeForGeneration temp_6 = object ;
  const GALGAS_mapTypeForGeneration temp_7 = object ;
  const GALGAS_mapTypeForGeneration temp_8 = object ;
  const GALGAS_mapTypeForGeneration temp_9 = object ;
  const GALGAS_mapTypeForGeneration temp_10 = object ;
  const GALGAS_mapTypeForGeneration temp_11 = object ;
  const GALGAS_mapTypeForGeneration temp_12 = object ;
  const GALGAS_mapTypeForGeneration temp_13 = object ;
  const GALGAS_mapTypeForGeneration temp_14 = object ;
  const GALGAS_mapTypeForGeneration temp_15 = object ;
  const GALGAS_mapTypeForGeneration temp_16 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 816)), temp_5.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 817)), temp_6.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 818)), temp_7.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 819)), temp_8.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 820)), temp_9.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 821)), temp_10.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 822)), temp_11.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 823)), temp_12.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 824)), temp_13.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 825)), temp_14.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 826)), temp_15.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 827)), temp_16.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 828)) COMMA_SOURCE_FILE ("type-map.galgas", 815))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 815)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  const GALGAS_mapTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_30725 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_30725.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_30725.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 839)) ;
    enumerator_30725.gotoNextObject () ;
  }
  const GALGAS_mapTypeForGeneration temp_1 = object ;
  const GALGAS_mapTypeForGeneration temp_2 = object ;
  const GALGAS_mapTypeForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 843)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 844)), temp_3.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-map.galgas", 842))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_32_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  const GALGAS_mapTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 855)) ;
  const GALGAS_mapTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 856)) ;
  const GALGAS_mapTypeForGeneration temp_2 = object ;
  const GALGAS_mapTypeForGeneration temp_3 = object ;
  const GALGAS_mapTypeForGeneration temp_4 = object ;
  const GALGAS_mapTypeForGeneration temp_5 = object ;
  const GALGAS_mapTypeForGeneration temp_6 = object ;
  const GALGAS_mapTypeForGeneration temp_7 = object ;
  const GALGAS_mapTypeForGeneration temp_8 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 858)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mInsertMethodList (), temp_5.readProperty_mSearchMethodList (), temp_6.readProperty_mRemoveMethodList (), temp_7.readProperty_mHasInsertOrReplaceModifier (), temp_8.readProperty_mActivateSuggestions () COMMA_SOURCE_FILE ("type-map.galgas", 857))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                                     extensionMethod_mapTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                            GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                            GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                            GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                            GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryDeclarationAST * object = (const cPtr_mapEntryDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryDeclarationAST) ;
  const GALGAS_mapEntryDeclarationAST temp_0 = object ;
  const GALGAS_mapEntryDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_1201 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapEntryTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 20)), temp_1.readProperty_mMapEntryTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map-entry.galgas", 20)) ;
  {
  const GALGAS_mapEntryDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1201, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 21)) ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_3 = object ;
  const GALGAS_mapEntryDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1201, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 23)), temp_4.readProperty_mAssociatedMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map-entry.galgas", 23)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 22)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapEntryDeclarationAST.mSlotID,
                                                extensionMethod_mapEntryDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_mapEntryDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryDeclarationAST * object = (const cPtr_mapEntryDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum_2291 ;
  GALGAS_typedPropertyList var_mapTypedAttributeList_2349 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_2408 ;
  const GALGAS_mapEntryDeclarationAST temp_0 = object ;
  GALGAS_bool joker_2253_3 ; // Joker input parameter
  GALGAS_bool joker_2253_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_2253_1 ; // Joker input parameter
  GALGAS_bool joker_2297_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2297_2 ; // Joker input parameter
  GALGAS_propertyMap joker_2297_1 ; // Joker input parameter
  GALGAS_constructorMap joker_2355_11 ; // Joker input parameter
  GALGAS_getterMap joker_2355_10 ; // Joker input parameter
  GALGAS_setterMap joker_2355_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_2355_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_2355_7 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_2355_6 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_2355_5 ; // Joker input parameter
  GALGAS_operators joker_2355_4 ; // Joker input parameter
  GALGAS_functionSignature joker_2355_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_2355_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_2355_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2414_6 ; // Joker input parameter
  GALGAS_bool joker_2414_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_2414_4 ; // Joker input parameter
  GALGAS_string joker_2414_3 ; // Joker input parameter
  GALGAS_string joker_2414_2 ; // Joker input parameter
  GALGAS_headerKind joker_2414_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mTypeMap ().method_searchKey (temp_0.readProperty_mAssociatedMapTypeName (), joker_2253_3, joker_2253_2, joker_2253_1, var_typeKindEnum_2291, joker_2297_3, joker_2297_2, joker_2297_1, var_mapTypedAttributeList_2349, joker_2355_11, joker_2355_10, joker_2355_9, joker_2355_8, joker_2355_7, joker_2355_6, joker_2355_5, joker_2355_4, joker_2355_3, joker_2355_2, joker_2355_1, var_searchMethodList_2408, joker_2414_6, joker_2414_5, joker_2414_4, joker_2414_3, joker_2414_2, joker_2414_1, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 39)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_2291.objectCompare (GALGAS_typeKindEnum::constructor_sharedMapType (SOURCE_FILE ("type-map-entry.galgas", 49)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_mapEntryDeclarationAST temp_2 = object ;
      const GALGAS_mapEntryDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAssociatedMapTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_3.readProperty_mAssociatedMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 50)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 50)), fixItArray4  COMMA_SOURCE_FILE ("type-map-entry.galgas", 50)) ;
      var_mapTypedAttributeList_2349 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 51)) ;
    }
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_2652 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 54)) ;
  GALGAS_constructorMap var_constructorMap_2713 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 55)) ;
  GALGAS_getterMap var_getterMap_2803 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_2803, inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 56)) ;
  }
  GALGAS_setterMap var_setterMap_2832 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 57)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_2880 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 58)) ;
  GALGAS_classMethodMap var_classMethodMap_2921 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 59)) ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedMapTypeIndex_3056 ;
  {
  const GALGAS_mapEntryDeclarationAST temp_5 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.readProperty_mAssociatedMapTypeName (), var_associatedMapTypeIndex_3056, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 61)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_3163 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_3163, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 63)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeIndex_3273 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_3273, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 65)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_mapEntryTypeIndex_3389 ;
  {
  const GALGAS_mapEntryDeclarationAST temp_6 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_6.readProperty_mMapEntryTypeName (), var_mapEntryTypeIndex_3389, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 67)) ;
  }
  GALGAS_formalParameterSignature var_argList_3480 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 69)) ;
  var_argList_3480.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 70)), var_associatedMapTypeIndex_3056, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-entry.galgas", 70)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 70)) ;
  var_argList_3480.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 71)), var_lstringTypeIndex_3273, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-entry.galgas", 71)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 71)) ;
  var_argList_3480.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 72)), var_mapEntryTypeIndex_3389, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-entry.galgas", 72)), GALGAS_string ("outEntry")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 72)) ;
  {
  var_classMethodMap_2921.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeEntry"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 74))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 74)), var_argList_3480, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 73)) ;
  }
  {
  var_classMethodMap_2921.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeOptionalEntry"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 79))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 79)), var_argList_3480, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 78)) ;
  }
  var_argList_3480 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 84)) ;
  var_argList_3480.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 85)), var_associatedMapTypeIndex_3056, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-entry.galgas", 85)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 85)) ;
  var_argList_3480.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 86)), var_stringTypeIndex_3163, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-entry.galgas", 86)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 86)) ;
  var_argList_3480.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 87)), var_mapEntryTypeIndex_3389, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-entry.galgas", 87)), GALGAS_string ("outEntry")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 87)) ;
  {
  var_classMethodMap_2921.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeEntryFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 89))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 89)), var_argList_3480, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 88)) ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_7 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_2713, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("null"), temp_7.readProperty_mMapEntryTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 94)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_4770 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 102)) ;
  var_constructorAttributeTypeList_4770.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 103)), var_associatedMapTypeIndex_3056, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 103)) ;
  var_constructorAttributeTypeList_4770.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 104)), var_lstringTypeIndex_3273, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 104)) ;
  cEnumerator_mapSearchMethodListAST enumerator_4980 (var_searchMethodList_2408, kENUMERATION_UP) ;
  while (enumerator_4980.hasCurrentObject ()) {
    {
    var_constructorMap_2713.setter_insertKey (enumerator_4980.current_mSearchMethodName (HERE), var_constructorAttributeTypeList_4770, GALGAS_bool (true), var_mapEntryTypeIndex_3389, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 106)) ;
    }
    enumerator_4980.gotoNextObject () ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2803, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 114)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2803, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 121)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2803, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 128)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2803, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 135)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2803, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 142)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2803, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 149)) ;
  }
  GALGAS_getterMap var_inheritedGetterMap_6337 = var_getterMap_2803 ;
  cEnumerator_typedPropertyList enumerator_6393 (var_mapTypedAttributeList_2349, kENUMERATION_UP) ;
  while (enumerator_6393.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_inheritedGetterMap_6337.getter_hasKey (enumerator_6393.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map-entry.galgas", 159)).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_string var_s_6504 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_6524 (var_inheritedGetterMap_6337.getter_keySet (SOURCE_FILE ("type-map-entry.galgas", 161)), kENUMERATION_UP) ;
        while (enumerator_6524.hasCurrentObject ()) {
          var_s_6504.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_6524.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 162)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 162)) ;
          if (enumerator_6524.hasNextObject ()) {
            var_s_6504.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 163)) ;
          }
          enumerator_6524.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_6393.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("the map has a associated map entry, which has predefined getters: ").add_operation (var_s_6504, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 165)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 165)), fixItArray9  COMMA_SOURCE_FILE ("type-map-entry.galgas", 165)) ;
      }
    }
    if (kBoolFalse == test_8) {
      {
      var_getterMap_2803.setter_insertKey (enumerator_6393.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map-entry.galgas", 170)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 171)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 172)), GALGAS_bool (true), enumerator_6393.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map-entry.galgas", 175)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 168)) ;
      }
    }
    enumerator_6393.gotoNextObject () ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_10 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_10.readProperty_mMapEntryTypeName (), var_getterMap_2803, var_setterMap_2832, var_instanceMethodMap_2880, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 181)) ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_11 = object ;
  const GALGAS_mapEntryDeclarationAST temp_12 = object ;
  const GALGAS_mapEntryDeclarationAST temp_13 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_11.readProperty_mMapEntryTypeName (), temp_12.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-map-entry.galgas", 197)), GALGAS_typeKindEnum::constructor_sharedMapEntryType (SOURCE_FILE ("type-map-entry.galgas", 198)), GALGAS_bool (false), var_mapTypedAttributeList_2349, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 201)), var_mapTypedAttributeList_2349, var_constructorMap_2713, var_getterMap_2803, var_setterMap_2832, var_instanceMethodMap_2880, var_classMethodMap_2921, var_optionalMethodMap_2652, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 209)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map-entry.galgas", 210)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-map-entry.galgas", 210)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 210)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 211)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 212)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 213)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 214)), var_searchMethodList_2408, GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-map-entry.galgas", 217)), GALGAS_string ("null"), GALGAS_string ("mapentry-").add_operation (temp_13.readProperty_mMapEntryTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-map-entry.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 219)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-map-entry.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 193)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapEntryDeclarationAST.mSlotID,
                                               extensionMethod_mapEntryDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapEntryDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryDeclarationAST * object = (const cPtr_mapEntryDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryDeclarationAST) ;
  const GALGAS_mapEntryDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_8927 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapEntryTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 237)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8927, var_nameForUsefulness_8927, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 238)) ;
  }
  GALGAS_typedPropertyList var_listTypeAttributeList_9233 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_9292 ;
  const GALGAS_mapEntryDeclarationAST temp_1 = object ;
  GALGAS_bool joker_9181_7 ; // Joker input parameter
  GALGAS_bool joker_9181_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9181_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9181_4 ; // Joker input parameter
  GALGAS_bool joker_9181_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9181_2 ; // Joker input parameter
  GALGAS_propertyMap joker_9181_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9239_11 ; // Joker input parameter
  GALGAS_getterMap joker_9239_10 ; // Joker input parameter
  GALGAS_setterMap joker_9239_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9239_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_9239_7 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_9239_6 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9239_5 ; // Joker input parameter
  GALGAS_operators joker_9239_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9239_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9239_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9239_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9298_6 ; // Joker input parameter
  GALGAS_bool joker_9298_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9298_4 ; // Joker input parameter
  GALGAS_string joker_9298_3 ; // Joker input parameter
  GALGAS_string joker_9298_2 ; // Joker input parameter
  GALGAS_headerKind joker_9298_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mTypeMap ().method_searchKey (temp_1.readProperty_mAssociatedMapTypeName (), joker_9181_7, joker_9181_6, joker_9181_5, joker_9181_4, joker_9181_3, joker_9181_2, joker_9181_1, var_listTypeAttributeList_9233, joker_9239_11, joker_9239_10, joker_9239_9, joker_9239_8, joker_9239_7, joker_9239_6, joker_9239_5, joker_9239_4, joker_9239_3, joker_9239_2, joker_9239_1, var_searchMethodList_9292, joker_9298_6, joker_9298_5, joker_9298_4, joker_9298_3, joker_9298_2, joker_9298_1, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 240)) ;
  const GALGAS_mapEntryDeclarationAST temp_2 = object ;
  const GALGAS_mapEntryDeclarationAST temp_3 = object ;
  const GALGAS_mapEntryDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map entry ").add_operation (temp_2.readProperty_mMapEntryTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 250)), GALGAS_mapEntryTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mMapEntryTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 252)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mAssociatedMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 253)), var_listTypeAttributeList_9233, var_searchMethodList_9292  COMMA_SOURCE_FILE ("type-map-entry.galgas", 251))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 249)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapEntryDeclarationAST.mSlotID,
                                         extensionMethod_mapEntryDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryDeclarationAST_semanticAnalysis (defineExtensionMethod_mapEntryDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'mapEntryGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_mapEntryGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_mapEntryGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_mapEntryGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_mapEntryGenerationTemplate_0,
  0,
  gWrapperAllDirectories_mapEntryGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapEntryGenerationTemplate mapEntryTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_mapEntryGenerationTemplate_mapEntryTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                     const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map entry"), inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_sharedMapEntry {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapEntryGenerationTemplate mapEntryTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_mapEntryGenerationTemplate_mapEntryTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                                 const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                 const GALGAS_string & in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER,
                                                                                                 const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                 const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_sharedMapEntry () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_null (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNullEntry (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeOptionalEntry (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & ioMap,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstring inKey,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & outEntry\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outEntry.internalMakeOptionalEntry (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeEntry (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & ioMap,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstring inKey,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & outEntry\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outEntry.internalMakeEntry (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeEntryFromString (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & ioMap,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_string inKey,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & outEntry\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outEntry.internalMakeEntryFromString (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_2158_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2158 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2158.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_2158.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 44)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_2158.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 44)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "C_Compiler * inCompiler\n"
        "                                       " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  GALGAS_" ;
      result << enumerator_2158.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 46)).stringValue () ;
      result << " result ;\n"
        "  const cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) getAttributeListPointer (inCompiler, " ;
      result << enumerator_2158.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 47)).stringValue () ;
      result << " COMMA_THERE) ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_2158.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 50)).stringValue () ;
      result << ";\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_2158_IDX.increment () ;
      enumerator_2158.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3148_IDX (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_3148 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3148.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_3148.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 58)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " & inMap,\n"
        "                                                " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_lstring & inKey,\n"
        "                                                " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                                                " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " result ;\n"
        "  result.internalMakeRegularEntryBySearchingKey (inMap, inKey, kSearchErrorMessage_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3148.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 63)).stringValue () ;
      result << ", inCompiler COMMA_THERE) ;\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_3148_IDX.increment () ;
      enumerator_3148.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryTypeForGeneration * object = (const cPtr_mapEntryTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryTypeForGeneration) ;
  const GALGAS_mapEntryTypeForGeneration temp_0 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_1 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapEntryGenerationTemplate_mapEntryTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 294)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 295)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 293))) ;
  const GALGAS_mapEntryTypeForGeneration temp_2 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_3 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_4 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_5 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_6 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_7 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_8 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_9 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_10 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_11 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_12 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_13 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_14 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 298)), temp_3.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 299)), temp_4.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 300)), temp_5.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 301)), temp_6.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 302)), temp_7.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 303)), temp_8.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 304)), temp_9.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 305)), temp_10.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 306)), temp_11.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 307)), temp_12.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 308)), temp_13.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 309)), temp_14.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 310)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 297))), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 297)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapEntryTypeForGeneration.mSlotID,
                                              extensionMethod_mapEntryTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapEntryTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryTypeForGeneration * object = (const cPtr_mapEntryTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryTypeForGeneration) ;
  const GALGAS_mapEntryTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 320)) ;
  const GALGAS_mapEntryTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedMapTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 321)) ;
  const GALGAS_mapEntryTypeForGeneration temp_2 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_3 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_4 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_5 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapEntryGenerationTemplate_mapEntryTypeSpecificImplementation (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 323)), temp_3.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 324)), temp_4.readProperty_mAssociatedMapTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 325)), temp_5.readProperty_mAssociatedMapTypedAttributeList (), temp_6.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-map-entry.galgas", 322))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapEntryTypeForGeneration.mSlotID,
                                                     extensionMethod_mapEntryTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapEntryTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sharedMapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  const GALGAS_sharedMapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_12096 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 340)), temp_1.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 340)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_12096, temp_2, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 341)) ;
  }
  const GALGAS_sharedMapDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_12254 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12254.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_12254.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 343)), enumerator_12254.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 343)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 343)) ;
    }
    enumerator_12254.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                                extensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sharedMapDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_sharedMapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("shared map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 350)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                          extensionGetter_sharedMapDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_sharedMapDeclarationAST_keyRepresentation (defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sharedMapDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                            const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                            const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_13324 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 363)) ;
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_13454 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_13454, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 365)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeIndex_13564 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_13564, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 367)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 369)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_13564, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 369)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_13649 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_13738 = GALGAS_bool (false) ;
  const GALGAS_sharedMapDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_13755 (temp_1.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_13755.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_13755.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_13738.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_13755.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-shared-map.galgas", 375)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_13738 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_13755.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-shared-map.galgas", 379)) ;
    }
    enumerator_13755.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_14059 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 383)) ;
  GALGAS_getterMap var_getterMap_14149 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_14149, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 384)) ;
  }
  GALGAS_setterMap var_setterMap_14178 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 385)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_14226 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 386)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_6 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_14059, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_6.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 388)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14149, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 396)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14149, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 403)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14149, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 410)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14149, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 419)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14149, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 428)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14149, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("unsolvedEntryCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 435)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14149, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("unsolvedEntryList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 442)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_15926 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 450)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_15994 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 451)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch_13738.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_15994.addAssign_operation (temp_7.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 453)), var_lstringTypeIndex_13564, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 455)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 452)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_16232 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 457)) ;
  GALGAS_string temp_9 ;
  const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch_13738.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_16232.addAssign_operation (temp_9.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 459)), var_lstringTypeIndex_13564, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 461)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 458)) ;
  const GALGAS_sharedMapDeclarationAST temp_11 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_16452 (temp_11.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_16452.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_16566 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_16452.current_mPropertyTypeName (HERE), var_attributeTypeIndex_16566, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 464)) ;
    }
    GALGAS_bool var_hasSetter_16585 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_16612 = GALGAS_bool (false) ;
    var_typedAttributeList_15926.addAssign_operation (var_attributeTypeIndex_16566, enumerator_16452.current_mPropertyName (HERE), var_hasSetter_16585, var_hasSelector_16612  COMMA_SOURCE_FILE ("type-shared-map.galgas", 467)) ;
    var_enumerationDescriptor_13649.addAssign_operation (var_attributeTypeIndex_16566, enumerator_16452.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 468)) ;
    GALGAS_lstring temp_12 ;
    const enumGalgasBool test_13 = var_usesSelectorsInInsertAndSearch_13738.boolEnum () ;
    if (kBoolTrue == test_13) {
      temp_12 = enumerator_16452.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_13) {
      temp_12 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 470)) ;
    }
    var_insertMethodFormalArgumentList_15994.addAssign_operation (temp_12, var_attributeTypeIndex_16566, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 472)), enumerator_16452.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 469)) ;
    GALGAS_lstring temp_14 ;
    const enumGalgasBool test_15 = var_usesSelectorsInInsertAndSearch_13738.boolEnum () ;
    if (kBoolTrue == test_15) {
      temp_14 = enumerator_16452.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_15) {
      temp_14 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 475)) ;
    }
    var_removeMethodFormalArgumentList_16232.addAssign_operation (temp_14, var_attributeTypeIndex_16566, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 477)), enumerator_16452.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 474)) ;
    enumerator_16452.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_16 = object ;
  cEnumerator_insertMethodListAST enumerator_17252 (temp_16.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_17252.hasCurrentObject ()) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_setterMap_14178.getter_hasKey (enumerator_17252.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-shared-map.galgas", 482)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_17252.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17252.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 483)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 483)), fixItArray18  COMMA_SOURCE_FILE ("type-shared-map.galgas", 483)) ;
      }
    }
    if (kBoolFalse == test_17) {
      {
      var_setterMap_14178.setter_insertOrReplace (enumerator_17252.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 487)), var_insertMethodFormalArgumentList_15994, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 490)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 485)) ;
      }
    }
    enumerator_17252.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_19 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_17783 (temp_19.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_17783.hasCurrentObject ()) {
    {
    var_instanceMethodMap_14226.setter_insertKey (enumerator_17783.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 499)), var_removeMethodFormalArgumentList_16232, enumerator_17783.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 503)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-shared-map.galgas", 504)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 497)) ;
    }
    enumerator_17783.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_20 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_18170 (temp_20.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_18170.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_18217 = GALGAS_lstring::constructor_new (enumerator_18170.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 510)), enumerator_18170.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 510)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_18379 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_18170.current_mPropertyTypeName (HERE), var_attributeTypeIndex_18379, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 511)) ;
    }
    {
    GALGAS_functionSignature temp_21 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 515)) ;
    temp_21.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 515)), var_stringTypeIndex_13454, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 515)) ;
    var_getterMap_14149.setter_insertOrReplace (var_accessorName_18217, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 514)), temp_21, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 516)), GALGAS_bool (true), var_attributeTypeIndex_18379, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 519)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 512)) ;
    }
    enumerator_18170.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_22 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_18798 (temp_22.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_18798.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_18845 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_18798.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 525)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 525)), enumerator_18798.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 525)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_19052 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_18798.current_mPropertyTypeName (HERE), var_attributeTypeIndex_19052, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 526)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_19114 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 527)) ;
    var_accessorFormalArgumentList_19114.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 528)), var_attributeTypeIndex_19052, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 528)), enumerator_18798.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 528)) ;
    var_accessorFormalArgumentList_19114.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 529)), var_stringTypeIndex_13454, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 529)), enumerator_18798.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 529)) ;
    {
    var_setterMap_14178.setter_insertOrReplace (var_accessorName_18845, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 532)), var_accessorFormalArgumentList_19114, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 535)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 530)) ;
    }
    enumerator_18798.gotoNextObject () ;
  }
  {
  const GALGAS_sharedMapDeclarationAST temp_23 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_23.readProperty_mMapTypeName (), var_getterMap_14149, var_setterMap_14178, var_instanceMethodMap_14226, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 540)) ;
  }
  {
  const GALGAS_sharedMapDeclarationAST temp_24 = object ;
  const GALGAS_sharedMapDeclarationAST temp_25 = object ;
  const GALGAS_sharedMapDeclarationAST temp_26 = object ;
  const GALGAS_sharedMapDeclarationAST temp_27 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_24.readProperty_mMapTypeName (), temp_25.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 556)), GALGAS_typeKindEnum::constructor_sharedMapType (SOURCE_FILE ("type-shared-map.galgas", 557)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 559)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 560)), var_typedAttributeList_15926, var_constructorMap_14059, var_getterMap_14149, var_setterMap_14178, var_instanceMethodMap_14226, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 566)), var_optionalMethodMap_13324, var_enumerationDescriptor_13649, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-shared-map.galgas", 569)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-shared-map.galgas", 569)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 569)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 570)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 571)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 572)), temp_26.readProperty_mSearchMethodList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 574)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 576)), GALGAS_string ("emptyMap"), GALGAS_string ("sharedmap-").add_operation (temp_27.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-shared-map.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 578)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-shared-map.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 552)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sharedMapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                               extensionMethod_sharedMapDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterInSemanticContext (defineExtensionMethod_sharedMapDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sharedMapDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_21346 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 596)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_21346, var_nameForUsefulness_21346, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 597)) ;
  }
  const GALGAS_sharedMapDeclarationAST temp_1 = object ;
  const GALGAS_sharedMapDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_21509 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mMapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-entry"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 598)), temp_2.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 598)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_21346, var_elementTypeNameForUsefulness_21509 COMMA_SOURCE_FILE ("type-shared-map.galgas", 599)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_21761 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 601)) ;
  GALGAS_propertyIndexMap var_attributeMap_21803 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 602)) ;
  const GALGAS_sharedMapDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_21853 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_21853.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_21917 = function_typeNameForUsefulEntitiesGraph (enumerator_21853.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 604)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_21346, var_propertyTypeNameForUsefulness_21917 COMMA_SOURCE_FILE ("type-shared-map.galgas", 605)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_22069 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_21853.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 606)) ;
    GALGAS_bool var_hasSetter_22147 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_22174 = GALGAS_bool (false) ;
    var_typedAttributeList_21761.addAssign_operation (var_t_22069, enumerator_21853.current_mPropertyName (HERE), var_hasSetter_22147, var_hasSelector_22174  COMMA_SOURCE_FILE ("type-shared-map.galgas", 609)) ;
    {
    var_attributeMap_21803.setter_insertKey (enumerator_21853.current_mPropertyName (HERE), var_t_22069, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 614)) ;
    }
    enumerator_21853.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_22394 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 617)) ;
  const GALGAS_sharedMapDeclarationAST temp_4 = object ;
  cEnumerator_insertMethodListAST enumerator_22444 (temp_4.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_22444.hasCurrentObject ()) {
    {
    var_insertMethodMap_22394.setter_insertKey (enumerator_22444.current (HERE).readProperty_mInsertMethodName (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 619)) ;
    }
    cEnumerator_stringlist enumerator_22675 (enumerator_22444.current (HERE).readProperty_mErrorMessage ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 621)), kENUMERATION_UP) ;
    while (enumerator_22675.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_22714 = enumerator_22675.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 622)) ;
      {
      GALGAS_string joker_22809 ; // Joker input parameter
      var_explodedArray_22714.setter_popFirst (joker_22809, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 623)) ;
      }
      cEnumerator_stringlist enumerator_22829 (var_explodedArray_22714, kENUMERATION_UP) ;
      while (enumerator_22829.hasCurrentObject ()) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsStrictSup, enumerator_22829.current_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 625)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_char var_c_22908 = enumerator_22829.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 626)) ;
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = GALGAS_bool (kIsNotEqual, var_c_22908.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_22908.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 627)).boolEnum () ;
              if (kBoolTrue == test_6) {
                TC_Array <C_FixItDescription> fixItArray7 ;
                inCompiler->emitSemanticError (enumerator_22444.current (HERE).readProperty_mErrorMessage ().readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message"), fixItArray7  COMMA_SOURCE_FILE ("type-shared-map.galgas", 628)) ;
              }
            }
          }
        }
        enumerator_22829.gotoNextObject () ;
      }
      enumerator_22675.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_23335 (enumerator_22444.current (HERE).readProperty_mShadowErrorMessage ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 634)), kENUMERATION_UP) ;
    while (enumerator_23335.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_23374 = enumerator_23335.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 635)) ;
      {
      GALGAS_string joker_23475 ; // Joker input parameter
      var_explodedArray_23374.setter_popFirst (joker_23475, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 636)) ;
      }
      cEnumerator_stringlist enumerator_23514 (var_explodedArray_23374, kENUMERATION_UP) ;
      while (enumerator_23514.hasCurrentObject ()) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsStrictSup, enumerator_23514.current (HERE).readProperty_mValue ().getter_length (SOURCE_FILE ("type-shared-map.galgas", 638)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_char var_c_23585 = enumerator_23514.current (HERE).readProperty_mValue ().getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 639)) ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsNotEqual, var_c_23585.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_23585.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 640)).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_22444.current (HERE).readProperty_mErrorMessage ().readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message"), fixItArray10  COMMA_SOURCE_FILE ("type-shared-map.galgas", 641)) ;
              }
            }
          }
        }
        enumerator_23514.gotoNextObject () ;
      }
      enumerator_23335.gotoNextObject () ;
    }
    enumerator_22444.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_23911 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 648)) ;
  const GALGAS_sharedMapDeclarationAST temp_11 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_23961 (temp_11.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_23961.hasCurrentObject ()) {
    {
    var_searchMethodMap_23911.setter_insertKey (enumerator_23961.current (HERE).readProperty_mSearchMethodName (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 650)) ;
    }
    cEnumerator_stringlist enumerator_24193 (enumerator_23961.current (HERE).readProperty_mErrorMessage ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 652)), kENUMERATION_UP) ;
    while (enumerator_24193.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_24232 = enumerator_24193.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 653)) ;
      {
      GALGAS_string joker_24332 ; // Joker input parameter
      var_explodedArray_24232.setter_popFirst (joker_24332, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 654)) ;
      }
      cEnumerator_stringlist enumerator_24371 (var_explodedArray_24232, kENUMERATION_UP) ;
      while (enumerator_24371.hasCurrentObject ()) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsStrictSup, enumerator_24371.current (HERE).readProperty_mValue ().getter_length (SOURCE_FILE ("type-shared-map.galgas", 656)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_12) {
            GALGAS_char var_c_24442 = enumerator_24371.current (HERE).readProperty_mValue ().getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 657)) ;
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsNotEqual, var_c_24442.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
              if (kBoolTrue == test_13) {
                TC_Array <C_FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticError (enumerator_23961.current (HERE).readProperty_mErrorMessage ().readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message"), fixItArray14  COMMA_SOURCE_FILE ("type-shared-map.galgas", 659)) ;
              }
            }
          }
        }
        enumerator_24371.gotoNextObject () ;
      }
      enumerator_24193.gotoNextObject () ;
    }
    enumerator_23961.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_15 = object ;
  const GALGAS_sharedMapDeclarationAST temp_16 = object ;
  const GALGAS_sharedMapDeclarationAST temp_17 = object ;
  const GALGAS_sharedMapDeclarationAST temp_18 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (temp_15.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 667)), GALGAS_sharedMapTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_16.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 669)), var_typedAttributeList_21761, temp_17.readProperty_mInsertMethodList (), temp_18.readProperty_mSearchMethodList ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 668))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 666)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sharedMapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                         extensionMethod_sharedMapDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_semanticAnalysis (defineExtensionMethod_sharedMapDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'sharedMapGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_sharedMapGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_sharedMapGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_sharedMapGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_sharedMapGenerationTemplate_0,
  0,
  gWrapperAllDirectories_sharedMapGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & in_TYPE_5F_NAME,
                                                                                       const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_typedPropertyList & /* in_ATTRIBUTE_5F_LIST */,
                                                                                       const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" unique map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n" ;
  GALGAS_uint index_418_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_418 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_418.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "extern const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_418.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.h1.galgasTemplate", 12)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_418_.increment () ;
      enumerator_418.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_uniqueMap {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeHeader2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & in_TYPE_5F_NAME,
                                                                                       const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 2: class for element of '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 3)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cMapElement {\n"
    "//--- Map attributes\n" ;
  GALGAS_uint index_487_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_487 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_487.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << enumerator_487.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 11)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_487.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 11)).stringValue () ;
      result << " ;\n" ;
      index_487_.increment () ;
      enumerator_487.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public: cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_807_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_807 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_807.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_807.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_807.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 17)).stringValue () ;
      index_807_.increment () ;
      enumerator_807.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public: virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public: virtual cMapElement * copy (void) ;\n"
    "\n"
    "//--- Description\n"
    " public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                   const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                   const GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                                   const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_308_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_308 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_308.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_308.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 5)).stringValue () ;
      result << " & in_" ;
      result << enumerator_308.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 5)).stringValue () ;
      index_308_.increment () ;
      enumerator_308.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cMapElement (inKey COMMA_THERE)" ;
  GALGAS_uint index_582_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_582 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_582.hasCurrentObject ()) {
      result << ",\n"
        "mProperty_" ;
      result << enumerator_582.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 11)).stringValue () ;
      result << " (in_" ;
      result << enumerator_582.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 11)).stringValue () ;
      result << ")" ;
      index_582_.increment () ;
      enumerator_582.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mProperty_lkey.isValid ()" ;
  GALGAS_uint index_1017_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1017 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1017.hasCurrentObject ()) {
      result << " && mProperty_" ;
      result << enumerator_1017.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 21)).stringValue () ;
      result << ".isValid ()" ;
      index_1017_.increment () ;
      enumerator_1017.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement * cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cMapElement * result = NULL ;\n"
    "  macroMyNew (result, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mProperty_lkey" ;
  GALGAS_uint index_1483_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1483 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1483.hasCurrentObject ()) {
      result << ", mProperty_" ;
      result << enumerator_1483.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 32)).stringValue () ;
      index_1483_.increment () ;
      enumerator_1483.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 40)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "void cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {\n" ;
  }else if (kBoolFalse == test_0) {
    result << "void cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
    GALGAS_uint index_2078_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_2078 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2078.hasCurrentObject ()) {
        result << "  ioString << \"\\n\" ;\n"
          "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
          "  ioString << " ;
        result << enumerator_2078.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 47)).stringValue () ;
        result << " \":\" ;\n"
          "  mProperty_" ;
        result << enumerator_2078.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".description (ioString, inIndentation) ;\n" ;
        index_2078_.increment () ;
        enumerator_2078.gotoNextObject () ;
      }
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n"
    "  cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;\n" ;
  GALGAS_uint index_2853_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2853 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2853.hasCurrentObject ()) {
      result << "  if (kOperandEqual == result) {\n"
        "    result = mProperty_" ;
      result << enumerator_2853.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 60)).stringValue () ;
      result << ".objectCompare (operand->mProperty_" ;
      result << enumerator_2853.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 60)).stringValue () ;
      result << ") ;\n"
        "  }\n" ;
      index_2853_.increment () ;
      enumerator_2853.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_uniqueMap () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) :\n"
    "AC_GALGAS_uniqueMap (inSource) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) {\n"
    "  * ((AC_GALGAS_uniqueMap *) this) = inSource ;\n"
    "  return * this ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyMap (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyMap (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_4381_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_4381 (in_INSERT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4381.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_4381.current_mInsertMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 97)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_4731_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_4731 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_4731.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_4731.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 99)).stringValue () ;
          result << " inArgument" ;
          result << index_4731_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 99)).stringValue () ;
          index_4731_IDX.increment () ;
          enumerator_4731.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = NULL ;\n"
        "  macroMyNew (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " (inKey" ;
      GALGAS_uint index_5119_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_5119 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_5119.hasCurrentObject ()) {
          result << ", inArgument" ;
          result << index_5119_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 106)).stringValue () ;
          index_5119_IDX.increment () ;
          enumerator_5119.gotoNextObject () ;
        }
      }
      result << " COMMA_HERE)) ;\n"
        "  capCollectionElement attributes ;\n"
        "  attributes.setPointer (p) ;\n"
        "  macroDetachSharedObject (p) ;\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
      }
      result << "const char * kInsertErrorMessage = " ;
      result << enumerator_4381.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 113)).stringValue () ;
      result << " ;\n"
        "insertInSharedMap (attributes,\n"
        "                   inCompiler,\n"
        "                   kInsertErrorMessage\n"
        "                   COMMA_THERE) ;\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_4381_.increment () ;
      enumerator_4381.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5632_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_5632 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5632.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5632.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 124)).stringValue () ;
      result << " = " ;
      result << enumerator_5632.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 124)).stringValue () ;
      result << " ;\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::method_" ;
      result << enumerator_5632.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 127)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_6266_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6266 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_6266.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_6266.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 129)).stringValue () ;
          result << " & outArgument" ;
          result << index_6266_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 129)).stringValue () ;
          index_6266_IDX.increment () ;
          enumerator_6266.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
      }
      result << "const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) performSearch (" ;
      columnMarker = result.currentColumn () ;
      result << "inKey,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inCompiler,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5632.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 136)).stringValue () ;
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE) ;\n"
        "if (NULL == p) {\n" ;
      GALGAS_uint index_6845_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6845 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_6845.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_6845_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 140)).stringValue () ;
          result << ".drop () ;\n" ;
          index_6845_IDX.increment () ;
          enumerator_6845.gotoNextObject () ;
        }
      }
      result << "}else{\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_7086_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_7086 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_7086.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_7086_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 145)).stringValue () ;
          result << " = p->mProperty_" ;
          result << enumerator_7086.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 145)).stringValue () ;
          result << " ;\n" ;
          index_7086_IDX.increment () ;
          enumerator_7086.gotoNextObject () ;
        }
      }
      result << "}\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_5632_.increment () ;
      enumerator_5632.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7319_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7319 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7319.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_7319.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 154)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_7319.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 154)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_string & inKey,\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;\n"
        "  const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes ;\n"
        "  GALGAS_" ;
      result << enumerator_7319.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 159)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_7319.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 162)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_7319_IDX.increment () ;
      enumerator_7319.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8399_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8399 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8399.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_set" ;
      result << enumerator_8399.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 170)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 170)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_" ;
      result << enumerator_8399.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 170)).stringValue () ;
      result << " inAttributeValue,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_string inKey,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;\n"
        "  cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    p->mProperty_" ;
      result << enumerator_8399.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 178)).stringValue () ;
      result << " = inAttributeValue ;\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_8399_IDX.increment () ;
      enumerator_8399.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::readWriteAccessForWithInstruction (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCompiler,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const GALGAS_string & inKey\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * result = (cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;\n"
    "  macroNullOrValidSharedObject (result, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const typeEnumerationOrder inOrder) :\n"
    "cGenericAbstractEnumerator (inOrder) {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_lstring cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_lkey (LOCATION_ARGS) const {\n"
    "  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cMapElement) ;\n"
    "  return p->mProperty_lkey ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_10771_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10771 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10771.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_10771.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 211)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_10771.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 211)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mProperty_" ;
      result << enumerator_10771.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 214)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_10771_IDX.increment () ;
      enumerator_10771.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sharedMapTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  const GALGAS_sharedMapTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_26617 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_26617.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_26617.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 717)) ;
    enumerator_26617.gotoNextObject () ;
  }
  const GALGAS_sharedMapTypeForGeneration temp_1 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_2 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_3 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_4 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 721)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 722)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-shared-map.galgas", 720))) ;
  const GALGAS_sharedMapTypeForGeneration temp_5 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_6 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_7 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_8 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_9 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_10 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_11 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_12 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_13 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_14 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_15 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_16 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_17 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_5.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 727)), temp_6.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 728)), temp_7.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 729)), temp_8.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 730)), temp_9.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 731)), temp_10.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 732)), temp_11.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 733)), temp_12.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 734)), temp_13.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 735)), temp_14.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 736)), temp_15.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 737)), temp_16.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 738)), temp_17.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 739)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 726))), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 726)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                              extensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sharedMapTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  const GALGAS_sharedMapTypeForGeneration temp_0 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_1 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 751)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 752)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-shared-map.galgas", 750))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                              extensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sharedMapTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  const GALGAS_sharedMapTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 762)) ;
  const GALGAS_sharedMapTypeForGeneration temp_1 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_2 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_3 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 764)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mInsertMethodList (), temp_4.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-shared-map.galgas", 763))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                                     extensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sortedListDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  const GALGAS_sortedListDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_4896 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 139)), temp_1.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 139)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4896, temp_2, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 140)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_5068 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5068.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5068.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 142)), enumerator_5068.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 142)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 142)) ;
    }
    enumerator_5068.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sortedListDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                                extensionMethod_sortedListDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sortedListDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_sortedListDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sortedListDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_5685 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 152)) ;
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_5744 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5744.hasCurrentObject ()) {
    var_structAttributeList_5685.addAssign_operation (enumerator_5744.current_isConstant (HERE), enumerator_5744.current_mPropertyTypeName (HERE), enumerator_5744.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 159))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 154)) ;
    enumerator_5744.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = object ;
  const GALGAS_sortedListDeclarationAST temp_2 = object ;
  const GALGAS_sortedListDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 163)), temp_3.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 163)), var_structAttributeList_5685, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 161))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 161)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sortedListDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                             extensionMethod_sortedListDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sortedListDeclarationAST_addAssociatedElement (defineExtensionMethod_sortedListDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sortedListDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                             const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                             const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_6642 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 176)) ;
  GALGAS_unifiedTypeMap_2D_entry var_listTypeIndex_6770 ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mSortedListTypeName (), var_listTypeIndex_6770, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 178)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listElementTypeIndex_7004 ;
  {
  const GALGAS_sortedListDeclarationAST temp_1 = object ;
  const GALGAS_sortedListDeclarationAST temp_2 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 181)), temp_2.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 181)), var_listElementTypeIndex_7004, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 180)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_7092 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 185)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_7151 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 186)) ;
  GALGAS_formalParameterSignature var_setterFormalArgumentList_7213 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 187)) ;
  GALGAS_typedPropertyList var_typedAttributeList_7262 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 188)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_7312 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_7312.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_7426 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7312.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7426, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 190)) ;
    }
    GALGAS_bool var_hasSetter_7445 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_7472 = GALGAS_bool (false) ;
    var_typedAttributeList_7262.addAssign_operation (var_attributeTypeIndex_7426, enumerator_7312.current_mPropertyName (HERE), var_hasSetter_7445, var_hasSelector_7472  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 193)) ;
    var_enumerationDescriptor_7092.addAssign_operation (var_attributeTypeIndex_7426, enumerator_7312.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 194)) ;
    var_constructorAttributeTypeList_7151.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 195)), var_attributeTypeIndex_7426, enumerator_7312.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 195)) ;
    var_setterFormalArgumentList_7213.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 196)), var_attributeTypeIndex_7426, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-sorted-list.galgas", 196)), enumerator_7312.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 196)) ;
    enumerator_7312.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_7920 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 199)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_4 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_7920, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptySortedList"), temp_4.readProperty_mSortedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 200)) ;
  }
  {
  var_constructorMap_7920.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 208))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 208)), var_constructorAttributeTypeList_7151, GALGAS_bool (false), var_listTypeIndex_6770, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 207)) ;
  }
  GALGAS_getterMap var_getterMap_8379 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_8379, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 214)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_8379, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 215)) ;
  }
  GALGAS_setterMap var_setterMap_8601 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 223)) ;
  {
  var_setterMap_8601.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 225))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 225)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 226)), var_setterFormalArgumentList_7213, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 229)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 224)) ;
  }
  {
  var_setterMap_8601.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 233))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 233)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 234)), var_setterFormalArgumentList_7213, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 237)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 232)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_9103 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 241)) ;
  {
  var_instanceMethodMap_9103.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 243))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 243)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 244)), var_setterFormalArgumentList_7213, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 246)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 248)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-sorted-list.galgas", 249)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 242)) ;
  }
  {
  var_instanceMethodMap_9103.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 253))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 253)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 254)), var_setterFormalArgumentList_7213, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 256)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 258)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-sorted-list.galgas", 259)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 252)) ;
  }
  {
  const GALGAS_sortedListDeclarationAST temp_5 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_5.readProperty_mSortedListTypeName (), var_getterMap_8379, var_setterMap_8601, var_instanceMethodMap_9103, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 263)) ;
  }
  {
  const GALGAS_sortedListDeclarationAST temp_6 = object ;
  const GALGAS_sortedListDeclarationAST temp_7 = object ;
  const GALGAS_sortedListDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_6.readProperty_mSortedListTypeName (), temp_7.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-sorted-list.galgas", 279)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("type-sorted-list.galgas", 280)), GALGAS_bool (true), var_typedAttributeList_7262, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 283)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 284)), var_constructorMap_7920, var_getterMap_8379, var_setterMap_8601, var_instanceMethodMap_9103, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 289)), var_optionalMethodMap_6642, var_enumerationDescriptor_7092, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-sorted-list.galgas", 292)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-sorted-list.galgas", 292)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 292)), var_constructorAttributeTypeList_7151, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 294)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 295)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 296)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 297)), GALGAS_bool (false), var_listElementTypeIndex_7004, GALGAS_string ("emptySortedList"), GALGAS_string ("-sortedlist-").add_operation (temp_8.readProperty_mSortedListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-sorted-list.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 301)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-sorted-list.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 275)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sortedListDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                               extensionMethod_sortedListDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sortedListDeclarationAST_enterInSemanticContext (defineExtensionMethod_sortedListDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sortedListDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  GALGAS_lstring var_sortedListNameForUsefulness_11487 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 319)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_11487, var_sortedListNameForUsefulness_11487, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 320)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = object ;
  const GALGAS_sortedListDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_11677 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 321)), temp_2.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 321)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_11487, var_elementTypeNameForUsefulness_11677 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 322)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_11926 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 324)) ;
  GALGAS_propertyIndexMap var_attributeMap_11987 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 325)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_12037 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12037.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_12101 = function_typeNameForUsefulEntitiesGraph (enumerator_12037.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 327)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_11487, var_propertyTypeNameForUsefulness_12101 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 328)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_12263 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_12037.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 329)) ;
    GALGAS_bool var_hasSetter_12341 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_12368 = GALGAS_bool (true) ;
    var_typedAttributeList_11926.addAssign_operation (var_t_12263, enumerator_12037.current_mPropertyName (HERE), var_hasSetter_12341, var_hasSelector_12368  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 332)) ;
    {
    var_attributeMap_11987.setter_insertKey (enumerator_12037.current_mPropertyName (HERE), var_t_12263, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 337)) ;
    }
    enumerator_12037.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting_12585 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sorted-list.galgas", 340)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_12648 = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 341)) ;
  const GALGAS_sortedListDeclarationAST temp_4 = object ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_12692 (temp_4.readProperty_mSortDescriptorList (), kENUMERATION_UP) ;
  while (enumerator_12692.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_type_12806 ;
    var_attributeMap_11987.method_searchKey (enumerator_12692.current_mSortedAttributeName (HERE), var_type_12806, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 343)) ;
    var_sortDescriptorList_12648.addAssign_operation (var_type_12806, enumerator_12692.current_mSortedAttributeName (HERE).readProperty_string (), enumerator_12692.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 344)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_attributesUsedForSorting_12585.getter_hasKey (enumerator_12692.current_mSortedAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 345)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_12692.current_mSortedAttributeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_12692.current_mSortedAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346)), fixItArray6  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346)) ;
      }
    }
    var_attributesUsedForSorting_12585.addAssign_operation (enumerator_12692.current_mSortedAttributeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 348)) ;
    enumerator_12692.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_7 = object ;
  const GALGAS_sortedListDeclarationAST temp_8 = object ;
  const GALGAS_sortedListDeclarationAST temp_9 = object ;
  const GALGAS_sortedListDeclarationAST temp_10 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (temp_7.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 352)), GALGAS_sortedListTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_8.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_9.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)), temp_10.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)), var_typedAttributeList_11926, var_sortDescriptorList_12648  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 353))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 351)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sortedListDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                         extensionMethod_sortedListDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sortedListDeclarationAST_semanticAnalysis (defineExtensionMethod_sortedListDeclarationAST_semanticAnalysis, NULL) ;

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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_sortedlist {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cSortedListElement {\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mObject ;\n"
    "\n"
    "//--- Constructor\n"
    "  public: cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_607_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_607 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_607.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_607.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue () ;
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
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public: virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public: virtual cSortedListElement * copy (void) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Description\n"
    " public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "\n"
    "//--- Virtual method that comparing element for sorting\n"
    "  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cSortedListElement_" ;
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
      result << enumerator_1709.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue () ;
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
  result << "COMMA_LOCATION_ARGS) :\n"
    "cSortedListElement (THERE),\n"
    "mObject (" ;
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
  result << ") {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mObject.isValid () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cSortedListElement * cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cSortedListElement * result = NULL ;\n"
    "  macroMyNew (result, cSortedListElement_" ;
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
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3144_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3144 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3144.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n"
        "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
        "  ioString << " ;
      result << enumerator_3144.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 79)).stringValue () ;
      result << " \":\" ;\n"
        "  mObject.mProperty_" ;
      result << enumerator_3144.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 80)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3144_.increment () ;
      enumerator_3144.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n"
    "  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  macroValidSharedObject (operand, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return mObject.objectCompare (operand->mObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_sortedlist () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compareForSorting (const cSortedListElement * inOperand) const {\n"
    "  typeComparisonResult result = kOperandEqual ;\n"
    "  const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  macroValidSharedObject (operand, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_4686_ (0) ;
  if (in_SORT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_sortDescriptorListForGeneration enumerator_4686 (in_SORT_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4686.hasCurrentObject ()) {
      result << "  if (result == kOperandEqual) {\n"
        "    result = " ;
      const enumGalgasBool test_0 = enumerator_4686.current_mAscendingOrder (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "mObject.mProperty_" ;
        result << enumerator_4686.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue () ;
        result << ".objectCompare (operand->mObject.mProperty_" ;
        result << enumerator_4686.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue () ;
        result << ")" ;
      }else if (kBoolFalse == test_0) {
        result << "operand->mObject.mProperty_" ;
        result << enumerator_4686.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue () ;
        result << ".objectCompare (mObject.mProperty_" ;
        result << enumerator_4686.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue () ;
        result << ")" ;
      }
      result << " ;\n"
        "  }\n" ;
      index_4686_.increment () ;
      enumerator_4686.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptySortedList (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.createNewEmptySortedList (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_sortedListWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5794_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5794 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5794.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_5794.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue () ;
      result << " & inOperand" ;
      result << index_5794_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue () ;
      if (enumerator_5794.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5794_IDX.increment () ;
      enumerator_5794.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = constructor_emptySortedList (THERE) ;\n"
    "  cSortedListElement * p = NULL ;\n"
    "  macroMyNew (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_6204_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6204 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6204.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_6204_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 138)).stringValue () ;
      if (enumerator_6204.hasNextObject ()) {
        result << ", " ;
      }
      index_6204_IDX.increment () ;
      enumerator_6204.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "  capSortedListElement attributes ;\n"
    "  attributes.setPointer (p) ;\n"
    "  macroDetachSharedObject (p) ;\n"
    "  result.appendObject (attributes) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6703_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6703 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6703.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_6703.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue () ;
      result << " & inOperand" ;
      result << index_6703_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue () ;
      if (enumerator_6703.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6703_IDX.increment () ;
      enumerator_6703.gotoNextObject () ;
    }
  }
  result << "\n"
    "    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    cSortedListElement * p = NULL ;\n"
    "    macroMyNew (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7067_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7067 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7067.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7067_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 162)).stringValue () ;
      if (enumerator_7067.hasNextObject ()) {
        result << ", " ;
      }
      index_7067_IDX.increment () ;
      enumerator_7067.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "    capSortedListElement attributes ;\n"
    "    attributes.setPointer (p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    appendObject (attributes) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::plusAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inOperand,\n"
    "                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    appendSortedList (inOperand) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popSmallest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7963_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7963 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7963.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_7963.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue () ;
      result << " & outOperand" ;
      result << index_7963_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_7963_IDX.increment () ;
      enumerator_7963.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capSortedListElement attributes ;\n"
    "  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_8457_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8457 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8457.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_8457_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 197)).stringValue () ;
      result << ".drop () ;\n" ;
      index_8457_IDX.increment () ;
      enumerator_8457.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_8691_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8691 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8691.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_8691_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 203)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_8691.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 203)).stringValue () ;
      result << " ;\n" ;
      index_8691_IDX.increment () ;
      enumerator_8691.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popGreatest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9089_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9089 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9089.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_9089.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 212)).stringValue () ;
      result << " & outOperand" ;
      result << index_9089_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 212)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9089_IDX.increment () ;
      enumerator_9089.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capSortedListElement attributes ;\n"
    "  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_9583_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9583 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9583.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9583_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 222)).stringValue () ;
      result << ".drop () ;\n" ;
      index_9583_IDX.increment () ;
      enumerator_9583.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_9817_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9817 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9817.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9817_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 228)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_9817.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 228)).stringValue () ;
      result << " ;\n" ;
      index_9817_IDX.increment () ;
      enumerator_9817.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_smallest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10212_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10212 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10212.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_10212.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 237)).stringValue () ;
      result << " & outOperand" ;
      result << index_10212_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 237)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10212_IDX.increment () ;
      enumerator_10212.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capSortedListElement attributes ;\n"
    "  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n"
    "  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_10709_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10709 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10709.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10709_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 247)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10709_IDX.increment () ;
      enumerator_10709.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10943_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10943 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10943.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10943_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 253)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10943.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 253)).stringValue () ;
      result << " ;\n" ;
      index_10943_IDX.increment () ;
      enumerator_10943.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_greatest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11338_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11338 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11338.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_11338.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 262)).stringValue () ;
      result << " & outOperand" ;
      result << index_11338_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 262)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11338_IDX.increment () ;
      enumerator_11338.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capSortedListElement attributes ;\n"
    "  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n"
    "  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_11835_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11835 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11835.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11835_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 272)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11835_IDX.increment () ;
      enumerator_11835.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12069_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12069 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12069.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12069_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 278)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12069.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 278)).stringValue () ;
      result << " ;\n" ;
      index_12069_IDX.increment () ;
      enumerator_12069.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n"
    "                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const typeEnumerationOrder inOrder) :\n"
    "cGenericAbstractEnumerator (inOrder) {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n"
    "  const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return p->mObject ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_13146_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13146 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13146.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_13146.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_13146.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n"
        "  macroValidSharedObject (p, cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mObject.mProperty_" ;
      result << enumerator_13146.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 304)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_13146_IDX.increment () ;
      enumerator_13146.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sortedListTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                               GALGAS_string & outArgument_outHeader,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  const GALGAS_sortedListTypeForGeneration temp_0 = object ;
  const GALGAS_sortedListTypeForGeneration temp_1 = object ;
  const GALGAS_sortedListTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 401)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 402)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 400))) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = object ;
  const GALGAS_sortedListTypeForGeneration temp_4 = object ;
  const GALGAS_sortedListTypeForGeneration temp_5 = object ;
  const GALGAS_sortedListTypeForGeneration temp_6 = object ;
  const GALGAS_sortedListTypeForGeneration temp_7 = object ;
  const GALGAS_sortedListTypeForGeneration temp_8 = object ;
  const GALGAS_sortedListTypeForGeneration temp_9 = object ;
  const GALGAS_sortedListTypeForGeneration temp_10 = object ;
  const GALGAS_sortedListTypeForGeneration temp_11 = object ;
  const GALGAS_sortedListTypeForGeneration temp_12 = object ;
  const GALGAS_sortedListTypeForGeneration temp_13 = object ;
  const GALGAS_sortedListTypeForGeneration temp_14 = object ;
  const GALGAS_sortedListTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 406)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 407)), temp_5.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 408)), temp_6.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 409)), temp_7.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 410)), temp_8.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 411)), temp_9.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 412)), temp_10.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 413)), temp_11.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 414)), temp_12.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 415)), temp_13.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 416)), temp_14.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 417)), temp_15.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 418)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 405))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 405)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sortedListTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                              extensionMethod_sortedListTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_sortedListTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sortedListTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_string & outArgument_outImplementation,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  const GALGAS_sortedListTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_16406 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_16406.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16406.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 429)) ;
    enumerator_16406.gotoNextObject () ;
  }
  const GALGAS_sortedListTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 431)) ;
  const GALGAS_sortedListTypeForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 432)) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = object ;
  const GALGAS_sortedListTypeForGeneration temp_4 = object ;
  const GALGAS_sortedListTypeForGeneration temp_5 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 434)), temp_4.readProperty_mTypedAttributeList (), temp_5.readProperty_mSortDescriptorList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 433))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sortedListTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                                     extensionMethod_sortedListTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_sortedListTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                          GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                          GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  const GALGAS_structDeclarationAST temp_0 = object ;
  const GALGAS_structDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_3235 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 84)), temp_1.readProperty_mStructTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-struct.galgas", 84)) ;
  {
  const GALGAS_structDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3235, temp_2, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 85)) ;
  }
  const GALGAS_structDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_3399 (temp_3.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_3399.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey_3454 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3399.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 87)), enumerator_3399.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-struct.galgas", 87)) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3235, var_propertyKey_3454 COMMA_SOURCE_FILE ("type-struct.galgas", 88)) ;
    }
    enumerator_3399.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                                extensionMethod_structDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_structDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_structDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  const GALGAS_structDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("struct @").add_operation (temp_0.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 97)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_structDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                          extensionGetter_structDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_structDeclarationAST_keyRepresentation (defineExtensionGetter_structDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'selectorFeatureForNewConstructor'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_selectorFeatureForNewConstructor (C_Compiler * /* inCompiler */
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
//Overriding extension method '@structDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_4887 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 116)) ;
  GALGAS_unifiedTypeMap_2D_entry var_structTypeIndex_5020 ;
  {
  const GALGAS_structDeclarationAST temp_0 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mStructTypeName (), var_structTypeIndex_5020, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 118)) ;
  }
  GALGAS_propertyMap var_propertyMap_5087 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 120)) ;
  GALGAS_constructorMap var_constructorMap_5129 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 121)) ;
  GALGAS_functionSignature var_constructorPropertyTypeList_5187 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 122)) ;
  GALGAS_typedPropertyList var_typedPropertyList_5235 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 123)) ;
  GALGAS_unifiedTypeMap_2D_entryList var_typesToIncludeInHeaderCompilation_5306 = GALGAS_unifiedTypeMap_2D_entryList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 124)) ;
  const GALGAS_structDeclarationAST temp_1 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_5385 (temp_1.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_5385.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_propertyTypeEntry_5507 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5385.current_mPropertyTypeName (HERE), var_propertyTypeEntry_5507, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 126)) ;
    }
    GALGAS_lstring var_selector_5534 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-struct.galgas", 127)) ;
    cEnumerator_lstringlist enumerator_5565 (enumerator_5385.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_5565.hasCurrentObject ()) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, enumerator_5565.current_mValue (HERE).readProperty_string ().objectCompare (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 129)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_selector_5534 = enumerator_5385.current_mPropertyName (HERE) ;
        }
      }
      enumerator_5565.gotoNextObject () ;
    }
    var_constructorPropertyTypeList_5187.addAssign_operation (var_selector_5534, var_propertyTypeEntry_5507, enumerator_5385.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-struct.galgas", 133)) ;
    var_typesToIncludeInHeaderCompilation_5306.addAssign_operation (var_propertyTypeEntry_5507  COMMA_SOURCE_FILE ("type-struct.galgas", 134)) ;
    GALGAS_bool test_3 = enumerator_5385.current_mIsPublic (HERE) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = enumerator_5385.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 135)) ;
    }
    GALGAS_bool var_hasSetter_5869 = test_3 ;
    GALGAS_bool var_hasSelector_5918 = GALGAS_bool (false) ;
    var_typedPropertyList_5235.addAssign_operation (var_propertyTypeEntry_5507, enumerator_5385.current_mPropertyName (HERE), var_hasSetter_5869, var_hasSelector_5918  COMMA_SOURCE_FILE ("type-struct.galgas", 137)) ;
    {
    var_propertyMap_5087.setter_insertKey (enumerator_5385.current_mPropertyName (HERE), enumerator_5385.current_mIsPublic (HERE), enumerator_5385.current_isConstant (HERE), var_propertyTypeEntry_5507, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 138)) ;
    }
    enumerator_5385.gotoNextObject () ;
  }
  {
  var_constructorMap_5129.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 141))  COMMA_SOURCE_FILE ("type-struct.galgas", 141)), var_constructorPropertyTypeList_5187, GALGAS_bool (false), var_structTypeIndex_5020, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 140)) ;
  }
  GALGAS_getterMap var_getterMap_6332 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6332, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 147)) ;
  }
  GALGAS_setterMap var_setterMap_6373 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 149)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6443 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 151)) ;
  {
  const GALGAS_structDeclarationAST temp_4 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_4.readProperty_mStructTypeName (), var_getterMap_6332, var_setterMap_6373, var_instanceMethodMap_6443, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 153)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_enumeratedType_6834 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_structDeclarationAST temp_6 = object ;
    test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mEnumeratedElementTypeName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_enumeratedType_6834 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-struct.galgas", 167)) ;
    }
  }
  if (kBoolFalse == test_5) {
    {
    const GALGAS_structDeclarationAST temp_7 = object ;
    extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_7.readProperty_mEnumeratedElementTypeName (), var_enumeratedType_6834, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 169)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_7138 = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_7182 (var_typedPropertyList_5235, kENUMERATION_UP) ;
  bool bool_8 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_7138.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_7182.hasCurrentObject () && bool_8) {
    while (enumerator_7182.hasCurrentObject () && bool_8) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, enumerator_7182.current_mPropertyTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 177)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_7182.current_mPropertyTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 177)).operator_not (SOURCE_FILE ("type-struct.galgas", 177)) COMMA_SOURCE_FILE ("type-struct.galgas", 177)).boolEnum () ;
        if (kBoolTrue == test_9) {
          var_defaultConstructorName_7138 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_7182.gotoNextObject () ;
      if (enumerator_7182.hasCurrentObject ()) {
        bool_8 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_7138.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  const GALGAS_structDeclarationAST temp_10 = object ;
  const GALGAS_structDeclarationAST temp_11 = object ;
  const GALGAS_structDeclarationAST temp_12 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_10.readProperty_mStructTypeName (), temp_11.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-struct.galgas", 186)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("type-struct.galgas", 187)), GALGAS_bool (false), var_typedPropertyList_5235, var_propertyMap_5087, var_typedPropertyList_5235, var_constructorMap_5129, var_getterMap_6332, var_setterMap_6373, var_instanceMethodMap_6443, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 196)), var_optionalMethodMap_4887, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 198)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-struct.galgas", 199)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-struct.galgas", 199)) COMMA_SOURCE_FILE ("type-struct.galgas", 199)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 200)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 201)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 202)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 203)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 204)), GALGAS_bool (false), var_enumeratedType_6834, var_defaultConstructorName_7138, GALGAS_string ("struct-").add_operation (temp_12.readProperty_mStructTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-struct.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 208)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-struct.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 182)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                               extensionMethod_structDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structDeclarationAST_enterInSemanticContext (defineExtensionMethod_structDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForStruct'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForStruct (C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 218)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-struct.galgas", 219)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-struct.galgas", 220)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-struct.galgas", 221)) ;
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

static void extensionMethod_structDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                   GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                   GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  const GALGAS_structDeclarationAST temp_0 = object ;
  GALGAS_lstring var_structNameForUsefulness_9273 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mStructTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 235)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_9273, var_structNameForUsefulness_9273, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 236)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_structDeclarationAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mStructurePropertyList ().getter_length (SOURCE_FILE ("type-struct.galgas", 238)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructTypeName ().readProperty_location (), GALGAS_string ("a structure cannot be empty: it must have at least one property"), fixItArray4  COMMA_SOURCE_FILE ("type-struct.galgas", 239)) ;
    }
  }
  GALGAS_typedPropertyList var_typedPropertyList_9621 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 241)) ;
  GALGAS_propertyIndexMap var_propertyMap_9662 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 242)) ;
  const GALGAS_structDeclarationAST temp_5 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_9725 (temp_5.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_9725.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_9798 = function_typeNameForUsefulEntitiesGraph (enumerator_9725.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 244)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_9273, var_propertyTypeNameForUsefulness_9798 COMMA_SOURCE_FILE ("type-struct.galgas", 245)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_9956 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_9725.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 246)) ;
    GALGAS_bool var_hasSelector_10036 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_10060 (enumerator_9725.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_10060.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_10060.current_mValue (HERE).readProperty_string ().objectCompare (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 249)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_10060.current_mValue (HERE).readProperty_location (), GALGAS_string ("a struct property accepts only the %").add_operation (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 250)).add_operation (GALGAS_string (" feature"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 250)), fixItArray7  COMMA_SOURCE_FILE ("type-struct.galgas", 250)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_hasSelector_10036.boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_10060.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated %").add_operation (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 252)).add_operation (GALGAS_string (" feature"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 252)), fixItArray9  COMMA_SOURCE_FILE ("type-struct.galgas", 252)) ;
        }
      }
      if (kBoolFalse == test_8) {
        var_hasSelector_10036 = GALGAS_bool (true) ;
      }
      enumerator_10060.gotoNextObject () ;
    }
    GALGAS_bool var_hasSetter_10455 = GALGAS_bool (true) ;
    var_typedPropertyList_9621.addAssign_operation (var_t_9956, enumerator_9725.current_mPropertyName (HERE), var_hasSetter_10455, var_hasSelector_10036  COMMA_SOURCE_FILE ("type-struct.galgas", 258)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 263)).getter_hasKey (enumerator_9725.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-struct.galgas", 263)).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string var_m_10654 = GALGAS_string ("an property cannot be named:") ;
        cEnumerator_stringset enumerator_10728 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 265)), kENUMERATION_UP) ;
        while (enumerator_10728.hasCurrentObject ()) {
          var_m_10654.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_10728.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 266)) ;
          enumerator_10728.gotoNextObject () ;
        }
        var_m_10654.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 268)) ;
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_9725.current_mPropertyName (HERE).readProperty_location (), var_m_10654, fixItArray11  COMMA_SOURCE_FILE ("type-struct.galgas", 269)) ;
      }
    }
    {
    var_propertyMap_9662.setter_insertKey (enumerator_9725.current_mPropertyName (HERE), var_t_9956, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 271)) ;
    }
    enumerator_9725.gotoNextObject () ;
  }
  const GALGAS_structDeclarationAST temp_12 = object ;
  const GALGAS_structDeclarationAST temp_13 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (temp_12.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 274)), GALGAS_structTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_13.readProperty_mStructTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 276)), var_typedPropertyList_9621  COMMA_SOURCE_FILE ("type-struct.galgas", 275))  COMMA_SOURCE_FILE ("type-struct.galgas", 273)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                         extensionMethod_structDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structDeclarationAST_semanticAnalysis (defineExtensionMethod_structDeclarationAST_semanticAnalysis, NULL) ;

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
                                                                                  const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Properties\n" ;
  GALGAS_uint index_486_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_486 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_486.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << enumerator_486.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_486.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue () ;
      result << " ;\n"
        "  public: inline GALGAS_" ;
      result << enumerator_486.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue () ;
      result << " readProperty_" ;
      result << enumerator_486.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue () ;
      result << " (void) const {\n"
        "    return mProperty_" ;
      result << enumerator_486.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 13)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "\n" ;
      index_486_.increment () ;
      enumerator_486.gotoNextObject () ;
    }
  }
  result << "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//--------------------------------- Default GALGAS constructor\n"
      "  public: static GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " constructor_default (LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Property setters\n" ;
  GALGAS_uint index_1429_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1429 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1429.hasCurrentObject ()) {
      result << "  public: inline void setter_set" ;
      result << enumerator_1429.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 32)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 32)).stringValue () ;
      result << " (const GALGAS_" ;
      result << enumerator_1429.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 32)).stringValue () ;
      result << " & inValue COMMA_UNUSED_LOCATION_ARGS) {\n"
        "    mProperty_" ;
      result << enumerator_1429.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 33)).stringValue () ;
      result << " = inValue ;\n"
        "  }\n"
        "\n" ;
      index_1429_.increment () ;
      enumerator_1429.gotoNextObject () ;
    }
  }
  result << "//--------------------------------- Virtual destructor (in debug mode)\n"
    "  public: virtual ~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_2052_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2052 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2052.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_2052.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 41)).stringValue () ;
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
  result << ") ;\n"
    "\n" ;
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
                                                                                              const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
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
  result << " {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_818_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_818 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_818.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_818.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue () ;
      result << " & inOperand" ;
      result << index_818_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue () ;
      if (enumerator_818.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_818_IDX.increment () ;
      enumerator_818.gotoNextObject () ;
    }
  }
  result << ") :\n" ;
  GALGAS_uint index_1029_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1029 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1029.hasCurrentObject ()) {
      result << "mProperty_" ;
      result << enumerator_1029.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue () ;
      result << " (inOperand" ;
      result << index_1029_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue () ;
      result << ")" ;
      if (enumerator_1029.hasNextObject ()) {
        result << ",\n" ;
      }
      index_1029_IDX.increment () ;
      enumerator_1029.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_default (UNUSED_LOCATION_ARGS) {\n"
      "  return GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_1518_ (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1518 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1518.hasCurrentObject ()) {
        result << "GALGAS_" ;
        result << enumerator_1518.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue () ;
        result << "::constructor_" ;
        result << enumerator_1518.current_mPropertyTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue () ;
        result << " (HERE)" ;
        if (enumerator_1518.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_1518_.increment () ;
        enumerator_1518.gotoNextObject () ;
      }
    }
    result << ") ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_new (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_2000_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2000 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2000.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_2000.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 46)).stringValue () ;
      result << " & inOperand" ;
      result << index_2000_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 46)).stringValue () ;
      if (enumerator_2000.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_2000_IDX.increment () ;
      enumerator_2000.gotoNextObject () ;
    }
  }
  result << " \n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_2288_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2288 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2288.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_2288_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 52)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_2288.hasNextObject ()) {
        result << " && " ;
      }
      index_2288_IDX.increment () ;
      enumerator_2288.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2489_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2489 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2489.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_2489_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 58)).stringValue () ;
      if (enumerator_2489.hasNextObject ()) {
        result << ", " ;
      }
      index_2489_IDX.increment () ;
      enumerator_2489.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "   typeComparisonResult result = kOperandEqual ;\n" ;
  GALGAS_uint index_2935_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2935 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2935.hasCurrentObject ()) {
      result << "  if (result == kOperandEqual) {\n"
        "    result = mProperty_" ;
      result << enumerator_2935.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 73)).stringValue () ;
      result << ".objectCompare (inOperand.mProperty_" ;
      result << enumerator_2935.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 73)).stringValue () ;
      result << ") ;\n"
        "  }\n" ;
      index_2935_.increment () ;
      enumerator_2935.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return " ;
  GALGAS_uint index_3446_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3446 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3446.hasCurrentObject ()) {
      result << "mProperty_" ;
      result << enumerator_3446.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 84)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_3446.hasNextObject ()) {
        result << " && " ;
      }
      index_3446_.increment () ;
      enumerator_3446.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n" ;
  GALGAS_uint index_3807_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3807 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3807.hasCurrentObject ()) {
      result << "  mProperty_" ;
      result << enumerator_3807.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 94)).stringValue () ;
      result << ".drop () ;\n" ;
      index_3807_.increment () ;
      enumerator_3807.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n"
    "                              " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t inIndentation) const {\n"
    "  ioString << \"<struct @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ":\" ;\n"
    "  if (! isValid ()) {\n"
    "    ioString << \" not built\" ;\n"
    "  }else{\n" ;
  GALGAS_uint index_4350_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4350 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4350.hasCurrentObject ()) {
      result << "    mProperty_" ;
      result << enumerator_4350.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 108)).stringValue () ;
      result << ".description (ioString, inIndentation+1) ;\n" ;
      if (enumerator_4350.hasNextObject ()) {
        result << "    ioString << \", \" ;\n" ;
      }
      index_4350_IDX.increment () ;
      enumerator_4350.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_string & outArgument_outHeader,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  const GALGAS_structTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_12375 (temp_0.readProperty_mTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12375.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_12375.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 314)) ;
    enumerator_12375.gotoNextObject () ;
  }
  const GALGAS_structTypeForGeneration temp_1 = object ;
  const GALGAS_structTypeForGeneration temp_2 = object ;
  const GALGAS_structTypeForGeneration temp_3 = object ;
  const GALGAS_structTypeForGeneration temp_4 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_boolsetGenerationTemplate_structTypeHeader_31_ (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 318)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 319)), temp_3.readProperty_mTypedPropertyList (), GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 321)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 317))) ;
  const GALGAS_structTypeForGeneration temp_5 = object ;
  const GALGAS_structTypeForGeneration temp_6 = object ;
  const GALGAS_structTypeForGeneration temp_7 = object ;
  const GALGAS_structTypeForGeneration temp_8 = object ;
  const GALGAS_structTypeForGeneration temp_9 = object ;
  const GALGAS_structTypeForGeneration temp_10 = object ;
  const GALGAS_structTypeForGeneration temp_11 = object ;
  const GALGAS_structTypeForGeneration temp_12 = object ;
  const GALGAS_structTypeForGeneration temp_13 = object ;
  const GALGAS_structTypeForGeneration temp_14 = object ;
  const GALGAS_structTypeForGeneration temp_15 = object ;
  const GALGAS_structTypeForGeneration temp_16 = object ;
  const GALGAS_structTypeForGeneration temp_17 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_5.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 324)), temp_6.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 325)), temp_7.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 326)), temp_8.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 327)), temp_9.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 328)), temp_10.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 329)), temp_11.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 330)), temp_12.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 331)), temp_13.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 332)), temp_14.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 333)), temp_15.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 334)), temp_16.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 335)), temp_17.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 336)) COMMA_SOURCE_FILE ("type-struct.galgas", 323))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 323)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                              extensionMethod_structTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_structTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outImplementation,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  const GALGAS_structTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 347)) ;
  const GALGAS_structTypeForGeneration temp_1 = object ;
  const GALGAS_structTypeForGeneration temp_2 = object ;
  const GALGAS_structTypeForGeneration temp_3 = object ;
  const GALGAS_structTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_boolsetGenerationTemplate_structTypeSpecificImplementation (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 349)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 350)), temp_3.readProperty_mTypedPropertyList (), GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 352)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 348))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                                     extensionMethod_structTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_structTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_abstractExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  const GALGAS_abstractExtensionGetterAST temp_0 = object ;
  const GALGAS_abstractExtensionGetterAST temp_1 = object ;
  result_result = GALGAS_string ("abstract extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 83)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 83)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 83)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_abstractExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                          extensionGetter_abstractExtensionGetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractExtensionGetterAST_keyRepresentation (defineExtensionGetter_abstractExtensionGetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  const GALGAS_abstractExtensionGetterAST temp_0 = object ;
  const GALGAS_abstractExtensionGetterAST temp_1 = object ;
  const GALGAS_abstractExtensionGetterAST temp_2 = object ;
  GALGAS_lstring var_key_4288 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 98)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 98)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 98)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 97)) ;
  {
  const GALGAS_abstractExtensionGetterAST temp_3 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4288, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 101)) ;
  }
  {
  const GALGAS_abstractExtensionGetterAST temp_4 = object ;
  const GALGAS_abstractExtensionGetterAST temp_5 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4288, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 102)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 102)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 102)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionGetterAST temp_7 = object ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 104)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 104)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionGetterAST temp_8 = object ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-getter.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 105)) ;
      }
    }
  }
  const GALGAS_abstractExtensionGetterAST temp_9 = object ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_4806 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 110)) ;
  if (NULL != objectArray_4806) {
    macroValidSharedObject (objectArray_4806, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionGetterAST temp_10 = object ;
    const GALGAS_abstractExtensionGetterAST temp_11 = object ;
    const GALGAS_abstractExtensionGetterAST temp_12 = object ;
    objectArray_4806->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionGetterName (), temp_11.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_12.readProperty_mAbstractExtensionGetterFormalInputParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 111)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                                extensionMethod_abstractExtensionGetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_abstractExtensionGetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                               extensionMethod_abstractExtensionGetterAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_enterInSemanticContext (defineExtensionMethod_abstractExtensionGetterAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  const GALGAS_abstractExtensionGetterAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6581 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 144)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_selfType_6581.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 146)).getter_isClassType (SOURCE_FILE ("extension-abstract-getter.galgas", 146)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 146)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionGetterAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an extension getter: '@").add_operation (var_selfType_6581.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 147)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 147)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 147)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_selfType_6581.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionGetterAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (var_selfType_6581.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 149)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 149)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 149)) ;
      }
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_7150 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-getter.galgas", 152)) ;
  const GALGAS_abstractExtensionGetterAST temp_7 = object ;
  cEnumerator_formalInputParameterListAST enumerator_7236 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), kENUMERATION_UP) ;
  while (enumerator_7236.hasCurrentObject ()) {
    var_formalParameterListForGeneration_7150.addAssign_operation (enumerator_7236.current_mFormalSelector (HERE), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_7236.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 156)), enumerator_7236.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_7236.current_mFormalArgumentName (HERE), enumerator_7236.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 154)) ;
    enumerator_7236.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterAST temp_8 = object ;
  const GALGAS_abstractExtensionGetterAST temp_9 = object ;
  const GALGAS_abstractExtensionGetterAST temp_10 = object ;
  const GALGAS_abstractExtensionGetterAST temp_11 = object ;
  const GALGAS_abstractExtensionGetterAST temp_12 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 163)), GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 166)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 166)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 166)), var_selfType_6581, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 169)), var_formalParameterListForGeneration_7150  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 164))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 162)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                         extensionMethod_abstractExtensionGetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_semanticAnalysis (defineExtensionMethod_abstractExtensionGetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
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
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  const GALGAS_abstractExtensionGetterAST temp_0 = object ;
  const GALGAS_abstractExtensionGetterAST temp_1 = object ;
  ioArgument_ioAbstractExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 192)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                               extensionMethod_abstractExtensionGetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionGetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_abstractExtensionGetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 209)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_abstractExtensionGetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration.mSlotID,
                                   extensionGetter_abstractExtensionGetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractExtensionGetterForGeneration_headerKind (defineExtensionGetter_abstractExtensionGetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterForGeneration * object = (const cPtr_abstractExtensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterForGeneration) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_0 = object ;
  const GALGAS_abstractExtensionGetterForGeneration temp_1 = object ;
  const GALGAS_abstractExtensionGetterForGeneration temp_2 = object ;
  const GALGAS_abstractExtensionGetterForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, temp_0.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 219)), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration.mSlotID,
                                              extensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterForGeneration * object = (const cPtr_abstractExtensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterForGeneration) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_0 = object ;
  const GALGAS_abstractExtensionGetterForGeneration temp_1 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (temp_0.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 233)).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 233)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 233)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 233))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 233)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 234)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_3 = object ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 235)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_4 = object ;
  cEnumerator_formalInputParameterListForGeneration enumerator_11553 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_11553.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11553.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 237)) ;
    enumerator_11553.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterForGeneration temp_5 = object ;
  const GALGAS_abstractExtensionGetterForGeneration temp_6 = object ;
  const GALGAS_abstractExtensionGetterForGeneration temp_7 = object ;
  const GALGAS_abstractExtensionGetterForGeneration temp_8 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, temp_5.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 240)), temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_8.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 239))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration.mSlotID,
                                                     extensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation (defineExtensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  const GALGAS_abstractExtensionMethodAST temp_0 = object ;
  const GALGAS_abstractExtensionMethodAST temp_1 = object ;
  const GALGAS_abstractExtensionMethodAST temp_2 = object ;
  GALGAS_lstring var_key_3309 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 72)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 72)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 72)), temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 72)) ;
  {
  const GALGAS_abstractExtensionMethodAST temp_3 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3309, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 73)) ;
  }
  {
  const GALGAS_abstractExtensionMethodAST temp_4 = object ;
  const GALGAS_abstractExtensionMethodAST temp_5 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3309, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 74)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 74)) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 74)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionMethodAST temp_7 = object ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 76)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 76)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionMethodAST temp_8 = object ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-method.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 77)) ;
      }
    }
  }
  const GALGAS_abstractExtensionMethodAST temp_9 = object ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_3815 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 82)) ;
  if (NULL != objectArray_3815) {
    macroValidSharedObject (objectArray_3815, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionMethodAST temp_10 = object ;
    const GALGAS_abstractExtensionMethodAST temp_11 = object ;
    objectArray_3815->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionMethodName (), temp_11.readProperty_mAbstractExtensionMethodFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 83)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                                extensionMethod_abstractExtensionMethodAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_abstractExtensionMethodAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_abstractExtensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  const GALGAS_abstractExtensionMethodAST temp_0 = object ;
  const GALGAS_abstractExtensionMethodAST temp_1 = object ;
  result_result = GALGAS_string ("abstract extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 96)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 96)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 96)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_abstractExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                          extensionGetter_abstractExtensionMethodAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractExtensionMethodAST_keyRepresentation (defineExtensionGetter_abstractExtensionMethodAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                               extensionMethod_abstractExtensionMethodAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_enterInSemanticContext (defineExtensionMethod_abstractExtensionMethodAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  const GALGAS_abstractExtensionMethodAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6139 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 126)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_selfType_6139.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 128)).getter_isClassType (SOURCE_FILE ("extension-abstract-method.galgas", 128)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 128)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionMethodAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_6139.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 129)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 129)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 129)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_selfType_6139.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 130)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionMethodAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (var_selfType_6139.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 131)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 131)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 131)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6667 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-method.galgas", 134)) ;
  const GALGAS_abstractExtensionMethodAST temp_7 = object ;
  cEnumerator_formalParameterListAST enumerator_6802 (temp_7.readProperty_mAbstractExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_6802.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6667.addAssign_operation (enumerator_6802.current_mFormalSelector (HERE), enumerator_6802.current_mFormalArgumentPassingMode (HERE), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_6802.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 139)), enumerator_6802.current_mFormalArgumentName (HERE), enumerator_6802.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 136)) ;
    enumerator_6802.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodAST temp_8 = object ;
  const GALGAS_abstractExtensionMethodAST temp_9 = object ;
  const GALGAS_abstractExtensionMethodAST temp_10 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (temp_8.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 145)), GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_6139.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)).add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)), var_selfType_6139, temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_6667  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 146))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 144)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                         extensionMethod_abstractExtensionMethodAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_semanticAnalysis (defineExtensionMethod_abstractExtensionMethodAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
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
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  const GALGAS_abstractExtensionMethodAST temp_0 = object ;
  const GALGAS_abstractExtensionMethodAST temp_1 = object ;
  ioArgument_ioAbstractExtensionMethodListMapAST.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 172)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                               extensionMethod_abstractExtensionMethodAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionMethodAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodForGeneration * object = (const cPtr_abstractExtensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodForGeneration) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_0 = object ;
  const GALGAS_abstractExtensionMethodForGeneration temp_1 = object ;
  const GALGAS_abstractExtensionMethodForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, temp_0.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 193)), temp_1.readProperty_mAbstractExtensionMethodName (), temp_2.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 192))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration.mSlotID,
                                              extensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_ (defineExtensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_abstractExtensionMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 202)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_abstractExtensionMethodForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration.mSlotID,
                                   extensionGetter_abstractExtensionMethodForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractExtensionMethodForGeneration_headerKind (defineExtensionGetter_abstractExtensionMethodForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodForGeneration * object = (const cPtr_abstractExtensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodForGeneration) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_0 = object ;
  const GALGAS_abstractExtensionMethodForGeneration temp_1 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (temp_0.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 211)).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 211)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 211)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 211))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 211)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 212)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_3 = object ;
  cEnumerator_formalParameterListForGeneration enumerator_10768 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_10768.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10768.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 214)) ;
    enumerator_10768.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodForGeneration temp_4 = object ;
  const GALGAS_abstractExtensionMethodForGeneration temp_5 = object ;
  const GALGAS_abstractExtensionMethodForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, temp_4.readProperty_mReceiverType (), temp_5.readProperty_mAbstractExtensionMethodName (), temp_6.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 216))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration.mSlotID,
                                                     extensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation (defineExtensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionSetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GALGAS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  const GALGAS_abstractExtensionSetterAST temp_0 = object ;
  const GALGAS_abstractExtensionSetterAST temp_1 = object ;
  const GALGAS_abstractExtensionSetterAST temp_2 = object ;
  GALGAS_lstring var_key_3308 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)), temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)) ;
  {
  const GALGAS_abstractExtensionSetterAST temp_3 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3308, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 73)) ;
  }
  {
  const GALGAS_abstractExtensionSetterAST temp_4 = object ;
  const GALGAS_abstractExtensionSetterAST temp_5 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3308, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 74)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 74)) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 74)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionSetterAST temp_7 = object ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 76)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 76)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionSetterAST temp_8 = object ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-setter.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 77)) ;
      }
    }
  }
  const GALGAS_abstractExtensionSetterAST temp_9 = object ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_3814 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 82)) ;
  if (NULL != objectArray_3814) {
    macroValidSharedObject (objectArray_3814, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionSetterAST temp_10 = object ;
    const GALGAS_abstractExtensionSetterAST temp_11 = object ;
    objectArray_3814->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionSetterName (), temp_11.readProperty_mAbstractExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 83)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                                extensionMethod_abstractExtensionSetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_abstractExtensionSetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_abstractExtensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  const GALGAS_abstractExtensionSetterAST temp_0 = object ;
  const GALGAS_abstractExtensionSetterAST temp_1 = object ;
  result_result = GALGAS_string ("abstract extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 95)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 95)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 95)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_abstractExtensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                          extensionGetter_abstractExtensionSetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractExtensionSetterAST_keyRepresentation (defineExtensionGetter_abstractExtensionSetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                               extensionMethod_abstractExtensionSetterAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_enterInSemanticContext (defineExtensionMethod_abstractExtensionSetterAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  const GALGAS_abstractExtensionSetterAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6137 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 126)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_selfType_6137.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 128)).getter_isClassType (SOURCE_FILE ("extension-abstract-setter.galgas", 128)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 128)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionSetterAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_6137.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 129)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 129)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 129)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_selfType_6137.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 130)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionSetterAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (var_selfType_6137.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 131)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 131)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 131)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6666 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-setter.galgas", 134)) ;
  const GALGAS_abstractExtensionSetterAST temp_7 = object ;
  cEnumerator_formalParameterListAST enumerator_6801 (temp_7.readProperty_mAbstractExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_6801.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6666.addAssign_operation (enumerator_6801.current_mFormalSelector (HERE), enumerator_6801.current_mFormalArgumentPassingMode (HERE), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_6801.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 139)), enumerator_6801.current_mFormalArgumentName (HERE), enumerator_6801.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 136)) ;
    enumerator_6801.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterAST temp_8 = object ;
  const GALGAS_abstractExtensionSetterAST temp_9 = object ;
  const GALGAS_abstractExtensionSetterAST temp_10 = object ;
  const GALGAS_abstractExtensionSetterAST temp_11 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (temp_8.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 145)), GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 148)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 148)).add_operation (temp_10.readProperty_mAbstractExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 148)), var_selfType_6137, temp_11.readProperty_mAbstractExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_6666  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 146))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 144)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                         extensionMethod_abstractExtensionSetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_semanticAnalysis (defineExtensionMethod_abstractExtensionSetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionSetterListMap,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
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
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  const GALGAS_abstractExtensionSetterAST temp_0 = object ;
  const GALGAS_abstractExtensionSetterAST temp_1 = object ;
  ioArgument_ioAbstractExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 173)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                               extensionMethod_abstractExtensionSetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionSetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_abstractExtensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 191)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_abstractExtensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration.mSlotID,
                                   extensionGetter_abstractExtensionSetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractExtensionSetterForGeneration_headerKind (defineExtensionGetter_abstractExtensionSetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterForGeneration * object = (const cPtr_abstractExtensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterForGeneration) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_0 = object ;
  const GALGAS_abstractExtensionSetterForGeneration temp_1 = object ;
  const GALGAS_abstractExtensionSetterForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, temp_0.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 200)), temp_1.readProperty_mAbstractExtensionSetterName (), temp_2.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 199))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration.mSlotID,
                                              extensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterForGeneration * object = (const cPtr_abstractExtensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterForGeneration) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_0 = object ;
  const GALGAS_abstractExtensionSetterForGeneration temp_1 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (temp_0.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 213)).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 213)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 213)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 213))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 213)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 214)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_3 = object ;
  cEnumerator_formalParameterListForGeneration enumerator_10763 (temp_3.readProperty_mAbstractExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_10763.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10763.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 216)) ;
    enumerator_10763.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterForGeneration temp_4 = object ;
  const GALGAS_abstractExtensionSetterForGeneration temp_5 = object ;
  const GALGAS_abstractExtensionSetterForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, temp_4.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 219)), temp_5.readProperty_mAbstractExtensionSetterName (), temp_6.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 218))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration.mSlotID,
                                                     extensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation (defineExtensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_extensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  const GALGAS_extensionGetterAST temp_0 = object ;
  const GALGAS_extensionGetterAST temp_1 = object ;
  result_result = GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 103)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 103)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 103)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_extensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                          extensionGetter_extensionGetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_extensionGetterAST_keyRepresentation (defineExtensionGetter_extensionGetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  const GALGAS_extensionGetterAST temp_0 = object ;
  const GALGAS_extensionGetterAST temp_1 = object ;
  const GALGAS_extensionGetterAST temp_2 = object ;
  GALGAS_lstring var_key_5035 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 117)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 117)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 117)), temp_2.readProperty_mExtensionGetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 117)) ;
  {
  const GALGAS_extensionGetterAST temp_3 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5035, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 118)) ;
  }
  {
  const GALGAS_extensionGetterAST temp_4 = object ;
  const GALGAS_extensionGetterAST temp_5 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5035, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 119)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 119)) COMMA_SOURCE_FILE ("extension-getter.galgas", 119)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionGetterAST temp_7 = object ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-getter.galgas", 121)).operator_not (SOURCE_FILE ("extension-getter.galgas", 121)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionGetterAST temp_8 = object ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-getter.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 122)) ;
      }
    }
  }
  const GALGAS_extensionGetterAST temp_9 = object ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_5525 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 127)) ;
  if (NULL != objectArray_5525) {
    macroValidSharedObject (objectArray_5525, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_extensionGetterAST temp_10 = object ;
    const GALGAS_extensionGetterAST temp_11 = object ;
    const GALGAS_extensionGetterAST temp_12 = object ;
    objectArray_5525->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionGetterName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mExtensionGetterFormalInputParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 128)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                                extensionMethod_extensionGetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_extensionGetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                               extensionMethod_extensionGetterAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionGetterAST_enterInSemanticContext (defineExtensionMethod_extensionGetterAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  const GALGAS_extensionGetterAST temp_0 = object ;
  const GALGAS_extensionGetterAST temp_1 = object ;
  GALGAS_lstring var_nameForUsefulness_7170 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 161)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7170, var_nameForUsefulness_7170, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 162)) ;
  }
  const GALGAS_extensionGetterAST temp_2 = object ;
  GALGAS_lstring var_typeNameForUsefulness_7352 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 163)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7352, var_nameForUsefulness_7170 COMMA_SOURCE_FILE ("extension-getter.galgas", 164)) ;
  }
  const GALGAS_extensionGetterAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_7533 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 166)) ;
  GALGAS_string var_selfObjectName_7619 ;
  GALGAS_string var_selfObjectAccessor_7652 ;
  GALGAS_bool var_implementedAsFunction_7686 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_selfType_7533.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 171)).getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 171)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectName_7619 = GALGAS_string ("object") ;
      var_selfObjectAccessor_7652 = GALGAS_string ("object->") ;
      var_implementedAsFunction_7686 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_7619 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_7652 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_7686 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionGetterAST temp_5 = object ;
  GALGAS_analysisContext var_analysisContext_8034 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_7619, GALGAS_selfAvailability::constructor_available (var_selfType_7533, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("extension-getter.galgas", 185)), var_selfObjectAccessor_7652, temp_5.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 181)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_8924 ;
  GALGAS_unifiedTypeMap_2D_entry var_returnType_8944 ;
  GALGAS_string var_returnVariableCppName_8975 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9021 ;
  {
  const GALGAS_extensionGetterAST temp_6 = object ;
  GALGAS_typedPropertyList temp_7 ;
  const enumGalgasBool test_8 = var_selfType_7533.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 194)).getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 194)).operator_or (GALGAS_bool (kIsEqual, var_selfType_7533.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 194)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-getter.galgas", 194)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 194)).operator_or (GALGAS_bool (kIsEqual, var_selfType_7533.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 194)).objectCompare (GALGAS_typeKindEnum::constructor_sharedMapEntryType (SOURCE_FILE ("extension-getter.galgas", 194)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 194)).boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = var_selfType_7533.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 195)) ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-getter.galgas", 196)) ;
  }
  const GALGAS_extensionGetterAST temp_9 = object ;
  const GALGAS_extensionGetterAST temp_10 = object ;
  const GALGAS_extensionGetterAST temp_11 = object ;
  const GALGAS_extensionGetterAST temp_12 = object ;
  routine_analyzeFunctionBody (var_nameForUsefulness_7170, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8034, temp_6.readProperty_mExtensionGetterFormalInputParameterList (), temp_7, var_selfObjectAccessor_7652, temp_9.readProperty_mExtensionGetterInstructionList (), temp_10.readProperty_mExtensionGetterReturnedVariableName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_8924, var_returnType_8944, var_returnVariableCppName_8975, var_semanticInstructionListForGeneration_9021, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 189)) ;
  }
  const GALGAS_extensionGetterAST temp_13 = object ;
  const GALGAS_extensionGetterAST temp_14 = object ;
  const GALGAS_extensionGetterAST temp_15 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (temp_13.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 210)), GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (var_selfType_7533.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 213)).getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 213)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 213)).add_operation (temp_14.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 213)), var_selfType_7533, temp_15.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunction_7686, var_returnType_8944, var_returnVariableCppName_8975, var_formalParameterListForGeneration_8924, var_selfType_7533.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 220)), var_semanticInstructionListForGeneration_9021  COMMA_SOURCE_FILE ("extension-getter.galgas", 211))  COMMA_SOURCE_FILE ("extension-getter.galgas", 209)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                         extensionMethod_extensionGetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionGetterAST_semanticAnalysis (defineExtensionMethod_extensionGetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
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
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  const GALGAS_extensionGetterAST temp_0 = object ;
  const GALGAS_extensionGetterAST temp_1 = object ;
  ioArgument_ioExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 242)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                               extensionMethod_extensionGetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionGetterAST_buildExtensionListMaps (defineExtensionMethod_extensionGetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_extensionGetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-getter.galgas", 265)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_extensionGetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_extensionGetterForGeneration.mSlotID,
                                   extensionGetter_extensionGetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_extensionGetterForGeneration_headerKind (defineExtensionGetter_extensionGetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionGetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterForGeneration * object = (const cPtr_extensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_extensionGetterForGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionGetterForGeneration temp_2 = object ;
      const GALGAS_extensionGetterForGeneration temp_3 = object ;
      const GALGAS_extensionGetterForGeneration temp_4 = object ;
      const GALGAS_extensionGetterForGeneration temp_5 = object ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, temp_2.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 275)), temp_3.readProperty_mExtensionGetterName (), temp_4.readProperty_mExtensionGetterFormalParameterList (), temp_5.readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 278)) COMMA_SOURCE_FILE ("extension-getter.galgas", 274))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionGetterForGeneration temp_6 = object ;
    const GALGAS_extensionGetterForGeneration temp_7 = object ;
    const GALGAS_extensionGetterForGeneration temp_8 = object ;
    const GALGAS_extensionGetterForGeneration temp_9 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, temp_6.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 282)), temp_7.readProperty_mExtensionGetterName (), temp_8.readProperty_mExtensionGetterFormalParameterList (), temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 281))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionGetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_extensionGetterForGeneration.mSlotID,
                                              extensionMethod_extensionGetterForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionGetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_extensionGetterForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionGetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterForGeneration * object = (const cPtr_extensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterForGeneration) ;
  const GALGAS_extensionGetterForGeneration temp_0 = object ;
  cEnumerator_formalInputParameterListForGeneration enumerator_13147 (temp_0.readProperty_mExtensionGetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_13147.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13147.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 298)) ;
    enumerator_13147.gotoNextObject () ;
  }
  const GALGAS_extensionGetterForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 300)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_extensionGetterForGeneration temp_3 = object ;
    test_2 = temp_3.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_extensionGetterForGeneration temp_4 = object ;
      GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_13400 = temp_4.readProperty_mExtensionGetterFormalParameterList () ;
      {
      const GALGAS_extensionGetterForGeneration temp_5 = object ;
      var_extensionReaderFormalParameterList_13400.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 304)), temp_5.readProperty_mReceiverType (), GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 307))  COMMA_SOURCE_FILE ("extension-getter.galgas", 307)), GALGAS_bool (true), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 303)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_6 = object ;
      const GALGAS_extensionGetterForGeneration temp_7 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (temp_6.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 311)).getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 311)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 311)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 311))  COMMA_SOURCE_FILE ("extension-getter.galgas", 311)) ;
      GALGAS_string var_code_14132 ;
      {
      const GALGAS_extensionGetterForGeneration temp_8 = object ;
      const GALGAS_extensionGetterForGeneration temp_9 = object ;
      const GALGAS_extensionGetterForGeneration temp_10 = object ;
      const GALGAS_extensionGetterForGeneration temp_11 = object ;
      routine_generateFunction (GALGAS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 313)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_13400, temp_9.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("C_Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GALGAS_bool (false), var_code_14132, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 312)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_12 = object ;
      const GALGAS_extensionGetterForGeneration temp_13 = object ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, temp_12.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 324)), temp_13.readProperty_mExtensionGetterName (), var_code_14132 COMMA_SOURCE_FILE ("extension-getter.galgas", 323))) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_extensionGetterForGeneration temp_14 = object ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 329)) ;
    const GALGAS_extensionGetterForGeneration temp_15 = object ;
    GALGAS_unifiedTypeMap_2D_entry var_baseType_14441 = temp_15.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_14486 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 332)).isValid ()) {
      uint32_t variant_14502 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 332)).uintValue () ;
      bool loop_14502 = true ;
      while (loop_14502) {
        loop_14502 = var_searching_14486.isValid () ;
        if (loop_14502) {
          loop_14502 = var_searching_14486.boolValue () ;
        }
        if (loop_14502 && (0 == variant_14502)) {
          loop_14502 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 332)) ;
        }
        if (loop_14502) {
          variant_14502 -- ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = var_baseType_14441.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 333)).getter_isNull (SOURCE_FILE ("extension-getter.galgas", 333)).operator_not (SOURCE_FILE ("extension-getter.galgas", 333)).boolEnum () ;
            if (kBoolTrue == test_16) {
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                const GALGAS_extensionGetterForGeneration temp_18 = object ;
                test_17 = var_baseType_14441.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 334)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 334)).getter_hasKey (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas", 334)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  var_baseType_14441 = var_baseType_14441.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 335)) ;
                }
              }
              if (kBoolFalse == test_17) {
                var_searching_14486 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_16) {
            var_searching_14486 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionGetterForGeneration temp_19 = object ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_14441.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 343)).getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 343)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 343)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 343))  COMMA_SOURCE_FILE ("extension-getter.galgas", 343)) ;
    GALGAS_string var_extensionGetterCode_15296 ;
    {
    const GALGAS_extensionGetterForGeneration temp_20 = object ;
    const GALGAS_extensionGetterForGeneration temp_21 = object ;
    const GALGAS_extensionGetterForGeneration temp_22 = object ;
    const GALGAS_extensionGetterForGeneration temp_23 = object ;
    const GALGAS_extensionGetterForGeneration temp_24 = object ;
    const GALGAS_extensionGetterForGeneration temp_25 = object ;
    routine_generateExtensionGetter (temp_20.readProperty_mReceiverType (), GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, temp_21.readProperty_mExtensionGetterName (), temp_22.readProperty_mExtensionGetterFormalParameterList (), temp_23.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("C_Compiler"), temp_24.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 352)), temp_25.readProperty_mResultVarCppName (), var_extensionGetterCode_15296, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 344)) ;
    }
    const GALGAS_extensionGetterForGeneration temp_26 = object ;
    const GALGAS_extensionGetterForGeneration temp_27 = object ;
    const GALGAS_extensionGetterForGeneration temp_28 = object ;
    const GALGAS_extensionGetterForGeneration temp_29 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, temp_26.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 357)), temp_27.readProperty_mExtensionGetterName (), temp_28.readProperty_mExtensionGetterFormalParameterList (), temp_29.readProperty_mResultType (), var_extensionGetterCode_15296 COMMA_SOURCE_FILE ("extension-getter.galgas", 356))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionGetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_extensionGetterForGeneration.mSlotID,
                                                     extensionMethod_extensionGetterForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionGetterForGeneration_appendSpecificImplementation (defineExtensionMethod_extensionGetterForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_extensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  const GALGAS_extensionMethodAST temp_0 = object ;
  const GALGAS_extensionMethodAST temp_1 = object ;
  result_result = GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 83)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 83)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 83)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_extensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                          extensionGetter_extensionMethodAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_extensionMethodAST_keyRepresentation (defineExtensionGetter_extensionMethodAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  const GALGAS_extensionMethodAST temp_0 = object ;
  const GALGAS_extensionMethodAST temp_1 = object ;
  const GALGAS_extensionMethodAST temp_2 = object ;
  GALGAS_lstring var_key_4387 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 97)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 97)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 97)), temp_2.readProperty_mExtensionMethodName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-method.galgas", 97)) ;
  {
  const GALGAS_extensionMethodAST temp_3 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4387, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 98)) ;
  }
  {
  const GALGAS_extensionMethodAST temp_4 = object ;
  const GALGAS_extensionMethodAST temp_5 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4387, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 99)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-method.galgas", 99)) COMMA_SOURCE_FILE ("extension-method.galgas", 99)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionMethodAST temp_7 = object ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-method.galgas", 101)).operator_not (SOURCE_FILE ("extension-method.galgas", 101)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionMethodAST temp_8 = object ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-method.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 102)) ;
      }
    }
  }
  const GALGAS_extensionMethodAST temp_9 = object ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_4878 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 107)) ;
  if (NULL != objectArray_4878) {
    macroValidSharedObject (objectArray_4878, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_extensionMethodAST temp_10 = object ;
    const GALGAS_extensionMethodAST temp_11 = object ;
    objectArray_4878->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mExtensionMethodName (), temp_11.readProperty_mExtensionMethodFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 108)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                                extensionMethod_extensionMethodAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_extensionMethodAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                               extensionMethod_extensionMethodAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionMethodAST_enterInSemanticContext (defineExtensionMethod_extensionMethodAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  const GALGAS_extensionMethodAST temp_0 = object ;
  const GALGAS_extensionMethodAST temp_1 = object ;
  GALGAS_lstring var_nameForUsefulness_6474 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 140)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6474, var_nameForUsefulness_6474, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 141)) ;
  }
  const GALGAS_extensionMethodAST temp_2 = object ;
  GALGAS_lstring var_typeNameForUsefulness_6656 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 142)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_6656, var_nameForUsefulness_6474 COMMA_SOURCE_FILE ("extension-method.galgas", 143)) ;
  }
  const GALGAS_extensionMethodAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6838 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 145)) ;
  GALGAS_string var_selfObjectName_6925 ;
  GALGAS_string var_selfObjectAccessor_6958 ;
  GALGAS_bool var_implementedAsFunction_6992 ;
  GALGAS_bool var_isReferenceClass_7047 = GALGAS_bool (false) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_isReference_7130 ;
    const bool optionalResult7100 = var_selfType_6838.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 151)).optional_classType (var_isReference_7130) ;
    if (!optionalResult7100) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      var_isReferenceClass_7047 = var_isReference_7130 ;
      var_selfObjectName_6925 = GALGAS_string ("object") ;
      var_selfObjectAccessor_6958 = GALGAS_string ("object->") ;
      var_implementedAsFunction_6992 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_6925 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_6958 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_6992 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionMethodAST temp_5 = object ;
  GALGAS_analysisContext var_analysisContext_7438 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_6925, GALGAS_selfAvailability::constructor_available (var_selfType_6838, GALGAS_bool (false), var_isReferenceClass_7047  COMMA_SOURCE_FILE ("extension-method.galgas", 166)), var_selfObjectAccessor_6958, temp_5.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-method.galgas", 162)) ;
  GALGAS_bool var_isRefClass_7749 = GALGAS_bool (false) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    GALGAS_bool var_reference_7830 ;
    const bool optionalResult7802 = var_selfType_6838.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 171)).optional_classType (var_reference_7830) ;
    if (!optionalResult7802) {
      test_6 = kBoolFalse ;
    }
    if (kBoolTrue == test_6) {
      var_isRefClass_7749 = var_reference_7830 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_7893 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 174)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_7944 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 175)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsEqual, var_selfType_6838.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 176)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-method.galgas", 176)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_nonMutableProperties_7944 = var_selfType_6838.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 177)) ;
    }
  }
  if (kBoolFalse == test_7) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_bool var_isReference_8156 ;
      const bool optionalResult8126 = var_selfType_6838.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 178)).optional_classType (var_isReference_8156) ;
      if (!optionalResult8126) {
        test_8 = kBoolFalse ;
      }
      if (kBoolTrue == test_8) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_isReference_8156.boolEnum () ;
          if (kBoolTrue == test_9) {
            var_mutableProperties_7893 = var_selfType_6838.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 180)) ;
          }
        }
        if (kBoolFalse == test_9) {
          var_nonMutableProperties_7944 = var_selfType_6838.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 182)) ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8684 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8726 ;
  {
  const GALGAS_extensionMethodAST temp_10 = object ;
  const GALGAS_extensionMethodAST temp_11 = object ;
  const GALGAS_extensionMethodAST temp_12 = object ;
  routine_analyzeRoutineBody (var_nameForUsefulness_6474, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_7438, temp_10.readProperty_mExtensionMethodFormalParameterList (), var_nonMutableProperties_7944, var_mutableProperties_7893, temp_11.readProperty_mExtensionMethodInstructionList (), temp_12.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_8684, var_formalParameterListForGeneration_8726, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 185)) ;
  }
  const GALGAS_extensionMethodAST temp_13 = object ;
  const GALGAS_extensionMethodAST temp_14 = object ;
  const GALGAS_extensionMethodAST temp_15 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (temp_13.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 199)), GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_6838.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 202)).getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 202)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 202)).add_operation (temp_14.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 202)), var_selfType_6838, temp_15.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_6992, var_formalParameterListForGeneration_8726, var_selfType_6838.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 207)), var_semanticInstructionListForGeneration_8684  COMMA_SOURCE_FILE ("extension-method.galgas", 200))  COMMA_SOURCE_FILE ("extension-method.galgas", 198)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                         extensionMethod_extensionMethodAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionMethodAST_semanticAnalysis (defineExtensionMethod_extensionMethodAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
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
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  const GALGAS_extensionMethodAST temp_0 = object ;
  const GALGAS_extensionMethodAST temp_1 = object ;
  ioArgument_ioExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-method.galgas", 230)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                               extensionMethod_extensionMethodAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionMethodAST_buildExtensionListMaps (defineExtensionMethod_extensionMethodAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_extensionMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-method.galgas", 249)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_extensionMethodForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_extensionMethodForGeneration.mSlotID,
                                   extensionGetter_extensionMethodForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_extensionMethodForGeneration_headerKind (defineExtensionGetter_extensionMethodForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodForGeneration * object = (const cPtr_extensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_extensionMethodForGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionMethodForGeneration temp_2 = object ;
      const GALGAS_extensionMethodForGeneration temp_3 = object ;
      const GALGAS_extensionMethodForGeneration temp_4 = object ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, temp_2.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 259)), temp_3.readProperty_mExtensionMethodName (), temp_4.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 258))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_5 = object ;
    const GALGAS_extensionMethodForGeneration temp_6 = object ;
    const GALGAS_extensionMethodForGeneration temp_7 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, temp_5.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 265)), temp_6.readProperty_mExtensionMethodName (), temp_7.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 264))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionMethodForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_extensionMethodForGeneration.mSlotID,
                                              extensionMethod_extensionMethodForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionMethodForGeneration_appendDeclaration_31_ (defineExtensionMethod_extensionMethodForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodForGeneration * object = (const cPtr_extensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_extensionMethodForGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionMethodForGeneration temp_2 = object ;
      GALGAS_formalParameterListForGeneration var_extensionMethodFormalParameterList_12709 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GALGAS_extensionMethodForGeneration temp_3 = object ;
      var_extensionMethodFormalParameterList_12709.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 282)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 283)), temp_3.readProperty_mReceiverType (), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 285))  COMMA_SOURCE_FILE ("extension-method.galgas", 285)), GALGAS_string ("inObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 281)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_4 = object ;
      const GALGAS_extensionMethodForGeneration temp_5 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (temp_4.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 289)).getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 289)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 289)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 289))  COMMA_SOURCE_FILE ("extension-method.galgas", 289)) ;
      GALGAS_string var_code_13611 ;
      {
      const GALGAS_extensionMethodForGeneration temp_6 = object ;
      const GALGAS_extensionMethodForGeneration temp_7 = object ;
      routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 292)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_12709, temp_7.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_13611, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 290)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_8 = object ;
      const GALGAS_extensionMethodForGeneration temp_9 = object ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, temp_8.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 304)), temp_9.readProperty_mExtensionMethodName (), var_code_13611 COMMA_SOURCE_FILE ("extension-method.galgas", 303))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_10 = object ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 309)) ;
    const GALGAS_extensionMethodForGeneration temp_11 = object ;
    cEnumerator_formalParameterListForGeneration enumerator_13918 (temp_11.readProperty_mExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
    while (enumerator_13918.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_13918.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 311)) ;
      enumerator_13918.gotoNextObject () ;
    }
    const GALGAS_extensionMethodForGeneration temp_12 = object ;
    GALGAS_unifiedTypeMap_2D_entry var_baseType_14076 = temp_12.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_14121 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 315)).isValid ()) {
      uint32_t variant_14137 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 315)).uintValue () ;
      bool loop_14137 = true ;
      while (loop_14137) {
        loop_14137 = var_searching_14121.isValid () ;
        if (loop_14137) {
          loop_14137 = var_searching_14121.boolValue () ;
        }
        if (loop_14137 && (0 == variant_14137)) {
          loop_14137 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 315)) ;
        }
        if (loop_14137) {
          variant_14137 -- ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = var_baseType_14076.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 316)).getter_isNull (SOURCE_FILE ("extension-method.galgas", 316)).operator_not (SOURCE_FILE ("extension-method.galgas", 316)).boolEnum () ;
            if (kBoolTrue == test_13) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                const GALGAS_extensionMethodForGeneration temp_15 = object ;
                test_14 = var_baseType_14076.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 317)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 317)).getter_hasKey (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas", 317)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  var_baseType_14076 = var_baseType_14076.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 318)) ;
                }
              }
              if (kBoolFalse == test_14) {
                var_searching_14121 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_13) {
            var_searching_14121 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionMethodForGeneration temp_16 = object ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType_14076.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 326)).getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 326)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 326)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 326))  COMMA_SOURCE_FILE ("extension-method.galgas", 326)) ;
    GALGAS_string var_methodImplementation_14858 ;
    {
    const GALGAS_extensionMethodForGeneration temp_17 = object ;
    const GALGAS_extensionMethodForGeneration temp_18 = object ;
    const GALGAS_extensionMethodForGeneration temp_19 = object ;
    const GALGAS_extensionMethodForGeneration temp_20 = object ;
    routine_generateExtensionMethod (temp_17.readProperty_mReceiverType (), GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_14858, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 327)) ;
    }
    const GALGAS_extensionMethodForGeneration temp_21 = object ;
    const GALGAS_extensionMethodForGeneration temp_22 = object ;
    const GALGAS_extensionMethodForGeneration temp_23 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, temp_21.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 337)), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_14858 COMMA_SOURCE_FILE ("extension-method.galgas", 336))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionMethodForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_extensionMethodForGeneration.mSlotID,
                                                     extensionMethod_extensionMethodForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionMethodForGeneration_appendSpecificImplementation (defineExtensionMethod_extensionMethodForGeneration_appendSpecificImplementation, NULL) ;

