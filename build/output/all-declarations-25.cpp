#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-25.h"

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
  GALGAS_lstring var_key_18976 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 551)), temp_1.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 551)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_18976, temp_2, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 552)) ;
  }
  const GALGAS_sharedMapDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_19134 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_19134.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_19134.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 554)), enumerator_19134.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 554)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 554)) ;
    }
    enumerator_19134.gotoNextObject () ;
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
  result_result = GALGAS_string ("shared map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 561)) ;
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
  GALGAS_optionalMethodMap var_optionalMethodMap_20204 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 574)) ;
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_20356 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_20356 COMMA_SOURCE_FILE ("type-shared-map.galgas", 576)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeIndex_20488 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_20488 COMMA_SOURCE_FILE ("type-shared-map.galgas", 578)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringlistTypeIndex_20632 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex_20632 COMMA_SOURCE_FILE ("type-shared-map.galgas", 580)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 582)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_20488, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 582)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_20717 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_20806 = GALGAS_bool (false) ;
  const GALGAS_sharedMapDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_20823 (temp_1.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_20823.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_20823.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_20806.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_20823.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-shared-map.galgas", 588)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_20806 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_20823.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-shared-map.galgas", 592)) ;
    }
    enumerator_20823.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_21127 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 596)) ;
  GALGAS_getterMap var_getterMap_21217 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_21217, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 597)) ;
  }
  GALGAS_setterMap var_setterMap_21246 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 598)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_21294 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 599)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_6 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_21127, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptySharedMap"), temp_6.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 601)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_21217, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 609)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_21217, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 616)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_21217, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 623)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_21217, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 632)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_21217, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 641)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_21217, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("unsolvedEntryCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 648)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_21217, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("unsolvedEntryList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 655)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_21217, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 662)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_23877 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 690)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_23945 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 691)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch_20806.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_23945.addAssign_operation (temp_7.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 693)), var_lstringTypeIndex_20488, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 695)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 692)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_24183 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 697)) ;
  GALGAS_string temp_9 ;
  const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch_20806.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_24183.addAssign_operation (temp_9.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 699)), var_lstringTypeIndex_20488, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 701)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 698)) ;
  const GALGAS_sharedMapDeclarationAST temp_11 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_24403 (temp_11.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_24403.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_24538 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_24403.current_mPropertyTypeName (HERE), var_attributeTypeIndex_24538 COMMA_SOURCE_FILE ("type-shared-map.galgas", 704)) ;
    }
    GALGAS_bool var_hasSetter_24557 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_24584 = GALGAS_bool (false) ;
    var_typedAttributeList_23877.addAssign_operation (var_attributeTypeIndex_24538, enumerator_24403.current_mPropertyName (HERE), var_hasSetter_24557, var_hasSelector_24584  COMMA_SOURCE_FILE ("type-shared-map.galgas", 707)) ;
    var_enumerationDescriptor_20717.addAssign_operation (var_attributeTypeIndex_24538, enumerator_24403.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 708)) ;
    GALGAS_lstring temp_12 ;
    const enumGalgasBool test_13 = var_usesSelectorsInInsertAndSearch_20806.boolEnum () ;
    if (kBoolTrue == test_13) {
      temp_12 = enumerator_24403.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_13) {
      temp_12 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 710)) ;
    }
    var_insertMethodFormalArgumentList_23945.addAssign_operation (temp_12, var_attributeTypeIndex_24538, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 712)), enumerator_24403.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 709)) ;
    GALGAS_lstring temp_14 ;
    const enumGalgasBool test_15 = var_usesSelectorsInInsertAndSearch_20806.boolEnum () ;
    if (kBoolTrue == test_15) {
      temp_14 = enumerator_24403.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_15) {
      temp_14 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 715)) ;
    }
    var_removeMethodFormalArgumentList_24183.addAssign_operation (temp_14, var_attributeTypeIndex_24538, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 717)), enumerator_24403.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 714)) ;
    enumerator_24403.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_16 = object ;
  cEnumerator_insertMethodListAST enumerator_25226 (temp_16.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_25226.hasCurrentObject ()) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_setterMap_21246.getter_hasKey (enumerator_25226.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-shared-map.galgas", 722)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_25226.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_25226.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 723)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 723)), fixItArray18  COMMA_SOURCE_FILE ("type-shared-map.galgas", 723)) ;
      }
    }
    if (kBoolFalse == test_17) {
      {
      var_setterMap_21246.setter_insertOrReplace (enumerator_25226.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 727)), var_insertMethodFormalArgumentList_23945, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 730)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 725)) ;
      }
    }
    enumerator_25226.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList_25740 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 736)) ;
  var_enterEdgeFormalArgumentList_25740.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 737)), var_lstringTypeIndex_20488, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 737)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 737)) ;
  var_enterEdgeFormalArgumentList_25740.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 738)), var_lstringTypeIndex_20488, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 738)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 738)) ;
  {
  var_setterMap_21246.setter_insertOrReplace (GALGAS_string ("enterEdge").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 740)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 741)), var_enterEdgeFormalArgumentList_25740, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 744)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 739)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList_26260 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 748)) ;
  var_topologicalSortFormalArgumentList_26260.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 749)), var_lstringlistTypeIndex_20632, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 749)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 749)) ;
  var_topologicalSortFormalArgumentList_26260.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 750)), var_lstringlistTypeIndex_20632, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 750)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 750)) ;
  {
  var_instanceMethodMap_21294.setter_insertKey (GALGAS_string ("topologicalSort").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 752)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 753)), var_topologicalSortFormalArgumentList_26260, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 755)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 757)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-shared-map.galgas", 758)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 751)) ;
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_sharedMapDeclarationAST temp_20 = object ;
    test_19 = GALGAS_bool (kIsEqual, temp_20.readProperty_mMapStateList ().getter_length (SOURCE_FILE ("type-shared-map.galgas", 762)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_sharedMapDeclarationAST temp_21 = object ;
      cEnumerator_mapSearchMethodListAST enumerator_26905 (temp_21.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
      while (enumerator_26905.hasCurrentObject ()) {
        {
        var_instanceMethodMap_21294.setter_insertKey (enumerator_26905.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 766)), var_removeMethodFormalArgumentList_24183, enumerator_26905.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 770)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-shared-map.galgas", 771)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 764)) ;
        }
        enumerator_26905.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_19) {
    const GALGAS_sharedMapDeclarationAST temp_22 = object ;
    cEnumerator_mapSearchMethodListAST enumerator_27272 (temp_22.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
    while (enumerator_27272.hasCurrentObject ()) {
      {
      var_setterMap_21246.setter_insertKey (enumerator_27272.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 779)), var_removeMethodFormalArgumentList_24183, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 782)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 777)) ;
      }
      enumerator_27272.gotoNextObject () ;
    }
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_sharedMapDeclarationAST temp_24 = object ;
    test_23 = GALGAS_bool (kIsStrictSup, temp_24.readProperty_mMapStateList ().getter_length (SOURCE_FILE ("type-shared-map.galgas", 788)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_unifiedTypeMap_2D_entry var_locationTypeIndex_27766 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex_27766 COMMA_SOURCE_FILE ("type-shared-map.galgas", 789)) ;
      }
      {
      var_setterMap_21246.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 791))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 791)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 792)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 793)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 795)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 790)) ;
      }
      {
      var_setterMap_21246.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 799))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 799)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 800)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 801)), var_locationTypeIndex_27766, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 801)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 801)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 803)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 798)) ;
      }
      {
      var_setterMap_21246.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 807))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 807)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 808)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 809)), var_locationTypeIndex_27766, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 809)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 809)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 811)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 806)) ;
      }
      {
      var_instanceMethodMap_21294.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 815))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 815)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 816)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 817)), var_locationTypeIndex_27766, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 817)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 817)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 818)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 820)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-shared-map.galgas", 821)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 814)) ;
      }
      const GALGAS_sharedMapDeclarationAST temp_25 = object ;
      cEnumerator_mapOverrideBlockListAST enumerator_29003 (temp_25.readProperty_mMapOverrideBlockListAST (), kENUMERATION_UP) ;
      while (enumerator_29003.hasCurrentObject ()) {
        {
        var_setterMap_21246.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_29003.current_mOverrideBlockName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 826)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 826)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 826))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 826)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 827)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 828)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 830)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 825)) ;
        }
        enumerator_29003.gotoNextObject () ;
      }
    }
  }
  const GALGAS_sharedMapDeclarationAST temp_26 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_29418 (temp_26.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_29418.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_29465 = GALGAS_lstring::constructor_new (enumerator_29418.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 837)), enumerator_29418.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 837)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_29648 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_29418.current_mPropertyTypeName (HERE), var_attributeTypeIndex_29648 COMMA_SOURCE_FILE ("type-shared-map.galgas", 838)) ;
    }
    {
    GALGAS_functionSignature temp_27 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 842)) ;
    temp_27.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 842)), var_stringTypeIndex_20356, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 842)) ;
    var_getterMap_21217.setter_insertOrReplace (var_accessorName_29465, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 841)), temp_27, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 843)), GALGAS_bool (true), var_attributeTypeIndex_29648, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 846)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 839)) ;
    }
    enumerator_29418.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_28 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_30067 (temp_28.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_30067.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_30114 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_30067.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 852)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 852)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 852)), enumerator_30067.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 852)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_30342 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_30067.current_mPropertyTypeName (HERE), var_attributeTypeIndex_30342 COMMA_SOURCE_FILE ("type-shared-map.galgas", 853)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_30404 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 854)) ;
    var_accessorFormalArgumentList_30404.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 855)), var_attributeTypeIndex_30342, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 855)), enumerator_30067.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 855)) ;
    var_accessorFormalArgumentList_30404.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 856)), var_stringTypeIndex_20356, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 856)), enumerator_30067.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 856)) ;
    {
    var_setterMap_21246.setter_insertOrReplace (var_accessorName_30114, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 859)), var_accessorFormalArgumentList_30404, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 862)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 857)) ;
    }
    enumerator_30067.gotoNextObject () ;
  }
  {
  const GALGAS_sharedMapDeclarationAST temp_29 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_29.readProperty_mMapTypeName (), var_getterMap_21217, var_setterMap_21246, var_instanceMethodMap_21294, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 867)) ;
  }
  {
  const GALGAS_sharedMapDeclarationAST temp_30 = object ;
  const GALGAS_sharedMapDeclarationAST temp_31 = object ;
  const GALGAS_sharedMapDeclarationAST temp_32 = object ;
  const GALGAS_sharedMapDeclarationAST temp_33 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_30.readProperty_mMapTypeName (), temp_31.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 883)), GALGAS_typeKindEnum::constructor_sharedMapType (SOURCE_FILE ("type-shared-map.galgas", 884)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 886)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 887)), var_typedAttributeList_23877, var_constructorMap_21127, var_getterMap_21217, var_setterMap_21246, var_instanceMethodMap_21294, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 893)), var_optionalMethodMap_20204, var_enumerationDescriptor_20717, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-shared-map.galgas", 896)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-shared-map.galgas", 896)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 896)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 897)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 898)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 899)), temp_32.readProperty_mSearchMethodList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 901)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 903)), GALGAS_string ("emptySharedMap"), GALGAS_string ("sharedmap-").add_operation (temp_33.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-shared-map.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 905)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-shared-map.galgas", 906)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 879)) ;
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
                                                                      const GALGAS_string constinArgument_inProductDirectory,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_35097 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 988)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_35097, var_nameForUsefulness_35097, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 989)) ;
  }
  const GALGAS_sharedMapDeclarationAST temp_1 = object ;
  const GALGAS_sharedMapDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_35260 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mMapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-entry"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 990)), temp_2.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 990)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 990)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_35097, var_elementTypeNameForUsefulness_35260 COMMA_SOURCE_FILE ("type-shared-map.galgas", 991)) ;
  }
  GALGAS_mapAutomatonMessageKind var_shadowBehaviour_35495 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 993)) ;
  GALGAS_string var_shadowMessage_35528 = GALGAS_string::makeEmptyString () ;
  const GALGAS_sharedMapDeclarationAST temp_3 = object ;
  cEnumerator_sharedMapAttributeListAST enumerator_35574 (temp_3.readProperty_mSharedMapAttributeListAST (), kENUMERATION_UP) ;
  while (enumerator_35574.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, enumerator_35574.current_mAttributeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("shadow"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_35574.current_mAttributeName (HERE).readProperty_location (), GALGAS_string ("only %shadow attribute is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("type-shared-map.galgas", 997)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_shadowBehaviour_35495.objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 998)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_35574.current_mAttributeName (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-shared-map.galgas", 999)) ;
        }
      }
      if (kBoolFalse == test_6) {
        GALGAS_mapAutomatonMessageKind temp_8 ;
        const enumGalgasBool test_9 = enumerator_35574.current_mIsError (HERE).boolEnum () ;
        if (kBoolTrue == test_9) {
          temp_8 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 1001)) ;
        }else if (kBoolFalse == test_9) {
          temp_8 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 1001)) ;
        }
        var_shadowBehaviour_35495 = temp_8 ;
        {
        routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_35574.current_mMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1002)) ;
        }
        var_shadowMessage_35528 = enumerator_35574.current_mMessage (HERE).readProperty_string () ;
      }
    }
    enumerator_35574.gotoNextObject () ;
  }
  GALGAS_stringset var_initialStateSet_36078 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 1007)) ;
  const GALGAS_sharedMapDeclarationAST temp_10 = object ;
  cEnumerator_insertMethodListAST enumerator_36130 (temp_10.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_36130.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      const GALGAS_sharedMapDeclarationAST temp_12 = object ;
      test_11 = GALGAS_bool (kIsStrictSup, temp_12.readProperty_mMapStateList ().getter_length (SOURCE_FILE ("type-shared-map.galgas", 1009)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_11) {
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          test_13 = GALGAS_bool (kIsEqual, enumerator_36130.current_mInitialStateName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_36130.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_36130.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1011)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1011)), fixItArray14  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1011)) ;
          }
        }
        if (kBoolFalse == test_13) {
          var_initialStateSet_36078.addAssign_operation (enumerator_36130.current_mInitialStateName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1013)) ;
        }
      }
    }
    if (kBoolFalse == test_11) {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_36130.current_mInitialStateName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (enumerator_36130.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_36130.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1016)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1016)), fixItArray16  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1016)) ;
        }
      }
    }
    enumerator_36130.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap_36696 = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1020)) ;
  const GALGAS_sharedMapDeclarationAST temp_17 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_36742 (temp_17.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_36742.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      const GALGAS_sharedMapDeclarationAST temp_19 = object ;
      test_18 = GALGAS_bool (kIsStrictSup, temp_19.readProperty_mMapStateList ().getter_length (SOURCE_FILE ("type-shared-map.galgas", 1022)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_18) {
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = GALGAS_bool (kIsEqual, enumerator_36742.current_mActionName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_36742.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_36742.current_mSearchMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1024)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1024)), fixItArray21  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1024)) ;
          }
        }
        if (kBoolFalse == test_20) {
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = var_mapAutomatonActionMap_36696.getter_hasKey (enumerator_36742.current_mActionName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-shared-map.galgas", 1025)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 1025)).boolEnum () ;
            if (kBoolTrue == test_22) {
              {
              var_mapAutomatonActionMap_36696.setter_insertKey (enumerator_36742.current_mActionName (HERE), var_mapAutomatonActionMap_36696.getter_count (SOURCE_FILE ("type-shared-map.galgas", 1026)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1026)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_18) {
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        test_23 = GALGAS_bool (kIsNotEqual, enumerator_36742.current_mActionName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_23) {
          TC_Array <C_FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (enumerator_36742.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_36742.current_mSearchMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1029)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1029)), fixItArray24  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1029)) ;
        }
      }
    }
    enumerator_36742.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap_37383 = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1033)) ;
  const GALGAS_sharedMapDeclarationAST temp_25 = object ;
  cEnumerator_mapStateList enumerator_37428 (temp_25.readProperty_mMapStateList (), kENUMERATION_UP) ;
  while (enumerator_37428.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap_37383.setter_insertKey (enumerator_37428.current_mStateName (HERE), var_mapAutomatonStateMap_37383.getter_count (SOURCE_FILE ("type-shared-map.galgas", 1035)), enumerator_37428.current_mStateMessageKind (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1035)) ;
    }
    enumerator_37428.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_26 = object ;
  cEnumerator_mapStateList enumerator_37589 (temp_26.readProperty_mMapStateList (), kENUMERATION_UP) ;
  while (enumerator_37589.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_37647 (enumerator_37589.current_mTransitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_37647.hasCurrentObject ()) {
      GALGAS_uint joker_37728_2 ; // Joker input parameter
      GALGAS_mapAutomatonMessageKind joker_37728_1 ; // Joker input parameter
      var_mapAutomatonStateMap_37383.method_searchKey (enumerator_37647.current_mTargetStateName (HERE), joker_37728_2, joker_37728_1, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1039)) ;
      enumerator_37647.gotoNextObject () ;
    }
    enumerator_37589.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions_37818 = var_mapAutomatonActionMap_36696.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 1043)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList_37896 = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 1044)) ;
  const GALGAS_sharedMapDeclarationAST temp_27 = object ;
  cEnumerator_mapStateList enumerator_37967 (temp_27.readProperty_mMapStateList (), kENUMERATION_UP) ;
  while (enumerator_37967.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState_38035 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 1046)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList_38107 = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 1047)) ;
    cEnumerator_mapStateTransitionList enumerator_38192 (enumerator_37967.current_mTransitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_38192.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex_38290 ;
      var_mapAutomatonActionMap_36696.method_searchKey (enumerator_38192.current_mActionName (HERE), var_actionIndex_38290, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1049)) ;
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = var_actionsForCurrentState_38035.getter_hasKey (enumerator_38192.current_mActionName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-shared-map.galgas", 1050)).boolEnum () ;
        if (kBoolTrue == test_28) {
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (enumerator_38192.current_mActionName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_38192.current_mActionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1051)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1051)), fixItArray29  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1051)) ;
        }
      }
      var_actionsForCurrentState_38035.addAssign_operation (enumerator_38192.current_mActionName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1053)) ;
      GALGAS_uint var_targetStateIndex_38597 ;
      GALGAS_mapAutomatonMessageKind joker_38599 ; // Joker input parameter
      var_mapAutomatonStateMap_37383.method_searchKey (enumerator_38192.current_mTargetStateName (HERE), var_targetStateIndex_38597, joker_38599, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1054)) ;
      var_mapStateTransitionSortedList_38107.addAssign_operation (var_actionIndex_38290, enumerator_38192.current_mActionName (HERE).readProperty_string (), var_targetStateIndex_38597, enumerator_38192.current_mTargetStateName (HERE).readProperty_string (), enumerator_38192.current_mTransitionMessageKind (HERE), enumerator_38192.current_mTransitionMessage (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1055)) ;
      enumerator_38192.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex_38892 ;
    GALGAS_mapAutomatonMessageKind joker_38894 ; // Joker input parameter
    var_mapAutomatonStateMap_37383.method_searchKey (enumerator_37967.current_mStateName (HERE), var_stateIndex_38892, joker_38894, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1063)) ;
    var_mapStateSortedList_37896.addAssign_operation (var_stateIndex_38892, enumerator_37967.current_mStateName (HERE).readProperty_string (), enumerator_37967.current_mStateMessageKind (HERE), enumerator_37967.current_mStateMessage (HERE).readProperty_string (), var_mapStateTransitionSortedList_38107  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1064)) ;
    GALGAS_stringset var_missingActions_39088 = var_allActions_37818.substract_operation (var_actionsForCurrentState_38035, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1070)) ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      test_30 = GALGAS_bool (kIsStrictSup, var_missingActions_39088.getter_count (SOURCE_FILE ("type-shared-map.galgas", 1071)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_30) {
        GALGAS_string var_s_39185 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_39205 (var_missingActions_39088, kENUMERATION_UP) ;
        while (enumerator_39205.hasCurrentObject ()) {
          var_s_39185.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_39205.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1074)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1074)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1074)) ;
          if (enumerator_39205.hasNextObject ()) {
            var_s_39185.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1075)) ;
          }
          enumerator_39205.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_37967.current_mStateName (HERE).readProperty_location (), GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s_39185, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1077)), fixItArray31  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1077)) ;
      }
    }
    enumerator_37967.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates_39469 = var_initialStateSet_36078 ;
  GALGAS_bool var_progress_39508 = GALGAS_bool (true) ;
  const GALGAS_sharedMapDeclarationAST temp_32 = object ;
  if (temp_32.readProperty_mMapStateList ().getter_length (SOURCE_FILE ("type-shared-map.galgas", 1083)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1083)).isValid ()) {
    uint32_t variant_39522 = temp_32.readProperty_mMapStateList ().getter_length (SOURCE_FILE ("type-shared-map.galgas", 1083)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1083)).uintValue () ;
    bool loop_39522 = true ;
    while (loop_39522) {
      loop_39522 = var_progress_39508.isValid () ;
      if (loop_39522) {
        loop_39522 = var_progress_39508.boolValue () ;
      }
      if (loop_39522 && (0 == variant_39522)) {
        loop_39522 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 1083)) ;
      }
      if (loop_39522) {
        variant_39522 -- ;
        var_progress_39508 = GALGAS_bool (false) ;
        const GALGAS_sharedMapDeclarationAST temp_33 = object ;
        cEnumerator_mapStateList enumerator_39635 (temp_33.readProperty_mMapStateList (), kENUMERATION_UP) ;
        while (enumerator_39635.hasCurrentObject ()) {
          enumGalgasBool test_34 = kBoolTrue ;
          if (kBoolTrue == test_34) {
            test_34 = var_accessibleStates_39469.getter_hasKey (enumerator_39635.current_mStateName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-shared-map.galgas", 1086)).boolEnum () ;
            if (kBoolTrue == test_34) {
              cEnumerator_mapStateTransitionList enumerator_39756 (enumerator_39635.current_mTransitionList (HERE), kENUMERATION_UP) ;
              while (enumerator_39756.hasCurrentObject ()) {
                enumGalgasBool test_35 = kBoolTrue ;
                if (kBoolTrue == test_35) {
                  test_35 = var_accessibleStates_39469.getter_hasKey (enumerator_39756.current_mTargetStateName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-shared-map.galgas", 1088)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 1088)).boolEnum () ;
                  if (kBoolTrue == test_35) {
                    var_accessibleStates_39469.addAssign_operation (enumerator_39756.current_mTargetStateName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1089)) ;
                    var_progress_39508 = GALGAS_bool (true) ;
                  }
                }
                enumerator_39756.gotoNextObject () ;
              }
            }
          }
          enumerator_39635.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates_40018 = var_mapAutomatonStateMap_37383.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 1096)).substract_operation (var_accessibleStates_39469, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1096)) ;
  enumGalgasBool test_36 = kBoolTrue ;
  if (kBoolTrue == test_36) {
    test_36 = GALGAS_bool (kIsStrictSup, var_uselessStates_40018.getter_count (SOURCE_FILE ("type-shared-map.galgas", 1097)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_36) {
      GALGAS_string var_s_40115 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_40133 (var_uselessStates_40018, kENUMERATION_UP) ;
      while (enumerator_40133.hasCurrentObject ()) {
        var_s_40115.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_40133.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1100)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1100)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1100)) ;
        if (enumerator_40133.hasNextObject ()) {
          var_s_40115.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1101)) ;
        }
        enumerator_40133.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray37 ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1103)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s_40115, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1103)), fixItArray37  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1103)) ;
    }
  }
  GALGAS_stringset var_neededAssociations_40425 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 1107)) ;
  GALGAS_stringset var_accessibilityGraph_40466 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 1108)) ;
  cEnumerator_mapAutomatonStateMap enumerator_40519 (var_mapAutomatonStateMap_37383, kENUMERATION_UP) ;
  while (enumerator_40519.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates_40557 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 1110)) ;
    var_reachableStates_40557.addAssign_operation (enumerator_40519.current (HERE).readProperty_lkey ().readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1111)) ;
    var_progress_39508 = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap_37383.getter_count (SOURCE_FILE ("type-shared-map.galgas", 1113)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1113)).isValid ()) {
      uint32_t variant_40645 = var_mapAutomatonStateMap_37383.getter_count (SOURCE_FILE ("type-shared-map.galgas", 1113)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1113)).uintValue () ;
      bool loop_40645 = true ;
      while (loop_40645) {
        loop_40645 = var_progress_39508.isValid () ;
        if (loop_40645) {
          loop_40645 = var_progress_39508.boolValue () ;
        }
        if (loop_40645 && (0 == variant_40645)) {
          loop_40645 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 1113)) ;
        }
        if (loop_40645) {
          variant_40645 -- ;
          var_progress_39508 = GALGAS_bool (false) ;
          const GALGAS_sharedMapDeclarationAST temp_38 = object ;
          cEnumerator_mapStateList enumerator_40763 (temp_38.readProperty_mMapStateList (), kENUMERATION_UP) ;
          while (enumerator_40763.hasCurrentObject ()) {
            enumGalgasBool test_39 = kBoolTrue ;
            if (kBoolTrue == test_39) {
              test_39 = var_reachableStates_40557.getter_hasKey (enumerator_40763.current_mStateName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-shared-map.galgas", 1116)).boolEnum () ;
              if (kBoolTrue == test_39) {
                cEnumerator_mapStateTransitionList enumerator_40887 (enumerator_40763.current_mTransitionList (HERE), kENUMERATION_UP) ;
                while (enumerator_40887.hasCurrentObject ()) {
                  enumGalgasBool test_40 = kBoolTrue ;
                  if (kBoolTrue == test_40) {
                    test_40 = var_reachableStates_40557.getter_hasKey (enumerator_40887.current_mTargetStateName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-shared-map.galgas", 1118)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 1118)).boolEnum () ;
                    if (kBoolTrue == test_40) {
                      var_reachableStates_40557.addAssign_operation (enumerator_40887.current_mTargetStateName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1119)) ;
                      var_accessibilityGraph_40466.addAssign_operation (enumerator_40519.current (HERE).readProperty_lkey ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1120)).add_operation (enumerator_40887.current_mTargetStateName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1120))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1120)) ;
                      var_progress_39508 = GALGAS_bool (true) ;
                    }
                  }
                  enumerator_40887.gotoNextObject () ;
                }
              }
            }
            enumerator_40763.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_41244 (var_reachableStates_40557, kENUMERATION_UP) ;
    while (enumerator_41244.hasCurrentObject ()) {
      enumGalgasBool test_41 = kBoolTrue ;
      if (kBoolTrue == test_41) {
        test_41 = GALGAS_bool (kIsNotEqual, enumerator_40519.current (HERE).readProperty_lkey ().readProperty_string ().objectCompare (enumerator_41244.current_key (HERE))).boolEnum () ;
        if (kBoolTrue == test_41) {
          var_neededAssociations_40425.addAssign_operation (enumerator_40519.current (HERE).readProperty_lkey ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1129)).add_operation (enumerator_41244.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1129))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1129)) ;
        }
      }
      enumerator_41244.gotoNextObject () ;
    }
    enumerator_40519.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList_41459 = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 1134)) ;
  const GALGAS_sharedMapDeclarationAST temp_42 = object ;
  cEnumerator_mapOverrideBlockListAST enumerator_41554 (temp_42.readProperty_mMapOverrideBlockListAST (), kENUMERATION_UP) ;
  while (enumerator_41554.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations_41630 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 1136)) ;
    GALGAS_stringset var_neededCombinaisons_41673 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 1137)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31__41768 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 1138)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_41853 (enumerator_41554.current_mMapOverrideBlockDescriptor_31_AST (HERE), kENUMERATION_UP) ;
    while (enumerator_41853.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex_41967 ;
      GALGAS_mapAutomatonMessageKind joker_41969 ; // Joker input parameter
      var_mapAutomatonStateMap_37383.method_searchKey (enumerator_41853.current_mLeftState (HERE), var_startStateNameIndex_41967, joker_41969, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1140)) ;
      GALGAS_uint var_currentStateNameIndex_42049 ;
      GALGAS_mapAutomatonMessageKind joker_42051 ; // Joker input parameter
      var_mapAutomatonStateMap_37383.method_searchKey (enumerator_41853.current_mRightState (HERE), var_currentStateNameIndex_42049, joker_42051, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1141)) ;
      GALGAS_string var_association_42083 = enumerator_41853.current_mLeftState (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1142)).add_operation (enumerator_41853.current_mRightState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1142)) ;
      enumGalgasBool test_43 = kBoolTrue ;
      if (kBoolTrue == test_43) {
        test_43 = var_neededAssociations_40425.getter_hasKey (var_association_42083 COMMA_SOURCE_FILE ("type-shared-map.galgas", 1143)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 1143)).boolEnum () ;
        if (kBoolTrue == test_43) {
          TC_Array <C_FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticWarning (enumerator_41853.current_mRightState (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (var_association_42083, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1144)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1144)), fixItArray44  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1144)) ;
        }
      }
      enumGalgasBool test_45 = kBoolTrue ;
      if (kBoolTrue == test_45) {
        test_45 = var_handledAssociations_41630.getter_hasKey (var_association_42083 COMMA_SOURCE_FILE ("type-shared-map.galgas", 1146)).boolEnum () ;
        if (kBoolTrue == test_45) {
          TC_Array <C_FixItDescription> fixItArray46 ;
          inCompiler->emitSemanticError (enumerator_41853.current_mRightState (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (var_association_42083, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1148)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1148)), fixItArray46  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1147)) ;
        }
      }
      var_handledAssociations_41630.addAssign_operation (var_association_42083  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1150)) ;
      GALGAS_uint var_finalStateNameIndex_42561 ;
      GALGAS_mapAutomatonMessageKind joker_42563 ; // Joker input parameter
      var_mapAutomatonStateMap_37383.method_searchKey (enumerator_41853.current_mResultingState (HERE), var_finalStateNameIndex_42561, joker_42563, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1151)) ;
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        test_47 = GALGAS_bool (kIsNotEqual, enumerator_41853.current_mLeftState (HERE).readProperty_string ().objectCompare (enumerator_41853.current_mResultingState (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_47) {
          var_neededCombinaisons_41673.addAssign_operation (enumerator_41853.current_mLeftState (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1153)).add_operation (enumerator_41853.current_mResultingState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1153))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1153)) ;
          var_neededCombinaisons_41673.addAssign_operation (enumerator_41853.current_mResultingState (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1154)).add_operation (enumerator_41853.current_mLeftState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1154))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1154)) ;
          enumGalgasBool test_48 = kBoolTrue ;
          if (kBoolTrue == test_48) {
            test_48 = var_accessibilityGraph_40466.getter_hasKey (enumerator_41853.current_mLeftState (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1155)).add_operation (enumerator_41853.current_mRightState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1155)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1155)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 1155)).boolEnum () ;
            if (kBoolTrue == test_48) {
              TC_Array <C_FixItDescription> fixItArray49 ;
              inCompiler->emitSemanticError (enumerator_41853.current_mResultingState (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_41853.current_mResultingState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1157)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1157)).add_operation (enumerator_41853.current_mLeftState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1157)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1157)), fixItArray49  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1156)) ;
            }
          }
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_41853.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1160)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31__41768.addAssign_operation (var_startStateNameIndex_41967, enumerator_41853.current_mLeftState (HERE).readProperty_string (), var_currentStateNameIndex_42049, enumerator_41853.current_mRightState (HERE).readProperty_string (), var_finalStateNameIndex_42561, enumerator_41853.current_mResultingState (HERE).readProperty_string (), enumerator_41853.current_mMessageKind (HERE), enumerator_41853.current_mTransitionMessage (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1161)) ;
      enumerator_41853.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations_43416 = var_neededAssociations_40425.substract_operation (var_handledAssociations_41630, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1171)) ;
    enumGalgasBool test_50 = kBoolTrue ;
    if (kBoolTrue == test_50) {
      test_50 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations_43416.getter_count (SOURCE_FILE ("type-shared-map.galgas", 1172)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_50) {
        GALGAS_string var_s_43525 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_43545 (var_forgottenAssociations_43416, kENUMERATION_UP) ;
        while (enumerator_43545.hasCurrentObject ()) {
          var_s_43525.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_43545.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1175)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1175)) ;
          enumerator_43545.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray51 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1177)), var_forgottenAssociations_43416.getter_count (SOURCE_FILE ("type-shared-map.galgas", 1177)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1177)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1177)).add_operation (var_s_43525, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1177)), fixItArray51  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1177)) ;
      }
    }
    GALGAS_stringset var_definedCombinaisons_43767 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 1179)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32__43862 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 1180)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_43947 (enumerator_41554.current_mMapOverrideBlockDescriptor_32_AST (HERE), kENUMERATION_UP) ;
    while (enumerator_43947.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex_44056 ;
      GALGAS_mapAutomatonMessageKind joker_44058 ; // Joker input parameter
      var_mapAutomatonStateMap_37383.method_searchKey (enumerator_43947.current_mLeftState (HERE), var_leftStateIndex_44056, joker_44058, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1182)) ;
      GALGAS_uint var_rightStateIndex_44132 ;
      GALGAS_mapAutomatonMessageKind joker_44134 ; // Joker input parameter
      var_mapAutomatonStateMap_37383.method_searchKey (enumerator_43947.current_mRightState (HERE), var_rightStateIndex_44132, joker_44134, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1183)) ;
      GALGAS_string var_combinaison_44166 = enumerator_43947.current_mLeftState (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1184)).add_operation (enumerator_43947.current_mRightState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1184)) ;
      enumGalgasBool test_52 = kBoolTrue ;
      if (kBoolTrue == test_52) {
        test_52 = var_neededCombinaisons_41673.getter_hasKey (var_combinaison_44166 COMMA_SOURCE_FILE ("type-shared-map.galgas", 1185)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 1185)).boolEnum () ;
        if (kBoolTrue == test_52) {
          TC_Array <C_FixItDescription> fixItArray53 ;
          inCompiler->emitSemanticError (enumerator_43947.current_mRightState (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_43947.current_mLeftState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1187)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1187)).add_operation (enumerator_43947.current_mRightState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1187)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1187)), fixItArray53  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1186)) ;
        }
      }
      enumGalgasBool test_54 = kBoolTrue ;
      if (kBoolTrue == test_54) {
        test_54 = var_definedCombinaisons_43767.getter_hasKey (var_combinaison_44166 COMMA_SOURCE_FILE ("type-shared-map.galgas", 1189)).boolEnum () ;
        if (kBoolTrue == test_54) {
          TC_Array <C_FixItDescription> fixItArray55 ;
          inCompiler->emitSemanticError (enumerator_43947.current_mRightState (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_43947.current_mLeftState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1191)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1191)).add_operation (enumerator_43947.current_mRightState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1191)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1191)), fixItArray55  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1190)) ;
        }
      }
      var_definedCombinaisons_43767.addAssign_operation (var_combinaison_44166  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1193)) ;
      GALGAS_uint var_resultingStateNameIndex_44692 ;
      GALGAS_mapAutomatonMessageKind joker_44694 ; // Joker input parameter
      var_mapAutomatonStateMap_37383.method_searchKey (enumerator_43947.current_mResultingState (HERE), var_resultingStateNameIndex_44692, joker_44694, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1194)) ;
      enumGalgasBool test_56 = kBoolTrue ;
      if (kBoolTrue == test_56) {
        test_56 = GALGAS_bool (kIsNotEqual, enumerator_43947.current_mLeftState (HERE).readProperty_string ().objectCompare (enumerator_43947.current_mResultingState (HERE).readProperty_string ())).operator_and (GALGAS_bool (kIsNotEqual, enumerator_43947.current_mRightState (HERE).readProperty_string ().objectCompare (enumerator_43947.current_mResultingState (HERE).readProperty_string ())) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1195)).operator_and (var_accessibilityGraph_40466.getter_hasKey (enumerator_43947.current_mLeftState (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1197)).add_operation (enumerator_43947.current_mResultingState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1197)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1197)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 1197)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1196)).boolEnum () ;
        if (kBoolTrue == test_56) {
          TC_Array <C_FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (enumerator_43947.current_mResultingState (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_43947.current_mResultingState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1199)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1199)).add_operation (enumerator_43947.current_mResultingState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1199)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1199)), fixItArray57  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1198)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_43947.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1201)) ;
      }
      enumGalgasBool test_58 = kBoolTrue ;
      if (kBoolTrue == test_58) {
        test_58 = GALGAS_bool (kIsEqual, enumerator_43947.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 1202)))).boolEnum () ;
        if (kBoolTrue == test_58) {
          var_definedCombinaisons_43767.addAssign_operation (enumerator_43947.current_mRightState (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1203)).add_operation (enumerator_43947.current_mLeftState (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1203))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1203)) ;
          var_branchBehaviourSortedListForMapOverride_32__43862.addAssign_operation (var_rightStateIndex_44132, enumerator_43947.current_mRightState (HERE).readProperty_string (), var_leftStateIndex_44056, enumerator_43947.current_mLeftState (HERE).readProperty_string (), var_resultingStateNameIndex_44692, enumerator_43947.current_mResultingState (HERE).readProperty_string (), enumerator_43947.current_mMessageKind (HERE), enumerator_43947.current_mTransitionMessage (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1204)) ;
        }
      }
      var_branchBehaviourSortedListForMapOverride_32__43862.addAssign_operation (var_leftStateIndex_44056, enumerator_43947.current_mLeftState (HERE).readProperty_string (), var_rightStateIndex_44132, enumerator_43947.current_mRightState (HERE).readProperty_string (), var_resultingStateNameIndex_44692, enumerator_43947.current_mResultingState (HERE).readProperty_string (), enumerator_43947.current_mMessageKind (HERE), enumerator_43947.current_mTransitionMessage (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1214)) ;
      enumerator_43947.gotoNextObject () ;
    }
    enumGalgasBool test_59 = kBoolTrue ;
    if (kBoolTrue == test_59) {
      test_59 = GALGAS_bool (kIsEqual, var_forgottenAssociations_43416.getter_count (SOURCE_FILE ("type-shared-map.galgas", 1224)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_59) {
        GALGAS_stringset var_forgottenCombinaisons_45969 = var_neededCombinaisons_41673.substract_operation (var_definedCombinaisons_43767, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1225)) ;
        enumGalgasBool test_60 = kBoolTrue ;
        if (kBoolTrue == test_60) {
          test_60 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons_45969.getter_count (SOURCE_FILE ("type-shared-map.galgas", 1226)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_60) {
            GALGAS_string var_s_46082 = GALGAS_string::makeEmptyString () ;
            cEnumerator_stringset enumerator_46104 (var_forgottenCombinaisons_45969, kENUMERATION_UP) ;
            while (enumerator_46104.hasCurrentObject ()) {
              var_s_46082.plusAssign_operation(GALGAS_string ("\n"
                "  - ").add_operation (enumerator_46104.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1229)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1229)) ;
              enumerator_46104.gotoNextObject () ;
            }
            TC_Array <C_FixItDescription> fixItArray61 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1231)), var_forgottenCombinaisons_45969.getter_count (SOURCE_FILE ("type-shared-map.galgas", 1231)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1231)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1231)).add_operation (var_s_46082, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1231)), fixItArray61  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1231)) ;
          }
        }
      }
    }
    var_mapOverrideList_41459.addAssign_operation (enumerator_41554.current_mOverrideBlockName (HERE).readProperty_string (), var_branchBehaviourSortedListForMapOverride_31__41768, var_branchBehaviourSortedListForMapOverride_32__43862  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1234)) ;
    enumerator_41554.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_46526 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 1240)) ;
  GALGAS_propertyIndexMap var_attributeMap_46568 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1241)) ;
  const GALGAS_sharedMapDeclarationAST temp_62 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_46618 (temp_62.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_46618.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_46682 = function_typeNameForUsefulEntitiesGraph (enumerator_46618.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1243)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_35097, var_propertyTypeNameForUsefulness_46682 COMMA_SOURCE_FILE ("type-shared-map.galgas", 1244)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_46834 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_46618.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1245)) ;
    GALGAS_bool var_hasSetter_46935 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_46962 = GALGAS_bool (false) ;
    var_typedAttributeList_46526.addAssign_operation (var_t_46834, enumerator_46618.current_mPropertyName (HERE), var_hasSetter_46935, var_hasSelector_46962  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1248)) ;
    {
    var_attributeMap_46568.setter_insertKey (enumerator_46618.current_mPropertyName (HERE), var_t_46834, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1253)) ;
    }
    enumerator_46618.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_47182 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1256)) ;
  const GALGAS_sharedMapDeclarationAST temp_63 = object ;
  cEnumerator_insertMethodListAST enumerator_47232 (temp_63.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_47232.hasCurrentObject ()) {
    {
    var_insertMethodMap_47182.setter_insertKey (enumerator_47232.current (HERE).readProperty_mInsertMethodName (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1258)) ;
    }
    cEnumerator_stringlist enumerator_47463 (enumerator_47232.current (HERE).readProperty_mErrorMessage ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1260)), kENUMERATION_UP) ;
    while (enumerator_47463.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_47502 = enumerator_47463.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1261)) ;
      {
      GALGAS_string joker_47597 ; // Joker input parameter
      var_explodedArray_47502.setter_popFirst (joker_47597, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1262)) ;
      }
      cEnumerator_stringlist enumerator_47617 (var_explodedArray_47502, kENUMERATION_UP) ;
      while (enumerator_47617.hasCurrentObject ()) {
        enumGalgasBool test_64 = kBoolTrue ;
        if (kBoolTrue == test_64) {
          test_64 = GALGAS_bool (kIsStrictSup, enumerator_47617.current_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1264)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_64) {
            GALGAS_char var_c_47696 = enumerator_47617.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1265)) ;
            enumGalgasBool test_65 = kBoolTrue ;
            if (kBoolTrue == test_65) {
              test_65 = GALGAS_bool (kIsNotEqual, var_c_47696.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_47696.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1266)).boolEnum () ;
              if (kBoolTrue == test_65) {
                TC_Array <C_FixItDescription> fixItArray66 ;
                inCompiler->emitSemanticError (enumerator_47232.current (HERE).readProperty_mErrorMessage ().readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message"), fixItArray66  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1267)) ;
              }
            }
          }
        }
        enumerator_47617.gotoNextObject () ;
      }
      enumerator_47463.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_48123 (enumerator_47232.current (HERE).readProperty_mShadowErrorMessage ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1273)), kENUMERATION_UP) ;
    while (enumerator_48123.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_48162 = enumerator_48123.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1274)) ;
      {
      GALGAS_string joker_48263 ; // Joker input parameter
      var_explodedArray_48162.setter_popFirst (joker_48263, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1275)) ;
      }
      cEnumerator_stringlist enumerator_48302 (var_explodedArray_48162, kENUMERATION_UP) ;
      while (enumerator_48302.hasCurrentObject ()) {
        enumGalgasBool test_67 = kBoolTrue ;
        if (kBoolTrue == test_67) {
          test_67 = GALGAS_bool (kIsStrictSup, enumerator_48302.current (HERE).readProperty_mValue ().getter_length (SOURCE_FILE ("type-shared-map.galgas", 1277)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_67) {
            GALGAS_char var_c_48373 = enumerator_48302.current (HERE).readProperty_mValue ().getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1278)) ;
            enumGalgasBool test_68 = kBoolTrue ;
            if (kBoolTrue == test_68) {
              test_68 = GALGAS_bool (kIsNotEqual, var_c_48373.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_48373.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1279)).boolEnum () ;
              if (kBoolTrue == test_68) {
                TC_Array <C_FixItDescription> fixItArray69 ;
                inCompiler->emitSemanticError (enumerator_47232.current (HERE).readProperty_mErrorMessage ().readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message"), fixItArray69  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1280)) ;
              }
            }
          }
        }
        enumerator_48302.gotoNextObject () ;
      }
      enumerator_48123.gotoNextObject () ;
    }
    enumerator_47232.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_48699 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1287)) ;
  const GALGAS_sharedMapDeclarationAST temp_70 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_48749 (temp_70.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_48749.hasCurrentObject ()) {
    enumGalgasBool test_71 = kBoolTrue ;
    if (kBoolTrue == test_71) {
      const GALGAS_sharedMapDeclarationAST temp_72 = object ;
      test_71 = GALGAS_bool (kIsEqual, temp_72.readProperty_mMapStateList ().getter_length (SOURCE_FILE ("type-shared-map.galgas", 1289)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_71) {
        {
        var_searchMethodMap_48699.setter_insertKey (enumerator_48749.current (HERE).readProperty_mSearchMethodName (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1290)) ;
        }
      }
    }
    if (kBoolFalse == test_71) {
      {
      var_searchMethodMap_48699.setter_insertKey (enumerator_48749.current (HERE).readProperty_mSearchMethodName (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1292)) ;
      }
    }
    cEnumerator_stringlist enumerator_49113 (enumerator_48749.current (HERE).readProperty_mErrorMessage ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1295)), kENUMERATION_UP) ;
    while (enumerator_49113.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_49152 = enumerator_49113.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1296)) ;
      {
      GALGAS_string joker_49252 ; // Joker input parameter
      var_explodedArray_49152.setter_popFirst (joker_49252, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1297)) ;
      }
      cEnumerator_stringlist enumerator_49291 (var_explodedArray_49152, kENUMERATION_UP) ;
      while (enumerator_49291.hasCurrentObject ()) {
        enumGalgasBool test_73 = kBoolTrue ;
        if (kBoolTrue == test_73) {
          test_73 = GALGAS_bool (kIsStrictSup, enumerator_49291.current (HERE).readProperty_mValue ().getter_length (SOURCE_FILE ("type-shared-map.galgas", 1299)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_73) {
            GALGAS_char var_c_49362 = enumerator_49291.current (HERE).readProperty_mValue ().getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1300)) ;
            enumGalgasBool test_74 = kBoolTrue ;
            if (kBoolTrue == test_74) {
              test_74 = GALGAS_bool (kIsNotEqual, var_c_49362.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
              if (kBoolTrue == test_74) {
                TC_Array <C_FixItDescription> fixItArray75 ;
                inCompiler->emitSemanticError (enumerator_48749.current (HERE).readProperty_mErrorMessage ().readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message"), fixItArray75  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1302)) ;
              }
            }
          }
        }
        enumerator_49291.gotoNextObject () ;
      }
      enumerator_49113.gotoNextObject () ;
    }
    enumerator_48749.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_76 = object ;
  const GALGAS_sharedMapDeclarationAST temp_77 = object ;
  const GALGAS_sharedMapDeclarationAST temp_78 = object ;
  const GALGAS_sharedMapDeclarationAST temp_79 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (temp_76.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1310)), GALGAS_sharedMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_77.readProperty_mMapTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1312)), var_typedAttributeList_46526, temp_78.readProperty_mInsertMethodList (), temp_79.readProperty_mSearchMethodList (), var_mapAutomatonStateMap_37383, var_mapAutomatonActionMap_36696, var_mapStateSortedList_37896, var_mapOverrideList_41459, var_shadowBehaviour_35495, var_shadowMessage_35528  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1311))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1309)) ;
  const GALGAS_sharedMapDeclarationAST temp_80 = object ;
  GALGAS_string var_graphFile_50172 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/shared-map-"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1325)).add_operation (temp_80.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1325)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1325)) ;
  enumGalgasBool test_81 = kBoolTrue ;
  if (kBoolTrue == test_81) {
    test_81 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_81) {
      GALGAS_string var_theGraph_50346 = GALGAS_string ("digraph G {\n") ;
      cEnumerator_mapAutomatonStateMap enumerator_50398 (var_mapAutomatonStateMap_37383, kENUMERATION_UP) ;
      while (enumerator_50398.hasCurrentObject ()) {
        var_theGraph_50346.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_50398.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1329)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1329)).add_operation (enumerator_50398.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1329)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1329)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1329)) ;
        enumGalgasBool test_82 = kBoolTrue ;
        if (kBoolTrue == test_82) {
          test_82 = var_initialStateSet_36078.getter_hasKey (enumerator_50398.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-shared-map.galgas", 1330)).boolEnum () ;
          if (kBoolTrue == test_82) {
            var_theGraph_50346.plusAssign_operation(GALGAS_string (" shape=box color=blue"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1331)) ;
          }
        }
        if (kBoolFalse == test_82) {
          var_theGraph_50346.plusAssign_operation(GALGAS_string (" shape=box"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1333)) ;
        }
        switch (enumerator_50398.current_mStateMessageKind (HERE).enumValue ()) {
        case GALGAS_mapAutomatonMessageKind::kNotBuilt:
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
          {
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
          {
            var_theGraph_50346.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1338)) ;
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
          {
            var_theGraph_50346.plusAssign_operation(GALGAS_string (" fontcolor=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1340)) ;
          }
          break ;
        }
        var_theGraph_50346.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1342)) ;
        enumerator_50398.gotoNextObject () ;
      }
      const GALGAS_sharedMapDeclarationAST temp_83 = object ;
      cEnumerator_mapStateList enumerator_50913 (temp_83.readProperty_mMapStateList (), kENUMERATION_UP) ;
      while (enumerator_50913.hasCurrentObject ()) {
        cEnumerator_mapStateTransitionList enumerator_51004 (enumerator_50913.current_mTransitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_51004.hasCurrentObject ()) {
          var_theGraph_50346.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_50913.current_mStateName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1346)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1346)).add_operation (enumerator_51004.current_mTargetStateName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1346)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1346)).add_operation (enumerator_51004.current_mActionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1346)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1346)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1346)) ;
          switch (enumerator_51004.current_mTransitionMessageKind (HERE).enumValue ()) {
          case GALGAS_mapAutomatonMessageKind::kNotBuilt:
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
            {
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
            {
              var_theGraph_50346.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\" color=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1350)) ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
            {
              var_theGraph_50346.plusAssign_operation(GALGAS_string (" fontcolor=\"red\" color=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1352)) ;
            }
            break ;
          }
          var_theGraph_50346.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1354)) ;
          enumerator_51004.gotoNextObject () ;
        }
        enumerator_50913.gotoNextObject () ;
      }
      var_theGraph_50346.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1357)) ;
      GALGAS_bool joker_51519 ; // Joker input parameter
      var_theGraph_50346.method_writeToFileWhenDifferentContents (var_graphFile_50172, joker_51519, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1358)) ;
    }
  }
  if (kBoolFalse == test_81) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_graphFile_50172, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1360)) ;
    }
  }
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
  GALGAS_uint index_430_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_430 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_430.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "extern const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_430.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.h1.galgasTemplate", 12)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_430_.increment () ;
      enumerator_430.gotoNextObject () ;
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
                                                                                                   const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                                   const GALGAS_mapAutomatonStateMap & in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP,
                                                                                                   const GALGAS_mapAutomatonActionMap & in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP,
                                                                                                   const GALGAS_mapStateSortedList & in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST,
                                                                                                   const GALGAS_mapOverrideList & in_MAP_5F_OVERRIDE_5F_LIST,
                                                                                                   const GALGAS_keySortedList & in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST,
                                                                                                   const GALGAS_mapAutomatonMessageKind & in_SHADOW_5F_BEHAVIOUR,
                                                                                                   const GALGAS_string & in_SHADOW_5F_MESSAGE
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
    "AC_GALGAS_uniqueMap (" ;
  switch (in_SHADOW_5F_BEHAVIOUR.enumValue ()) {
  case GALGAS_mapAutomatonMessageKind::kNotBuilt :
    break ;
  case GALGAS_mapAutomatonMessageKind::kEnum_noMessage :
    {
      result << "kMapAutomatonNoIssue" ;
    }
    break ;
  case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage :
    {
      result << "kMapAutomatonIssueWarning" ;
    }
    break ;
  case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage :
    {
      result << "kMapAutomatonIssueError" ;
    }
    break ;
  }
  result << ", " ;
  result << in_SHADOW_5F_MESSAGE.getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 75)).stringValue () ;
  result << ") {\n"
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
  result << "::constructor_emptySharedMap (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyMap (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Map automaton states                                                                         \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_4991_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP.isValid ()) {
    cEnumerator_mapAutomatonStateMap enumerator_4991 (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_4991 = enumerator_4991.hasCurrentObject () ;
    if (nonEmpty_enumerator_4991) {
      result << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
        "  static const uint32_t kMapStateCount_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " = " ;
      result << in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP.getter_count (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 107)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 107)).stringValue () ;
      result << " ;\n"
        "#endif\n" ;
    }
    while (enumerator_4991.hasCurrentObject ()) {
      result << "static const uint32_t kMapState_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_4991.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 110)).stringValue () ;
      result << " = " ;
      result << enumerator_4991.current_mStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 110)).stringValue () ;
      result << " ;\n" ;
      index_4991_.increment () ;
      enumerator_4991.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Map automaton state names                                                                    \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_5652_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST.isValid ()) {
    cEnumerator_keySortedList enumerator_5652 (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_5652 = enumerator_5652.hasCurrentObject () ;
    if (nonEmpty_enumerator_5652) {
      result << "static const char * kMapStateNames_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " [" ;
      result << in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 120)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 120)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_5652.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5652.current_mKey (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 122)).stringValue () ;
      if (enumerator_5652.hasNextObject ()) {
        result << ",\n" ;
      }
      index_5652_.increment () ;
      enumerator_5652.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_5652) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Map automaton actions                                                                        \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_6242_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP.isValid ()) {
    cEnumerator_mapAutomatonActionMap enumerator_6242 (in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_6242 = enumerator_6242.hasCurrentObject () ;
    if (nonEmpty_enumerator_6242) {
      result << "static const uint32_t kMapActionCount_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " = " ;
      result << in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP.getter_count (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 136)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 136)).stringValue () ;
      result << " ;\n" ;
    }
    while (enumerator_6242.hasCurrentObject ()) {
      result << "static const uint32_t kMapAction_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_6242.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 138)).stringValue () ;
      result << " = " ;
      result << enumerator_6242.current_mActionIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 138)).stringValue () ;
      result << " ;\n" ;
      index_6242_.increment () ;
      enumerator_6242.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Map automaton transitions                                                                    \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_7039_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.isValid ()) {
    cEnumerator_mapStateSortedList enumerator_7039 (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_7039 = enumerator_7039.hasCurrentObject () ;
    if (nonEmpty_enumerator_7039) {
      result << "static const cMapAutomatonTransition kMapTransitions_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " [" ;
      result << in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 149)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 149)).stringValue () ;
      result << " * " ;
      result << in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP.getter_count (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 151)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 151)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_7039.hasCurrentObject ()) {
      result << "// State '" ;
      result << enumerator_7039.current_mStateName (HERE).stringValue () ;
      result << "', index " ;
      result << enumerator_7039.current_mStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 154)).stringValue () ;
      result << " \n" ;
      GALGAS_uint index_7234_ (0) ;
      if (enumerator_7039.current_mTransitionList (HERE).isValid ()) {
        cEnumerator_mapStateTransitionSortedList enumerator_7234 (enumerator_7039.current_mTransitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_7234.hasCurrentObject ()) {
          result << "  {kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_7234.current_mTargetStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 156)).stringValue () ;
          result << " /* " ;
          result << enumerator_7234.current_mTargetStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 156)).stringValue () ;
          result << " */, " ;
          switch (enumerator_7234.current_mTransitionMessageKind (HERE).enumValue ()) {
          case GALGAS_mapAutomatonMessageKind::kNotBuilt :
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_noMessage :
            {
              result << "kMapAutomatonNoIssue" ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage :
            {
              result << "kMapAutomatonIssueWarning" ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage :
            {
              result << "kMapAutomatonIssueError" ;
            }
            break ;
          }
          result << ", " ;
          result << enumerator_7234.current_mTransitionMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 166)).stringValue () ;
          result << "}, // for action '" ;
          result << enumerator_7234.current_mActionName (HERE).stringValue () ;
          result << "', (index " ;
          result << enumerator_7234.current_mActionIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 167)).stringValue () ;
          result << ")\n" ;
          index_7234_.increment () ;
          enumerator_7234.gotoNextObject () ;
        }
      }
      index_7039_.increment () ;
      enumerator_7039.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_7039) {
      result << "} ;\n" ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Map automaton final state issues                                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_8340_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.isValid ()) {
    cEnumerator_mapStateSortedList enumerator_8340 (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8340 = enumerator_8340.hasCurrentObject () ;
    if (nonEmpty_enumerator_8340) {
      result << "static const cMapAutomatonFinalIssue kMapAutomatonFinalIssue_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " [" ;
      result << in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 180)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 180)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_8340.hasCurrentObject ()) {
      result << "  {" ;
      switch (enumerator_8340.current_mStateMessageKind (HERE).enumValue ()) {
      case GALGAS_mapAutomatonMessageKind::kNotBuilt :
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_noMessage :
        {
          result << "kMapAutomatonNoIssue" ;
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage :
        {
          result << "kMapAutomatonIssueWarning" ;
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage :
        {
          result << "kMapAutomatonIssueError" ;
        }
        break ;
      }
      result << ", " ;
      result << enumerator_8340.current_mStateMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 192)).stringValue () ;
      result << "},// state '" ;
      result << enumerator_8340.current_mStateName (HERE).stringValue () ;
      result << "' (index " ;
      result << enumerator_8340.current_mStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 193)).stringValue () ;
      result << ")\n" ;
      index_8340_.increment () ;
      enumerator_8340.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8340) {
      result << "} ;\n" ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 198)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "void GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::setter_closeBranch (" ;
    columnMarker = result.currentColumn () ;
    result << "GALGAS_location inErrorLocation,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n"
      "  closeBranch (inErrorLocation,\n"
      "               kMapAutomatonFinalIssue_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << ",\n"
      "               #ifndef DO_NOT_GENERATE_CHECKINGS\n"
      "                 kMapStateCount_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << ",\n"
      "               #endif\n"
      "               inCompiler COMMA_THERE) ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 212)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "void GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::method_checkAutomatonStates (" ;
    columnMarker = result.currentColumn () ;
    result << "GALGAS_location inErrorLocation,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const {\n"
      "  checkAutomatonStates (inErrorLocation, kMapAutomatonFinalIssue_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << ", inCompiler COMMA_THERE) ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_2) {
  }
  GALGAS_uint index_10039_ (0) ;
  if (in_MAP_5F_OVERRIDE_5F_LIST.isValid ()) {
    cEnumerator_mapOverrideList enumerator_10039 (in_MAP_5F_OVERRIDE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10039.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "//" ;
      result << GALGAS_string ("map override '").add_operation (enumerator_10039.current_mOverrideName (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 223)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 223)).stringValue () ;
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_10039.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 228)).stringValue () ;
      result << " [" ;
      result << enumerator_10039.current_mBranchBehaviourSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 229)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 229)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_10771_ (0) ;
      if (enumerator_10039.current_mBranchBehaviourSortedListForMapOverride (HERE).isValid ()) {
        cEnumerator_branchBehaviourSortedListForMapOverride enumerator_10771 (enumerator_10039.current_mBranchBehaviourSortedListForMapOverride (HERE), kENUMERATION_UP) ;
        while (enumerator_10771.hasCurrentObject ()) {
          result << "  {kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_10771.current_mStartStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 231)).stringValue () ;
          result << " /* " ;
          result << enumerator_10771.current_mStartStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 231)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_10771.current_mCurrentStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 232)).stringValue () ;
          result << " /* " ;
          result << enumerator_10771.current_mCurrentStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 232)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_10771.current_mFinalStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 233)).stringValue () ;
          result << " /* " ;
          result << enumerator_10771.current_mFinalStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 233)).stringValue () ;
          result << " */, " ;
          switch (enumerator_10771.current_mBehaviourMessageKind (HERE).enumValue ()) {
          case GALGAS_mapAutomatonMessageKind::kNotBuilt :
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_noMessage :
            {
              result << "kMapAutomatonNoIssue" ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage :
            {
              result << "kMapAutomatonIssueWarning" ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage :
            {
              result << "kMapAutomatonIssueError" ;
            }
            break ;
          }
          result << ", " ;
          result << enumerator_10771.current_mBehaviourMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 244)).stringValue () ;
          result << "},\n" ;
          index_10771_.increment () ;
          enumerator_10771.gotoNextObject () ;
        }
      }
      result << "} ;\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_10039.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 252)).stringValue () ;
      result << " [" ;
      result << enumerator_10039.current_mBranchCombinationSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 253)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 253)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_11992_ (0) ;
      if (enumerator_10039.current_mBranchCombinationSortedListForMapOverride (HERE).isValid ()) {
        cEnumerator_branchBehaviourSortedListForMapOverride enumerator_11992 (enumerator_10039.current_mBranchCombinationSortedListForMapOverride (HERE), kENUMERATION_UP) ;
        while (enumerator_11992.hasCurrentObject ()) {
          result << "  {kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_11992.current_mStartStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 255)).stringValue () ;
          result << " /* " ;
          result << enumerator_11992.current_mStartStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 255)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_11992.current_mCurrentStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 256)).stringValue () ;
          result << " /* " ;
          result << enumerator_11992.current_mCurrentStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 256)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_11992.current_mFinalStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 257)).stringValue () ;
          result << " /* " ;
          result << enumerator_11992.current_mFinalStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 257)).stringValue () ;
          result << " */, " ;
          switch (enumerator_11992.current_mBehaviourMessageKind (HERE).enumValue ()) {
          case GALGAS_mapAutomatonMessageKind::kNotBuilt :
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_noMessage :
            {
              result << "kMapAutomatonNoIssue" ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage :
            {
              result << "kMapAutomatonIssueWarning" ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage :
            {
              result << "kMapAutomatonIssueError" ;
            }
            break ;
          }
          result << ", " ;
          result << enumerator_11992.current_mBehaviourMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 268)).stringValue () ;
          result << "},\n" ;
          index_11992_.increment () ;
          enumerator_11992.gotoNextObject () ;
        }
      }
      result << "} ;\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_openOverrideFor" ;
      result << enumerator_10039.current_mOverrideName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 273)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 273)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "C_Compiler * inCompiler\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  openOverride (kBranchBehaviourForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_10039.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 275)).stringValue () ;
      result << ", " ;
      result << enumerator_10039.current_mBranchBehaviourSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 275)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 275)).stringValue () ;
      result << ",\n"
        "                kBranchCombinationForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_10039.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 276)).stringValue () ;
      result << ", " ;
      result << enumerator_10039.current_mBranchCombinationSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 276)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 276)).stringValue () ;
      result << ",\n"
        "                " ;
      result << enumerator_10039.current_mOverrideName (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 277)).stringValue () ;
      result << ",\n"
        "                inCompiler\n"
        "                COMMA_THERE) ;\n"
        "}\n"
        "\n" ;
      index_10039_.increment () ;
      enumerator_10039.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_13619_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_13619 (in_INSERT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13619.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_13619.current_mInsertMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 286)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_13969_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_13969 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_13969.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_13969.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 288)).stringValue () ;
          result << " inArgument" ;
          result << index_13969_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 288)).stringValue () ;
          index_13969_IDX.increment () ;
          enumerator_13969.gotoNextObject () ;
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
      GALGAS_uint index_14357_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_14357 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_14357.hasCurrentObject ()) {
          result << ", inArgument" ;
          result << index_14357_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 295)).stringValue () ;
          index_14357_IDX.increment () ;
          enumerator_14357.gotoNextObject () ;
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
      result << enumerator_13619.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 302)).stringValue () ;
      result << " ;\n" ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_13619.current_mInitialStateName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "insertInSharedMap (attributes,\n"
          "                   inCompiler,\n"
          "                   0,\n"
          "                   NULL,\n"
          "                   kInsertErrorMessage\n"
          "                   COMMA_THERE) ;\n" ;
      }else if (kBoolFalse == test_3) {
        result << "insertInSharedMap (attributes,\n"
          "                   inCompiler,\n"
          "                   kMapState_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_13619.current_mInitialStateName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 313)).stringValue () ;
        result << ",\n"
          "                   kMapStateNames_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " [kMapState_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_13619.current_mInitialStateName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 314)).stringValue () ;
        result << "],\n"
          "                   kInsertErrorMessage\n"
          "                   COMMA_THERE) ;\n" ;
      }
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_13619_.increment () ;
      enumerator_13619.gotoNextObject () ;
    }
  }
  GALGAS_uint index_15354_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_15354 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15354.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_15354.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 324)).stringValue () ;
      result << " = " ;
      result << enumerator_15354.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 324)).stringValue () ;
      result << " ;\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::" ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_15354.current_mActionName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "method_" ;
      }else if (kBoolFalse == test_4) {
        result << "setter_" ;
      }
      result << enumerator_15354.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 332)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_16067_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_16067 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_16067.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_16067.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 334)).stringValue () ;
          result << " & outArgument" ;
          result << index_16067_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 334)).stringValue () ;
          index_16067_IDX.increment () ;
          enumerator_16067.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) " ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_15354.current_mActionName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "const " ;
      }else if (kBoolFalse == test_5) {
      }
      result << "{\n" ;
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
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_15354.current_mActionName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "kMapAction_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_15354.current_mActionName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 346)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "kMapTransitions_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "kMapActionCount_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "#ifndef DO_NOT_GENERATE_CHECKINGS\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "  kMapStateCount_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "#endif\n" ;
      }else if (kBoolFalse == test_6) {
      }
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_15354.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 353)).stringValue () ;
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE) ;\n"
        "if (NULL == p) {\n" ;
      GALGAS_uint index_17047_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_17047 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_17047.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_17047_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 357)).stringValue () ;
          result << ".drop () ;\n" ;
          index_17047_IDX.increment () ;
          enumerator_17047.gotoNextObject () ;
        }
      }
      result << "}else{\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_17288_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_17288 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_17288.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_17288_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 362)).stringValue () ;
          result << " = p->mProperty_" ;
          result << enumerator_17288.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 362)).stringValue () ;
          result << " ;\n" ;
          index_17288_IDX.increment () ;
          enumerator_17288.gotoNextObject () ;
        }
      }
      result << "}\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_15354_.increment () ;
      enumerator_15354.gotoNextObject () ;
    }
  }
  GALGAS_uint index_17521_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17521 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17521.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_17521.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 371)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_17521.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 371)).stringValue () ;
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
      result << enumerator_17521.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 376)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_17521.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 379)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_17521_IDX.increment () ;
      enumerator_17521.gotoNextObject () ;
    }
  }
  GALGAS_uint index_18601_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18601 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18601.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_set" ;
      result << enumerator_18601.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 387)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 387)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_" ;
      result << enumerator_18601.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 387)).stringValue () ;
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
      result << enumerator_18601.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 395)).stringValue () ;
      result << " = inAttributeValue ;\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_18601_IDX.increment () ;
      enumerator_18601.gotoNextObject () ;
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
  GALGAS_uint index_20973_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20973 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20973.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_20973.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 428)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_20973.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 428)).stringValue () ;
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
      result << enumerator_20973.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 431)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_20973_IDX.increment () ;
      enumerator_20973.gotoNextObject () ;
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
  cEnumerator_typedPropertyList enumerator_53921 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_53921.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_53921.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1421)) ;
    enumerator_53921.gotoNextObject () ;
  }
  const GALGAS_sharedMapTypeForGeneration temp_1 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_2 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_3 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_4 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1425)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1426)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-shared-map.galgas", 1424))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_5.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1431)), temp_6.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1432)), temp_7.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1433)), temp_8.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1434)), temp_9.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1435)), temp_10.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1436)), temp_11.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1437)), temp_12.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1438)), temp_13.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1439)), temp_14.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1440)), temp_15.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1441)), temp_16.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1442)), temp_17.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1443)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1430))), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1430)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1455)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1456)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-shared-map.galgas", 1454))) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1468)) ;
  GALGAS_keySortedList var_keySortedList_55814 = GALGAS_keySortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 1469)) ;
  const GALGAS_sharedMapTypeForGeneration temp_1 = object ;
  cEnumerator_mapAutomatonStateMap enumerator_55859 (temp_1.readProperty_mMapAutomatonStateMap (), kENUMERATION_UP) ;
  while (enumerator_55859.hasCurrentObject ()) {
    var_keySortedList_55814.addAssign_operation (enumerator_55859.current_lkey (HERE).readProperty_string (), enumerator_55859.current_mStateIndex (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1471)) ;
    enumerator_55859.gotoNextObject () ;
  }
  const GALGAS_sharedMapTypeForGeneration temp_2 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_3 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_4 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_5 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_6 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_7 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_8 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_9 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_10 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_11 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1474)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mInsertMethodList (), temp_5.readProperty_mSearchMethodList (), temp_6.readProperty_mMapAutomatonStateMap (), temp_7.readProperty_mMapAutomatonActionMap (), temp_8.readProperty_mMapStateSortedList (), temp_9.readProperty_mMapOverrideList (), var_keySortedList_55814, temp_10.readProperty_mShadowBehaviour (), temp_11.readProperty_mShadowMessage () COMMA_SOURCE_FILE ("type-shared-map.galgas", 1473))) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_listTypeIndex_6791 ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mSortedListTypeName (), var_listTypeIndex_6791 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 178)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listElementTypeIndex_7051 ;
  {
  const GALGAS_sortedListDeclarationAST temp_1 = object ;
  const GALGAS_sortedListDeclarationAST temp_2 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 182)), temp_2.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 182)), var_listElementTypeIndex_7051 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 180)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_7139 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 186)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_7198 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 187)) ;
  GALGAS_formalParameterSignature var_setterFormalArgumentList_7260 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 188)) ;
  GALGAS_typedPropertyList var_typedAttributeList_7309 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 189)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_7359 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_7359.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_7494 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7359.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7494 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 191)) ;
    }
    GALGAS_bool var_hasSetter_7513 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_7540 = GALGAS_bool (false) ;
    var_typedAttributeList_7309.addAssign_operation (var_attributeTypeIndex_7494, enumerator_7359.current_mPropertyName (HERE), var_hasSetter_7513, var_hasSelector_7540  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 194)) ;
    var_enumerationDescriptor_7139.addAssign_operation (var_attributeTypeIndex_7494, enumerator_7359.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 195)) ;
    var_constructorAttributeTypeList_7198.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 196)), var_attributeTypeIndex_7494, enumerator_7359.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 196)) ;
    var_setterFormalArgumentList_7260.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 197)), var_attributeTypeIndex_7494, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-sorted-list.galgas", 197)), enumerator_7359.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 197)) ;
    enumerator_7359.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_7988 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 200)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_4 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_7988, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptySortedList"), temp_4.readProperty_mSortedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 201)) ;
  }
  {
  var_constructorMap_7988.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 209))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 209)), var_constructorAttributeTypeList_7198, GALGAS_bool (false), var_listTypeIndex_6791, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 208)) ;
  }
  GALGAS_getterMap var_getterMap_8448 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_8448, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 215)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_8448, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 216)) ;
  }
  GALGAS_setterMap var_setterMap_8670 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 224)) ;
  {
  var_setterMap_8670.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 226))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 226)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 227)), var_setterFormalArgumentList_7260, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 230)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 225)) ;
  }
  {
  var_setterMap_8670.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 234))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 234)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 235)), var_setterFormalArgumentList_7260, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 238)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 233)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_9172 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 242)) ;
  {
  var_instanceMethodMap_9172.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 244))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 244)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 245)), var_setterFormalArgumentList_7260, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 247)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 249)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-sorted-list.galgas", 250)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 243)) ;
  }
  {
  var_instanceMethodMap_9172.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 254))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 254)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 255)), var_setterFormalArgumentList_7260, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 257)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 259)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-sorted-list.galgas", 260)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 253)) ;
  }
  {
  const GALGAS_sortedListDeclarationAST temp_5 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_5.readProperty_mSortedListTypeName (), var_getterMap_8448, var_setterMap_8670, var_instanceMethodMap_9172, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 264)) ;
  }
  {
  const GALGAS_sortedListDeclarationAST temp_6 = object ;
  const GALGAS_sortedListDeclarationAST temp_7 = object ;
  const GALGAS_sortedListDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_6.readProperty_mSortedListTypeName (), temp_7.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-sorted-list.galgas", 280)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("type-sorted-list.galgas", 281)), GALGAS_bool (true), var_typedAttributeList_7309, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 284)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 285)), var_constructorMap_7988, var_getterMap_8448, var_setterMap_8670, var_instanceMethodMap_9172, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 290)), var_optionalMethodMap_6642, var_enumerationDescriptor_7139, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-sorted-list.galgas", 293)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-sorted-list.galgas", 293)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 293)), var_constructorAttributeTypeList_7198, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 295)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 296)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 297)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 298)), GALGAS_bool (false), var_listElementTypeIndex_7051, GALGAS_string ("emptySortedList"), GALGAS_string ("-sortedlist-").add_operation (temp_8.readProperty_mSortedListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-sorted-list.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 302)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-sorted-list.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 276)) ;
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
  GALGAS_lstring var_sortedListNameForUsefulness_11556 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 320)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_11556, var_sortedListNameForUsefulness_11556, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 321)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = object ;
  const GALGAS_sortedListDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_11746 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 322)), temp_2.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 322)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_11556, var_elementTypeNameForUsefulness_11746 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 323)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_11995 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 325)) ;
  GALGAS_propertyIndexMap var_attributeMap_12055 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 326)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_12105 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12105.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_12169 = function_typeNameForUsefulEntitiesGraph (enumerator_12105.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 328)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_11556, var_propertyTypeNameForUsefulness_12169 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 329)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_12331 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_12105.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 330)) ;
    GALGAS_bool var_hasSetter_12432 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_12459 = GALGAS_bool (true) ;
    var_typedAttributeList_11995.addAssign_operation (var_t_12331, enumerator_12105.current_mPropertyName (HERE), var_hasSetter_12432, var_hasSelector_12459  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 333)) ;
    {
    var_attributeMap_12055.setter_insertKey (enumerator_12105.current_mPropertyName (HERE), var_t_12331, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 338)) ;
    }
    enumerator_12105.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting_12676 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sorted-list.galgas", 341)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_12739 = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 342)) ;
  const GALGAS_sortedListDeclarationAST temp_4 = object ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_12783 (temp_4.readProperty_mSortDescriptorList (), kENUMERATION_UP) ;
  while (enumerator_12783.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_type_12897 ;
    var_attributeMap_12055.method_searchKey (enumerator_12783.current_mSortedAttributeName (HERE), var_type_12897, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 344)) ;
    var_sortDescriptorList_12739.addAssign_operation (var_type_12897, enumerator_12783.current_mSortedAttributeName (HERE).readProperty_string (), enumerator_12783.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 345)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_attributesUsedForSorting_12676.getter_hasKey (enumerator_12783.current_mSortedAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_12783.current_mSortedAttributeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_12783.current_mSortedAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 347)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 347)), fixItArray6  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 347)) ;
      }
    }
    var_attributesUsedForSorting_12676.addAssign_operation (enumerator_12783.current_mSortedAttributeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 349)) ;
    enumerator_12783.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_7 = object ;
  const GALGAS_sortedListDeclarationAST temp_8 = object ;
  const GALGAS_sortedListDeclarationAST temp_9 = object ;
  const GALGAS_sortedListDeclarationAST temp_10 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (temp_7.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 353)), GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_8.readProperty_mSortedListTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_9.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 356)), temp_10.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 356)), var_typedAttributeList_11995, var_sortDescriptorList_12739  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 352)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 402)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 403)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 401))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 407)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 408)), temp_5.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 409)), temp_6.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 410)), temp_7.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 411)), temp_8.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 412)), temp_9.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 413)), temp_10.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 414)), temp_11.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 415)), temp_12.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 416)), temp_13.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 417)), temp_14.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 418)), temp_15.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 419)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 406))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 406)) ;
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
  cEnumerator_typedPropertyList enumerator_16501 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_16501.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16501.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 430)) ;
    enumerator_16501.gotoNextObject () ;
  }
  const GALGAS_sortedListTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 432)) ;
  const GALGAS_sortedListTypeForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 433)) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = object ;
  const GALGAS_sortedListTypeForGeneration temp_4 = object ;
  const GALGAS_sortedListTypeForGeneration temp_5 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 435)), temp_4.readProperty_mTypedAttributeList (), temp_5.readProperty_mSortDescriptorList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 434))) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_structTypeIndex_5041 ;
  {
  const GALGAS_structDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mStructTypeName (), var_structTypeIndex_5041 COMMA_SOURCE_FILE ("type-struct.galgas", 118)) ;
  }
  GALGAS_propertyMap var_propertyMap_5108 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 120)) ;
  GALGAS_constructorMap var_constructorMap_5150 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 121)) ;
  GALGAS_functionSignature var_constructorPropertyTypeList_5208 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 122)) ;
  GALGAS_typedPropertyList var_typedPropertyList_5256 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 123)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_5326 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 124)) ;
  const GALGAS_structDeclarationAST temp_1 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_5405 (temp_1.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_5405.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_propertyTypeEntry_5548 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5405.current_mPropertyTypeName (HERE), var_propertyTypeEntry_5548 COMMA_SOURCE_FILE ("type-struct.galgas", 126)) ;
    }
    GALGAS_lstring var_selector_5575 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-struct.galgas", 127)) ;
    cEnumerator_lstringlist enumerator_5606 (enumerator_5405.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_5606.hasCurrentObject ()) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, enumerator_5606.current_mValue (HERE).readProperty_string ().objectCompare (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 129)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_selector_5575 = enumerator_5405.current_mPropertyName (HERE) ;
        }
      }
      enumerator_5606.gotoNextObject () ;
    }
    var_constructorPropertyTypeList_5208.addAssign_operation (var_selector_5575, var_propertyTypeEntry_5548, enumerator_5405.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-struct.galgas", 133)) ;
    var_typesToIncludeInHeaderCompilation_5326.addAssign_operation (var_propertyTypeEntry_5548  COMMA_SOURCE_FILE ("type-struct.galgas", 134)) ;
    GALGAS_bool test_3 = enumerator_5405.current_mIsPublic (HERE) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = enumerator_5405.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 135)) ;
    }
    GALGAS_bool var_hasSetter_5910 = test_3 ;
    GALGAS_bool var_hasSelector_5959 = GALGAS_bool (false) ;
    var_typedPropertyList_5256.addAssign_operation (var_propertyTypeEntry_5548, enumerator_5405.current_mPropertyName (HERE), var_hasSetter_5910, var_hasSelector_5959  COMMA_SOURCE_FILE ("type-struct.galgas", 137)) ;
    {
    var_propertyMap_5108.setter_insertKey (enumerator_5405.current_mPropertyName (HERE), enumerator_5405.current_mIsPublic (HERE), enumerator_5405.current_isConstant (HERE), var_propertyTypeEntry_5548, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 138)) ;
    }
    enumerator_5405.gotoNextObject () ;
  }
  {
  var_constructorMap_5150.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 141))  COMMA_SOURCE_FILE ("type-struct.galgas", 141)), var_constructorPropertyTypeList_5208, GALGAS_bool (false), var_structTypeIndex_5041, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 140)) ;
  }
  GALGAS_getterMap var_getterMap_6373 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6373, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 147)) ;
  }
  GALGAS_setterMap var_setterMap_6414 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 149)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6484 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 151)) ;
  {
  const GALGAS_structDeclarationAST temp_4 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_4.readProperty_mStructTypeName (), var_getterMap_6373, var_setterMap_6414, var_instanceMethodMap_6484, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 153)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_enumeratedType_6875 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_structDeclarationAST temp_6 = object ;
    test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mEnumeratedElementTypeName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_enumeratedType_6875 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-struct.galgas", 167)) ;
    }
  }
  if (kBoolFalse == test_5) {
    {
    const GALGAS_structDeclarationAST temp_7 = object ;
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_7.readProperty_mEnumeratedElementTypeName (), var_enumeratedType_6875 COMMA_SOURCE_FILE ("type-struct.galgas", 169)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_7206 = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_7250 (var_typedPropertyList_5256, kENUMERATION_UP) ;
  bool bool_8 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_7206.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_7250.hasCurrentObject () && bool_8) {
    while (enumerator_7250.hasCurrentObject () && bool_8) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, enumerator_7250.current_mPropertyTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 178)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_7250.current_mPropertyTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 178)).operator_not (SOURCE_FILE ("type-struct.galgas", 178)) COMMA_SOURCE_FILE ("type-struct.galgas", 178)).boolEnum () ;
        if (kBoolTrue == test_9) {
          var_defaultConstructorName_7206 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_7250.gotoNextObject () ;
      if (enumerator_7250.hasCurrentObject ()) {
        bool_8 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_7206.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  const GALGAS_structDeclarationAST temp_10 = object ;
  const GALGAS_structDeclarationAST temp_11 = object ;
  const GALGAS_structDeclarationAST temp_12 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_10.readProperty_mStructTypeName (), temp_11.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-struct.galgas", 187)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("type-struct.galgas", 188)), GALGAS_bool (false), var_typedPropertyList_5256, var_propertyMap_5108, var_typedPropertyList_5256, var_constructorMap_5150, var_getterMap_6373, var_setterMap_6414, var_instanceMethodMap_6484, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 197)), var_optionalMethodMap_4887, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 199)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-struct.galgas", 200)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-struct.galgas", 200)) COMMA_SOURCE_FILE ("type-struct.galgas", 200)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 201)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 202)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 203)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 204)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 205)), GALGAS_bool (false), var_enumeratedType_6875, var_defaultConstructorName_7206, GALGAS_string ("struct-").add_operation (temp_12.readProperty_mStructTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-struct.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 209)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-struct.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 183)) ;
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
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 219)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-struct.galgas", 220)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-struct.galgas", 221)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-struct.galgas", 222)) ;
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
  GALGAS_lstring var_structNameForUsefulness_9341 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mStructTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 236)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_9341, var_structNameForUsefulness_9341, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 237)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_structDeclarationAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mStructurePropertyList ().getter_length (SOURCE_FILE ("type-struct.galgas", 239)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructTypeName ().readProperty_location (), GALGAS_string ("a structure cannot be empty: it must have at least one property"), fixItArray4  COMMA_SOURCE_FILE ("type-struct.galgas", 240)) ;
    }
  }
  GALGAS_typedPropertyList var_typedPropertyList_9689 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 242)) ;
  GALGAS_propertyIndexMap var_propertyMap_9730 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 243)) ;
  const GALGAS_structDeclarationAST temp_5 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_9793 (temp_5.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_9793.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_9866 = function_typeNameForUsefulEntitiesGraph (enumerator_9793.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 245)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_9341, var_propertyTypeNameForUsefulness_9866 COMMA_SOURCE_FILE ("type-struct.galgas", 246)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_10024 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_9793.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 247)) ;
    GALGAS_bool var_hasSelector_10127 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_10151 (enumerator_9793.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_10151.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_10151.current_mValue (HERE).readProperty_string ().objectCompare (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 250)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_10151.current_mValue (HERE).readProperty_location (), GALGAS_string ("a struct property accepts only the %").add_operation (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 251)).add_operation (GALGAS_string (" feature"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 251)), fixItArray7  COMMA_SOURCE_FILE ("type-struct.galgas", 251)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_hasSelector_10127.boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_10151.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated %").add_operation (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 253)).add_operation (GALGAS_string (" feature"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 253)), fixItArray9  COMMA_SOURCE_FILE ("type-struct.galgas", 253)) ;
        }
      }
      if (kBoolFalse == test_8) {
        var_hasSelector_10127 = GALGAS_bool (true) ;
      }
      enumerator_10151.gotoNextObject () ;
    }
    GALGAS_bool var_hasSetter_10546 = GALGAS_bool (true) ;
    var_typedPropertyList_9689.addAssign_operation (var_t_10024, enumerator_9793.current_mPropertyName (HERE), var_hasSetter_10546, var_hasSelector_10127  COMMA_SOURCE_FILE ("type-struct.galgas", 259)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 264)).getter_hasKey (enumerator_9793.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-struct.galgas", 264)).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string var_m_10745 = GALGAS_string ("an property cannot be named:") ;
        cEnumerator_stringset enumerator_10819 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 266)), kENUMERATION_UP) ;
        while (enumerator_10819.hasCurrentObject ()) {
          var_m_10745.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_10819.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 267)) ;
          enumerator_10819.gotoNextObject () ;
        }
        var_m_10745.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 269)) ;
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_9793.current_mPropertyName (HERE).readProperty_location (), var_m_10745, fixItArray11  COMMA_SOURCE_FILE ("type-struct.galgas", 270)) ;
      }
    }
    {
    var_propertyMap_9730.setter_insertKey (enumerator_9793.current_mPropertyName (HERE), var_t_10024, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 272)) ;
    }
    enumerator_9793.gotoNextObject () ;
  }
  const GALGAS_structDeclarationAST temp_12 = object ;
  const GALGAS_structDeclarationAST temp_13 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (temp_12.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 275)), GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_13.readProperty_mStructTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 277)), var_typedPropertyList_9689  COMMA_SOURCE_FILE ("type-struct.galgas", 276))  COMMA_SOURCE_FILE ("type-struct.galgas", 274)) ;
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
  cEnumerator_typedPropertyList enumerator_12468 (temp_0.readProperty_mTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12468.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_12468.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 315)) ;
    enumerator_12468.gotoNextObject () ;
  }
  const GALGAS_structTypeForGeneration temp_1 = object ;
  const GALGAS_structTypeForGeneration temp_2 = object ;
  const GALGAS_structTypeForGeneration temp_3 = object ;
  const GALGAS_structTypeForGeneration temp_4 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_boolsetGenerationTemplate_structTypeHeader_31_ (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 319)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 320)), temp_3.readProperty_mTypedPropertyList (), GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 322)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 318))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_5.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 325)), temp_6.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 326)), temp_7.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 327)), temp_8.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 328)), temp_9.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 329)), temp_10.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 330)), temp_11.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 331)), temp_12.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 332)), temp_13.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 333)), temp_14.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 334)), temp_15.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 335)), temp_16.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 336)), temp_17.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 337)) COMMA_SOURCE_FILE ("type-struct.galgas", 324))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 324)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 348)) ;
  const GALGAS_structTypeForGeneration temp_1 = object ;
  const GALGAS_structTypeForGeneration temp_2 = object ;
  const GALGAS_structTypeForGeneration temp_3 = object ;
  const GALGAS_structTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_boolsetGenerationTemplate_structTypeSpecificImplementation (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 350)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 351)), temp_3.readProperty_mTypedPropertyList (), GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 353)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 349))) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6581 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 144)) ;
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
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_7173 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-getter.galgas", 152)) ;
  const GALGAS_abstractExtensionGetterAST temp_7 = object ;
  cEnumerator_formalInputParameterListAST enumerator_7259 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), kENUMERATION_UP) ;
  while (enumerator_7259.hasCurrentObject ()) {
    var_formalParameterListForGeneration_7173.addAssign_operation (enumerator_7259.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_7259.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 156)), enumerator_7259.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_7259.current_mFormalArgumentName (HERE), enumerator_7259.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 154)) ;
    enumerator_7259.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterAST temp_8 = object ;
  const GALGAS_abstractExtensionGetterAST temp_9 = object ;
  const GALGAS_abstractExtensionGetterAST temp_10 = object ;
  const GALGAS_abstractExtensionGetterAST temp_11 = object ;
  const GALGAS_abstractExtensionGetterAST temp_12 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 163)), GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 166)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 166)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 166)), var_selfType_6581, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 169)), var_formalParameterListForGeneration_7173  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 164))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 162)) ;
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
  cEnumerator_formalInputParameterListForGeneration enumerator_11601 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_11601.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11601.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 237)) ;
    enumerator_11601.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6139 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 126)) ;
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
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6690 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-method.galgas", 134)) ;
  const GALGAS_abstractExtensionMethodAST temp_7 = object ;
  cEnumerator_formalParameterListAST enumerator_6825 (temp_7.readProperty_mAbstractExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_6825.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6690.addAssign_operation (enumerator_6825.current_mFormalSelector (HERE), enumerator_6825.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_6825.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 139)), enumerator_6825.current_mFormalArgumentName (HERE), enumerator_6825.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 136)) ;
    enumerator_6825.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodAST temp_8 = object ;
  const GALGAS_abstractExtensionMethodAST temp_9 = object ;
  const GALGAS_abstractExtensionMethodAST temp_10 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (temp_8.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 145)), GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_6139.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)).add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)), var_selfType_6139, temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_6690  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 146))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 144)) ;
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
  cEnumerator_formalParameterListForGeneration enumerator_10814 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_10814.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10814.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 214)) ;
    enumerator_10814.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6137 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 126)) ;
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
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6689 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-setter.galgas", 134)) ;
  const GALGAS_abstractExtensionSetterAST temp_7 = object ;
  cEnumerator_formalParameterListAST enumerator_6823 (temp_7.readProperty_mAbstractExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_6823.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6689.addAssign_operation (enumerator_6823.current_mFormalSelector (HERE), enumerator_6823.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_6823.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 139)), enumerator_6823.current_mFormalArgumentName (HERE), enumerator_6823.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 136)) ;
    enumerator_6823.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterAST temp_8 = object ;
  const GALGAS_abstractExtensionSetterAST temp_9 = object ;
  const GALGAS_abstractExtensionSetterAST temp_10 = object ;
  const GALGAS_abstractExtensionSetterAST temp_11 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (temp_8.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 145)), GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 148)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 148)).add_operation (temp_10.readProperty_mAbstractExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 148)), var_selfType_6137, temp_11.readProperty_mAbstractExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_6689  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 146))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 144)) ;
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
  cEnumerator_formalParameterListForGeneration enumerator_10808 (temp_3.readProperty_mAbstractExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_10808.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10808.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 216)) ;
    enumerator_10808.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfType_7533 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 166)) ;
  GALGAS_string var_selfObjectName_7642 ;
  GALGAS_string var_selfObjectAccessor_7675 ;
  GALGAS_bool var_implementedAsFunction_7709 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_selfType_7533.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 171)).getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 171)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectName_7642 = GALGAS_string ("object") ;
      var_selfObjectAccessor_7675 = GALGAS_string ("object->") ;
      var_implementedAsFunction_7709 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_7642 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_7675 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_7709 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionGetterAST temp_5 = object ;
  GALGAS_analysisContext var_analysisContext_8057 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_7642, GALGAS_selfAvailability::constructor_available (var_selfType_7533, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("extension-getter.galgas", 185)), var_selfObjectAccessor_7675, temp_5.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 181)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_8947 ;
  GALGAS_unifiedTypeMap_2D_entry var_returnType_8967 ;
  GALGAS_string var_returnVariableCppName_8998 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9044 ;
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
  routine_analyzeFunctionBody (var_nameForUsefulness_7170, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8057, temp_6.readProperty_mExtensionGetterFormalInputParameterList (), temp_7, var_selfObjectAccessor_7675, temp_9.readProperty_mExtensionGetterInstructionList (), temp_10.readProperty_mExtensionGetterReturnedVariableName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_8947, var_returnType_8967, var_returnVariableCppName_8998, var_semanticInstructionListForGeneration_9044, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 189)) ;
  }
  const GALGAS_extensionGetterAST temp_13 = object ;
  const GALGAS_extensionGetterAST temp_14 = object ;
  const GALGAS_extensionGetterAST temp_15 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (temp_13.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 210)), GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (var_selfType_7533.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 213)).getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 213)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 213)).add_operation (temp_14.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 213)), var_selfType_7533, temp_15.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunction_7709, var_returnType_8967, var_returnVariableCppName_8998, var_formalParameterListForGeneration_8947, var_selfType_7533.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 220)), var_semanticInstructionListForGeneration_9044  COMMA_SOURCE_FILE ("extension-getter.galgas", 211))  COMMA_SOURCE_FILE ("extension-getter.galgas", 209)) ;
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
  cEnumerator_formalInputParameterListForGeneration enumerator_13170 (temp_0.readProperty_mExtensionGetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_13170.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13170.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 298)) ;
    enumerator_13170.gotoNextObject () ;
  }
  const GALGAS_extensionGetterForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 300)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_extensionGetterForGeneration temp_3 = object ;
    test_2 = temp_3.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_extensionGetterForGeneration temp_4 = object ;
      GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_13423 = temp_4.readProperty_mExtensionGetterFormalParameterList () ;
      {
      const GALGAS_extensionGetterForGeneration temp_5 = object ;
      var_extensionReaderFormalParameterList_13423.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 304)), temp_5.readProperty_mReceiverType (), GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 307))  COMMA_SOURCE_FILE ("extension-getter.galgas", 307)), GALGAS_bool (true), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 303)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_6 = object ;
      const GALGAS_extensionGetterForGeneration temp_7 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (temp_6.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 311)).getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 311)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 311)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 311))  COMMA_SOURCE_FILE ("extension-getter.galgas", 311)) ;
      GALGAS_string var_code_14155 ;
      {
      const GALGAS_extensionGetterForGeneration temp_8 = object ;
      const GALGAS_extensionGetterForGeneration temp_9 = object ;
      const GALGAS_extensionGetterForGeneration temp_10 = object ;
      const GALGAS_extensionGetterForGeneration temp_11 = object ;
      routine_generateFunction (GALGAS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 313)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_13423, temp_9.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("C_Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GALGAS_bool (false), var_code_14155, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 312)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_12 = object ;
      const GALGAS_extensionGetterForGeneration temp_13 = object ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, temp_12.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 324)), temp_13.readProperty_mExtensionGetterName (), var_code_14155 COMMA_SOURCE_FILE ("extension-getter.galgas", 323))) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_extensionGetterForGeneration temp_14 = object ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 329)) ;
    const GALGAS_extensionGetterForGeneration temp_15 = object ;
    GALGAS_unifiedTypeMap_2D_entry var_baseType_14464 = temp_15.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_14509 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 332)).isValid ()) {
      uint32_t variant_14525 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 332)).uintValue () ;
      bool loop_14525 = true ;
      while (loop_14525) {
        loop_14525 = var_searching_14509.isValid () ;
        if (loop_14525) {
          loop_14525 = var_searching_14509.boolValue () ;
        }
        if (loop_14525 && (0 == variant_14525)) {
          loop_14525 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 332)) ;
        }
        if (loop_14525) {
          variant_14525 -- ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = var_baseType_14464.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 333)).getter_isNull (SOURCE_FILE ("extension-getter.galgas", 333)).operator_not (SOURCE_FILE ("extension-getter.galgas", 333)).boolEnum () ;
            if (kBoolTrue == test_16) {
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                const GALGAS_extensionGetterForGeneration temp_18 = object ;
                test_17 = var_baseType_14464.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 334)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 334)).getter_hasKey (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas", 334)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  var_baseType_14464 = var_baseType_14464.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 335)) ;
                }
              }
              if (kBoolFalse == test_17) {
                var_searching_14509 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_16) {
            var_searching_14509 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionGetterForGeneration temp_19 = object ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_14464.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 343)).getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 343)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 343)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 343))  COMMA_SOURCE_FILE ("extension-getter.galgas", 343)) ;
    GALGAS_string var_extensionGetterCode_15319 ;
    {
    const GALGAS_extensionGetterForGeneration temp_20 = object ;
    const GALGAS_extensionGetterForGeneration temp_21 = object ;
    const GALGAS_extensionGetterForGeneration temp_22 = object ;
    const GALGAS_extensionGetterForGeneration temp_23 = object ;
    const GALGAS_extensionGetterForGeneration temp_24 = object ;
    const GALGAS_extensionGetterForGeneration temp_25 = object ;
    routine_generateExtensionGetter (temp_20.readProperty_mReceiverType (), GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, temp_21.readProperty_mExtensionGetterName (), temp_22.readProperty_mExtensionGetterFormalParameterList (), temp_23.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("C_Compiler"), temp_24.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 352)), temp_25.readProperty_mResultVarCppName (), var_extensionGetterCode_15319, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 344)) ;
    }
    const GALGAS_extensionGetterForGeneration temp_26 = object ;
    const GALGAS_extensionGetterForGeneration temp_27 = object ;
    const GALGAS_extensionGetterForGeneration temp_28 = object ;
    const GALGAS_extensionGetterForGeneration temp_29 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, temp_26.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 357)), temp_27.readProperty_mExtensionGetterName (), temp_28.readProperty_mExtensionGetterFormalParameterList (), temp_29.readProperty_mResultType (), var_extensionGetterCode_15319 COMMA_SOURCE_FILE ("extension-getter.galgas", 356))) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6838 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 145)) ;
  GALGAS_string var_selfObjectName_6948 ;
  GALGAS_string var_selfObjectAccessor_6981 ;
  GALGAS_bool var_implementedAsFunction_7015 ;
  GALGAS_bool var_isReferenceClass_7070 = GALGAS_bool (false) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_isReference_7153 ;
    const bool optionalResult7123 = var_selfType_6838.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 151)).optional_classType (var_isReference_7153) ;
    if (!optionalResult7123) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      var_isReferenceClass_7070 = var_isReference_7153 ;
      var_selfObjectName_6948 = GALGAS_string ("object") ;
      var_selfObjectAccessor_6981 = GALGAS_string ("object->") ;
      var_implementedAsFunction_7015 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_6948 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_6981 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_7015 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionMethodAST temp_5 = object ;
  GALGAS_analysisContext var_analysisContext_7461 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_6948, GALGAS_selfAvailability::constructor_available (var_selfType_6838, GALGAS_bool (false), var_isReferenceClass_7070  COMMA_SOURCE_FILE ("extension-method.galgas", 166)), var_selfObjectAccessor_6981, temp_5.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-method.galgas", 162)) ;
  GALGAS_bool var_isRefClass_7772 = GALGAS_bool (false) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    GALGAS_bool var_reference_7853 ;
    const bool optionalResult7825 = var_selfType_6838.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 171)).optional_classType (var_reference_7853) ;
    if (!optionalResult7825) {
      test_6 = kBoolFalse ;
    }
    if (kBoolTrue == test_6) {
      var_isRefClass_7772 = var_reference_7853 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_7916 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 174)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_7967 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 175)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsEqual, var_selfType_6838.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 176)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-method.galgas", 176)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_nonMutableProperties_7967 = var_selfType_6838.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 177)) ;
    }
  }
  if (kBoolFalse == test_7) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_bool var_isReference_8179 ;
      const bool optionalResult8149 = var_selfType_6838.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 178)).optional_classType (var_isReference_8179) ;
      if (!optionalResult8149) {
        test_8 = kBoolFalse ;
      }
      if (kBoolTrue == test_8) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_isReference_8179.boolEnum () ;
          if (kBoolTrue == test_9) {
            var_mutableProperties_7916 = var_selfType_6838.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 180)) ;
          }
        }
        if (kBoolFalse == test_9) {
          var_nonMutableProperties_7967 = var_selfType_6838.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 182)) ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8707 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8749 ;
  {
  const GALGAS_extensionMethodAST temp_10 = object ;
  const GALGAS_extensionMethodAST temp_11 = object ;
  const GALGAS_extensionMethodAST temp_12 = object ;
  routine_analyzeRoutineBody (var_nameForUsefulness_6474, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_7461, temp_10.readProperty_mExtensionMethodFormalParameterList (), var_nonMutableProperties_7967, var_mutableProperties_7916, temp_11.readProperty_mExtensionMethodInstructionList (), temp_12.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_8707, var_formalParameterListForGeneration_8749, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 185)) ;
  }
  const GALGAS_extensionMethodAST temp_13 = object ;
  const GALGAS_extensionMethodAST temp_14 = object ;
  const GALGAS_extensionMethodAST temp_15 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (temp_13.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 199)), GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_6838.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 202)).getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 202)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 202)).add_operation (temp_14.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 202)), var_selfType_6838, temp_15.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_7015, var_formalParameterListForGeneration_8749, var_selfType_6838.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 207)), var_semanticInstructionListForGeneration_8707  COMMA_SOURCE_FILE ("extension-method.galgas", 200))  COMMA_SOURCE_FILE ("extension-method.galgas", 198)) ;
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
      GALGAS_formalParameterListForGeneration var_extensionMethodFormalParameterList_12732 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GALGAS_extensionMethodForGeneration temp_3 = object ;
      var_extensionMethodFormalParameterList_12732.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 282)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 283)), temp_3.readProperty_mReceiverType (), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 285))  COMMA_SOURCE_FILE ("extension-method.galgas", 285)), GALGAS_string ("inObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 281)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_4 = object ;
      const GALGAS_extensionMethodForGeneration temp_5 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (temp_4.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 289)).getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 289)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 289)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 289))  COMMA_SOURCE_FILE ("extension-method.galgas", 289)) ;
      GALGAS_string var_code_13634 ;
      {
      const GALGAS_extensionMethodForGeneration temp_6 = object ;
      const GALGAS_extensionMethodForGeneration temp_7 = object ;
      routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 292)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_12732, temp_7.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_13634, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 290)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_8 = object ;
      const GALGAS_extensionMethodForGeneration temp_9 = object ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, temp_8.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 304)), temp_9.readProperty_mExtensionMethodName (), var_code_13634 COMMA_SOURCE_FILE ("extension-method.galgas", 303))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_10 = object ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 309)) ;
    const GALGAS_extensionMethodForGeneration temp_11 = object ;
    cEnumerator_formalParameterListForGeneration enumerator_13941 (temp_11.readProperty_mExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
    while (enumerator_13941.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_13941.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 311)) ;
      enumerator_13941.gotoNextObject () ;
    }
    const GALGAS_extensionMethodForGeneration temp_12 = object ;
    GALGAS_unifiedTypeMap_2D_entry var_baseType_14099 = temp_12.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_14144 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 315)).isValid ()) {
      uint32_t variant_14160 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 315)).uintValue () ;
      bool loop_14160 = true ;
      while (loop_14160) {
        loop_14160 = var_searching_14144.isValid () ;
        if (loop_14160) {
          loop_14160 = var_searching_14144.boolValue () ;
        }
        if (loop_14160 && (0 == variant_14160)) {
          loop_14160 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 315)) ;
        }
        if (loop_14160) {
          variant_14160 -- ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = var_baseType_14099.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 316)).getter_isNull (SOURCE_FILE ("extension-method.galgas", 316)).operator_not (SOURCE_FILE ("extension-method.galgas", 316)).boolEnum () ;
            if (kBoolTrue == test_13) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                const GALGAS_extensionMethodForGeneration temp_15 = object ;
                test_14 = var_baseType_14099.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 317)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 317)).getter_hasKey (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas", 317)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  var_baseType_14099 = var_baseType_14099.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 318)) ;
                }
              }
              if (kBoolFalse == test_14) {
                var_searching_14144 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_13) {
            var_searching_14144 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionMethodForGeneration temp_16 = object ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType_14099.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 326)).getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 326)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 326)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 326))  COMMA_SOURCE_FILE ("extension-method.galgas", 326)) ;
    GALGAS_string var_methodImplementation_14882 ;
    {
    const GALGAS_extensionMethodForGeneration temp_17 = object ;
    const GALGAS_extensionMethodForGeneration temp_18 = object ;
    const GALGAS_extensionMethodForGeneration temp_19 = object ;
    const GALGAS_extensionMethodForGeneration temp_20 = object ;
    routine_generateExtensionMethod (temp_17.readProperty_mReceiverType (), GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_14882, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 327)) ;
    }
    const GALGAS_extensionMethodForGeneration temp_21 = object ;
    const GALGAS_extensionMethodForGeneration temp_22 = object ;
    const GALGAS_extensionMethodForGeneration temp_23 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, temp_21.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 337)), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_14882 COMMA_SOURCE_FILE ("extension-method.galgas", 336))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionMethodForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_extensionMethodForGeneration.mSlotID,
                                                     extensionMethod_extensionMethodForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionMethodForGeneration_appendSpecificImplementation (defineExtensionMethod_extensionMethodForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionSetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_extensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  const GALGAS_extensionSetterAST temp_0 = object ;
  const GALGAS_extensionSetterAST temp_1 = object ;
  result_result = GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 81)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 81)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 81)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_extensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                          extensionGetter_extensionSetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_extensionSetterAST_keyRepresentation (defineExtensionGetter_extensionSetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  const GALGAS_extensionSetterAST temp_0 = object ;
  const GALGAS_extensionSetterAST temp_1 = object ;
  const GALGAS_extensionSetterAST temp_2 = object ;
  GALGAS_lstring var_key_4412 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 94)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 94)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 94)), temp_2.readProperty_mExtensionSetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-setter.galgas", 94)) ;
  {
  const GALGAS_extensionSetterAST temp_3 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4412, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 95)) ;
  }
  {
  const GALGAS_extensionSetterAST temp_4 = object ;
  const GALGAS_extensionSetterAST temp_5 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4412, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 96)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-setter.galgas", 96)) COMMA_SOURCE_FILE ("extension-setter.galgas", 96)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionSetterAST temp_7 = object ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-setter.galgas", 98)).operator_not (SOURCE_FILE ("extension-setter.galgas", 98)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionSetterAST temp_8 = object ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-setter.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 99)) ;
      }
    }
  }
  const GALGAS_extensionSetterAST temp_9 = object ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_4902 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-setter.galgas", 104)) ;
  if (NULL != objectArray_4902) {
    macroValidSharedObject (objectArray_4902, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_extensionSetterAST temp_10 = object ;
    const GALGAS_extensionSetterAST temp_11 = object ;
    objectArray_4902->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionSetterName (), temp_11.readProperty_mExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 105)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                                extensionMethod_extensionSetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_extensionSetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                               extensionMethod_extensionSetterAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionSetterAST_enterInSemanticContext (defineExtensionMethod_extensionSetterAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  const GALGAS_extensionSetterAST temp_0 = object ;
  const GALGAS_extensionSetterAST temp_1 = object ;
  GALGAS_lstring var_nameForUsefulness_6497 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 136)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6497, var_nameForUsefulness_6497, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 137)) ;
  }
  const GALGAS_extensionSetterAST temp_2 = object ;
  GALGAS_lstring var_typeNameForUsefulness_6679 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 138)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_6679, var_nameForUsefulness_6497 COMMA_SOURCE_FILE ("extension-setter.galgas", 139)) ;
  }
  const GALGAS_extensionSetterAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6860 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 141)) ;
  GALGAS_string var_selfObjectName_6969 ;
  GALGAS_string var_selfObjectAccessor_7002 ;
  GALGAS_bool var_implementedAsFunction_7036 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_selfType_6860.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 146)).getter_isClassType (SOURCE_FILE ("extension-setter.galgas", 146)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectName_6969 = GALGAS_string ("object") ;
      var_selfObjectAccessor_7002 = GALGAS_string ("object->") ;
      var_implementedAsFunction_7036 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_6969 = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor_7002 = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction_7036 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionSetterAST temp_5 = object ;
  GALGAS_analysisContext var_analysisContext_7384 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_6969, GALGAS_selfAvailability::constructor_available (var_selfType_6860, GALGAS_bool (true), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-setter.galgas", 160)), var_selfObjectAccessor_7002, temp_5.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-setter.galgas", 156)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8027 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8069 ;
  {
  const GALGAS_extensionSetterAST temp_6 = object ;
  const GALGAS_extensionSetterAST temp_7 = object ;
  const GALGAS_extensionSetterAST temp_8 = object ;
  routine_analyzeRoutineBody (var_nameForUsefulness_6497, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_7384, temp_6.readProperty_mExtensionSetterFormalParameterList (), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 169)), var_selfType_6860.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 170)), temp_7.readProperty_mExtensionSetterInstructionList (), temp_8.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_8027, var_formalParameterListForGeneration_8069, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 164)) ;
  }
  const GALGAS_extensionSetterAST temp_9 = object ;
  const GALGAS_extensionSetterAST temp_10 = object ;
  const GALGAS_extensionSetterAST temp_11 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (temp_9.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 178)), GALGAS_extensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (var_selfType_6860.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 181)).getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 181)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 181)).add_operation (temp_10.readProperty_mExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 181)), var_selfType_6860, temp_11.readProperty_mExtensionSetterName ().readProperty_string (), var_implementedAsFunction_7036, var_formalParameterListForGeneration_8069, var_selfType_6860.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 186)), var_semanticInstructionListForGeneration_8027  COMMA_SOURCE_FILE ("extension-setter.galgas", 179))  COMMA_SOURCE_FILE ("extension-setter.galgas", 177)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                         extensionMethod_extensionSetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionSetterAST_semanticAnalysis (defineExtensionMethod_extensionSetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & ioArgument_ioExtensionSettierListMap,
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
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  const GALGAS_extensionSetterAST temp_0 = object ;
  const GALGAS_extensionSetterAST temp_1 = object ;
  ioArgument_ioExtensionSettierListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-setter.galgas", 208)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                               extensionMethod_extensionSetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionSetterAST_buildExtensionListMaps (defineExtensionMethod_extensionSetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionSetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_extensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-setter.galgas", 229)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_extensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_extensionSetterForGeneration.mSlotID,
                                   extensionGetter_extensionSetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_extensionSetterForGeneration_headerKind (defineExtensionGetter_extensionSetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterForGeneration * object = (const cPtr_extensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_extensionSetterForGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionSetterForGeneration temp_2 = object ;
      const GALGAS_extensionSetterForGeneration temp_3 = object ;
      const GALGAS_extensionSetterForGeneration temp_4 = object ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, temp_2.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 239)), temp_3.readProperty_mExtensionSetterName (), temp_4.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 238))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionSetterForGeneration temp_5 = object ;
    const GALGAS_extensionSetterForGeneration temp_6 = object ;
    const GALGAS_extensionSetterForGeneration temp_7 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (inCompiler, temp_5.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 245)), temp_6.readProperty_mExtensionSetterName (), temp_7.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 244))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionSetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_extensionSetterForGeneration.mSlotID,
                                              extensionMethod_extensionSetterForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionSetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_extensionSetterForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterForGeneration * object = (const cPtr_extensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterForGeneration) ;
  const GALGAS_extensionSetterForGeneration temp_0 = object ;
  cEnumerator_formalParameterListForGeneration enumerator_11975 (temp_0.readProperty_mExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_11975.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11975.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 260)) ;
    enumerator_11975.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_extensionSetterForGeneration temp_2 = object ;
    test_1 = temp_2.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_extensionSetterForGeneration temp_3 = object ;
      GALGAS_formalParameterListForGeneration var_extensionSetterFormalParameterList_12171 = temp_3.readProperty_mExtensionSetterFormalParameterList () ;
      {
      const GALGAS_extensionSetterForGeneration temp_4 = object ;
      var_extensionSetterFormalParameterList_12171.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas", 265)), GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.galgas", 266)), temp_4.readProperty_mReceiverType (), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 268))  COMMA_SOURCE_FILE ("extension-setter.galgas", 268)), GALGAS_string ("ioObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 264)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_5 = object ;
      const GALGAS_extensionSetterForGeneration temp_6 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (temp_5.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 272)).getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 272)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 272)).add_operation (temp_6.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 272))  COMMA_SOURCE_FILE ("extension-setter.galgas", 272)) ;
      GALGAS_string var_code_13069 ;
      {
      const GALGAS_extensionSetterForGeneration temp_7 = object ;
      const GALGAS_extensionSetterForGeneration temp_8 = object ;
      routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionSetter_").add_operation (temp_7.readProperty_mExtensionSetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 275)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_12171, temp_8.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_13069, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 273)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_9 = object ;
      const GALGAS_extensionSetterForGeneration temp_10 = object ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, temp_9.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 287)), temp_10.readProperty_mExtensionSetterName (), var_code_13069 COMMA_SOURCE_FILE ("extension-setter.galgas", 286))) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_extensionSetterForGeneration temp_11 = object ;
    GALGAS_unifiedTypeMap_2D_entry var_baseType_13318 = temp_11.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_13363 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 294)).isValid ()) {
      uint32_t variant_13379 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 294)).uintValue () ;
      bool loop_13379 = true ;
      while (loop_13379) {
        loop_13379 = var_searching_13363.isValid () ;
        if (loop_13379) {
          loop_13379 = var_searching_13363.boolValue () ;
        }
        if (loop_13379 && (0 == variant_13379)) {
          loop_13379 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas", 294)) ;
        }
        if (loop_13379) {
          variant_13379 -- ;
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = var_baseType_13318.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 295)).getter_isNull (SOURCE_FILE ("extension-setter.galgas", 295)).operator_not (SOURCE_FILE ("extension-setter.galgas", 295)).boolEnum () ;
            if (kBoolTrue == test_12) {
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                const GALGAS_extensionSetterForGeneration temp_14 = object ;
                test_13 = var_baseType_13318.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 296)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 296)).getter_hasKey (temp_14.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-setter.galgas", 296)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_baseType_13318 = var_baseType_13318.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 297)) ;
                }
              }
              if (kBoolFalse == test_13) {
                var_searching_13363 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_12) {
            var_searching_13363 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionSetterForGeneration temp_15 = object ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType_13318.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 305)).getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 305)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 305)).add_operation (temp_15.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 305))  COMMA_SOURCE_FILE ("extension-setter.galgas", 305)) ;
    extensionMethod_addHeaderFileName (var_baseType_13318, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 306)) ;
    GALGAS_string var_setterImplementation_14150 ;
    {
    const GALGAS_extensionSetterForGeneration temp_16 = object ;
    const GALGAS_extensionSetterForGeneration temp_17 = object ;
    const GALGAS_extensionSetterForGeneration temp_18 = object ;
    const GALGAS_extensionSetterForGeneration temp_19 = object ;
    routine_generateExtensionSetter (temp_16.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 308)), GALGAS_string::makeEmptyString (), temp_17.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionSetterFormalParameterList (), temp_19.readProperty_mSemanticInstructionListForGeneration (), var_setterImplementation_14150, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 307)) ;
    }
    const GALGAS_extensionSetterForGeneration temp_20 = object ;
    const GALGAS_extensionSetterForGeneration temp_21 = object ;
    const GALGAS_extensionSetterForGeneration temp_22 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (inCompiler, temp_20.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 317)), temp_21.readProperty_mExtensionSetterName (), temp_22.readProperty_mExtensionSetterFormalParameterList (), var_setterImplementation_14150 COMMA_SOURCE_FILE ("extension-setter.galgas", 316))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionSetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_extensionSetterForGeneration.mSlotID,
                                                     extensionMethod_extensionSetterForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionSetterForGeneration_appendSpecificImplementation (defineExtensionMethod_extensionSetterForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionGetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = object ;
  result_result = GALGAS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 85)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 85)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 85)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingAbstractExtensionGetterAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                          GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 98)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                                extensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext (defineExtensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6096 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 129)) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_returnType_6210 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_1.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 131)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_selfType_6096.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 133)).getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 133)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 133)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_6096.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)), fixItArray4  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_selfType_6096.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 135)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_overridingAbstractExtensionGetterAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (var_selfType_6096.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_6771 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_6814 = var_selfType_6096.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 140)) ;
  GALGAS_functionSignature var_inheritedSignature_6882 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 141)) ;
  GALGAS_unifiedTypeMap_2D_entry var_inheritedReturnType_6935 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 142)) ;
  GALGAS_location var_inheritedDeclarationLocation_6990 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 143)) ;
  if (constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 144)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 144)).isValid ()) {
    uint32_t variant_7014 = constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 144)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 144)).uintValue () ;
    bool loop_7014 = true ;
    while (loop_7014) {
      loop_7014 = var_superType_6814.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 145)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 145)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6771.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 145)).isValid () ;
      if (loop_7014) {
        loop_7014 = var_superType_6814.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 145)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 145)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6771.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 145)).boolValue () ;
      }
      if (loop_7014 && (0 == variant_7014)) {
        loop_7014 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 144)) ;
      }
      if (loop_7014) {
        variant_7014 -- ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          const GALGAS_overridingAbstractExtensionGetterAST temp_9 = object ;
          test_8 = var_superType_6814.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 146)).getter_hasKey (temp_9.readProperty_mAbstractExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 146)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_methodQualifier var_qualifier_7423 ;
            const GALGAS_overridingAbstractExtensionGetterAST temp_10 = object ;
            GALGAS_methodKind joker_7293 ; // Joker input parameter
            GALGAS_bool joker_7370 ; // Joker input parameter
            GALGAS_string joker_7433 ; // Joker input parameter
            var_superType_6814.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 147)).method_searchKey (temp_10.readProperty_mAbstractExtensionGetterName (), joker_7293, var_inheritedSignature_6882, var_inheritedDeclarationLocation_6990, joker_7370, var_inheritedReturnType_6935, var_qualifier_7423, joker_7433, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 147)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsInfOrEqual, var_qualifier_7423.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 157)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_baseTypeName_6771 = var_superType_6814.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 158)) ;
              }
            }
          }
        }
        var_superType_6814 = var_superType_6814.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 161)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, var_baseTypeName_6771.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_13 = object ;
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 164)) ;
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6771.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_7819 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 168)) ;
      const GALGAS_overridingAbstractExtensionGetterAST temp_16 = object ;
      cEnumerator_formalInputParameterListAST enumerator_7945 (temp_16.readProperty_mAbstractExtensionGetterFormalInputParameterList (), kENUMERATION_UP) ;
      while (enumerator_7945.hasCurrentObject ()) {
        var_formalParameterListForGeneration_7819.addAssign_operation (enumerator_7945.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_7945.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 172)), enumerator_7945.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_7945.current_mFormalArgumentName (HERE), enumerator_7945.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 170)) ;
        enumerator_7945.gotoNextObject () ;
      }
      {
      const GALGAS_overridingAbstractExtensionGetterAST temp_17 = object ;
      routine_checkGetterSignatures (var_formalParameterListForGeneration_7819, var_returnType_6210, temp_17.readProperty_mAbstractExtensionGetterName ().readProperty_location (), var_inheritedSignature_6882, var_inheritedReturnType_6935, var_inheritedDeclarationLocation_6990, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 177)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
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
                                                                                         GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionGetterListMap,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = object ;
  ioArgument_ioOverridingAbstractExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 205)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionMethodAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_1 = object ;
  result_result = GALGAS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 68)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 68)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 68)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingAbstractExtensionMethodAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                          GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 82)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                                extensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext (defineExtensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_5732 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 114)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_selfType_5732.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 116)).getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 116)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_5732.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 117)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 117)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 117)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_selfType_5732.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 118)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionMethodAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (var_selfType_5732.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_6266 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_6309 = var_selfType_5732.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 123)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_6358 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 124)) ;
  GALGAS_location var_inheritedDeclarationLocation_6434 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 125)) ;
  if (constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 126)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 126)).isValid ()) {
    uint32_t variant_6458 = constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 126)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 126)).uintValue () ;
    bool loop_6458 = true ;
    while (loop_6458) {
      loop_6458 = var_superType_6309.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6266.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)).isValid () ;
      if (loop_6458) {
        loop_6458 = var_superType_6309.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6266.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)).boolValue () ;
      }
      if (loop_6458 && (0 == variant_6458)) {
        loop_6458 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 126)) ;
      }
      if (loop_6458) {
        variant_6458 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingAbstractExtensionMethodAST temp_8 = object ;
          test_7 = var_superType_6309.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 128)).getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 128)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_6858 ;
            const GALGAS_overridingAbstractExtensionMethodAST temp_9 = object ;
            GALGAS_methodKind joker_6757 ; // Joker input parameter
            GALGAS_bool joker_6834 ; // Joker input parameter
            GALGAS_instanceMethodMutability joker_6868_2 ; // Joker input parameter
            GALGAS_string joker_6868_1 ; // Joker input parameter
            var_superType_6309.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 129)).method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_6757, var_inheritedSignature_6358, var_inheritedDeclarationLocation_6434, joker_6834, var_qualifier_6858, joker_6868_2, joker_6868_1, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 129)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_6858.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 138)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_6266 = var_superType_6309.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 139)) ;
              }
            }
          }
        }
        var_superType_6309 = var_superType_6309.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 142)) ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_6266.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 145)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_7218 = GALGAS_localVarManager::constructor_default (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 148)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_7422 ;
  {
  const GALGAS_overridingAbstractExtensionMethodAST temp_14 = object ;
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), var_variableMap_7218, var_formalParameterListForGeneration_7422, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 149)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6266.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GALGAS_overridingAbstractExtensionMethodAST temp_16 = object ;
      routine_checkMethodSignatures (var_formalParameterListForGeneration_7422, temp_16.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_6358, var_inheritedDeclarationLocation_6434, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 157)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
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
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_1 = object ;
  ioArgument_ioOverridingAbstractExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 184)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionSetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_1 = object ;
  result_result = GALGAS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 66)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 66)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 66)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingAbstractExtensionSetterAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                          GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 80)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                                extensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext (defineExtensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_5567 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 111)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_selfType_5567.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 113)).getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 113)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 113)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_5567.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 114)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 114)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 114)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_selfType_5567.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 115)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionSetterAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (var_selfType_5567.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_6101 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_6144 = var_selfType_5567.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 120)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_6193 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 121)) ;
  GALGAS_location var_inheritedDeclarationLocation_6259 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 122)) ;
  if (constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 123)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 123)).isValid ()) {
    uint32_t variant_6283 = constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 123)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 123)).uintValue () ;
    bool loop_6283 = true ;
    while (loop_6283) {
      loop_6283 = var_superType_6144.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6101.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)).isValid () ;
      if (loop_6283) {
        loop_6283 = var_superType_6144.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6101.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)).boolValue () ;
      }
      if (loop_6283 && (0 == variant_6283)) {
        loop_6283 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 123)) ;
      }
      if (loop_6283) {
        variant_6283 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingAbstractExtensionSetterAST temp_8 = object ;
          test_7 = var_superType_6144.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 125)).getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 125)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_6589 ;
            const GALGAS_overridingAbstractExtensionSetterAST temp_9 = object ;
            GALGAS_methodKind joker_6550 ; // Joker input parameter
            GALGAS_bool joker_6573 ; // Joker input parameter
            GALGAS_string joker_6591 ; // Joker input parameter
            var_superType_6144.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 126)).method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_6550, var_inheritedSignature_6193, joker_6573, var_qualifier_6589, joker_6591, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 126)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_6589.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 127)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_6101 = var_superType_6144.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 128)) ;
              }
            }
          }
        }
        var_superType_6144 = var_superType_6144.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 131)) ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_6101.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 134)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_6932 = GALGAS_localVarManager::constructor_default (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 137)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_7136 ;
  {
  const GALGAS_overridingAbstractExtensionSetterAST temp_14 = object ;
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, temp_14.readProperty_mOverridingExtensionSetterFormalParameterList (), var_variableMap_6932, var_formalParameterListForGeneration_7136, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 138)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6101.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GALGAS_overridingAbstractExtensionSetterAST temp_16 = object ;
      routine_checkMethodSignatures (var_formalParameterListForGeneration_7136, temp_16.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_6193, var_inheritedDeclarationLocation_6259, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 146)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
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
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_1 = object ;
  ioArgument_ioOverridingAbstractExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 172)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  const GALGAS_overridingExtensionGetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 111)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                                extensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionGetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  const GALGAS_overridingExtensionGetterAST temp_0 = object ;
  const GALGAS_overridingExtensionGetterAST temp_1 = object ;
  result_result = GALGAS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 119)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 119)).add_operation (temp_1.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 119)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                          extensionGetter_overridingExtensionGetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionGetterAST_keyRepresentation (defineExtensionGetter_overridingExtensionGetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingExtensionGetterAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_enterInSemanticContext (defineExtensionMethod_overridingExtensionGetterAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  const GALGAS_overridingExtensionGetterAST temp_0 = object ;
  const GALGAS_overridingExtensionGetterAST temp_1 = object ;
  GALGAS_lstring var_nameForUsefulness_6638 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 147)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6638, var_nameForUsefulness_6638, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 148)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_2 = object ;
  GALGAS_lstring var_typeNameForUsefulness_6830 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 149)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_6830, var_nameForUsefulness_6638 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 150)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_7011 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 152)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_selfType_7011.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 154)).getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 154)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 154)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionGetterAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_7011.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 155)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 155)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 155)) ;
    }
  }
  GALGAS_string var_baseTypeName_7359 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_7402 = var_selfType_7011.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 159)) ;
  GALGAS_functionSignature var_inheritedSignature_7470 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 160)) ;
  GALGAS_unifiedTypeMap_2D_entry var_inheritedReturnType_7501 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("extension-overriding-getter.galgas", 161)) ;
  GALGAS_location var_inheritedDeclarationLocation_7576 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 162)) ;
  if (constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 163)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 163)).isValid ()) {
    uint32_t variant_7600 = constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 163)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 163)).uintValue () ;
    bool loop_7600 = true ;
    while (loop_7600) {
      loop_7600 = var_superType_7402.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 164)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 164)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_7359.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 164)).isValid () ;
      if (loop_7600) {
        loop_7600 = var_superType_7402.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 164)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 164)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_7359.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 164)).boolValue () ;
      }
      if (loop_7600 && (0 == variant_7600)) {
        loop_7600 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas", 163)) ;
      }
      if (loop_7600) {
        variant_7600 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionGetterAST temp_8 = object ;
          test_7 = var_superType_7402.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 165)).getter_hasKey (temp_8.readProperty_mOverridingExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 165)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_8030 ;
            const GALGAS_overridingExtensionGetterAST temp_9 = object ;
            GALGAS_methodKind joker_7883 ; // Joker input parameter
            GALGAS_bool joker_7960 ; // Joker input parameter
            GALGAS_string joker_8040 ; // Joker input parameter
            var_superType_7402.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 166)).method_searchKey (temp_9.readProperty_mOverridingExtensionGetterName (), joker_7883, var_inheritedSignature_7470, var_inheritedDeclarationLocation_7576, joker_7960, var_inheritedReturnType_7501, var_qualifier_8030, joker_8040, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 166)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_8030.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas", 176)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_7359 = var_superType_7402.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 177)) ;
              }
            }
          }
        }
        var_superType_7402 = var_superType_7402.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 180)) ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_7359.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionGetterAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 183)) ;
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_14 = object ;
  GALGAS_analysisContext var_analysisContext_8389 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("object"), GALGAS_selfAvailability::constructor_available (var_selfType_7011, GALGAS_bool (false), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 190)), GALGAS_string ("object."), temp_14.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 186)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9276 ;
  GALGAS_unifiedTypeMap_2D_entry var_returnType_9318 ;
  GALGAS_string var_returnVariableCppName_9357 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9441 ;
  {
  const GALGAS_overridingExtensionGetterAST temp_15 = object ;
  GALGAS_typedPropertyList temp_16 ;
  const enumGalgasBool test_17 = var_selfType_7011.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 199)).getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 199)).operator_or (GALGAS_bool (kIsEqual, var_selfType_7011.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 199)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-overriding-getter.galgas", 199)))) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 199)).boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = var_selfType_7011.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 200)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 201)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_18 = object ;
  const GALGAS_overridingExtensionGetterAST temp_19 = object ;
  const GALGAS_overridingExtensionGetterAST temp_20 = object ;
  const GALGAS_overridingExtensionGetterAST temp_21 = object ;
  routine_analyzeFunctionBody (var_nameForUsefulness_6638, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8389, temp_15.readProperty_mOverridingExtensionGetterFormalInputParameterList (), temp_16, GALGAS_string ("object->"), temp_18.readProperty_mOverridingExtensionGetterInstructionList (), temp_19.readProperty_mOverridingExtensionGetterReturnedVariableName (), temp_20.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_21.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_9276, var_returnType_9318, var_returnVariableCppName_9357, var_semanticInstructionListForGeneration_9441, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 194)) ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsNotEqual, var_baseTypeName_7359.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      const GALGAS_overridingExtensionGetterAST temp_23 = object ;
      routine_checkGetterSignatures (var_formalParameterListForGeneration_9276, var_returnType_9318, temp_23.readProperty_mOverridingExtensionGetterName ().readProperty_location (), var_inheritedSignature_7470, var_inheritedReturnType_7501, var_inheritedDeclarationLocation_7576, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 215)) ;
      }
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_24 = object ;
  const GALGAS_overridingExtensionGetterAST temp_25 = object ;
  const GALGAS_overridingExtensionGetterAST temp_26 = object ;
  const GALGAS_overridingExtensionGetterAST temp_27 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (temp_24.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 226)), GALGAS_overrideExtensionGetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (temp_25.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 229)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 229)).add_operation (temp_26.readProperty_mOverridingExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 229)), var_selfType_7011, var_baseTypeName_7359, temp_27.readProperty_mOverridingExtensionGetterName ().readProperty_string (), var_returnType_9318, var_returnVariableCppName_9357, var_formalParameterListForGeneration_9276, var_selfType_7011.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 236)), var_semanticInstructionListForGeneration_9441  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 227))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 225)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                         extensionMethod_overridingExtensionGetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_semanticAnalysis (defineExtensionMethod_overridingExtensionGetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
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
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  const GALGAS_overridingExtensionGetterAST temp_0 = object ;
  const GALGAS_overridingExtensionGetterAST temp_1 = object ;
  ioArgument_ioOverridingExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 258)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingExtensionGetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionGetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overrideExtensionGetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_overrideExtensionGetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas", 281)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overrideExtensionGetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration.mSlotID,
                                   extensionGetter_overrideExtensionGetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overrideExtensionGetterForGeneration_headerKind (defineExtensionGetter_overrideExtensionGetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overrideExtensionGetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overrideExtensionGetterForGeneration * object = (const cPtr_overrideExtensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overrideExtensionGetterForGeneration) ;
  GALGAS_string var_extensionReaderCode_13476 ;
  {
  const GALGAS_overrideExtensionGetterForGeneration temp_0 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_1 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_2 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_3 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_4 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_5 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_6 = object ;
  routine_generateExtensionGetter (temp_0.readProperty_mReceiverType (), temp_1.readProperty_mBaseTypeName (), ioArgument_ioInclusionSet, temp_2.readProperty_mOverridingExtensionGetterName (), temp_3.readProperty_mOverridingExtensionGetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("C_Compiler"), temp_5.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 299)), temp_6.readProperty_mResultVarCppName (), var_extensionReaderCode_13476, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 291)) ;
  }
  const GALGAS_overrideExtensionGetterForGeneration temp_7 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_8 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_9 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, temp_7.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 304)), temp_8.readProperty_mOverridingExtensionGetterName (), temp_9.readProperty_mResultType (), var_extensionReaderCode_13476 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 303))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration.mSlotID,
                                                     extensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (defineExtensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionMethodAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingExtensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  const GALGAS_overridingExtensionMethodAST temp_0 = object ;
  const GALGAS_overridingExtensionMethodAST temp_1 = object ;
  result_result = GALGAS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 83)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 83)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 83)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                          extensionGetter_overridingExtensionMethodAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionMethodAST_keyRepresentation (defineExtensionGetter_overridingExtensionMethodAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  const GALGAS_overridingExtensionMethodAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 97)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                                extensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingExtensionMethodAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_enterInSemanticContext (defineExtensionMethod_overridingExtensionMethodAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  const GALGAS_overridingExtensionMethodAST temp_0 = object ;
  const GALGAS_overridingExtensionMethodAST temp_1 = object ;
  GALGAS_lstring var_nameForUsefulness_6021 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 123)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6021, var_nameForUsefulness_6021, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 124)) ;
  }
  const GALGAS_overridingExtensionMethodAST temp_2 = object ;
  GALGAS_lstring var_typeNameForUsefulness_6213 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 125)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_6213, var_nameForUsefulness_6021 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 126)) ;
  }
  const GALGAS_overridingExtensionMethodAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6394 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 128)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_selfType_6394.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 130)).getter_isClassType (SOURCE_FILE ("extension-overriding-method.galgas", 130)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 130)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionMethodAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_6394.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)) ;
    }
  }
  GALGAS_string var_baseTypeName_6742 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_6785 = var_selfType_6394.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 135)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_6834 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 136)) ;
  GALGAS_location var_inheritedDeclarationLocation_6909 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 137)) ;
  if (constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 138)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 138)).isValid ()) {
    uint32_t variant_6933 = constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 138)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 138)).uintValue () ;
    bool loop_6933 = true ;
    while (loop_6933) {
      loop_6933 = var_superType_6785.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 139)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 139)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6742.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 139)).isValid () ;
      if (loop_6933) {
        loop_6933 = var_superType_6785.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 139)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 139)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6742.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 139)).boolValue () ;
      }
      if (loop_6933 && (0 == variant_6933)) {
        loop_6933 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas", 138)) ;
      }
      if (loop_6933) {
        variant_6933 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionMethodAST temp_8 = object ;
          test_7 = var_superType_6785.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 140)).getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 140)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_7333 ;
            const GALGAS_overridingExtensionMethodAST temp_9 = object ;
            GALGAS_methodKind joker_7232 ; // Joker input parameter
            GALGAS_bool joker_7309 ; // Joker input parameter
            GALGAS_instanceMethodMutability joker_7343_2 ; // Joker input parameter
            GALGAS_string joker_7343_1 ; // Joker input parameter
            var_superType_6785.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 141)).method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_7232, var_inheritedSignature_6834, var_inheritedDeclarationLocation_6909, joker_7309, var_qualifier_7333, joker_7343_2, joker_7343_1, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 141)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_7333.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas", 150)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_6742 = var_superType_6785.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 151)) ;
              }
            }
          }
        }
        var_superType_6785 = var_superType_6785.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 154)) ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_6742.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionMethodAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("this method is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 157)) ;
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_14 = object ;
  GALGAS_analysisContext var_analysisContext_7693 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("object"), GALGAS_selfAvailability::constructor_available (var_selfType_6394, GALGAS_bool (false), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 164)), GALGAS_string ("object->"), temp_14.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 160)) ;
  GALGAS_bool var_isRefClass_7977 = GALGAS_bool (false) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    GALGAS_bool var_reference_8058 ;
    const bool optionalResult8030 = var_selfType_6394.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 169)).optional_classType (var_reference_8058) ;
    if (!optionalResult8030) {
      test_15 = kBoolFalse ;
    }
    if (kBoolTrue == test_15) {
      var_isRefClass_7977 = var_reference_8058 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_8121 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 172)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_8172 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 173)) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsEqual, var_selfType_6394.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 174)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-overriding-method.galgas", 174)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      var_nonMutableProperties_8172 = var_selfType_6394.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 175)) ;
    }
  }
  if (kBoolFalse == test_16) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      GALGAS_bool var_isReference_8384 ;
      const bool optionalResult8354 = var_selfType_6394.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 176)).optional_classType (var_isReference_8384) ;
      if (!optionalResult8354) {
        test_17 = kBoolFalse ;
      }
      if (kBoolTrue == test_17) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = var_isReference_8384.boolEnum () ;
          if (kBoolTrue == test_18) {
            var_mutableProperties_8121 = var_selfType_6394.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 178)) ;
          }
        }
        if (kBoolFalse == test_18) {
          var_nonMutableProperties_8172 = var_selfType_6394.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 180)) ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8932 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8974 ;
  {
  const GALGAS_overridingExtensionMethodAST temp_19 = object ;
  const GALGAS_overridingExtensionMethodAST temp_20 = object ;
  const GALGAS_overridingExtensionMethodAST temp_21 = object ;
  routine_analyzeRoutineBody (var_nameForUsefulness_6021, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_7693, temp_19.readProperty_mOverridingExtensionMethodFormalParameterList (), var_nonMutableProperties_8172, var_mutableProperties_8121, temp_20.readProperty_mOverridingExtensionMethodInstructionList (), temp_21.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_8932, var_formalParameterListForGeneration_8974, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 183)) ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6742.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      const GALGAS_overridingExtensionMethodAST temp_23 = object ;
      routine_checkMethodSignatures (var_formalParameterListForGeneration_8974, temp_23.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_6834, var_inheritedDeclarationLocation_6909, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 197)) ;
      }
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_24 = object ;
  const GALGAS_overridingExtensionMethodAST temp_25 = object ;
  const GALGAS_overridingExtensionMethodAST temp_26 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (temp_24.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 206)), GALGAS_overridingExtensionMethodForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("method-").add_operation (var_selfType_6394.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 209)).getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 209)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 209)).add_operation (temp_25.readProperty_mOverridingExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 209)), var_selfType_6394, var_baseTypeName_6742, temp_26.readProperty_mOverridingExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_8974, var_selfType_6394.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 214)), var_semanticInstructionListForGeneration_8932  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 207))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 205)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                         extensionMethod_overridingExtensionMethodAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_semanticAnalysis (defineExtensionMethod_overridingExtensionMethodAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
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
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  const GALGAS_overridingExtensionMethodAST temp_0 = object ;
  const GALGAS_overridingExtensionMethodAST temp_1 = object ;
  ioArgument_ioOverridingExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 236)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingExtensionMethodAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionMethodAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionMethodForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_overridingExtensionMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-method.galgas", 257)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionMethodForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration.mSlotID,
                                   extensionGetter_overridingExtensionMethodForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionMethodForGeneration_headerKind (defineExtensionGetter_overridingExtensionMethodForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodForGeneration * object = (const cPtr_overridingExtensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodForGeneration) ;
  GALGAS_string var_methodImplementation_12719 ;
  {
  const GALGAS_overridingExtensionMethodForGeneration temp_0 = object ;
  const GALGAS_overridingExtensionMethodForGeneration temp_1 = object ;
  const GALGAS_overridingExtensionMethodForGeneration temp_2 = object ;
  const GALGAS_overridingExtensionMethodForGeneration temp_3 = object ;
  const GALGAS_overridingExtensionMethodForGeneration temp_4 = object ;
  routine_generateExtensionMethod (temp_0.readProperty_mReceiverType (), temp_1.readProperty_mBaseTypeName (), ioArgument_ioInclusionSet, temp_2.readProperty_mExtensionMethodName (), temp_3.readProperty_mExtensionMethodFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_12719, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 266)) ;
  }
  const GALGAS_overridingExtensionMethodForGeneration temp_5 = object ;
  const GALGAS_overridingExtensionMethodForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (inCompiler, temp_5.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 276)), temp_6.readProperty_mExtensionMethodName (), var_methodImplementation_12719 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 275))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration.mSlotID,
                                                     extensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation (defineExtensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  const GALGAS_overridingExtensionSetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 89)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                                extensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionSetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingExtensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  const GALGAS_overridingExtensionSetterAST temp_0 = object ;
  const GALGAS_overridingExtensionSetterAST temp_1 = object ;
  result_result = GALGAS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 97)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 97)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 97)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                          extensionGetter_overridingExtensionSetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionSetterAST_keyRepresentation (defineExtensionGetter_overridingExtensionSetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingExtensionSetterAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_enterInSemanticContext (defineExtensionMethod_overridingExtensionSetterAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  const GALGAS_overridingExtensionSetterAST temp_0 = object ;
  const GALGAS_overridingExtensionSetterAST temp_1 = object ;
  GALGAS_lstring var_nameForUsefulness_6028 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 124)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6028, var_nameForUsefulness_6028, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 125)) ;
  }
  const GALGAS_overridingExtensionSetterAST temp_2 = object ;
  GALGAS_lstring var_typeNameForUsefulness_6220 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 126)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_6220, var_nameForUsefulness_6028 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 127)) ;
  }
  const GALGAS_overridingExtensionSetterAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6401 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 129)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_selfType_6401.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 131)).getter_isClassType (SOURCE_FILE ("extension-overriding-setter.galgas", 131)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 131)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionSetterAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_6401.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 132)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 132)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 132)) ;
    }
  }
  GALGAS_string var_baseTypeName_6749 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_6792 = var_selfType_6401.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 136)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_6841 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 137)) ;
  GALGAS_location var_inheritedDeclarationLocation_6917 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 138)) ;
  if (constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 139)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 139)).isValid ()) {
    uint32_t variant_6941 = constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 139)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 139)).uintValue () ;
    bool loop_6941 = true ;
    while (loop_6941) {
      loop_6941 = var_superType_6792.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 140)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 140)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6749.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 140)).isValid () ;
      if (loop_6941) {
        loop_6941 = var_superType_6792.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 140)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 140)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6749.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 140)).boolValue () ;
      }
      if (loop_6941 && (0 == variant_6941)) {
        loop_6941 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 139)) ;
      }
      if (loop_6941) {
        variant_6941 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionSetterAST temp_8 = object ;
          test_7 = var_superType_6792.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 141)).getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 141)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_7247 ;
            const GALGAS_overridingExtensionSetterAST temp_9 = object ;
            GALGAS_methodKind joker_7208 ; // Joker input parameter
            GALGAS_bool joker_7231 ; // Joker input parameter
            GALGAS_string joker_7249 ; // Joker input parameter
            var_superType_6792.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 142)).method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_7208, var_inheritedSignature_6841, joker_7231, var_qualifier_7247, joker_7249, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 142)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_7247.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-setter.galgas", 143)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_6749 = var_superType_6792.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 144)) ;
              }
            }
          }
        }
        var_superType_6792 = var_superType_6792.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 147)) ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_6749.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionSetterAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 150)) ;
    }
  }
  const GALGAS_overridingExtensionSetterAST temp_14 = object ;
  GALGAS_analysisContext var_analysisContext_7590 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("object"), GALGAS_selfAvailability::constructor_available (var_selfType_6401, GALGAS_bool (true), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 157)), GALGAS_string ("object->"), temp_14.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 153)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8258 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8300 ;
  {
  const GALGAS_overridingExtensionSetterAST temp_15 = object ;
  const GALGAS_overridingExtensionSetterAST temp_16 = object ;
  const GALGAS_overridingExtensionSetterAST temp_17 = object ;
  routine_analyzeRoutineBody (var_nameForUsefulness_6028, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_7590, temp_15.readProperty_mOverridingExtensionSetterFormalParameterList (), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 166)), var_selfType_6401.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 167)), temp_16.readProperty_mOverridingExtensionSetterInstructionList (), temp_17.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_8258, var_formalParameterListForGeneration_8300, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 161)) ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6749.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      {
      const GALGAS_overridingExtensionSetterAST temp_19 = object ;
      routine_checkMethodSignatures (var_formalParameterListForGeneration_8300, temp_19.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_6841, var_inheritedDeclarationLocation_6917, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 175)) ;
      }
    }
  }
  const GALGAS_overridingExtensionSetterAST temp_20 = object ;
  const GALGAS_overridingExtensionSetterAST temp_21 = object ;
  const GALGAS_overridingExtensionSetterAST temp_22 = object ;
  const GALGAS_overridingExtensionSetterAST temp_23 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (temp_20.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 184)), GALGAS_overridingExtensionSetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (temp_21.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 187)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 187)).add_operation (temp_22.readProperty_mOverridingExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 187)), var_selfType_6401, var_baseTypeName_6749, temp_23.readProperty_mOverridingExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_8300, var_selfType_6401.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 192)), var_semanticInstructionListForGeneration_8258  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 185))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 183)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                         extensionMethod_overridingExtensionSetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_semanticAnalysis (defineExtensionMethod_overridingExtensionSetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
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
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  const GALGAS_overridingExtensionSetterAST temp_0 = object ;
  const GALGAS_overridingExtensionSetterAST temp_1 = object ;
  ioArgument_ioOverridingExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 215)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingExtensionSetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionSetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionSetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_overridingExtensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-setter.galgas", 236)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration.mSlotID,
                                   extensionGetter_overridingExtensionSetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionSetterForGeneration_headerKind (defineExtensionGetter_overridingExtensionSetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterForGeneration * object = (const cPtr_overridingExtensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterForGeneration) ;
  GALGAS_string var_methodImplementation_12054 ;
  {
  const GALGAS_overridingExtensionSetterForGeneration temp_0 = object ;
  const GALGAS_overridingExtensionSetterForGeneration temp_1 = object ;
  const GALGAS_overridingExtensionSetterForGeneration temp_2 = object ;
  const GALGAS_overridingExtensionSetterForGeneration temp_3 = object ;
  const GALGAS_overridingExtensionSetterForGeneration temp_4 = object ;
  routine_generateExtensionSetter (temp_0.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 246)), temp_1.readProperty_mBaseTypeName (), temp_2.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_3.readProperty_mExtensionSetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_12054, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 245)) ;
  }
  const GALGAS_overridingExtensionSetterForGeneration temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_baseType_12095 = temp_5.readProperty_mReceiverType () ;
  GALGAS_bool var_searching_12138 = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 256)).isValid ()) {
    uint32_t variant_12152 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 256)).uintValue () ;
    bool loop_12152 = true ;
    while (loop_12152) {
      loop_12152 = var_searching_12138.isValid () ;
      if (loop_12152) {
        loop_12152 = var_searching_12138.boolValue () ;
      }
      if (loop_12152 && (0 == variant_12152)) {
        loop_12152 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 256)) ;
      }
      if (loop_12152) {
        variant_12152 -- ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_baseType_12095.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 257)).getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 257)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 257)).boolEnum () ;
          if (kBoolTrue == test_6) {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              const GALGAS_overridingExtensionSetterForGeneration temp_8 = object ;
              test_7 = var_baseType_12095.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 258)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 258)).getter_hasKey (temp_8.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 258)).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_baseType_12095 = var_baseType_12095.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 259)) ;
              }
            }
            if (kBoolFalse == test_7) {
              var_searching_12138 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_6) {
          var_searching_12138 = GALGAS_bool (false) ;
        }
      }
    }
  }
  const GALGAS_overridingExtensionSetterForGeneration temp_9 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType_12095.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 267)).getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 267)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 267)).add_operation (temp_9.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 267))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 267)) ;
  const GALGAS_overridingExtensionSetterForGeneration temp_10 = object ;
  extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 268)) ;
  const GALGAS_overridingExtensionSetterForGeneration temp_11 = object ;
  const GALGAS_overridingExtensionSetterForGeneration temp_12 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (inCompiler, temp_11.readProperty_mReceiverType ().getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 270)), temp_12.readProperty_mExtensionSetterName (), var_methodImplementation_12054 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 269))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration.mSlotID,
                                                     extensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (defineExtensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'generateFewHeaderFiles'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool onceFunction_generateFewHeaderFiles (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_generateFewHeaderFiles = false ;
static GALGAS_bool gOnceFunctionResult_generateFewHeaderFiles ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool function_generateFewHeaderFiles (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateFewHeaderFiles) {
    gOnceFunctionResult_generateFewHeaderFiles = onceFunction_generateFewHeaderFiles (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateFewHeaderFiles = true ;
  }
  return gOnceFunctionResult_generateFewHeaderFiles ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_generateFewHeaderFiles (void) {
  gOnceFunctionResult_generateFewHeaderFiles.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_generateFewHeaderFiles (NULL,
                                                                    releaseOnceFunctionResult_generateFewHeaderFiles) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateFewHeaderFiles [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateFewHeaderFiles (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_generateFewHeaderFiles (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateFewHeaderFiles ("generateFewHeaderFiles",
                                                                        functionWithGenericHeader_generateFewHeaderFiles,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        0,
                                                                        functionArgs_generateFewHeaderFiles) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getEnumerationList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getEnumerationList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                           GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                           GALGAS_string & outArgument_outEnumeratedType,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_1636 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_1636 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 27)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 28)) ;
  outArgument_outEnumerationList.addAssign_operation (var_stringTypeIndex_1636, GALGAS_string ("key")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 29)) ;
  outArgument_outEnumeratedType = GALGAS_string ("string") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringsetPredefinedTypeAST_getEnumerationList (void) {
  enterExtensionMethod_getEnumerationList (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                           extensionMethod_stringsetPredefinedTypeAST_getEnumerationList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getEnumerationList (defineExtensionMethod_stringsetPredefinedTypeAST_getEnumerationList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getEnumerationList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dataPredefinedTypeAST_getEnumerationList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                      GALGAS_string & outArgument_outEnumeratedType,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_uintTypeIndex_2133 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), var_uintTypeIndex_2133 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 40)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 41)) ;
  outArgument_outEnumerationList.addAssign_operation (var_uintTypeIndex_2133, GALGAS_string ("data")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 42)) ;
  outArgument_outEnumeratedType = GALGAS_string ("uint") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dataPredefinedTypeAST_getEnumerationList (void) {
  enterExtensionMethod_getEnumerationList (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                           extensionMethod_dataPredefinedTypeAST_getEnumerationList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getEnumerationList (defineExtensionMethod_dataPredefinedTypeAST_getEnumerationList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_setterMap & outArgument_outSetterMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_stringType_2830 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_2830 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 56)) ;
  }
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeFeatures.galgas", 57)) ;
  {
  outArgument_outSetterMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 59))  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 59)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsTypeFeatures.galgas", 60)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeFeatures.galgas", 61)), var_stringType_2830, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticsTypeFeatures.galgas", 61)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 61)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsTypeFeatures.galgas", 63)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 58)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringsetPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringsetPredefinedTypeAST_getSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getSetterMap (defineExtensionMethod_stringsetPredefinedTypeAST_getSetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@applicationPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 75)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                                  extensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@bigintPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)).operator_or (GALGAS_operators::constructor_prefixMinusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 83)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 83)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 83)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 83)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 85)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 85)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 85)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                                  extensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@objectPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 97)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_objectPredefinedTypeAST.mSlotID,
                                                  extensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                                  extensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@charPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 110)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 110)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 110)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                                  extensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_charPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_prefixNotOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_boolPredefinedTypeAST.mSlotID,
                                                  extensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 124)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 124)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 124)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 124)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 124)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 124)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (GALGAS_operators::constructor_incDecOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (GALGAS_operators::constructor_infixAddOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (GALGAS_operators::constructor_infixSubOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)).operator_or (GALGAS_operators::constructor_infixMulOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)).operator_or (GALGAS_operators::constructor_infixDivOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sintPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (GALGAS_operators::constructor_prefixMinusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (GALGAS_operators::constructor_prefixMinusOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)).operator_or (GALGAS_operators::constructor_incDecOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)).operator_or (GALGAS_operators::constructor_infixAddOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)).operator_or (GALGAS_operators::constructor_infixSubOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)).operator_or (GALGAS_operators::constructor_infixMulOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)).operator_or (GALGAS_operators::constructor_infixDivOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 141)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 141)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 141)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 142)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 141)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 142)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 142)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)).operator_or (GALGAS_operators::constructor_incDecOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)).operator_or (GALGAS_operators::constructor_infixAddOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)).operator_or (GALGAS_operators::constructor_infixSubOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)).operator_or (GALGAS_operators::constructor_infixMulOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)).operator_or (GALGAS_operators::constructor_infixDivOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 153)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 153)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 153)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 154)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 153)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 154)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 154)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                                  extensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sint64PredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (GALGAS_operators::constructor_prefixMinusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (GALGAS_operators::constructor_prefixMinusOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)).operator_or (GALGAS_operators::constructor_incDecOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)).operator_or (GALGAS_operators::constructor_infixAddOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)).operator_or (GALGAS_operators::constructor_infixSubOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)).operator_or (GALGAS_operators::constructor_infixMulOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)).operator_or (GALGAS_operators::constructor_infixDivOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 166)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 166)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 166)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 167)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 166)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 167)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 167)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                                  extensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@doublePredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (GALGAS_operators::constructor_prefixMinusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (GALGAS_operators::constructor_infixDivOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 177)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 177)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 177)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                                  extensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (GALGAS_operators::constructor_generateEnumerationHelperMethods (SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)).operator_or (GALGAS_operators::constructor_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 187)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                                  extensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@binarysetPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                                  extensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 201)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 201)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 201)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                                  extensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_typePredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dataPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 207)).operator_or (GALGAS_operators::constructor_generateEnumerationHelperMethods (SOURCE_FILE ("semanticsTypeFeatures.galgas", 207)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 207)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                                  extensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 213)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                                  extensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@locationPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 219)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 219)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 219)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                                  extensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 225)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                                  extensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getAddAssignArgumentList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                 GALGAS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_12350 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_12350 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 234)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 235)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeFeatures.galgas", 235)), var_stringTypeIndex_12350, GALGAS_string ("inString")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 235)) ;
  outArgument_outAddAssignArgumentList = temp_0 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (void) {
  enterExtensionMethod_getAddAssignArgumentList (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                                 extensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (defineExtensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWithoutArgument (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                              GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                              const GALGAS_string constinArgument_inConstructorName,
                                              const GALGAS_string constinArgument_inReturnedTypeName,
                                              const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_1439 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1439 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 24)) ;
  }
  {
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 30))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 30)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 31)), constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_1439 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 29)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWithArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWithArgument (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                           const GALGAS_string constinArgument_inConstructorName,
                                           const GALGAS_string constinArgument_inArgument_31_TypeName,
                                           const GALGAS_string constinArgument_inArgument_31_Name,
                                           const GALGAS_string constinArgument_inReturnedTypeName,
                                           const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_2179 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2179 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 48)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_t_2272 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_2272 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 49)) ;
  }
  {
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 52)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 52)), var_t_2272, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 52)) ;
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 51))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 51)), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_2179 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 50)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWith2Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_32_Arguments (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                const GALGAS_string constinArgument_inConstructorName,
                                                const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                const GALGAS_string constinArgument_inArgument_31_Name,
                                                const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                const GALGAS_string constinArgument_inArgument_32_Name,
                                                const GALGAS_string constinArgument_inReturnedTypeName,
                                                const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_3134 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3134 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 71)) ;
  }
  GALGAS_functionSignature var_argumentTypeList_3158 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_entry var_t_3211 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3211 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 74)) ;
  }
  var_argumentTypeList_3158.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 75)), var_t_3211, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 75)) ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_3211 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 76)) ;
  }
  var_argumentTypeList_3158.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 77)), var_t_3211, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 77)) ;
  {
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 79))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 79)), var_argumentTypeList_3158, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_3134 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 78)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWith3Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_33_Arguments (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                const GALGAS_string constinArgument_inConstructorName,
                                                const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                const GALGAS_string constinArgument_inArgument_31_Name,
                                                const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                const GALGAS_string constinArgument_inArgument_32_Name,
                                                const GALGAS_string constinArgument_inArgument_33_TypeName,
                                                const GALGAS_string constinArgument_inArgument_33_Name,
                                                const GALGAS_string constinArgument_inReturnedTypeName,
                                                const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_4412 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4412 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 101)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_t_4505 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4505 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 102)) ;
  }
  GALGAS_functionSignature var_argumentTypeList_4548 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 103)) ;
  var_argumentTypeList_4548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 104)), var_t_4505, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 104)) ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4505 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 105)) ;
  }
  var_argumentTypeList_4548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 106)), var_t_4505, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 106)) ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_4505 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 107)) ;
  }
  var_argumentTypeList_4548.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 108)), var_t_4505, constinArgument_inArgument_33_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 108)) ;
  {
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 110))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 110)), var_argumentTypeList_4548, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_4412 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 109)) ;
  }
}


