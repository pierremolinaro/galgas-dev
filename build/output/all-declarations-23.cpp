#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"


//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@mapProxyDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapProxyDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typedPropertyList var_listTypeAttributeList_9257 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_9316 ;
  GALGAS_bool joker_9205_7 ; // Joker input parameter
  GALGAS_bool joker_9205_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9205_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9205_4 ; // Joker input parameter
  GALGAS_bool joker_9205_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9205_2 ; // Joker input parameter
  GALGAS_attributeMap joker_9205_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9263_11 ; // Joker input parameter
  GALGAS_getterMap joker_9263_10 ; // Joker input parameter
  GALGAS_setterMap joker_9263_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9263_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_9263_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9263_6 ; // Joker input parameter
  GALGAS_stringlist joker_9263_5 ; // Joker input parameter
  GALGAS_uint joker_9263_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9263_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9263_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9263_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9322_6 ; // Joker input parameter
  GALGAS_bool joker_9322_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9322_4 ; // Joker input parameter
  GALGAS_string joker_9322_3 ; // Joker input parameter
  GALGAS_string joker_9322_2 ; // Joker input parameter
  GALGAS_headerKind joker_9322_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_9205_7, joker_9205_6, joker_9205_5, joker_9205_4, joker_9205_3, joker_9205_2, joker_9205_1, var_listTypeAttributeList_9257, joker_9263_11, joker_9263_10, joker_9263_9, joker_9263_8, joker_9263_7, joker_9263_6, joker_9263_5, joker_9263_4, joker_9263_3, joker_9263_2, joker_9263_1, var_searchMethodList_9316, joker_9322_6, joker_9322_5, joker_9322_4, joker_9322_3, joker_9322_2, joker_9322_1, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 226)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map proxy ").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 236)), GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 238)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 239)), var_listTypeAttributeList_9257, var_searchMethodList_9316  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 237)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 235)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapProxyDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                         extensionMethod_mapProxyDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_semanticAnalysis (defineExtensionMethod_mapProxyDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@mapProxyTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 280)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 281)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 279))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 284)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 285)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 286)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 287)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 288)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 289)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 290)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 291)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 292)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 293)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 294)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 295)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 283))), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 283)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                              extensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension method '@mapProxyTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 305)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mAssociatedMapTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 306)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 308)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 309)), object->mAttribute_mAssociatedMapTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 310)), object->mAttribute_mAssociatedMapTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("type-map-proxy.galgas", 307))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                                     extensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@sharedMapDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                             GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_lstring var_key_11403 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 289)), object->mAttribute_mMapTypeName.getter_location (SOURCE_FILE ("type-shared-map.galgas", 289))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 289)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11403, temp_0, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 290)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_11546 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_11546.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_11546.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 292)), enumerator_11546.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 292))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 292)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 292)) ;
    }
    enumerator_11546.gotoNextObject () ;
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
//                                                                                                                     *
//                      Overriding extension getter '@sharedMapDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_sharedMapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  result_outString = GALGAS_string ("shared map @").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 299)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                          extensionGetter_sharedMapDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_sharedMapDeclarationAST_keyRepresentation (defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension method '@sharedMapDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                            const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                            const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_12780 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_12780 COMMA_SOURCE_FILE ("type-shared-map.galgas", 313)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_12912 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_12912 COMMA_SOURCE_FILE ("type-shared-map.galgas", 315)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringlistTypeIndex_13056 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex_13056 COMMA_SOURCE_FILE ("type-shared-map.galgas", 317)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 319)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_12912, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 319)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_13137 = temp_0 ;
  GALGAS_stringlist var_enumerationVariants_13201 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 320)) ;
  var_enumerationVariants_13201.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 321)) ;
  var_enumerationVariants_13201.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 322)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_13325 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_13361 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_13361.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_13361.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_usesSelectorsInInsertAndSearch_13325.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (enumerator_13361.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 328)) ;
      }
      var_usesSelectorsInInsertAndSearch_13325 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_location location_4 (enumerator_13361.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 332)) ;
    }
    enumerator_13361.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_13637 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 336)) ;
  GALGAS_getterMap var_getterMap_13727 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_13727, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 337)) ;
  }
  GALGAS_setterMap var_modifierMap_13754 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 338)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_13798 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 339)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_13637, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 345)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 341)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13727, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 349)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13727, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 356)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_13727, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 363)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_13727, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 372)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13727, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 381)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13727, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 388)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13727, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 395)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13727, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 402)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_15543 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 410)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_15607 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 411)) ;
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = var_usesSelectorsInInsertAndSearch_13325.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_15607.addAssign_operation (temp_5.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 413)), var_lstringTypeIndex_12912, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 415)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 412)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_15841 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 417)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch_13325.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_15841.addAssign_operation (temp_7.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 419)), var_lstringTypeIndex_12912, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 421)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 418)) ;
  cEnumerator_propertyInCollectionListAST enumerator_16042 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_16042.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_16090 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_16042.current_mPropertyTypeName (HERE), var_attributeTypeIndex_16090 COMMA_SOURCE_FILE ("type-shared-map.galgas", 425)) ;
    }
    GALGAS_bool var_hasGetter_16216 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_16243 = GALGAS_bool (true) ;
    var_typedAttributeList_15543.addAssign_operation (var_attributeTypeIndex_16090, enumerator_16042.current_mPropertyName (HERE), var_hasSetter_16243, var_hasGetter_16216  COMMA_SOURCE_FILE ("type-shared-map.galgas", 428)) ;
    var_enumerationDescriptor_13137.addAssign_operation (var_attributeTypeIndex_16090, enumerator_16042.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 429))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 429)) ;
    GALGAS_lstring temp_9 ;
    const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch_13325.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_16042.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 431)) ;
    }
    var_insertMethodFormalArgumentList_15607.addAssign_operation (temp_9, var_attributeTypeIndex_16090, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 433)), enumerator_16042.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 430)) ;
    GALGAS_lstring temp_11 ;
    const enumGalgasBool test_12 = var_usesSelectorsInInsertAndSearch_13325.boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = enumerator_16042.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 436)) ;
    }
    var_removeMethodFormalArgumentList_15841.addAssign_operation (temp_11, var_attributeTypeIndex_16090, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 438)), enumerator_16042.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 435)) ;
    enumerator_16042.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_16883 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_16883.hasCurrentObject ()) {
    const enumGalgasBool test_13 = var_modifierMap_13754.getter_hasKey (enumerator_16883.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 443)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 443)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_location location_14 (enumerator_16883.current_mInsertMethodName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_14, GALGAS_string ("the '").add_operation (enumerator_16883.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 444)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 444))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 444)) ;
    }else if (kBoolFalse == test_13) {
      {
      var_modifierMap_13754.setter_insertOrReplace (enumerator_16883.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 448)), var_insertMethodFormalArgumentList_15607, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 451)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 446)) ;
      }
    }
    enumerator_16883.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList_17376 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 457)) ;
  var_enterEdgeFormalArgumentList_17376.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 458)), var_lstringTypeIndex_12912, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 458)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 458)) ;
  var_enterEdgeFormalArgumentList_17376.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 459)), var_lstringTypeIndex_12912, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 459)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 459)) ;
  {
  var_modifierMap_13754.setter_insertOrReplace (GALGAS_string ("enterEdge").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 461)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 462)), var_enterEdgeFormalArgumentList_17376, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 465)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 460)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList_17906 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 469)) ;
  var_topologicalSortFormalArgumentList_17906.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 470)), var_lstringlistTypeIndex_13056, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 470)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 470)) ;
  var_topologicalSortFormalArgumentList_17906.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 471)), var_lstringlistTypeIndex_13056, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 471)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 471)) ;
  {
  var_instanceMethodMap_13798.setter_insertKey (GALGAS_string ("topologicalSort").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 473)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 474)), var_topologicalSortFormalArgumentList_17906, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 476)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 478)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 472)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 482)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_18535 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_18535.hasCurrentObject ()) {
      {
      var_instanceMethodMap_13798.setter_insertKey (enumerator_18535.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 486)), var_removeMethodFormalArgumentList_15841, enumerator_18535.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 488)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 490)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 484)) ;
      }
      enumerator_18535.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_18851 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_18851.hasCurrentObject ()) {
      {
      var_modifierMap_13754.setter_insertKey (enumerator_18851.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 498)), var_removeMethodFormalArgumentList_15841, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 501)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 496)) ;
      }
      enumerator_18851.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 507)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    GALGAS_unifiedTypeMap_2D_proxy var_locationTypeIndex_19250 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex_19250 COMMA_SOURCE_FILE ("type-shared-map.galgas", 509)) ;
    }
    {
    var_modifierMap_13754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 511))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 511)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 512)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 513)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 515)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 510)) ;
    }
    {
    var_modifierMap_13754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 519))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 519)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 520)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 521)), var_locationTypeIndex_19250, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 521)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 521)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 523)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 518)) ;
    }
    {
    var_modifierMap_13754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 527))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 527)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 528)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 529)), var_locationTypeIndex_19250, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 529)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 529)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 531)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 526)) ;
    }
    {
    var_instanceMethodMap_13798.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 535))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 535)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 536)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 537)), var_locationTypeIndex_19250, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 537)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 537)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 538)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 540)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 534)) ;
    }
    cEnumerator_mapOverrideBlockListAST enumerator_20617 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
    while (enumerator_20617.hasCurrentObject ()) {
      {
      var_modifierMap_13754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_20617.current_mOverrideBlockName (HERE).mAttribute_string.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 545)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 545))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 545)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 546)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 547)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 549)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 544)) ;
      }
      enumerator_20617.gotoNextObject () ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_21014 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_21014.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_21038 = GALGAS_lstring::constructor_new (enumerator_21014.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 556)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 556)), enumerator_21014.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 556))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 556)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_21161 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_21014.current_mPropertyTypeName (HERE), var_attributeTypeIndex_21161 COMMA_SOURCE_FILE ("type-shared-map.galgas", 558)) ;
    }
    {
    GALGAS_functionSignature temp_17 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 562)) ;
    temp_17.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 562)), var_stringTypeIndex_12780, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 562)) ;
    var_getterMap_13727.setter_insertOrReplace (var_accessorName_21038, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 561)), temp_17, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 563)), GALGAS_bool (true), var_attributeTypeIndex_21161, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 566)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 559)) ;
    }
    enumerator_21014.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_21668 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_21668.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_21692 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_21668.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 572)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 572)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 572)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 572)), enumerator_21668.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 572))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 572)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_21946 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_21668.current_mPropertyTypeName (HERE), var_attributeTypeIndex_21946 COMMA_SOURCE_FILE ("type-shared-map.galgas", 573)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_21982 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 574)) ;
    var_accessorFormalArgumentList_21982.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 575)), var_attributeTypeIndex_21946, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 575)), enumerator_21668.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 575)) ;
    var_accessorFormalArgumentList_21982.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 576)), var_stringTypeIndex_12780, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 576)), enumerator_21668.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 576)) ;
    {
    var_modifierMap_13754.setter_insertOrReplace (var_accessorName_21692, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 579)), var_accessorFormalArgumentList_21982, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 582)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 577)) ;
    }
    enumerator_21668.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_getterMap_13727, var_modifierMap_13754, var_instanceMethodMap_13798, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 587)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 602)), GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("type-shared-map.galgas", 603)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 605)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 606)), var_typedAttributeList_15543, var_constructorMap_13637, var_getterMap_13727, var_modifierMap_13754, var_instanceMethodMap_13798, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 612)), var_enumerationDescriptor_13137, var_enumerationVariants_13201, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 615)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 615)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 615)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 616)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 617)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 618)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 620)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 622)), GALGAS_string ("emptyMap"), GALGAS_string ("uniquemap-").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 624)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-shared-map.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 598)) ;
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
//                                                                                                                     *
//                       Overriding extension method '@sharedMapDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_string constinArgument_inProductDirectory,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_mapAutomatonMessageKind var_shadowBehaviour_26447 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 705)) ;
  GALGAS_string var_shadowMessage_26480 = GALGAS_string::makeEmptyString () ;
  cEnumerator_sharedMapAttributeListAST enumerator_26557 (object->mAttribute_mSharedMapAttributeListAST, kEnumeration_up) ;
  while (enumerator_26557.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_26557.current_mAttributeName (HERE).mAttribute_string.objectCompare (GALGAS_string ("shadow"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_26557.current_mAttributeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("only %shadow attribute is allowed here")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 709)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_shadowBehaviour_26447.objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 710)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (enumerator_26557.current_mAttributeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 711)) ;
      }else if (kBoolFalse == test_2) {
        GALGAS_mapAutomatonMessageKind temp_4 ;
        const enumGalgasBool test_5 = enumerator_26557.current_mIsError (HERE).boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 713)) ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 713)) ;
        }
        var_shadowBehaviour_26447 = temp_4 ;
        {
        routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_26557.current_mMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 714)) ;
        }
        var_shadowMessage_26480 = enumerator_26557.current_mMessage (HERE).mAttribute_string ;
      }
    }
    enumerator_26557.gotoNextObject () ;
  }
  GALGAS_stringset var_initialStateSet_27014 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 719)) ;
  cEnumerator_insertMethodListAST enumerator_27068 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_27068.hasCurrentObject ()) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 721)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_27068.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 722)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_location location_8 (enumerator_27068.current_mInsertMethodName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the '").add_operation (enumerator_27068.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 723)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 723))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 723)) ;
      }else if (kBoolFalse == test_7) {
        var_initialStateSet_27014.addAssign_operation (enumerator_27068.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 725))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 725)) ;
      }
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_27068.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 727)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_location location_10 (enumerator_27068.current_mInsertMethodName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_10, GALGAS_string ("the '").add_operation (enumerator_27068.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 728)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 728))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 728)) ;
      }
    }
    enumerator_27068.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap_27604 = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 732)) ;
  cEnumerator_mapSearchMethodListAST enumerator_27639 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_27639.hasCurrentObject ()) {
    const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 734)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_27639.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 735)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (enumerator_27639.current_mSearchMethodName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_13, GALGAS_string ("the '").add_operation (enumerator_27639.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 736)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 736)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 736))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 736)) ;
      }else if (kBoolFalse == test_12) {
        const enumGalgasBool test_14 = var_mapAutomatonActionMap_27604.getter_hasKey (enumerator_27639.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 737)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 737)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 737)).boolEnum () ;
        if (kBoolTrue == test_14) {
          {
          var_mapAutomatonActionMap_27604.setter_insertKey (enumerator_27639.current_mActionName (HERE), var_mapAutomatonActionMap_27604.getter_count (SOURCE_FILE ("type-shared-map.galgas", 738)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 738)) ;
          }
        }
      }
    }else if (kBoolFalse == test_11) {
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_27639.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 740)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_location location_16 (enumerator_27639.current_mSearchMethodName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_16, GALGAS_string ("the '").add_operation (enumerator_27639.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 741)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 741))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 741)) ;
      }
    }
    enumerator_27639.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap_28250 = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 745)) ;
  cEnumerator_mapStateList enumerator_28281 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_28281.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap_28250.setter_insertKey (enumerator_28281.current_mStateName (HERE), var_mapAutomatonStateMap_28250.getter_count (SOURCE_FILE ("type-shared-map.galgas", 747)), enumerator_28281.current_mStateMessageKind (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 747)) ;
    }
    enumerator_28281.gotoNextObject () ;
  }
  cEnumerator_mapStateList enumerator_28416 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_28416.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_28449 (enumerator_28416.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_28449.hasCurrentObject ()) {
      GALGAS_uint joker_28510_2 ; // Joker input parameter
      GALGAS_mapAutomatonMessageKind joker_28510_1 ; // Joker input parameter
      var_mapAutomatonStateMap_28250.method_searchKey (enumerator_28449.current_mTargetStateName (HERE), joker_28510_2, joker_28510_1, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 751)) ;
      enumerator_28449.gotoNextObject () ;
    }
    enumerator_28416.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions_28600 = var_mapAutomatonActionMap_27604.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 755)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList_28674 = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 756)) ;
  cEnumerator_mapStateList enumerator_28705 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_28705.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState_28746 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 758)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList_28814 = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 759)) ;
    cEnumerator_mapStateTransitionList enumerator_28849 (enumerator_28705.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_28849.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex_28927 ;
      var_mapAutomatonActionMap_27604.method_searchKey (enumerator_28849.current_mActionName (HERE), var_actionIndex_28927, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 761)) ;
      const enumGalgasBool test_17 = var_actionsForCurrentState_28746.getter_hasKey (enumerator_28849.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 762)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 762)).boolEnum () ;
      if (kBoolTrue == test_17) {
        GALGAS_location location_18 (enumerator_28849.current_mActionName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_18, GALGAS_string ("the '").add_operation (enumerator_28849.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 763)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 763))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 763)) ;
      }
      var_actionsForCurrentState_28746.addAssign_operation (enumerator_28849.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 765))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 765)) ;
      GALGAS_uint var_targetStateIndex_29238 ;
      GALGAS_mapAutomatonMessageKind joker_29240 ; // Joker input parameter
      var_mapAutomatonStateMap_28250.method_searchKey (enumerator_28849.current_mTargetStateName (HERE), var_targetStateIndex_29238, joker_29240, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 766)) ;
      var_mapStateTransitionSortedList_28814.addAssign_operation (var_actionIndex_28927, enumerator_28849.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 769)), var_targetStateIndex_29238, enumerator_28849.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 771)), enumerator_28849.current_mTransitionMessageKind (HERE), enumerator_28849.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 773))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 767)) ;
      enumerator_28849.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex_29539 ;
    GALGAS_mapAutomatonMessageKind joker_29541 ; // Joker input parameter
    var_mapAutomatonStateMap_28250.method_searchKey (enumerator_28705.current_mStateName (HERE), var_stateIndex_29539, joker_29541, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 775)) ;
    var_mapStateSortedList_28674.addAssign_operation (var_stateIndex_29539, enumerator_28705.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 778)), enumerator_28705.current_mStateMessageKind (HERE), enumerator_28705.current_mStateMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 780)), var_mapStateTransitionSortedList_28814  COMMA_SOURCE_FILE ("type-shared-map.galgas", 776)) ;
    GALGAS_stringset var_missingActions_29739 = var_allActions_28600.substract_operation (var_actionsForCurrentState_28746, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 782)) ;
    const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_missingActions_29739.getter_count (SOURCE_FILE ("type-shared-map.galgas", 783)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_string var_s_29832 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_29868 (var_missingActions_29739, kEnumeration_up) ;
      while (enumerator_29868.hasCurrentObject ()) {
        var_s_29832.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_29868.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 786)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 786)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 786)) ;
        if (enumerator_29868.hasNextObject ()) {
          var_s_29832.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 787)) ;
        }
        enumerator_29868.gotoNextObject () ;
      }
      GALGAS_location location_20 (enumerator_28705.current_mStateName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_20, GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s_29832, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 789))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 789)) ;
    }
    enumerator_28705.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates_30113 = var_initialStateSet_27014 ;
  GALGAS_bool var_progress_30148 = GALGAS_bool (true) ;
  if (object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 795)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 795)).isValid ()) {
    uint32_t variant_30162 = object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 795)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 795)).uintValue () ;
    bool loop_30162 = true ;
    while (loop_30162) {
      loop_30162 = var_progress_30148.isValid () ;
      if (loop_30162) {
        loop_30162 = var_progress_30148.boolValue () ;
      }
      if (loop_30162 && (0 == variant_30162)) {
        loop_30162 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 795)) ;
      }
      if (loop_30162) {
        variant_30162 -- ;
        var_progress_30148 = GALGAS_bool (false) ;
        cEnumerator_mapStateList enumerator_30258 (object->mAttribute_mMapStateList, kEnumeration_up) ;
        while (enumerator_30258.hasCurrentObject ()) {
          const enumGalgasBool test_21 = var_accessibleStates_30113.getter_hasKey (enumerator_30258.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 798)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 798)).boolEnum () ;
          if (kBoolTrue == test_21) {
            cEnumerator_mapStateTransitionList enumerator_30356 (enumerator_30258.current_mTransitionList (HERE), kEnumeration_up) ;
            while (enumerator_30356.hasCurrentObject ()) {
              const enumGalgasBool test_22 = var_accessibleStates_30113.getter_hasKey (enumerator_30356.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 800)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 800)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 800)).boolEnum () ;
              if (kBoolTrue == test_22) {
                var_accessibleStates_30113.addAssign_operation (enumerator_30356.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 801))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 801)) ;
                var_progress_30148 = GALGAS_bool (true) ;
              }
              enumerator_30356.gotoNextObject () ;
            }
          }
          enumerator_30258.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates_30602 = var_mapAutomatonStateMap_28250.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 808)).substract_operation (var_accessibleStates_30113, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 808)) ;
  const enumGalgasBool test_23 = GALGAS_bool (kIsStrictSup, var_uselessStates_30602.getter_count (SOURCE_FILE ("type-shared-map.galgas", 809)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_23) {
    GALGAS_string var_s_30699 = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_30732 (var_uselessStates_30602, kEnumeration_up) ;
    while (enumerator_30732.hasCurrentObject ()) {
      var_s_30699.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_30732.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 812)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 812)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 812)) ;
      if (enumerator_30732.hasNextObject ()) {
        var_s_30699.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 813)) ;
      }
      enumerator_30732.gotoNextObject () ;
    }
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 815)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s_30699, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 815))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 815)) ;
  }
  GALGAS_stringset var_neededAssociations_31002 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 819)) ;
  GALGAS_stringset var_accessibilityGraph_31039 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 820)) ;
  cEnumerator_mapAutomatonStateMap enumerator_31092 (var_mapAutomatonStateMap_28250, kEnumeration_up) ;
  while (enumerator_31092.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates_31126 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 822)) ;
    var_reachableStates_31126.addAssign_operation (enumerator_31092.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 823))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 823)) ;
    var_progress_30148 = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap_28250.getter_count (SOURCE_FILE ("type-shared-map.galgas", 825)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 825)).isValid ()) {
      uint32_t variant_31216 = var_mapAutomatonStateMap_28250.getter_count (SOURCE_FILE ("type-shared-map.galgas", 825)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 825)).uintValue () ;
      bool loop_31216 = true ;
      while (loop_31216) {
        loop_31216 = var_progress_30148.isValid () ;
        if (loop_31216) {
          loop_31216 = var_progress_30148.boolValue () ;
        }
        if (loop_31216 && (0 == variant_31216)) {
          loop_31216 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 825)) ;
        }
        if (loop_31216) {
          variant_31216 -- ;
          var_progress_30148 = GALGAS_bool (false) ;
          cEnumerator_mapStateList enumerator_31322 (object->mAttribute_mMapStateList, kEnumeration_up) ;
          while (enumerator_31322.hasCurrentObject ()) {
            const enumGalgasBool test_24 = var_reachableStates_31126.getter_hasKey (enumerator_31322.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 828)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 828)).boolEnum () ;
            if (kBoolTrue == test_24) {
              cEnumerator_mapStateTransitionList enumerator_31423 (enumerator_31322.current_mTransitionList (HERE), kEnumeration_up) ;
              while (enumerator_31423.hasCurrentObject ()) {
                const enumGalgasBool test_25 = var_reachableStates_31126.getter_hasKey (enumerator_31423.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 830)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 830)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 830)).boolEnum () ;
                if (kBoolTrue == test_25) {
                  var_reachableStates_31126.addAssign_operation (enumerator_31423.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 831))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 831)) ;
                  var_accessibilityGraph_31039.addAssign_operation (enumerator_31092.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 832)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 832)).add_operation (enumerator_31423.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 832)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 832))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 832)) ;
                  var_progress_30148 = GALGAS_bool (true) ;
                }
                enumerator_31423.gotoNextObject () ;
              }
            }
            enumerator_31322.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_31785 (var_reachableStates_31126, kEnumeration_up) ;
    while (enumerator_31785.hasCurrentObject ()) {
      const enumGalgasBool test_26 = GALGAS_bool (kIsNotEqual, enumerator_31092.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 840)).objectCompare (enumerator_31785.current_key (HERE))).boolEnum () ;
      if (kBoolTrue == test_26) {
        var_neededAssociations_31002.addAssign_operation (enumerator_31092.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 841)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 841)).add_operation (enumerator_31785.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 841))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 841)) ;
      }
      enumerator_31785.gotoNextObject () ;
    }
    enumerator_31092.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList_31980 = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 846)) ;
  cEnumerator_mapOverrideBlockListAST enumerator_32022 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
  while (enumerator_32022.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations_32053 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 848)) ;
    GALGAS_stringset var_neededCombinaisons_32103 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 849)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31__32175 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 850)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_32281 (enumerator_32022.current_mMapOverrideBlockDescriptor_31_AST (HERE), kEnumeration_up) ;
    while (enumerator_32281.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex_32359 ;
      GALGAS_mapAutomatonMessageKind joker_32361 ; // Joker input parameter
      var_mapAutomatonStateMap_28250.method_searchKey (enumerator_32281.current_mLeftState (HERE), var_startStateNameIndex_32359, joker_32361, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 852)) ;
      GALGAS_uint var_currentStateNameIndex_32441 ;
      GALGAS_mapAutomatonMessageKind joker_32443 ; // Joker input parameter
      var_mapAutomatonStateMap_28250.method_searchKey (enumerator_32281.current_mRightState (HERE), var_currentStateNameIndex_32441, joker_32443, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 853)) ;
      GALGAS_string var_association_32475 = enumerator_32281.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 854)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 854)).add_operation (enumerator_32281.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 854)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 854)) ;
      const enumGalgasBool test_27 = var_neededAssociations_31002.getter_hasKey (var_association_32475 COMMA_SOURCE_FILE ("type-shared-map.galgas", 855)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 855)).boolEnum () ;
      if (kBoolTrue == test_27) {
        GALGAS_location location_28 (enumerator_32281.current_mRightState (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticWarning (location_28, GALGAS_string ("the '").add_operation (var_association_32475, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 856)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 856))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 856)) ;
      }
      const enumGalgasBool test_29 = var_handledAssociations_32053.getter_hasKey (var_association_32475 COMMA_SOURCE_FILE ("type-shared-map.galgas", 858)).boolEnum () ;
      if (kBoolTrue == test_29) {
        GALGAS_location location_30 (enumerator_32281.current_mRightState (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_30, GALGAS_string ("the '").add_operation (var_association_32475, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 860)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 860))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 859)) ;
      }
      var_handledAssociations_32053.addAssign_operation (var_association_32475  COMMA_SOURCE_FILE ("type-shared-map.galgas", 862)) ;
      GALGAS_uint var_finalStateNameIndex_32957 ;
      GALGAS_mapAutomatonMessageKind joker_32959 ; // Joker input parameter
      var_mapAutomatonStateMap_28250.method_searchKey (enumerator_32281.current_mResultingState (HERE), var_finalStateNameIndex_32957, joker_32959, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 863)) ;
      const enumGalgasBool test_31 = GALGAS_bool (kIsNotEqual, enumerator_32281.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 864)).objectCompare (enumerator_32281.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 864)))).boolEnum () ;
      if (kBoolTrue == test_31) {
        var_neededCombinaisons_32103.addAssign_operation (enumerator_32281.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 865)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 865)).add_operation (enumerator_32281.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 865))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 865)) ;
        var_neededCombinaisons_32103.addAssign_operation (enumerator_32281.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 866)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 866)).add_operation (enumerator_32281.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 866)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 866))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 866)) ;
        const enumGalgasBool test_32 = var_accessibilityGraph_31039.getter_hasKey (enumerator_32281.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 867)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 867)).add_operation (enumerator_32281.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 867)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 867)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 867)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 867)).boolEnum () ;
        if (kBoolTrue == test_32) {
          GALGAS_location location_33 (enumerator_32281.current_mResultingState (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_33, GALGAS_string ("the '").add_operation (enumerator_32281.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 869)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 869)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 869)).add_operation (enumerator_32281.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 869)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 869)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 869))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 868)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_32281.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 872)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31__32175.addAssign_operation (var_startStateNameIndex_32359, enumerator_32281.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 875)), var_currentStateNameIndex_32441, enumerator_32281.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 877)), var_finalStateNameIndex_32957, enumerator_32281.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 879)), enumerator_32281.current_mMessageKind (HERE), enumerator_32281.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 881))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 873)) ;
      enumerator_32281.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations_33832 = var_neededAssociations_31002.substract_operation (var_handledAssociations_32053, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 883)) ;
    const enumGalgasBool test_34 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations_33832.getter_count (SOURCE_FILE ("type-shared-map.galgas", 884)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_34) {
      GALGAS_string var_s_33937 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_33980 (var_forgottenAssociations_33832, kEnumeration_up) ;
      while (enumerator_33980.hasCurrentObject ()) {
        var_s_33937.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_33980.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 887)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 887)) ;
        enumerator_33980.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)), var_forgottenAssociations_33832.getter_count (SOURCE_FILE ("type-shared-map.galgas", 889)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 889)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)).add_operation (var_s_33937, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 889))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)) ;
    }
    GALGAS_stringset var_definedCombinaisons_34165 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 891)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32__34237 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 892)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_34343 (enumerator_32022.current_mMapOverrideBlockDescriptor_32_AST (HERE), kEnumeration_up) ;
    while (enumerator_34343.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex_34416 ;
      GALGAS_mapAutomatonMessageKind joker_34418 ; // Joker input parameter
      var_mapAutomatonStateMap_28250.method_searchKey (enumerator_34343.current_mLeftState (HERE), var_leftStateIndex_34416, joker_34418, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 894)) ;
      GALGAS_uint var_rightStateIndex_34492 ;
      GALGAS_mapAutomatonMessageKind joker_34494 ; // Joker input parameter
      var_mapAutomatonStateMap_28250.method_searchKey (enumerator_34343.current_mRightState (HERE), var_rightStateIndex_34492, joker_34494, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 895)) ;
      GALGAS_string var_combinaison_34526 = enumerator_34343.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 896)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 896)).add_operation (enumerator_34343.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 896)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 896)) ;
      const enumGalgasBool test_35 = var_neededCombinaisons_32103.getter_hasKey (var_combinaison_34526 COMMA_SOURCE_FILE ("type-shared-map.galgas", 897)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 897)).boolEnum () ;
      if (kBoolTrue == test_35) {
        GALGAS_location location_36 (enumerator_34343.current_mRightState (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_36, GALGAS_string ("the '").add_operation (enumerator_34343.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 899)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)).add_operation (enumerator_34343.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 899)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 898)) ;
      }
      const enumGalgasBool test_37 = var_definedCombinaisons_34165.getter_hasKey (var_combinaison_34526 COMMA_SOURCE_FILE ("type-shared-map.galgas", 901)).boolEnum () ;
      if (kBoolTrue == test_37) {
        GALGAS_location location_38 (enumerator_34343.current_mRightState (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_38, GALGAS_string ("the '").add_operation (enumerator_34343.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 903)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 903)).add_operation (enumerator_34343.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 903)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 903))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 902)) ;
      }
      var_definedCombinaisons_34165.addAssign_operation (var_combinaison_34526  COMMA_SOURCE_FILE ("type-shared-map.galgas", 905)) ;
      GALGAS_uint var_resultingStateNameIndex_35056 ;
      GALGAS_mapAutomatonMessageKind joker_35058 ; // Joker input parameter
      var_mapAutomatonStateMap_28250.method_searchKey (enumerator_34343.current_mResultingState (HERE), var_resultingStateNameIndex_35056, joker_35058, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 906)) ;
      const enumGalgasBool test_39 = GALGAS_bool (kIsNotEqual, enumerator_34343.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 907)).objectCompare (enumerator_34343.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 907)))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_34343.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 908)).objectCompare (enumerator_34343.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 908)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 907)).operator_and (var_accessibilityGraph_31039.getter_hasKey (enumerator_34343.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 909)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 909)).add_operation (enumerator_34343.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 909)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 909)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 909)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 909)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 908)).boolEnum () ;
      if (kBoolTrue == test_39) {
        GALGAS_location location_40 (enumerator_34343.current_mResultingState (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_40, GALGAS_string ("the '").add_operation (enumerator_34343.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 911)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 911)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 911)).add_operation (enumerator_34343.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 911)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 911)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 911))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 910)) ;
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_34343.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 913)) ;
      }
      const enumGalgasBool test_41 = GALGAS_bool (kIsEqual, enumerator_34343.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 914)))).boolEnum () ;
      if (kBoolTrue == test_41) {
        var_definedCombinaisons_34165.addAssign_operation (enumerator_34343.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 915)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 915)).add_operation (enumerator_34343.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 915)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 915))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 915)) ;
        var_branchBehaviourSortedListForMapOverride_32__34237.addAssign_operation (var_rightStateIndex_34492, enumerator_34343.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 918)), var_leftStateIndex_34416, enumerator_34343.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 920)), var_resultingStateNameIndex_35056, enumerator_34343.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 922)), enumerator_34343.current_mMessageKind (HERE), enumerator_34343.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 924))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 916)) ;
      }
      var_branchBehaviourSortedListForMapOverride_32__34237.addAssign_operation (var_leftStateIndex_34416, enumerator_34343.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 928)), var_rightStateIndex_34492, enumerator_34343.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 930)), var_resultingStateNameIndex_35056, enumerator_34343.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 932)), enumerator_34343.current_mMessageKind (HERE), enumerator_34343.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 934))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 926)) ;
      enumerator_34343.gotoNextObject () ;
    }
    const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, var_forgottenAssociations_33832.getter_count (SOURCE_FILE ("type-shared-map.galgas", 936)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_42) {
      GALGAS_stringset var_forgottenCombinaisons_36361 = var_neededCombinaisons_32103.substract_operation (var_definedCombinaisons_34165, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 937)) ;
      const enumGalgasBool test_43 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons_36361.getter_count (SOURCE_FILE ("type-shared-map.galgas", 938)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_43) {
        GALGAS_string var_s_36470 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_36515 (var_forgottenCombinaisons_36361, kEnumeration_up) ;
        while (enumerator_36515.hasCurrentObject ()) {
          var_s_36470.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_36515.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 941)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 941)) ;
          enumerator_36515.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 943)), var_forgottenCombinaisons_36361.getter_count (SOURCE_FILE ("type-shared-map.galgas", 943)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 943)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 943)).add_operation (var_s_36470, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 943))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 943)) ;
      }
    }
    var_mapOverrideList_31980.addAssign_operation (enumerator_32022.current_mOverrideBlockName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 947)), var_branchBehaviourSortedListForMapOverride_31__32175, var_branchBehaviourSortedListForMapOverride_32__34237  COMMA_SOURCE_FILE ("type-shared-map.galgas", 946)) ;
    enumerator_32022.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_36909 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 952)) ;
  GALGAS_attributeIndexMap var_attributeMap_36948 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 953)) ;
  cEnumerator_propertyInCollectionListAST enumerator_36979 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_36979.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_36992 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_36979.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 955)) ;
    GALGAS_bool var_hasSetter_37093 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_37118 = GALGAS_bool (true) ;
    var_typedAttributeList_36909.addAssign_operation (var_t_36992, enumerator_36979.current_mPropertyName (HERE), var_hasSetter_37093, var_hasGetter_37118  COMMA_SOURCE_FILE ("type-shared-map.galgas", 958)) ;
    {
    var_attributeMap_36948.setter_insertKey (enumerator_36979.current_mPropertyName (HERE), var_t_36992, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 963)) ;
    }
    enumerator_36979.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_37333 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 966)) ;
  cEnumerator_insertMethodListAST enumerator_37378 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_37378.hasCurrentObject ()) {
    {
    var_insertMethodMap_37333.setter_insertKey (enumerator_37378.current (HERE).mAttribute_mInsertMethodName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 968)) ;
    }
    cEnumerator_stringlist enumerator_37611 (enumerator_37378.current (HERE).mAttribute_mErrorMessage.getter_string (SOURCE_FILE ("type-shared-map.galgas", 970)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 970)), kEnumeration_up) ;
    while (enumerator_37611.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_37646 = enumerator_37611.current (HERE).mAttribute_mValue.getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 971)) ;
      {
      GALGAS_string joker_37741 ; // Joker input parameter
      var_explodedArray_37646.setter_popFirst (joker_37741, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 972)) ;
      }
      cEnumerator_stringlist enumerator_37773 (var_explodedArray_37646, kEnumeration_up) ;
      while (enumerator_37773.hasCurrentObject ()) {
        const enumGalgasBool test_44 = GALGAS_bool (kIsStrictSup, enumerator_37773.current_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 974)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_44) {
          GALGAS_char var_c_37834 = enumerator_37773.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 975)) ;
          const enumGalgasBool test_45 = GALGAS_bool (kIsNotEqual, var_c_37834.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_37834.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 976)).boolEnum () ;
          if (kBoolTrue == test_45) {
            GALGAS_location location_46 (enumerator_37378.current (HERE).mAttribute_mErrorMessage.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_46, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 977)) ;
          }
        }
        enumerator_37773.gotoNextObject () ;
      }
      enumerator_37611.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_38263 (enumerator_37378.current (HERE).mAttribute_mShadowErrorMessage.getter_string (SOURCE_FILE ("type-shared-map.galgas", 983)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 983)), kEnumeration_up) ;
    while (enumerator_38263.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_38298 = enumerator_38263.current (HERE).mAttribute_mValue.getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 984)) ;
      {
      GALGAS_string joker_38399 ; // Joker input parameter
      var_explodedArray_38298.setter_popFirst (joker_38399, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 985)) ;
      }
      cEnumerator_stringlist enumerator_38438 (var_explodedArray_38298, kEnumeration_up) ;
      while (enumerator_38438.hasCurrentObject ()) {
        const enumGalgasBool test_47 = GALGAS_bool (kIsStrictSup, enumerator_38438.current (HERE).mAttribute_mValue.getter_length (SOURCE_FILE ("type-shared-map.galgas", 987)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_47) {
          GALGAS_char var_c_38509 = enumerator_38438.current (HERE).mAttribute_mValue.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 988)) ;
          const enumGalgasBool test_48 = GALGAS_bool (kIsNotEqual, var_c_38509.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_38509.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 989)).boolEnum () ;
          if (kBoolTrue == test_48) {
            GALGAS_location location_49 (enumerator_37378.current (HERE).mAttribute_mErrorMessage.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_49, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 990)) ;
          }
        }
        enumerator_38438.gotoNextObject () ;
      }
      enumerator_38263.gotoNextObject () ;
    }
    enumerator_37378.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_38831 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 997)) ;
  cEnumerator_mapSearchMethodListAST enumerator_38876 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_38876.hasCurrentObject ()) {
    const enumGalgasBool test_50 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 999)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_50) {
      {
      var_searchMethodMap_38831.setter_insertKey (enumerator_38876.current (HERE).mAttribute_mSearchMethodName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1000)) ;
      }
    }else if (kBoolFalse == test_50) {
      {
      var_searchMethodMap_38831.setter_insertKey (enumerator_38876.current (HERE).mAttribute_mSearchMethodName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1002)) ;
      }
    }
    cEnumerator_stringlist enumerator_39237 (enumerator_38876.current (HERE).mAttribute_mErrorMessage.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1005)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1005)), kEnumeration_up) ;
    while (enumerator_39237.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_39272 = enumerator_39237.current (HERE).mAttribute_mValue.getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1006)) ;
      {
      GALGAS_string joker_39372 ; // Joker input parameter
      var_explodedArray_39272.setter_popFirst (joker_39372, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1007)) ;
      }
      cEnumerator_stringlist enumerator_39411 (var_explodedArray_39272, kEnumeration_up) ;
      while (enumerator_39411.hasCurrentObject ()) {
        const enumGalgasBool test_51 = GALGAS_bool (kIsStrictSup, enumerator_39411.current (HERE).mAttribute_mValue.getter_length (SOURCE_FILE ("type-shared-map.galgas", 1009)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_51) {
          GALGAS_char var_c_39482 = enumerator_39411.current (HERE).mAttribute_mValue.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1010)) ;
          const enumGalgasBool test_52 = GALGAS_bool (kIsNotEqual, var_c_39482.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
          if (kBoolTrue == test_52) {
            GALGAS_location location_53 (enumerator_38876.current (HERE).mAttribute_mErrorMessage.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_53, GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1012)) ;
          }
        }
        enumerator_39411.gotoNextObject () ;
      }
      enumerator_39237.gotoNextObject () ;
    }
    enumerator_38876.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1020)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1020)), GALGAS_sharedMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1022)), object->mAttribute_mMapTypeName, var_typedAttributeList_36909, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, var_mapAutomatonStateMap_28250, var_mapAutomatonActionMap_27604, var_mapStateSortedList_28674, var_mapOverrideList_31980, var_shadowBehaviour_26447, var_shadowMessage_26480  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1021)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1019)) ;
  GALGAS_string var_graphFile_40256 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/shared-map-"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1036)).add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1036)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1036)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1036)) ;
  const enumGalgasBool test_54 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_54) {
    GALGAS_string var_theGraph_40425 = GALGAS_string ("digraph G {\n") ;
    cEnumerator_mapAutomatonStateMap enumerator_40478 (var_mapAutomatonStateMap_28250, kEnumeration_up) ;
    while (enumerator_40478.hasCurrentObject ()) {
      var_theGraph_40425.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_40478.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1040)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1040)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1040)).add_operation (enumerator_40478.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1040)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1040)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1040)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1040)) ;
      const enumGalgasBool test_55 = var_initialStateSet_27014.getter_hasKey (enumerator_40478.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("type-shared-map.galgas", 1041)).boolEnum () ;
      if (kBoolTrue == test_55) {
        var_theGraph_40425.plusAssign_operation(GALGAS_string (" shape=box color=blue"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1042)) ;
      }else if (kBoolFalse == test_55) {
        var_theGraph_40425.plusAssign_operation(GALGAS_string (" shape=box"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1044)) ;
      }
      switch (enumerator_40478.current_mStateMessageKind (HERE).enumValue ()) {
      case GALGAS_mapAutomatonMessageKind::kNotBuilt:
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
        {
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
        {
          var_theGraph_40425.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1049)) ;
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
        {
          var_theGraph_40425.plusAssign_operation(GALGAS_string (" fontcolor=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1051)) ;
        }
        break ;
      }
      var_theGraph_40425.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1053)) ;
      enumerator_40478.gotoNextObject () ;
    }
    cEnumerator_mapStateList enumerator_40956 (object->mAttribute_mMapStateList, kEnumeration_up) ;
    while (enumerator_40956.hasCurrentObject ()) {
      cEnumerator_mapStateTransitionList enumerator_40991 (enumerator_40956.current_mTransitionList (HERE), kEnumeration_up) ;
      while (enumerator_40991.hasCurrentObject ()) {
        var_theGraph_40425.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_40956.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)).add_operation (enumerator_40991.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)).add_operation (enumerator_40991.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)) ;
        switch (enumerator_40991.current_mTransitionMessageKind (HERE).enumValue ()) {
        case GALGAS_mapAutomatonMessageKind::kNotBuilt:
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
          {
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
          {
            var_theGraph_40425.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\" color=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1061)) ;
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
          {
            var_theGraph_40425.plusAssign_operation(GALGAS_string (" fontcolor=\"red\" color=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1063)) ;
          }
          break ;
        }
        var_theGraph_40425.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1065)) ;
        enumerator_40991.gotoNextObject () ;
      }
      enumerator_40956.gotoNextObject () ;
    }
    var_theGraph_40425.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1068)) ;
    GALGAS_bool joker_41486 ; // Joker input parameter
    var_theGraph_40425.method_writeToFileWhenDifferentContents (var_graphFile_40256, joker_41486, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1069)) ;
  }else if (kBoolFalse == test_54) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_graphFile_40256, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1071)) ;
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
//                                                                                                                     *
//                    Overriding extension method '@sharedMapTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_43848 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_43848.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_43848.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1131)) ;
    enumerator_43848.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1135)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1136)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("type-shared-map.galgas", 1134))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1141)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1142)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1143)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1144)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1145)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1146)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1147)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1148)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1149)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1150)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1151)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1152)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1140))), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1140)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                              extensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension method '@sharedMapTypeForGeneration appendDeclaration2'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1164)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1165)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-shared-map.galgas", 1163))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                              extensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@sharedMapTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1176)) ;
  GALGAS_keySortedList var_keySortedList_45434 = GALGAS_keySortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 1177)) ;
  cEnumerator_mapAutomatonStateMap enumerator_45502 (object->mAttribute_mMapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_45502.hasCurrentObject ()) {
    var_keySortedList_45434.addAssign_operation (enumerator_45502.current_lkey (HERE).mAttribute_string, enumerator_45502.current_mStateIndex (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1179)) ;
    enumerator_45502.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1182)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mMapAutomatonStateMap, object->mAttribute_mMapAutomatonActionMap, object->mAttribute_mMapStateSortedList, object->mAttribute_mMapOverrideList, var_keySortedList_45434, object->mAttribute_mShadowBehaviour, object->mAttribute_mShadowMessage COMMA_SOURCE_FILE ("type-shared-map.galgas", 1181))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                                     extensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@sortedListDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sortedListDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                              GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_lstring var_key_3477 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("type-sorted-list.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)), object->mAttribute_mSortedListTypeName.getter_location (SOURCE_FILE ("type-sorted-list.galgas", 84))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3477, temp_0, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 85)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_3635 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3635.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3635.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)), enumerator_3635.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-sorted-list.galgas", 87))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)) ;
    }
    enumerator_3635.gotoNextObject () ;
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
//                                                                                                                     *
//                    Overriding extension method '@sortedListDeclarationAST addAssociatedElement'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sortedListDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_4278 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 97)) ;
  cEnumerator_propertyInCollectionListAST enumerator_4347 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_4347.hasCurrentObject ()) {
    var_structAttributeList_4278.addAssign_operation (enumerator_4347.current_mPropertyTypeName (HERE), enumerator_4347.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 103))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 99)) ;
    enumerator_4347.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 107)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 107)), var_structAttributeList_4278, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 105))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 105)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sortedListDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                             extensionMethod_sortedListDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sortedListDeclarationAST_addAssociatedElement (defineExtensionMethod_sortedListDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@sortedListDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sortedListDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                             const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                             const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex_5325 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, var_listTypeIndex_5325 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 120)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex_5575 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 124)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 124)), var_listElementTypeIndex_5575 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 122)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5636 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 128)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5711 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 129)) ;
  GALGAS_formalParameterSignature var_modifierFormalArgumentList_5776 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 130)) ;
  GALGAS_typedPropertyList var_typedAttributeList_5840 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 131)) ;
  cEnumerator_propertyInCollectionListAST enumerator_5899 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_5899.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_6033 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_5899.current_mPropertyTypeName (HERE), var_attributeTypeIndex_6033 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 133)) ;
    }
    GALGAS_bool var_hasGetter_6054 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_6081 = GALGAS_bool (true) ;
    var_typedAttributeList_5840.addAssign_operation (var_attributeTypeIndex_6033, enumerator_5899.current_mPropertyName (HERE), var_hasSetter_6081, var_hasGetter_6054  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 136)) ;
    var_enumerationDescriptor_5636.addAssign_operation (var_attributeTypeIndex_6033, enumerator_5899.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 137)) ;
    var_constructorAttributeTypeList_5711.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 138)), var_attributeTypeIndex_6033, enumerator_5899.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 138)) ;
    var_modifierFormalArgumentList_5776.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 139)), var_attributeTypeIndex_6033, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-sorted-list.galgas", 139)), enumerator_5899.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 139)) ;
    enumerator_5899.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6512 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 142)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_6512, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptySortedList"), object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("type-sorted-list.galgas", 147)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 143)) ;
  }
  {
  var_constructorMap_6512.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 151))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 151)), var_constructorAttributeTypeList_5711, GALGAS_bool (false), var_listTypeIndex_5325, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 150)) ;
  }
  GALGAS_getterMap var_getterMap_7005 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_7005, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 157)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_7005, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 158)) ;
  }
  GALGAS_setterMap var_modifierMap_7198 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 166)) ;
  {
  var_modifierMap_7198.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 168))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 168)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 169)), var_modifierFormalArgumentList_5776, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 172)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 167)) ;
  }
  {
  var_modifierMap_7198.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 176))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 176)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 177)), var_modifierFormalArgumentList_5776, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 180)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 175)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_7707 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 184)) ;
  {
  var_instanceMethodMap_7707.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 186))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 186)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 187)), var_modifierFormalArgumentList_5776, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 189)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 191)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 185)) ;
  }
  {
  var_instanceMethodMap_7707.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 195))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 195)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 196)), var_modifierFormalArgumentList_5776, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 198)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 200)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 194)) ;
  }
  GALGAS_stringlist var_enumerationVariants_8264 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 204)) ;
  var_enumerationVariants_8264.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 205)) ;
  var_enumerationVariants_8264.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 206)) ;
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mSortedListTypeName, var_getterMap_7005, var_modifierMap_7198, var_instanceMethodMap_7707, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 208)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mSortedListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-sorted-list.galgas", 223)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("type-sorted-list.galgas", 224)), GALGAS_bool (true), var_typedAttributeList_5840, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 227)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 228)), var_constructorMap_6512, var_getterMap_7005, var_modifierMap_7198, var_instanceMethodMap_7707, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 233)), var_enumerationDescriptor_5636, var_enumerationVariants_8264, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 236)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 236)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 236)), var_constructorAttributeTypeList_5711, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 238)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 239)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 240)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 241)), GALGAS_bool (false), var_listElementTypeIndex_5575, GALGAS_string ("emptySortedList"), GALGAS_string ("sortedlist-").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("type-sorted-list.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 247)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-sorted-list.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 219)) ;
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
//                                                                                                                     *
//                      Overriding extension method '@sortedListDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sortedListDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList_10334 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 262)) ;
  GALGAS_attributeIndexMap var_attributeMap_10385 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 263)) ;
  cEnumerator_propertyInCollectionListAST enumerator_10443 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_10443.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_10456 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_10443.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 265)) ;
    GALGAS_bool var_hasSetter_10559 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_10586 = GALGAS_bool (true) ;
    var_typedAttributeList_10334.addAssign_operation (var_t_10456, enumerator_10443.current_mPropertyName (HERE), var_hasSetter_10559, var_hasGetter_10586  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 268)) ;
    {
    var_attributeMap_10385.setter_insertKey (enumerator_10443.current_mPropertyName (HERE), var_t_10456, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 273)) ;
    }
    enumerator_10443.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting_10790 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sorted-list.galgas", 276)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_10838 = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 277)) ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_10916 (object->mAttribute_mSortDescriptorList, kEnumeration_up) ;
  while (enumerator_10916.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_11001 ;
    var_attributeMap_10385.method_searchKey (enumerator_10916.current_mSortedAttributeName (HERE), var_type_11001, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 279)) ;
    var_sortDescriptorList_10838.addAssign_operation (var_type_11001, enumerator_10916.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 280)), enumerator_10916.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 280)) ;
    const enumGalgasBool test_0 = var_attributesUsedForSorting_10790.getter_hasKey (enumerator_10916.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 281)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 281)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_10916.current_mSortedAttributeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_10916.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 282)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 282))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 282)) ;
    }
    var_attributesUsedForSorting_10790.addAssign_operation (enumerator_10916.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 284))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 284)) ;
    enumerator_10916.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("type-sorted-list.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 288)), GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 290)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 291)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 291)), var_typedAttributeList_10334, var_sortDescriptorList_10838  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 289)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 287)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sortedListDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                         extensionMethod_sortedListDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sortedListDeclarationAST_semanticAnalysis (defineExtensionMethod_sortedListDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension method '@sortedListTypeForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sortedListTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                               GALGAS_string & outArgument_outHeader,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 338)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 339)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-sorted-list.galgas", 337))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 343)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 344)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 345)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 347)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 348)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 349)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 350)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 351)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 352)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 353)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 342))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 342)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sortedListTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                              extensionMethod_sortedListTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_sortedListTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@sortedListTypeForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sortedListTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_string & outArgument_outImplementation,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_14445 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_14445.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14445.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 365)) ;
    enumerator_14445.gotoNextObject () ;
  }
  extensionMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 367)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 368)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 370)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSortDescriptorList COMMA_SOURCE_FILE ("type-sorted-list.galgas", 369))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sortedListTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                                     extensionMethod_sortedListTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_sortedListTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@structDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                          GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                          GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_lstring var_key_2293 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("type-struct.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 49)), object->mAttribute_mStructTypeName.getter_location (SOURCE_FILE ("type-struct.galgas", 49))  COMMA_SOURCE_FILE ("type-struct.galgas", 49)) ;
  {
  const GALGAS_structDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2293, temp_0, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 50)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2443 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2443.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey_2466 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2443.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-struct.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 52)), enumerator_2443.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-struct.galgas", 52))  COMMA_SOURCE_FILE ("type-struct.galgas", 52)) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2293, var_propertyKey_2466 COMMA_SOURCE_FILE ("type-struct.galgas", 53)) ;
    }
    enumerator_2443.gotoNextObject () ;
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
//                                                                                                                     *
//                     Overriding extension method '@structDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_structTypeIndex_3396 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, var_structTypeIndex_3396 COMMA_SOURCE_FILE ("type-struct.galgas", 68)) ;
  }
  GALGAS_attributeMap var_attributeMap_3550 = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 70)) ;
  GALGAS_constructorMap var_constructorMap_3597 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 71)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_3660 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 72)) ;
  GALGAS_typedPropertyList var_typedAttributeList_3717 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 73)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation_3789 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 74)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3853 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3853.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_3987 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_3853.current_mPropertyTypeName (HERE), var_attributeTypeIndex_3987 COMMA_SOURCE_FILE ("type-struct.galgas", 76)) ;
    }
    var_constructorAttributeTypeList_3660.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-struct.galgas", 77)), var_attributeTypeIndex_3987, enumerator_3853.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-struct.galgas", 77)) ;
    var_typesToIncludeInHeaderCompilation_3789.addAssign_operation (var_attributeTypeIndex_3987  COMMA_SOURCE_FILE ("type-struct.galgas", 78)) ;
    GALGAS_bool var_hasSetter_4159 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_4185 = GALGAS_bool (true) ;
    var_typedAttributeList_3717.addAssign_operation (var_attributeTypeIndex_3987, enumerator_3853.current_mPropertyName (HERE), var_hasSetter_4159, var_hasGetter_4185  COMMA_SOURCE_FILE ("type-struct.galgas", 81)) ;
    {
    var_attributeMap_3550.setter_insertKey (enumerator_3853.current_mPropertyName (HERE), var_attributeTypeIndex_3987, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 82)) ;
    }
    enumerator_3853.gotoNextObject () ;
  }
  {
  var_constructorMap_3597.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 89))  COMMA_SOURCE_FILE ("type-struct.galgas", 89)), var_constructorAttributeTypeList_3660, GALGAS_bool (false), var_structTypeIndex_3396, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 88)) ;
  }
  GALGAS_getterMap var_getterMap_4553 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_4553, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 96)) ;
  }
  cEnumerator_typedPropertyList enumerator_4657 (var_typedAttributeList_3717, kEnumeration_up) ;
  while (enumerator_4657.hasCurrentObject ()) {
    {
    routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4553, ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_4657.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-struct.galgas", 101)), enumerator_4657.current_mAttributeTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 102)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 98)) ;
    }
    enumerator_4657.gotoNextObject () ;
  }
  GALGAS_setterMap var_modifierMap_4906 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 107)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4968 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 109)) ;
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mStructTypeName, var_getterMap_4553, var_modifierMap_4906, var_instanceMethodMap_4968, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 111)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedType_5348 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mEnumeratedElementTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_enumeratedType_5348 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-struct.galgas", 124)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumeratedElementTypeName, var_enumeratedType_5348 COMMA_SOURCE_FILE ("type-struct.galgas", 126)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_5666 = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_5709 (var_typedAttributeList_3717, kEnumeration_up) ;
  bool bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_5666.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_5709.hasCurrentObject () && bool_1) {
    while (enumerator_5709.hasCurrentObject () && bool_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_5709.current_mAttributeTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 135)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_5709.current_mAttributeTypeProxy (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 135)).operator_not (SOURCE_FILE ("type-struct.galgas", 135)) COMMA_SOURCE_FILE ("type-struct.galgas", 135)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_defaultConstructorName_5666 = GALGAS_string::makeEmptyString () ;
      }
      enumerator_5709.gotoNextObject () ;
      if (enumerator_5709.hasCurrentObject ()) {
        bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_5666.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mStructTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-struct.galgas", 144)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("type-struct.galgas", 145)), GALGAS_bool (false), var_typedAttributeList_3717, var_attributeMap_3550, var_typedAttributeList_3717, var_constructorMap_3597, var_getterMap_4553, var_modifierMap_4906, var_instanceMethodMap_4968, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 154)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 155)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 156)), function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 157)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 158)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 159)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 160)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 161)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 162)), GALGAS_bool (false), var_enumeratedType_5348, var_defaultConstructorName_5666, GALGAS_string ("struct-").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("type-struct.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 166)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-struct.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 140)) ;
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
//                                                                                                                     *
//                        Overriding extension method '@structDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                   GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mAttributeList.getter_length (SOURCE_FILE ("type-struct.galgas", 189)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mStructTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a structure cannot be empty: it must have at least one field")  COMMA_SOURCE_FILE ("type-struct.galgas", 190)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_7888 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 192)) ;
  GALGAS_attributeIndexMap var_attributeMap_7939 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 193)) ;
  cEnumerator_propertyInCollectionListAST enumerator_7997 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_7997.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_8010 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_7997.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 195)) ;
    cEnumerator_lstringlist enumerator_8120 (enumerator_7997.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_8120.hasCurrentObject ()) {
      GALGAS_location location_2 (enumerator_8120.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("a struct attribute does not accept any feature")  COMMA_SOURCE_FILE ("type-struct.galgas", 197)) ;
      enumerator_8120.gotoNextObject () ;
    }
    GALGAS_bool var_hasSetter_8225 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_8257 = GALGAS_bool (false) ;
    var_typedAttributeList_7888.addAssign_operation (var_t_8010, enumerator_7997.current_mPropertyName (HERE), var_hasSetter_8225, var_hasGetter_8257  COMMA_SOURCE_FILE ("type-struct.galgas", 201)) ;
    const enumGalgasBool test_3 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 206)).getter_hasKey (enumerator_7997.current_mPropertyName (HERE).mAttribute_string COMMA_SOURCE_FILE ("type-struct.galgas", 206)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_m_8440 = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_8515 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 208)), kEnumeration_up) ;
      while (enumerator_8515.hasCurrentObject ()) {
        var_m_8440.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_8515.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 209)) ;
        enumerator_8515.gotoNextObject () ;
      }
      var_m_8440.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 211)) ;
      GALGAS_location location_4 (enumerator_7997.current_mPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, var_m_8440  COMMA_SOURCE_FILE ("type-struct.galgas", 212)) ;
    }
    {
    var_attributeMap_7939.setter_insertKey (enumerator_7997.current_mPropertyName (HERE), var_t_8010, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 214)) ;
    }
    enumerator_7997.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("type-struct.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 217)), GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 219)), var_typedAttributeList_7888  COMMA_SOURCE_FILE ("type-struct.galgas", 218)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("type-struct.galgas", 216)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                         extensionMethod_structDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structDeclarationAST_semanticAnalysis (defineExtensionMethod_structDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@structTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_string & outArgument_outHeader,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_10255 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_10255.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_10255.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 258)) ;
    enumerator_10255.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 262)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 263)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 265)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 261))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 268)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 269)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 270)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 271)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 272)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 273)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 274)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 275)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 276)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 277)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 278)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 279)) COMMA_SOURCE_FILE ("type-struct.galgas", 267))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 267)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                              extensionMethod_structTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_structTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@structTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outImplementation,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 290)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 292)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 293)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 295)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 291))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                                     extensionMethod_structTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_structTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension getter '@abstractExtensionGetterAST keyRepresentation'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_abstractExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  result_outString = GALGAS_string ("abstract extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 49)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 49)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 49)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_abstractExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                          extensionGetter_abstractExtensionGetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractExtensionGetterAST_keyRepresentation (defineExtensionGetter_abstractExtensionGetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionGetterAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                                GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  GALGAS_lstring var_key_3341 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 62)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 62)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 62)), object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 62))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 62)) ;
  {
  const GALGAS_abstractExtensionGetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3341, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 63)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3341, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 64)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 64))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 64)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 64)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 66)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 66)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 66)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-getter.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 67)) ;
    }
  }
  cMapElement_extensionGetterMapForBuildingContext * objectArray_3852 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 72)) ;
  if (NULL != objectArray_3852) {
      macroValidSharedObject (objectArray_3852, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    objectArray_3852->mAttribute_mExtensionGetterMapForType.setter_insertKey (object->mAttribute_mAbstractExtensionGetterName, object->mAttribute_mAbstractExtensionGetterReturnedTypeName, object->mAttribute_mAbstractExtensionGetterFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 73)) ;
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
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionGetterAST enterInSemanticContext'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
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
//                                                                                                                     *
//                     Overriding extension method '@abstractExtensionGetterAST semanticAnalysis'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5590 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 102)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5590.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 104)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-abstract-getter.galgas", 104)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractExtensionGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_5590.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 105)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 105))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 105)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_5590.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 106)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractExtensionGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (var_selfType_5590.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 107)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 107))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 107)) ;
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_6136 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-getter.galgas", 110)) ;
  cEnumerator_formalInputParameterListAST enumerator_6250 (object->mAttribute_mAbstractExtensionGetterFormalInputParameterList, kEnumeration_up) ;
  while (enumerator_6250.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6136.addAssign_operation (enumerator_6250.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_6250.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 114)), enumerator_6250.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 115)), enumerator_6250.current_mFormalArgumentName (HERE), enumerator_6250.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 112)) ;
    enumerator_6250.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 121)), GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 124)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 124)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 124)), var_selfType_5590, object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 126)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractExtensionGetterReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 127)), var_formalParameterListForGeneration_6136  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 122)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 120)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                         extensionMethod_abstractExtensionGetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_semanticAnalysis (defineExtensionMethod_abstractExtensionGetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionGetterAST buildExtensionListMaps'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
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
  ioArgument_ioAbstractExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 151)), object->mAttribute_mAbstractExtensionGetterName  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 150)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                               extensionMethod_abstractExtensionGetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionGetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@abstractExtensionGetterForGeneration headerKind'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_abstractExtensionGetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 169)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_abstractExtensionGetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration.mSlotID,
                                   extensionGetter_abstractExtensionGetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractExtensionGetterForGeneration_headerKind (defineExtensionGetter_abstractExtensionGetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@abstractExtensionGetterForGeneration appendDeclaration1'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterForGeneration * object = (const cPtr_abstractExtensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 179)), object->mAttribute_mAbstractExtensionGetterName, object->mAttribute_mAbstractExtensionGetterFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 178))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration.mSlotID,
                                              extensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@abstractExtensionGetterForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterForGeneration * object = (const cPtr_abstractExtensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 193)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 193)).add_operation (object->mAttribute_mAbstractExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 193))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 193)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 194)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 195)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_10398 (object->mAttribute_mAbstractExtensionGetterFormalParameterList, kEnumeration_up) ;
  while (enumerator_10398.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10398.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 197)) ;
    enumerator_10398.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 200)), object->mAttribute_mAbstractExtensionGetterName, object->mAttribute_mAbstractExtensionGetterFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 199))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration.mSlotID,
                                                     extensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation (defineExtensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionMethodAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  GALGAS_lstring var_key_2579 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)).add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)), object->mAttribute_mAbstractExtensionMethodName.getter_location (SOURCE_FILE ("extension-abstract-method.galgas", 48))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)) ;
  {
  const GALGAS_abstractExtensionMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2579, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 49)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2579, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-abstract-method.galgas", 50))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 52)) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 52)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 52)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-method.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 53)) ;
    }
  }
  cMapElement_extensionMethodMapForBuildingContext * objectArray_3056 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 58)) ;
  if (NULL != objectArray_3056) {
      macroValidSharedObject (objectArray_3056, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    objectArray_3056->mAttribute_mExtensionMethodMapForType.setter_insertKey (object->mAttribute_mAbstractExtensionMethodName, object->mAttribute_mAbstractExtensionMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 59)) ;
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
//                                                                                                                     *
//                     Overriding extension getter '@abstractExtensionMethodAST keyRepresentation'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_abstractExtensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  result_outString = GALGAS_string ("abstract extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 72)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 72)).add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 72)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_abstractExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                          extensionGetter_abstractExtensionMethodAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractExtensionMethodAST_keyRepresentation (defineExtensionGetter_abstractExtensionMethodAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionMethodAST enterInSemanticContext'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
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
//                                                                                                                     *
//                     Overriding extension method '@abstractExtensionMethodAST semanticAnalysis'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5287 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 96)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5287.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 98)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-abstract-method.galgas", 98)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractExtensionMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_5287.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 99)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 99))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 99)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_5287.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 100)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractExtensionMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (var_selfType_5287.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 101)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 101))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 101)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_5834 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-method.galgas", 104)) ;
  cEnumerator_formalParameterListAST enumerator_5937 (object->mAttribute_mAbstractExtensionMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_5937.hasCurrentObject ()) {
    var_formalParameterListForGeneration_5834.addAssign_operation (enumerator_5937.current_mFormalSelector (HERE), enumerator_5937.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_5937.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 109)), enumerator_5937.current_mFormalArgumentName (HERE), enumerator_5937.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 111))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)) ;
    enumerator_5937.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 115)), GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_5287.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 118)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 118)).add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 118)), var_selfType_5287, object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 120)), var_formalParameterListForGeneration_5834  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 116)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 114)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                         extensionMethod_abstractExtensionMethodAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_semanticAnalysis (defineExtensionMethod_abstractExtensionMethodAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionMethodAST buildExtensionListMaps'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
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
  ioArgument_ioAbstractExtensionMethodListMapAST.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 143)), object->mAttribute_mAbstractExtensionMethodName  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 142)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                               extensionMethod_abstractExtensionMethodAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionMethodAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@abstractExtensionMethodForGeneration appendDeclaration1'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodForGeneration * object = (const cPtr_abstractExtensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 163)), object->mAttribute_mAbstractExtensionMethodName, object->mAttribute_mAbstractExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 162))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration.mSlotID,
                                              extensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_ (defineExtensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@abstractExtensionMethodForGeneration headerKind'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_abstractExtensionMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 172)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_abstractExtensionMethodForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration.mSlotID,
                                   extensionGetter_abstractExtensionMethodForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractExtensionMethodForGeneration_headerKind (defineExtensionGetter_abstractExtensionMethodForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@abstractExtensionMethodForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodForGeneration * object = (const cPtr_abstractExtensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 181)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 181)).add_operation (object->mAttribute_mAbstractExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 181))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 181)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 182)) ;
  cEnumerator_formalParameterListForGeneration enumerator_9882 (object->mAttribute_mAbstractExtensionMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_9882.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_9882.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 184)) ;
    enumerator_9882.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, object->mAttribute_mReceiverType, object->mAttribute_mAbstractExtensionMethodName, object->mAttribute_mAbstractExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration.mSlotID,
                                                     extensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation (defineExtensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionSetterAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionSetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GALGAS_extensionModifierMapForBuildingContext & ioArgument_ioExtensionModifierMapForBuildingContext,
                                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  GALGAS_lstring var_key_2589 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)).add_operation (object->mAttribute_mAbstractExtensionModifierName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)), object->mAttribute_mAbstractExtensionModifierName.getter_location (SOURCE_FILE ("extension-abstract-setter.galgas", 48))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)) ;
  {
  const GALGAS_abstractExtensionSetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2589, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 49)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2589, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 50)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-abstract-setter.galgas", 50))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 50)) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 50)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionModifierMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 52)) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 52)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 52)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionModifierMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionModifierMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-setter.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 53)) ;
    }
  }
  cMapElement_extensionModifierMapForBuildingContext * objectArray_3110 = (cMapElement_extensionModifierMapForBuildingContext *) ioArgument_ioExtensionModifierMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionModifierMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 58)) ;
  if (NULL != objectArray_3110) {
      macroValidSharedObject (objectArray_3110, cMapElement_extensionModifierMapForBuildingContext) ;
    {
    objectArray_3110->mAttribute_mExtensionModifierMapForType.setter_insertKey (object->mAttribute_mAbstractExtensionModifierName, object->mAttribute_mAbstractExtensionModifierFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 59)) ;
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
//                                                                                                                     *
//                     Overriding extension getter '@abstractExtensionSetterAST keyRepresentation'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_abstractExtensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  result_outString = GALGAS_string ("abstract extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)).add_operation (object->mAttribute_mAbstractExtensionModifierName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_abstractExtensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                          extensionGetter_abstractExtensionSetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractExtensionSetterAST_keyRepresentation (defineExtensionGetter_abstractExtensionSetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionSetterAST enterInSemanticContext'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
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
//                                                                                                                     *
//                     Overriding extension method '@abstractExtensionSetterAST semanticAnalysis'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5351 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 97)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5351.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 99)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-abstract-setter.galgas", 99)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractExtensionModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_5351.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 100)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 100))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 100)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_5351.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 101)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractExtensionModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (var_selfType_5351.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 102)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 102))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 102)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_5902 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-setter.galgas", 105)) ;
  cEnumerator_formalParameterListAST enumerator_6007 (object->mAttribute_mAbstractExtensionModifierFormalParameterList, kEnumeration_up) ;
  while (enumerator_6007.hasCurrentObject ()) {
    var_formalParameterListForGeneration_5902.addAssign_operation (enumerator_6007.current_mFormalSelector (HERE), enumerator_6007.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_6007.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 110)), enumerator_6007.current_mFormalArgumentName (HERE), enumerator_6007.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 112))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 107)) ;
    enumerator_6007.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (object->mAttribute_mAbstractExtensionModifierName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 116)), GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 119)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 119)).add_operation (object->mAttribute_mAbstractExtensionModifierName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 119)), var_selfType_5351, object->mAttribute_mAbstractExtensionModifierName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 121)), var_formalParameterListForGeneration_5902  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 117)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 115)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                         extensionMethod_abstractExtensionSetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_semanticAnalysis (defineExtensionMethod_abstractExtensionSetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionSetterAST buildExtensionListMaps'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionModifierListMapAST,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
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
  ioArgument_ioAbstractExtensionModifierListMapAST.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 146)), object->mAttribute_mAbstractExtensionModifierName  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 145)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                               extensionMethod_abstractExtensionSetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionSetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@abstractExtensionSetterForGeneration headerKind'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_abstractExtensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 163)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_abstractExtensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration.mSlotID,
                                   extensionGetter_abstractExtensionSetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractExtensionSetterForGeneration_headerKind (defineExtensionGetter_abstractExtensionSetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@abstractExtensionSetterForGeneration appendDeclaration1'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterForGeneration * object = (const cPtr_abstractExtensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionModifierDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 172)), object->mAttribute_mAbstractExtensionModifierName, object->mAttribute_mAbstractExtensionModifierFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 171))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration.mSlotID,
                                              extensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@abstractExtensionSetterForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterForGeneration * object = (const cPtr_abstractExtensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 185)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 185)).add_operation (object->mAttribute_mAbstractExtensionModifierName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 185))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 185)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 186)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionModifierImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 188)), object->mAttribute_mAbstractExtensionModifierName, object->mAttribute_mAbstractExtensionModifierFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 187))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration.mSlotID,
                                                     extensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation (defineExtensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension getter '@extensionGetterAST keyRepresentation'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_extensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  result_outString = GALGAS_string ("extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 57)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 57)).add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 57)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_extensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                          extensionGetter_extensionGetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_extensionGetterAST_keyRepresentation (defineExtensionGetter_extensionGetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@extensionGetterAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                        GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  GALGAS_lstring var_key_3659 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 71)).add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 71)), object->mAttribute_mExtensionGetterName.getter_location (SOURCE_FILE ("extension-getter.galgas", 71))  COMMA_SOURCE_FILE ("extension-getter.galgas", 71)) ;
  {
  const GALGAS_extensionGetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3659, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 72)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3659, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 73)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-getter.galgas", 73))  COMMA_SOURCE_FILE ("extension-getter.galgas", 73)) COMMA_SOURCE_FILE ("extension-getter.galgas", 73)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 75)) COMMA_SOURCE_FILE ("extension-getter.galgas", 75)).operator_not (SOURCE_FILE ("extension-getter.galgas", 75)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-getter.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 76)) ;
    }
  }
  cMapElement_extensionGetterMapForBuildingContext * objectArray_4154 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 81)) ;
  if (NULL != objectArray_4154) {
      macroValidSharedObject (objectArray_4154, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    objectArray_4154->mAttribute_mExtensionGetterMapForType.setter_insertKey (object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterReturnedTypeName, object->mAttribute_mExtensionGetterFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 82)) ;
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
//                                                                                                                     *
//                      Overriding extension method '@extensionGetterAST enterInSemanticContext'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
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
//                                                                                                                     *
//                         Overriding extension method '@extensionGetterAST semanticAnalysis'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5846 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 113)) ;
  GALGAS_string var_selfObjectName_5946 ;
  GALGAS_string var_selfObjectAccessor_5975 ;
  GALGAS_bool var_implementedAsFunction_6005 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType_5846.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 118)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-getter.galgas", 118)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName_5946 = GALGAS_string ("object") ;
    var_selfObjectAccessor_5975 = GALGAS_string ("object->") ;
    var_implementedAsFunction_6005 = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName_5946 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_5975 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_6005 = GALGAS_bool (true) ;
  }
  GALGAS_analysisContext var_analysisContext_6367 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5846, var_selfObjectName_5946, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-getter.galgas", 133))  COMMA_SOURCE_FILE ("extension-getter.galgas", 128)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_6541 ;
  GALGAS_string var_returnVariableCppName_6573 ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_6647 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6724 ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType_5846.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 141)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-getter.galgas", 141)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_5846.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 141)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-getter.galgas", 141)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 141)).operator_or (GALGAS_bool (kIsEqual, var_selfType_5846.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 141)).objectCompare (GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("extension-getter.galgas", 141)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 141)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType_5846.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 142)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-getter.galgas", 143)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext_6367, object->mAttribute_mExtensionGetterFormalInputParameterList, temp_1, var_selfObjectAccessor_5975, object->mAttribute_mExtensionGetterInstructionList, object->mAttribute_mExtensionGetterReturnedVariableName, object->mAttribute_mExtensionGetterReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration_6647, var_returnType_6541, var_returnVariableCppName_6573, var_semanticInstructionListForGeneration_6724, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 138)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 157)), GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (var_selfType_5846.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 160)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 160)).add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 160)), var_selfType_5846, object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 162)), var_implementedAsFunction_6005, var_returnType_6541, var_returnVariableCppName_6573, var_formalParameterListForGeneration_6647, var_selfType_5846.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 167)), var_semanticInstructionListForGeneration_6724  COMMA_SOURCE_FILE ("extension-getter.galgas", 158)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-getter.galgas", 156)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                         extensionMethod_extensionGetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionGetterAST_semanticAnalysis (defineExtensionMethod_extensionGetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@extensionGetterAST buildExtensionListMaps'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
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
  ioArgument_ioExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 191)), object->mAttribute_mExtensionGetterName  COMMA_SOURCE_FILE ("extension-getter.galgas", 190)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                               extensionMethod_extensionGetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionGetterAST_buildExtensionListMaps (defineExtensionMethod_extensionGetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension getter '@extensionGetterForGeneration headerKind'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_extensionGetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-getter.galgas", 213)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_extensionGetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_extensionGetterForGeneration.mSlotID,
                                   extensionGetter_extensionGetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_extensionGetterForGeneration_headerKind (defineExtensionGetter_extensionGetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@extensionGetterForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionGetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterForGeneration * object = (const cPtr_extensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 223)), object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 226)) COMMA_SOURCE_FILE ("extension-getter.galgas", 222))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 230)), object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("extension-getter.galgas", 229))) ;
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
//                                                                                                                     *
//              Overriding extension method '@extensionGetterForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionGetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterForGeneration * object = (const cPtr_extensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_11554 = object->mAttribute_mExtensionGetterFormalParameterList ;
    {
    var_extensionReaderFormalParameterList_11554.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 247)), object->mAttribute_mReceiverType, GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 250))  COMMA_SOURCE_FILE ("extension-getter.galgas", 250)), GALGAS_bool (true), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 246)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 254)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 254)).add_operation (object->mAttribute_mExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 254))  COMMA_SOURCE_FILE ("extension-getter.galgas", 254)) ;
    GALGAS_string var_code_12196 ;
    {
    routine_generateFunction (GALGAS_string ("extensionGetter_").add_operation (object->mAttribute_mExtensionGetterName.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 256)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_11554, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType, object->mAttribute_mResultVarCppName, GALGAS_bool (false), var_code_12196, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 255)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 267)), object->mAttribute_mExtensionGetterName, var_code_12196 COMMA_SOURCE_FILE ("extension-getter.galgas", 266))) ;
  }else if (kBoolFalse == test_0) {
    extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 272)) ;
    extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 273)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_12555 (object->mAttribute_mExtensionGetterFormalParameterList, kEnumeration_up) ;
    while (enumerator_12555.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_12555.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 275)) ;
      enumerator_12555.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_baseType_12664 = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching_12700 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 279)).isValid ()) {
      uint32_t variant_12716 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 279)).uintValue () ;
      bool loop_12716 = true ;
      while (loop_12716) {
        loop_12716 = var_searching_12700.isValid () ;
        if (loop_12716) {
          loop_12716 = var_searching_12700.boolValue () ;
        }
        if (loop_12716 && (0 == variant_12716)) {
          loop_12716 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 279)) ;
        }
        if (loop_12716) {
          variant_12716 -- ;
          const enumGalgasBool test_1 = var_baseType_12664.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 280)).getter_isNull (SOURCE_FILE ("extension-getter.galgas", 280)).operator_not (SOURCE_FILE ("extension-getter.galgas", 280)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType_12664.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 281)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 281)).getter_hasKey (object->mAttribute_mExtensionGetterName COMMA_SOURCE_FILE ("extension-getter.galgas", 281)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType_12664 = var_baseType_12664.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 282)) ;
            }else if (kBoolFalse == test_2) {
              var_searching_12700 = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching_12700 = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_12664.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 290)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 290)).add_operation (object->mAttribute_mExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 290))  COMMA_SOURCE_FILE ("extension-getter.galgas", 290)) ;
    GALGAS_string var_extensionReaderCode_13419 ;
    {
    routine_generateExtensionGetter (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 299)), object->mAttribute_mResultVarCppName, var_extensionReaderCode_13419, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 291)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 304)), object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mResultType, var_extensionReaderCode_13419 COMMA_SOURCE_FILE ("extension-getter.galgas", 303))) ;
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
//                                                                                                                     *
//                         Overriding extension getter '@extensionMethodAST keyRepresentation'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_extensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  result_outString = GALGAS_string ("extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-method.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 50)).add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 50)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_extensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                          extensionGetter_extensionMethodAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_extensionMethodAST_keyRepresentation (defineExtensionGetter_extensionMethodAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@extensionMethodAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  GALGAS_lstring var_key_3330 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-method.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 64)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 64)).add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 64)), object->mAttribute_mExtensionMethodName.getter_location (SOURCE_FILE ("extension-method.galgas", 64))  COMMA_SOURCE_FILE ("extension-method.galgas", 64)) ;
  {
  const GALGAS_extensionMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3330, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 65)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3330, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-method.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 66)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-method.galgas", 66))  COMMA_SOURCE_FILE ("extension-method.galgas", 66)) COMMA_SOURCE_FILE ("extension-method.galgas", 66)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-method.galgas", 68)) COMMA_SOURCE_FILE ("extension-method.galgas", 68)).operator_not (SOURCE_FILE ("extension-method.galgas", 68)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-method.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 69)) ;
    }
  }
  cMapElement_extensionMethodMapForBuildingContext * objectArray_3825 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 74)) ;
  if (NULL != objectArray_3825) {
      macroValidSharedObject (objectArray_3825, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    objectArray_3825->mAttribute_mExtensionMethodMapForType.setter_insertKey (object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 75)) ;
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
//                                                                                                                     *
//                      Overriding extension method '@extensionMethodAST enterInSemanticContext'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
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
//                                                                                                                     *
//                         Overriding extension method '@extensionMethodAST semanticAnalysis'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5471 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 104)) ;
  GALGAS_string var_selfObjectName_5571 ;
  GALGAS_string var_selfObjectAccessor_5600 ;
  GALGAS_bool var_implementedAsFunction_5630 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType_5471.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 109)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-method.galgas", 109)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName_5571 = GALGAS_string ("object") ;
    var_selfObjectAccessor_5600 = GALGAS_string ("object->") ;
    var_implementedAsFunction_5630 = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName_5571 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_5600 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_5630 = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6009 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 119)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6133 ;
  GALGAS_analysisContext var_analysisContext_6155 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5471, var_selfObjectName_5571, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-method.galgas", 126))  COMMA_SOURCE_FILE ("extension-method.galgas", 121)) ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType_5471.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 131)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-method.galgas", 131)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_5471.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 131)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-method.galgas", 131)))) COMMA_SOURCE_FILE ("extension-method.galgas", 131)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType_5471.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 132)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 133)) ;
  }
  routine_analyzeRoutineBody (var_analysisContext_6155, object->mAttribute_mExtensionMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 130)), temp_1, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 135)), var_selfObjectAccessor_5600, object->mAttribute_mExtensionMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration_6133, var_formalParameterListForGeneration_6009, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 127)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 144)), GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_5471.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 147)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 147)).add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 147)), var_selfType_5471, object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 149)), var_implementedAsFunction_5630, var_formalParameterListForGeneration_6009, var_selfType_5471.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 152)), var_semanticInstructionListForGeneration_6133  COMMA_SOURCE_FILE ("extension-method.galgas", 145)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-method.galgas", 143)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                         extensionMethod_extensionMethodAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionMethodAST_semanticAnalysis (defineExtensionMethod_extensionMethodAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@extensionMethodAST buildExtensionListMaps'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
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
  ioArgument_ioExtensionMethodListMap.addAssign_operation (object->mAttribute_mTypeName.mAttribute_string, object->mAttribute_mExtensionMethodName  COMMA_SOURCE_FILE ("extension-method.galgas", 176)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                               extensionMethod_extensionMethodAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionMethodAST_buildExtensionListMaps (defineExtensionMethod_extensionMethodAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension getter '@extensionMethodForGeneration headerKind'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_extensionMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-method.galgas", 195)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_extensionMethodForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_extensionMethodForGeneration.mSlotID,
                                   extensionGetter_extensionMethodForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_extensionMethodForGeneration_headerKind (defineExtensionGetter_extensionMethodForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@extensionMethodForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodForGeneration * object = (const cPtr_extensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 205)), object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-method.galgas", 204))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 211)), object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-method.galgas", 210))) ;
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
//                                                                                                                     *
//              Overriding extension method '@extensionMethodForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodForGeneration * object = (const cPtr_extensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalParameterListForGeneration var_extensionMethodFormalParameterList_10807 = object->mAttribute_mExtensionMethodFormalParameterList ;
    {
    var_extensionMethodFormalParameterList_10807.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 227)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 228)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 230))  COMMA_SOURCE_FILE ("extension-method.galgas", 230)), GALGAS_string ("inObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 226)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 234)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 234)).add_operation (object->mAttribute_mExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 234))  COMMA_SOURCE_FILE ("extension-method.galgas", 234)) ;
    GALGAS_string var_code_11629 ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionMethod_").add_operation (object->mAttribute_mExtensionMethodName.getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 237)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_10807, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_11629, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 235)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 249)), object->mAttribute_mExtensionMethodName, var_code_11629 COMMA_SOURCE_FILE ("extension-method.galgas", 248))) ;
  }else if (kBoolFalse == test_0) {
    extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 254)) ;
    cEnumerator_formalParameterListForGeneration enumerator_11934 (object->mAttribute_mExtensionMethodFormalParameterList, kEnumeration_up) ;
    while (enumerator_11934.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_11934.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 256)) ;
      enumerator_11934.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_baseType_12043 = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching_12079 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 260)).isValid ()) {
      uint32_t variant_12095 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 260)).uintValue () ;
      bool loop_12095 = true ;
      while (loop_12095) {
        loop_12095 = var_searching_12079.isValid () ;
        if (loop_12095) {
          loop_12095 = var_searching_12079.boolValue () ;
        }
        if (loop_12095 && (0 == variant_12095)) {
          loop_12095 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 260)) ;
        }
        if (loop_12095) {
          variant_12095 -- ;
          const enumGalgasBool test_1 = var_baseType_12043.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 261)).getter_isNull (SOURCE_FILE ("extension-method.galgas", 261)).operator_not (SOURCE_FILE ("extension-method.galgas", 261)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType_12043.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 262)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 262)).getter_hasKey (object->mAttribute_mExtensionMethodName COMMA_SOURCE_FILE ("extension-method.galgas", 262)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType_12043 = var_baseType_12043.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 263)) ;
            }else if (kBoolFalse == test_2) {
              var_searching_12079 = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching_12079 = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType_12043.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 271)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 271)).add_operation (object->mAttribute_mExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 271))  COMMA_SOURCE_FILE ("extension-method.galgas", 271)) ;
    GALGAS_string var_methodImplementation_12737 ;
    {
    routine_generateExtensionMethod (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation_12737, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 272)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 282)), object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, var_methodImplementation_12737 COMMA_SOURCE_FILE ("extension-method.galgas", 281))) ;
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
//                                                                                                                     *
//                         Overriding extension getter '@extensionSetterAST keyRepresentation'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_extensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  result_outString = GALGAS_string ("extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 50)).add_operation (object->mAttribute_mExtensionModifierName.getter_string (SOURCE_FILE ("extension-setter.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 50)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_extensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                          extensionGetter_extensionSetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_extensionSetterAST_keyRepresentation (defineExtensionGetter_extensionSetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@extensionSetterAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionModifierMapForBuildingContext & ioArgument_ioExtensionModifierMapForBuildingContext,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  GALGAS_lstring var_key_3360 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 63)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 63)).add_operation (object->mAttribute_mExtensionModifierName.getter_string (SOURCE_FILE ("extension-setter.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 63)), object->mAttribute_mExtensionModifierName.getter_location (SOURCE_FILE ("extension-setter.galgas", 63))  COMMA_SOURCE_FILE ("extension-setter.galgas", 63)) ;
  {
  const GALGAS_extensionSetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3360, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 64)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3360, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 65)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-setter.galgas", 65))  COMMA_SOURCE_FILE ("extension-setter.galgas", 65)) COMMA_SOURCE_FILE ("extension-setter.galgas", 65)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionModifierMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 67)) COMMA_SOURCE_FILE ("extension-setter.galgas", 67)).operator_not (SOURCE_FILE ("extension-setter.galgas", 67)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionModifierMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionModifierMapForType::constructor_emptyMap (SOURCE_FILE ("extension-setter.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 68)) ;
    }
  }
  cMapElement_extensionModifierMapForBuildingContext * objectArray_3865 = (cMapElement_extensionModifierMapForBuildingContext *) ioArgument_ioExtensionModifierMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionModifierMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-setter.galgas", 73)) ;
  if (NULL != objectArray_3865) {
      macroValidSharedObject (objectArray_3865, cMapElement_extensionModifierMapForBuildingContext) ;
    {
    objectArray_3865->mAttribute_mExtensionModifierMapForType.setter_insertKey (object->mAttribute_mExtensionModifierName, object->mAttribute_mExtensionModifierFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 74)) ;
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
//                                                                                                                     *
//                      Overriding extension method '@extensionSetterAST enterInSemanticContext'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
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
//                                                                                                                     *
//                         Overriding extension method '@extensionSetterAST semanticAnalysis'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5519 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 104)) ;
  GALGAS_string var_selfObjectName_5619 ;
  GALGAS_string var_selfObjectAccessor_5648 ;
  GALGAS_bool var_implementedAsFunction_5678 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType_5519.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 109)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-setter.galgas", 109)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName_5619 = GALGAS_string ("object") ;
    var_selfObjectAccessor_5648 = GALGAS_string ("object->") ;
    var_implementedAsFunction_5678 = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName_5619 = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor_5648 = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction_5678 = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6057 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 119)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6181 ;
  GALGAS_analysisContext var_analysisContext_6203 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5519, var_selfObjectName_5619, var_selfType_5519  COMMA_SOURCE_FILE ("extension-setter.galgas", 121)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext_6203, object->mAttribute_mExtensionModifierFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 130)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 131)), var_selfType_5519.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 132)), var_selfObjectAccessor_5648, object->mAttribute_mExtensionModifierInstructionList, object->mAttribute_mEndOfModifierLocation, var_semanticInstructionListForGeneration_6181, var_formalParameterListForGeneration_6057, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 127)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (object->mAttribute_mExtensionModifierName.getter_string (SOURCE_FILE ("extension-setter.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 141)), GALGAS_extensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (var_selfType_5519.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 144)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 144)).add_operation (object->mAttribute_mExtensionModifierName.getter_string (SOURCE_FILE ("extension-setter.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 144)), var_selfType_5519, object->mAttribute_mExtensionModifierName.getter_string (SOURCE_FILE ("extension-setter.galgas", 146)), var_implementedAsFunction_5678, var_formalParameterListForGeneration_6057, var_selfType_5519.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 149)), var_semanticInstructionListForGeneration_6181  COMMA_SOURCE_FILE ("extension-setter.galgas", 142)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-setter.galgas", 140)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                         extensionMethod_extensionSetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionSetterAST_semanticAnalysis (defineExtensionMethod_extensionSetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@extensionSetterAST buildExtensionListMaps'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & ioArgument_ioExtensionModifierListMap,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
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
  ioArgument_ioExtensionModifierListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 173)), object->mAttribute_mExtensionModifierName  COMMA_SOURCE_FILE ("extension-setter.galgas", 172)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                               extensionMethod_extensionSetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionSetterAST_buildExtensionListMaps (defineExtensionMethod_extensionSetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension getter '@extensionSetterForGeneration headerKind'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_extensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-setter.galgas", 193)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_extensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_extensionSetterForGeneration.mSlotID,
                                   extensionGetter_extensionSetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_extensionSetterForGeneration_headerKind (defineExtensionGetter_extensionSetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@extensionSetterForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterForGeneration * object = (const cPtr_extensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionModifierAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 203)), object->mAttribute_mExtensionModifierName, object->mAttribute_mExtensionModifierFormalParameterList COMMA_SOURCE_FILE ("extension-setter.galgas", 202))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionModifierDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 209)), object->mAttribute_mExtensionModifierName, object->mAttribute_mExtensionModifierFormalParameterList COMMA_SOURCE_FILE ("extension-setter.galgas", 208))) ;
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
//                                                                                                                     *
//              Overriding extension method '@extensionSetterForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterForGeneration * object = (const cPtr_extensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalParameterListForGeneration var_extensionModifierFormalParameterList_10696 = object->mAttribute_mExtensionModifierFormalParameterList ;
    {
    var_extensionModifierFormalParameterList_10696.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas", 225)), GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.galgas", 226)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 228))  COMMA_SOURCE_FILE ("extension-setter.galgas", 228)), GALGAS_string ("ioObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 224)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 232)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 232)).add_operation (object->mAttribute_mExtensionModifierName, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 232))  COMMA_SOURCE_FILE ("extension-setter.galgas", 232)) ;
    GALGAS_string var_code_11524 ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionSetter_").add_operation (object->mAttribute_mExtensionModifierName.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 235)), ioArgument_ioInclusionSet, var_extensionModifierFormalParameterList_10696, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_11524, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 233)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 247)), object->mAttribute_mExtensionModifierName, var_code_11524 COMMA_SOURCE_FILE ("extension-setter.galgas", 246))) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_baseType_11761 = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching_11797 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 254)).isValid ()) {
      uint32_t variant_11813 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 254)).uintValue () ;
      bool loop_11813 = true ;
      while (loop_11813) {
        loop_11813 = var_searching_11797.isValid () ;
        if (loop_11813) {
          loop_11813 = var_searching_11797.boolValue () ;
        }
        if (loop_11813 && (0 == variant_11813)) {
          loop_11813 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas", 254)) ;
        }
        if (loop_11813) {
          variant_11813 -- ;
          const enumGalgasBool test_1 = var_baseType_11761.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 255)).getter_isNull (SOURCE_FILE ("extension-setter.galgas", 255)).operator_not (SOURCE_FILE ("extension-setter.galgas", 255)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType_11761.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 256)).getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 256)).getter_hasKey (object->mAttribute_mExtensionModifierName COMMA_SOURCE_FILE ("extension-setter.galgas", 256)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType_11761 = var_baseType_11761.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 257)) ;
            }else if (kBoolFalse == test_2) {
              var_searching_11797 = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching_11797 = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType_11761.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 265)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 265)).add_operation (object->mAttribute_mExtensionModifierName, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 265))  COMMA_SOURCE_FILE ("extension-setter.galgas", 265)) ;
    extensionMethod_addHeaderFileName (var_baseType_11761, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 266)) ;
    GALGAS_string var_modifierImplementation_12517 ;
    {
    routine_generateExtensionModifier (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 268)), GALGAS_string::makeEmptyString (), object->mAttribute_mExtensionModifierName, ioArgument_ioInclusionSet, object->mAttribute_mExtensionModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_modifierImplementation_12517, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 267)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionModifierImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 277)), object->mAttribute_mExtensionModifierName, object->mAttribute_mExtensionModifierFormalParameterList, var_modifierImplementation_12517 COMMA_SOURCE_FILE ("extension-setter.galgas", 276))) ;
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
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionGetterAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  const GALGAS_overridingExtensionGetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 63)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                                extensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension getter '@overridingExtensionGetterAST keyRepresentation'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  result_outString = GALGAS_string ("overriding extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 71)).add_operation (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 71)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                          extensionGetter_overridingExtensionGetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionGetterAST_keyRepresentation (defineExtensionGetter_overridingExtensionGetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionGetterAST enterInSemanticContext'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
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
//                                                                                                                     *
//                    Overriding extension method '@overridingExtensionGetterAST semanticAnalysis'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5240 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 95)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5240.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 97)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-getter.galgas", 97)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingExtensionGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_5240.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 98)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 98))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 98)) ;
  }
  GALGAS_string var_baseTypeName_5584 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5623 = var_selfType_5240.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 102)) ;
  GALGAS_functionSignature var_inheritedSignature_5687 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 103)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType_5718 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-getter.galgas", 104)) ;
  GALGAS_location var_inheritedDeclarationLocation_5789 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 105)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 106)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 106)).isValid ()) {
    uint32_t variant_5813 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 106)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 106)).uintValue () ;
    bool loop_5813 = true ;
    while (loop_5813) {
      loop_5813 = var_superType_5623.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 107)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 107)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5584.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 107)).isValid () ;
      if (loop_5813) {
        loop_5813 = var_superType_5623.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 107)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 107)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5584.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 107)).boolValue () ;
      }
      if (loop_5813 && (0 == variant_5813)) {
        loop_5813 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas", 106)) ;
      }
      if (loop_5813) {
        variant_5813 -- ;
        const enumGalgasBool test_2 = var_superType_5623.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 108)).getter_hasKey (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 108)) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 108)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier_6235 ;
          GALGAS_methodKind joker_6088 ; // Joker input parameter
          GALGAS_bool joker_6165 ; // Joker input parameter
          GALGAS_string joker_6245 ; // Joker input parameter
          var_superType_5623.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 109)).method_searchKey (object->mAttribute_mOverridingExtensionGetterName, joker_6088, var_inheritedSignature_5687, var_inheritedDeclarationLocation_5789, joker_6165, var_inheritedReturnType_5718, var_qualifier_6235, joker_6245, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 109)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier_6235.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas", 119)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName_5584 = var_superType_5623.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 120)) ;
          }
        }
        var_superType_5623 = var_superType_5623.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 123)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName_5584.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingExtensionGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 126)) ;
  }
  GALGAS_analysisContext var_analysisContext_6589 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5240, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-getter.galgas", 134))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 129)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_7310 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_7352 ;
  GALGAS_string var_returnVariableCppName_7391 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_7475 ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType_5240.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 138)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-getter.galgas", 138)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_5240.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 138)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-overriding-getter.galgas", 138)))) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 138)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType_5240.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 139)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 140)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext_6589, object->mAttribute_mOverridingExtensionGetterFormalInputParameterList, temp_6, GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionGetterInstructionList, object->mAttribute_mOverridingExtensionGetterReturnedVariableName, object->mAttribute_mOverridingExtensionGetterReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration_7310, var_returnType_7352, var_returnVariableCppName_7391, var_semanticInstructionListForGeneration_7475, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 135)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5584.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration_7310, var_returnType_7352, object->mAttribute_mOverridingExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-getter.galgas", 157)), var_inheritedSignature_5687, var_inheritedReturnType_5718, var_inheritedDeclarationLocation_5789, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 154)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 165)), GALGAS_overrideExtensionGetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 168)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 168)).add_operation (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 168)), var_selfType_5240, var_baseTypeName_5584, object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 171)), var_returnType_7352, var_returnVariableCppName_7391, var_formalParameterListForGeneration_7310, var_selfType_5240.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 175)), var_semanticInstructionListForGeneration_7475  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 166)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 164)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                         extensionMethod_overridingExtensionGetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_semanticAnalysis (defineExtensionMethod_overridingExtensionGetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionGetterAST buildExtensionListMaps'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
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
  ioArgument_ioOverridingExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 199)), object->mAttribute_mOverridingExtensionGetterName  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 198)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingExtensionGetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionGetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@overrideExtensionGetterForGeneration headerKind'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_overrideExtensionGetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas", 221)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overrideExtensionGetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration.mSlotID,
                                   extensionGetter_overrideExtensionGetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overrideExtensionGetterForGeneration_headerKind (defineExtensionGetter_overrideExtensionGetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@overrideExtensionGetterForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overrideExtensionGetterForGeneration * object = (const cPtr_overrideExtensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overrideExtensionGetterForGeneration) ;
  GALGAS_string var_extensionReaderCode_11482 ;
  {
  routine_generateExtensionGetter (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mOverridingExtensionGetterName, object->mAttribute_mOverridingExtensionGetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 238)), object->mAttribute_mResultVarCppName, var_extensionReaderCode_11482, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 230)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 243)), object->mAttribute_mOverridingExtensionGetterName, object->mAttribute_mResultType, var_extensionReaderCode_11482 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 242))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration.mSlotID,
                                                     extensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (defineExtensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionSetterAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  const GALGAS_overridingExtensionSetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 56)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                                extensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension getter '@overridingExtensionSetterAST keyRepresentation'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingExtensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  result_outString = GALGAS_string ("overriding extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 64)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 64)).add_operation (object->mAttribute_mOverridingExtensionModifierName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 64)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                          extensionGetter_overridingExtensionSetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionSetterAST_keyRepresentation (defineExtensionGetter_overridingExtensionSetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionSetterAST enterInSemanticContext'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
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
//                                                                                                                     *
//                    Overriding extension method '@overridingExtensionSetterAST semanticAnalysis'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_4990 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 89)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_4990.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 91)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-setter.galgas", 91)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingExtensionModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_4990.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 92)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 92))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 92)) ;
  }
  GALGAS_string var_baseTypeName_5335 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5374 = var_selfType_4990.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 96)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5423 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 97)) ;
  GALGAS_location var_inheritedDeclarationLocation_5503 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 98)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 99)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 99)).isValid ()) {
    uint32_t variant_5527 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 99)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 99)).uintValue () ;
    bool loop_5527 = true ;
    while (loop_5527) {
      loop_5527 = var_superType_5374.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 100)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 100)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5335.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 100)).isValid () ;
      if (loop_5527) {
        loop_5527 = var_superType_5374.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 100)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 100)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5335.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 100)).boolValue () ;
      }
      if (loop_5527 && (0 == variant_5527)) {
        loop_5527 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 99)) ;
      }
      if (loop_5527) {
        variant_5527 -- ;
        const enumGalgasBool test_2 = var_superType_5374.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 101)).getter_hasKey (object->mAttribute_mOverridingExtensionModifierName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 101)) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 101)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier_5749 ;
          GALGAS_methodKind joker_5827 ; // Joker input parameter
          GALGAS_bool joker_5850 ; // Joker input parameter
          GALGAS_string joker_5864 ; // Joker input parameter
          var_superType_5374.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 103)).method_searchKey (object->mAttribute_mOverridingExtensionModifierName, joker_5827, var_inheritedSignature_5423, joker_5850, var_qualifier_5749, joker_5864, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 103)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier_5749.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-setter.galgas", 104)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName_5335 = var_superType_5374.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 105)) ;
          }
        }
        var_superType_5374 = var_superType_5374.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 108)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName_5335.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingExtensionModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this setter is not declared by a super class")  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 111)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6220 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 114)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6344 ;
  GALGAS_analysisContext var_analysisContext_6366 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_4990, GALGAS_string ("object"), var_selfType_4990  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 116)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext_6366, object->mAttribute_mOverridingExtensionModifierFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 126)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 127)), var_selfType_4990.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 128)), GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionModifierInstructionList, object->mAttribute_mEndOfModifierLocation, var_semanticInstructionListForGeneration_6344, var_formalParameterListForGeneration_6220, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 123)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5335.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration_6220, object->mAttribute_mOverridingExtensionModifierName.getter_location (SOURCE_FILE ("extension-overriding-setter.galgas", 139)), var_inheritedSignature_5423, var_inheritedDeclarationLocation_5503, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 137)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (object->mAttribute_mOverridingExtensionModifierName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 146)), GALGAS_overridingExtensionSetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 149)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 149)).add_operation (object->mAttribute_mOverridingExtensionModifierName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 149)), var_selfType_4990, var_baseTypeName_5335, object->mAttribute_mOverridingExtensionModifierName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 152)), var_formalParameterListForGeneration_6220, var_selfType_4990.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 154)), var_semanticInstructionListForGeneration_6344  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 147)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 145)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                         extensionMethod_overridingExtensionSetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_semanticAnalysis (defineExtensionMethod_overridingExtensionSetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionSetterAST buildExtensionListMaps'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionModifierListMap,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
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
  ioArgument_ioOverridingExtensionModifierListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 179)), object->mAttribute_mOverridingExtensionModifierName  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 178)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingExtensionSetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionSetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@overridingExtensionSetterForGeneration headerKind'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_overridingExtensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-setter.galgas", 199)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration.mSlotID,
                                   extensionGetter_overridingExtensionSetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionSetterForGeneration_headerKind (defineExtensionGetter_overridingExtensionSetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//         Overriding extension method '@overridingExtensionSetterForGeneration appendSpecificImplementation'          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterForGeneration * object = (const cPtr_overridingExtensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterForGeneration) ;
  GALGAS_string var_methodImplementation_10642 ;
  {
  routine_generateExtensionModifier (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 209)), object->mAttribute_mBaseTypeName, object->mAttribute_mExtensionModifierName, ioArgument_ioInclusionSet, object->mAttribute_mExtensionModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation_10642, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 208)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType_10679 = object->mAttribute_mReceiverType ;
  GALGAS_bool var_searching_10713 = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 219)).isValid ()) {
    uint32_t variant_10727 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 219)).uintValue () ;
    bool loop_10727 = true ;
    while (loop_10727) {
      loop_10727 = var_searching_10713.isValid () ;
      if (loop_10727) {
        loop_10727 = var_searching_10713.boolValue () ;
      }
      if (loop_10727 && (0 == variant_10727)) {
        loop_10727 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 219)) ;
      }
      if (loop_10727) {
        variant_10727 -- ;
        const enumGalgasBool test_0 = var_baseType_10679.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 220)).getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 220)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 220)).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = var_baseType_10679.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 221)).getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 221)).getter_hasKey (object->mAttribute_mExtensionModifierName COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 221)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_baseType_10679 = var_baseType_10679.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 222)) ;
          }else if (kBoolFalse == test_1) {
            var_searching_10713 = GALGAS_bool (false) ;
          }
        }else if (kBoolFalse == test_0) {
          var_searching_10713 = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType_10679.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 230)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 230)).add_operation (object->mAttribute_mExtensionModifierName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 230))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 230)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 231)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionModifierImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 233)), object->mAttribute_mExtensionModifierName, var_methodImplementation_10642 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 232))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration.mSlotID,
                                                     extensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (defineExtensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension method '@stringsetPredefinedTypeAST getEnumerationList'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getEnumerationList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                           GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                           GALGAS_stringlist & outArgument_outEnumerationVariant,
                                                                           GALGAS_string & outArgument_outEnumeratedType,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_2676 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_2676 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 28)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 29)) ;
  outArgument_outEnumerationList.addAssign_operation (var_stringTypeIndex_2676, GALGAS_string ("key")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 30)) ;
  outArgument_outEnumerationVariant = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 31)) ;
  outArgument_outEnumerationVariant.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 32)) ;
  outArgument_outEnumerationVariant.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 33)) ;
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
//                                                                                                                     *
//                       Overriding extension method '@dataPredefinedTypeAST getEnumerationList'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dataPredefinedTypeAST_getEnumerationList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                      GALGAS_stringlist & outArgument_outEnumerationVariant,
                                                                      GALGAS_string & outArgument_outEnumeratedType,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_uintTypeIndex_3345 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), var_uintTypeIndex_3345 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 45)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 46)) ;
  outArgument_outEnumerationList.addAssign_operation (var_uintTypeIndex_3345, GALGAS_string ("data")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 47)) ;
  outArgument_outEnumerationVariant = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 48)) ;
  outArgument_outEnumerationVariant.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 49)) ;
  outArgument_outEnumerationVariant.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 50)) ;
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
//                                                                                                                     *
//                      Overriding extension method '@stringsetPredefinedTypeAST getModifierMap'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getModifierMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_setterMap & outArgument_outModifierMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_stringType_4403 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_4403 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 65)) ;
  }
  outArgument_outModifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeFeatures.galgas", 66)) ;
  {
  outArgument_outModifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 68))  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 68)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsTypeFeatures.galgas", 69)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeFeatures.galgas", 70)), var_stringType_4403, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticsTypeFeatures.galgas", 70)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 70)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsTypeFeatures.galgas", 72)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 67)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringsetPredefinedTypeAST_getModifierMap (void) {
  enterExtensionMethod_getModifierMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                       extensionMethod_stringsetPredefinedTypeAST_getModifierMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getModifierMap (defineExtensionMethod_stringsetPredefinedTypeAST_getModifierMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension getter '@applicationPredefinedTypeAST getSupportedOperatorFlags'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                                  extensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@bigintPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@timerPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 100)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                                  extensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@objectPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 106)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_objectPredefinedTypeAST.mSlotID,
                                                  extensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@stringPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                                  extensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@charPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                                  extensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_charPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@boolPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_prefixNotOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_boolPredefinedTypeAST.mSlotID,
                                                  extensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@uintPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@sintPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@uint64PredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                                  extensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@sint64PredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                                  extensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@doublePredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                                  extensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension getter '@stringsetPredefinedTypeAST getSupportedOperatorFlags'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 192)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 192)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (function_generateEnumerationHelperMethods (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)).operator_or (function_generateCopyConstructorAndAssignmentOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 196)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                                  extensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension getter '@binarysetPredefinedTypeAST getSupportedOperatorFlags'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 204)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                                  extensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@typePredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 210)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                                  extensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_typePredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@dataPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 216)).operator_or (function_generateEnumerationHelperMethods (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 217)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 216)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                                  extensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension getter '@functionPredefinedTypeAST getSupportedOperatorFlags'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 223)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                                  extensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension getter '@locationPredefinedTypeAST getSupportedOperatorFlags'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 229)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                                  extensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension getter '@filewrapperPredefinedTypeAST getSupportedOperatorFlags'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_uint extensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 235)) ;
//---
  return result_outFlags ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                                  extensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@stringsetPredefinedTypeAST getAddAssignArgumentList'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                 GALGAS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_14602 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_14602 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 244)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 245)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeFeatures.galgas", 245)), var_stringTypeIndex_14602, GALGAS_string ("inString")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 245)) ;
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
//                                                                                                                     *
//                     Overriding extension method '@locationPredefinedTypeAST getConstructorMap'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_locationPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_constructorMap & outArgument_outMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 125)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string ("location"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 126)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 133)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_locationPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                          extensionMethod_locationPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_locationPredefinedTypeAST_getConstructorMap (defineExtensionMethod_locationPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@stringPredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_constructorMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 147)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("homeDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 148)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("retrieveAndResetTemplateString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 155)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSymbolicLinkContents"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 162)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSourceFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 171)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 178)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 185)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDateTime"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 194)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariable"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 201)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariableOrEmpty"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 210)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppLineComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 219)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppSpaceComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 226)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppTitleComment"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 233)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 242)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppChar"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 251)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsJoinedByString"), GALGAS_string ("stringlist"), GALGAS_string ("inComponents"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 260)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSequenceOfCharacters"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 271)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                          extensionMethod_stringPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getConstructorMap (defineExtensionMethod_stringPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension method '@applicationPredefinedTypeAST getConstructorMap'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_applicationPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                            GALGAS_constructorMap & outArgument_outMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 289)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("verboseOutput"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 290)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("projectVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 297)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("galgasVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 304)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 311)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 318)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 328)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 335)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 346)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 357)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 369)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 376)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 387)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 398)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 410)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 417)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 428)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 439)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordIdentifierSet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 451)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordListForIdentifier"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 458)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_applicationPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                          extensionMethod_applicationPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_applicationPredefinedTypeAST_getConstructorMap (defineExtensionMethod_applicationPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@charPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_charPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 474)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("replacementCharacter"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 475)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeCharacterWithUnsigned"), GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 482)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_charPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                          extensionMethod_charPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_charPredefinedTypeAST_getConstructorMap (defineExtensionMethod_charPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@uintPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_uintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 498)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compilationMode"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 499)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 506)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("errorCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 513)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("warningCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 520)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueWithMask"), GALGAS_string ("uint"), GALGAS_string ("inLowerIndex"), GALGAS_string ("uint"), GALGAS_string ("inUpperIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 527)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_uintPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                          extensionMethod_uintPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getConstructorMap (defineExtensionMethod_uintPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@sintPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 545)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 546)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 553)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sintPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                          extensionMethod_sintPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sintPredefinedTypeAST_getConstructorMap (defineExtensionMethod_sintPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@uint64PredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                             GALGAS_constructorMap & outArgument_outMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 567)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 568)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64MaskWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 575)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64BaseValueWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 584)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64WithBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 593)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                          extensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (defineExtensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@sint64PredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                             GALGAS_constructorMap & outArgument_outMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 609)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 610)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 617)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                          extensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (defineExtensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@stringsetPredefinedTypeAST getConstructorMap'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_constructorMap & outArgument_outMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 631)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 632)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 639)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithStringList"), GALGAS_string ("stringlist"), GALGAS_string ("inStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 648)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithLStringList"), GALGAS_string ("lstringlist"), GALGAS_string ("inLStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 657)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringsetPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                          extensionMethod_stringsetPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getConstructorMap (defineExtensionMethod_stringsetPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@binarysetPredefinedTypeAST getConstructorMap'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_binarysetPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_constructorMap & outArgument_outMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 673)) ;
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithBit"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 674)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 683)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fullBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 690)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithPredicateString"), GALGAS_string ("string"), GALGAS_string ("inPredicateString"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 697)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 706)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 719)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 732)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 745)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 758)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 771)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 784)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 797)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 810)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 823)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 836)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 849)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_binarysetPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                          extensionMethod_binarysetPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getConstructorMap (defineExtensionMethod_binarysetPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@typePredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typePredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 869)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("typeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 870)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typePredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                          extensionMethod_typePredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typePredefinedTypeAST_getConstructorMap (defineExtensionMethod_typePredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@bigintPredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bigintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_constructorMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 885)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("zero"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 886)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bigintPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                          extensionMethod_bigintPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getConstructorMap (defineExtensionMethod_bigintPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@dataPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dataPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 901)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyData"), GALGAS_string ("data"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 902)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dataWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 909)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dataPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                          extensionMethod_dataPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getConstructorMap (defineExtensionMethod_dataPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@functionPredefinedTypeAST getConstructorMap'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_constructorMap & outArgument_outMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 925)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionList"), GALGAS_string ("functionlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 926)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionWithName"), GALGAS_string ("string"), GALGAS_string ("inName"), GALGAS_string ("function"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 933)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFunctionDefined"), GALGAS_string ("string"), GALGAS_string ("inFunctionName"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 942)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                          extensionMethod_functionPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionPredefinedTypeAST_getConstructorMap (defineExtensionMethod_functionPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@doublePredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_doublePredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_constructorMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 959)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pi"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 960)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doubleWithBinaryImage"), GALGAS_string ("uint64"), GALGAS_string ("inBinaryImage"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 967)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_doublePredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                          extensionMethod_doublePredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_doublePredefinedTypeAST_getConstructorMap (defineExtensionMethod_doublePredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@timerPredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_timerPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_constructorMap & outArgument_outMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 984)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("start"), GALGAS_string ("timer"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 985)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_timerPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                          extensionMethod_timerPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getConstructorMap (defineExtensionMethod_timerPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@locationPredefinedTypeAST getGetterMap'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_locationPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_getterMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 377)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("locationString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 378)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("locationIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 385)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("file"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 392)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("line"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 399)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("column"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 406)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isNowhere"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 413)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_locationPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                     extensionMethod_locationPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_locationPredefinedTypeAST_getGetterMap (defineExtensionMethod_locationPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@stringPredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 427)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastCharacter"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 428)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string ("lstring"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 435)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 442)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doesEnvironmentVariableExist"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 449)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 456)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 463)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nameRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 470)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 477)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("HTMLRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 484)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Representation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 491)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithoutDelimiters"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 498)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32Representation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 505)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByTrimmingWhiteSpaces"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 512)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("md5"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 519)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsignedNumber"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 526)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsignedNumber"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 533)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("capacity"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 540)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isSymbolicLink"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 547)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExists"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 554)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExists"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 561)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pathExtension"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 568)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nativePathWithUnixPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 575)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unixPathWithNativePath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 582)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastPathComponent"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 589)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingPathExtension"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 596)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByCapitalizingFirstCharacter"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 603)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("firstCharacterOrNul"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 610)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingLastPathComponent"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 617)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByStandardizingPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 624)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowercaseString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 631)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uppercaseString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 638)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("reversedString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 645)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentColumn"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 652)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("system"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 659)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("popen"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 666)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("characterAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 673)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacter"), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 680)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacterInRange"), GALGAS_string ("char"), GALGAS_string ("inFirstCharacter"), GALGAS_string ("char"), GALGAS_string ("inLastCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 687)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRemovingCharacterAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 698)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subStringFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 705)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("rightSubString"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 712)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("leftSubString"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 719)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subString"), GALGAS_string ("uint"), GALGAS_string ("inStart"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 726)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathFromPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 733)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("relativePathFromPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 740)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsSeparatedByString"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 747)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 754)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRightPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 761)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftAndRightPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 768)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByReplacingStringByString"), GALGAS_string ("string"), GALGAS_string ("inSearchedString"), GALGAS_string ("string"), GALGAS_string ("inReplacementString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 775)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFiles"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 782)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenFiles"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 789)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directories"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 796)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesWithExtensions"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 803)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFilesWithExtensions"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 810)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getGetterMap (defineExtensionMethod_stringPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Overriding extension method '@charPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_charPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 824)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 825)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32CharConstantRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 832)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 839)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalnum"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 846)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalpha"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 853)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("iscntrl"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 860)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isdigit"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 867)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("islower"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 874)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isupper"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 881)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isxdigit"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 888)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeLetter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 895)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeMark"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 902)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeNumber"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 909)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSeparator"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 916)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeCommand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 923)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodePunctuation"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 930)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSymbol"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 937)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 944)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToLower"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 951)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToUpper"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 958)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_charPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                     extensionMethod_charPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_charPredefinedTypeAST_getGetterMap (defineExtensionMethod_charPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Overriding extension method '@boolPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 972)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 973)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ocString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 980)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 987)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 994)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1001)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1008)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1015)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_boolPredefinedTypeAST.mSlotID,
                                     extensionMethod_boolPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolPredefinedTypeAST_getGetterMap (defineExtensionMethod_boolPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Overriding extension method '@uintPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_uintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1029)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1030)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1037)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1044)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1051)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1058)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lsbIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1065)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantBitCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1072)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("oneBitCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1079)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1086)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1093)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1100)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeValueAssigned"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1107)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isInRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1114)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1122)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1129)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1136)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1143)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_uintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                     extensionMethod_uintPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getGetterMap (defineExtensionMethod_uintPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Overriding extension method '@sintPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1157)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1158)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1165)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1172)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1179)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1186)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1193)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1200)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1207)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1215)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1222)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1229)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1236)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                     extensionMethod_sintPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sintPredefinedTypeAST_getGetterMap (defineExtensionMethod_sintPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@uint64PredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_getterMap & outArgument_outMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1251)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1252)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1259)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1266)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1272)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1279)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintSlice"), GALGAS_string ("uint"), GALGAS_string ("inStartBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1286)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1293)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1300)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1307)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1315)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1322)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1329)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1336)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                     extensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_uint_36__34_PredefinedTypeAST_getGetterMap (defineExtensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@sint64PredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_getterMap & outArgument_outMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1350)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1351)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1358)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1365)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1372)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1379)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1386)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1393)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1400)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1408)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1415)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1422)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1429)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                     extensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sint_36__34_PredefinedTypeAST_getGetterMap (defineExtensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@doublePredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_doublePredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1443)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1444)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1451)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1458)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1465)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1472)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cos"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1479)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sin"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1486)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tan"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1493)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log10"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1500)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log2"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1507)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("logn"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1514)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("exp"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1521)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cosDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1528)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sinDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1535)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tanDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1542)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sqrt"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1549)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("power"), GALGAS_string ("double"), GALGAS_string ("inExponant"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1556)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryImage"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1563)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_doublePredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                     extensionMethod_doublePredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_doublePredefinedTypeAST_getGetterMap (defineExtensionMethod_doublePredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@stringsetPredefinedTypeAST getGetterMap'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_getterMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1577)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1578)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1585)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("anyString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1592)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1599)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringsetPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringsetPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getGetterMap (defineExtensionMethod_stringsetPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@binarysetPredefinedTypeAST getGetterMap'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_binarysetPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_getterMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1613)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1614)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nodeCount"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1621)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isEmpty"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1628)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantVariableCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1635)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ITE"), GALGAS_string ("binaryset"), GALGAS_string ("inTHENoperand"), GALGAS_string ("binaryset"), GALGAS_string ("inELSEoperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1642)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("print"), GALGAS_string ("stringlist"), GALGAS_string ("inVariableList"), GALGAS_string ("uintlist"), GALGAS_string ("inBDDCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1651)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphvizDump"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1660)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("stringlist"), GALGAS_string ("inBitNameList"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1667)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transformedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransformationArray"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1675)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1683)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1691)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1698)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1705)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1712)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigValueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1721)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedValueCount"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1730)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64ValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1737)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1744)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueListWithNameList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_string ("inNameList"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1751)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("predicateStringValue"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1758)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedStringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1765)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap10"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1772)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap021"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1779)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap102"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1786)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap120"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1793)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap201"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1800)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap210"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1807)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transitiveClosure"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1814)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("accessibleStates"), GALGAS_string ("binaryset"), GALGAS_string ("inInitialStateSet"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1821)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("implies"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1828)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("equalTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1835)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("notEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1842)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowerOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1849)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("greaterOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1856)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictGreaterThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1863)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictLowerThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1870)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetByTranslatingFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inFirstIndexToTranslate"), GALGAS_string ("uint"), GALGAS_string ("inTranslation"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1877)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsValue"), GALGAS_string ("uint64"), GALGAS_string ("inValue"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1884)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existsOnBitRange"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1891)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_binarysetPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                     extensionMethod_binarysetPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getGetterMap (defineExtensionMethod_binarysetPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Overriding extension method '@typePredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typePredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1905)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1906)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasSuperclass"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1913)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("superclass"), GALGAS_string ("type"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1920)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typePredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                     extensionMethod_typePredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typePredefinedTypeAST_getGetterMap (defineExtensionMethod_typePredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                          Overriding extension method '@dataPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dataPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1934)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1935)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1942)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dataPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                     extensionMethod_dataPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getGetterMap (defineExtensionMethod_dataPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@functionPredefinedTypeAST getGetterMap'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_getterMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1956)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1957)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("resultType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1964)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("formalParameterTypeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1971)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("invoke"), GALGAS_string ("objectlist"), GALGAS_string ("inParameters"), GALGAS_string ("location"), GALGAS_string ("inErrorLocation"), GALGAS_string ("object"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1978)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                     extensionMethod_functionPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionPredefinedTypeAST_getGetterMap (defineExtensionMethod_functionPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@objectPredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_objectPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1989)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectStaticType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1990)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectDynamicType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1997)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_objectPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_objectPredefinedTypeAST.mSlotID,
                                     extensionMethod_objectPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_objectPredefinedTypeAST_getGetterMap (defineExtensionMethod_objectPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@filewrapperPredefinedTypeAST getGetterMap'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_getterMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2011)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allTextFilePathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2012)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allBinaryFilePathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2019)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allDirectoryPathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2026)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2033)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allFilePathesWithExtension"), GALGAS_string ("string"), GALGAS_string ("inExtension"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2040)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2047)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2054)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2061)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2068)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathForPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2075)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2082)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2089)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2096)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                     extensionMethod_filewrapperPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperPredefinedTypeAST_getGetterMap (defineExtensionMethod_filewrapperPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@timerPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_timerPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_getterMap & outArgument_outMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2111)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("msFromStart"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2119)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isRunning"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2126)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_timerPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                     extensionMethod_timerPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getGetterMap (defineExtensionMethod_timerPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@bigintPredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bigintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2141)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2142)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2149)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt64"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2156)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt64"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2163)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2170)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("spacedString"), GALGAS_string ("uint"), GALGAS_string ("inSeparation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2177)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2185)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2192)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForSignedRepresentation"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2199)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForUnsignedRepresentation"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2206)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2213)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2220)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2227)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2234)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("abs"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2241)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2248)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isZero"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2256)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sign"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2263)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForUnsignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2270)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForSignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2277)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForUnsignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2284)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForSignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2291)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForUnsignedRepresentation"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2298)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForSignedRepresentation"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2305)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bigintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                     extensionMethod_bigintPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getGetterMap (defineExtensionMethod_bigintPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@stringPredefinedTypeAST getModifierMap'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringPredefinedTypeAST_getModifierMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_setterMap & outArgument_outModifierMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 145)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inCapacity"), GALGAS_string ("setCapacity"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 146)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("incIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 154)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("decIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 162)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inColumnIndex"), GALGAS_string ("appendSpacesUntilColumn"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 170)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 178)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringPredefinedTypeAST_getModifierMap (void) {
  enterExtensionMethod_getModifierMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                       extensionMethod_stringPredefinedTypeAST_getModifierMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getModifierMap (defineExtensionMethod_stringPredefinedTypeAST_getModifierMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@dataPredefinedTypeAST getModifierMap'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dataPredefinedTypeAST_getModifierMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_setterMap & outArgument_outModifierMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 195)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendByte"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 196)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortBE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 204)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortLE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 212)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntBE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 220)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntLE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 228)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_string ("appendUTF8String"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 236)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("data"), GALGAS_string ("inValue"), GALGAS_string ("appendData"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 244)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dataPredefinedTypeAST_getModifierMap (void) {
  enterExtensionMethod_getModifierMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                       extensionMethod_dataPredefinedTypeAST_getModifierMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getModifierMap (defineExtensionMethod_dataPredefinedTypeAST_getModifierMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@filewrapperPredefinedTypeAST getModifierMap'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperPredefinedTypeAST_getModifierMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_setterMap & outArgument_outModifierMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 260)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inDirectoryPath"), GALGAS_string ("setCurrentDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 261)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperPredefinedTypeAST_getModifierMap (void) {
  enterExtensionMethod_getModifierMap (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                       extensionMethod_filewrapperPredefinedTypeAST_getModifierMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperPredefinedTypeAST_getModifierMap (defineExtensionMethod_filewrapperPredefinedTypeAST_getModifierMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@bigintPredefinedTypeAST getModifierMap'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bigintPredefinedTypeAST_getModifierMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_setterMap & outArgument_outModifierMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 277)) ;
  {
  routine_enterModifierWith_32_InputArguments (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), GALGAS_string ("inBit"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 278)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("complementBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 288)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bigintPredefinedTypeAST_getModifierMap (void) {
  enterExtensionMethod_getModifierMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                       extensionMethod_bigintPredefinedTypeAST_getModifierMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getModifierMap (defineExtensionMethod_bigintPredefinedTypeAST_getModifierMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@timerPredefinedTypeAST getModifierMap'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_timerPredefinedTypeAST_getModifierMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                   GALGAS_setterMap & outArgument_outModifierMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 304)) ;
  {
  routine_enterModifierWithoutArgument (outArgument_outModifierMap, GALGAS_string ("stop"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 305)) ;
  }
  {
  routine_enterModifierWithoutArgument (outArgument_outModifierMap, GALGAS_string ("resume"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 310)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_timerPredefinedTypeAST_getModifierMap (void) {
  enterExtensionMethod_getModifierMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                       extensionMethod_timerPredefinedTypeAST_getModifierMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getModifierMap (defineExtensionMethod_timerPredefinedTypeAST_getModifierMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@dataPredefinedTypeAST getInstanceMethodMap'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dataPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 89)) ;
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 90)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 98)) ;
  }
  GALGAS_formalParameterSignature var_argList_5072 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 106)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_5137 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_5137 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 108)) ;
  }
  var_argList_5072.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)), var_t_5137, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_5137 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 110)) ;
  }
  var_argList_5072.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 111)), var_t_5137, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 111)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 111)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 113))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 113)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 114)), var_argList_5072, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 116)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 118)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 112)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dataPredefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                             extensionMethod_dataPredefinedTypeAST_getInstanceMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_dataPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@stringPredefinedTypeAST getInstanceMethodMap'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 129)) ;
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 130)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 138)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 146)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 154)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeSymbolicLinkWithPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 162)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument (outArgument_outInstanceMethodMap, GALGAS_string ("makeDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 170)) ;
  }
  GALGAS_formalParameterSignature var_argList_7303 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 176)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_7407 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_7407 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 177)) ;
  }
  var_argList_7303.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)), var_t_7407, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_7407 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 179)) ;
  }
  var_argList_7303.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)), var_t_7407, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 182))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 182)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 183)), var_argList_7303, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 185)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 187)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 181)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToExecutableFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 191))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 191)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 192)), var_argList_7303, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 194)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 196)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 190)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringPredefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                             extensionMethod_stringPredefinedTypeAST_getInstanceMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_stringPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@bigintPredefinedTypeAST getInstanceMethodMap'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 207)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_bigIntType_8579 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), var_bigIntType_8579 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 209)) ;
  }
  GALGAS_formalParameterSignature var_argList_8616 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 210)) ;
  var_argList_8616.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)), var_bigIntType_8579, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)), GALGAS_string ("inDivisor")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)) ;
  var_argList_8616.addAssign_operation (GALGAS_string ("quotient").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)), var_bigIntType_8579, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)), GALGAS_string ("outQuotient")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)) ;
  var_argList_8616.addAssign_operation (GALGAS_string ("remainder").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)), var_bigIntType_8579, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)), GALGAS_string ("outRemainder")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("divideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 215))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 215)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 216)), var_argList_8616, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 218)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 220)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 214)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("floorDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 224))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 224)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 225)), var_argList_8616, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 227)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 229)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 223)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ceilDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 233))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 233)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 234)), var_argList_8616, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 236)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 238)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 232)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                             extensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@stringPredefinedTypeAST getClassMethodMap'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringPredefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeMethods.galgas", 61)) ;
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFile"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 62)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFileIfExists"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 63)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeEmptyDirectory"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 64)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeDirectoryRecursively"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 65)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringType_4145 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_4145 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 66)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolType_4254 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_boolType_4254 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 67)) ;
  }
  GALGAS_formalParameterSignature var_argList_4269 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 68)) ;
  var_argList_4269.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 69)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 69)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 69)) ;
  var_argList_4269.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 70)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 70)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 70)) ;
  var_argList_4269.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 71)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 71)), GALGAS_string ("inContents")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 71)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("generateFile"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 73))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 73)), var_argList_4269, GALGAS_bool (true) COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 72)) ;
  }
  var_argList_4269 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 77)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("startPath").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 78)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 78)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 78)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("fileName").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 79)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 79)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 79)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("lineComment").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 80)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 80)), GALGAS_string ("inLineCommentPrefix")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 80)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("header").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 81)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 81)), GALGAS_string ("inHeader")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 81)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 82)), GALGAS_string ("inDefaultUserZone1")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 82)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 83)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 83)), GALGAS_string ("inGeneratedZone2")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 83)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 84)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 84)), GALGAS_string ("inDefaultUserZone2")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 84)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 85)), var_stringType_4145, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 85)), GALGAS_string ("inGeneratedZone3")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 85)) ;
  var_argList_4269.addAssign_operation (GALGAS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 86)), var_boolType_4254, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 86)), GALGAS_string ("inMakeExecutable")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 86)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("generateFileWithPattern"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 88))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 88)), var_argList_4269, GALGAS_bool (true) COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 87)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                          extensionMethod_stringPredefinedTypeAST_getClassMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_stringPredefinedTypeAST_getClassMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@binarysetPredefinedTypeAST getClassMethodMap'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_binarysetPredefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeMethods.galgas", 100)) ;
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setNodeTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 101)) ;
  }
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setAndTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 109)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_binarysetPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                          extensionMethod_binarysetPredefinedTypeAST_getClassMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_binarysetPredefinedTypeAST_getClassMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension getter '@galgas3GrammarComponentAST keyRepresentation'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_galgas_33_GrammarComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  result_outString = GALGAS_string ("grammar ").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 312)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_galgas_33_GrammarComponentAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                          extensionGetter_galgas_33_GrammarComponentAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_galgas_33_GrammarComponentAST_keyRepresentation (defineExtensionGetter_galgas_33_GrammarComponentAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension getter '@galgas3SyntaxComponentAST keyRepresentation'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  result_outString = GALGAS_string ("syntax ").add_operation (object->mAttribute_mSyntaxComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 319)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                          extensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_galgas_33_SyntaxComponentAST_keyRepresentation (defineExtensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension getter '@lexiqueComponentAST keyRepresentation'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexiqueComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  result_outString = GALGAS_string ("lexique ").add_operation (object->mAttribute_mLexiqueComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 326)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexiqueComponentAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                          extensionGetter_lexiqueComponentAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexiqueComponentAST_keyRepresentation (defineExtensionGetter_lexiqueComponentAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension getter '@overridingAbstractExtensionModifierAST keyRepresentation'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingAbstractExtensionModifierAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractExtensionModifierAST * object = (const cPtr_overridingAbstractExtensionModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionModifierAST) ;
  result_outString = GALGAS_string ("overriding extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 332)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 332)).add_operation (object->mAttribute_mOverridingExtensionModifierName.getter_string (SOURCE_FILE ("semanticContext.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 332)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingAbstractExtensionModifierAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionModifierAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionModifierAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingAbstractExtensionModifierAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionModifierAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension getter '@overridingExtensionMethodAST keyRepresentation'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingExtensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  result_outString = GALGAS_string ("overriding extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 339)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 339)).add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("semanticContext.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 339)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                          extensionGetter_overridingExtensionMethodAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionMethodAST_keyRepresentation (defineExtensionGetter_overridingExtensionMethodAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension getter '@overridingAbstractExtensionMethodAST keyRepresentation'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  result_outString = GALGAS_string ("overriding extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 346)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 346)).add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("semanticContext.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 346)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingAbstractExtensionMethodAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension getter '@overridingAbstractExtensionGetterAST keyRepresentation'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  result_outString = GALGAS_string ("overriding extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 353)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 353)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("semanticContext.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 353)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingAbstractExtensionGetterAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension getter '@predefinedTypeAST keyRepresentation'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_predefinedTypeAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  result_outString = GALGAS_string ("predefined type @").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 360)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_predefinedTypeAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                          extensionGetter_predefinedTypeAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_predefinedTypeAST_keyRepresentation (defineExtensionGetter_predefinedTypeAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension getter '@mapDeclarationAST keyRepresentation'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_mapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  result_outString = GALGAS_string ("map @").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 367)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_mapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                          extensionGetter_mapDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_mapDeclarationAST_keyRepresentation (defineExtensionGetter_mapDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension getter '@mapProxyDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_mapProxyDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  result_outString = GALGAS_string ("map proxy @").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 374)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_mapProxyDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                          extensionGetter_mapProxyDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_mapProxyDeclarationAST_keyRepresentation (defineExtensionGetter_mapProxyDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension getter '@enumDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_enumDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  result_outString = GALGAS_string ("enum @").add_operation (object->mAttribute_mEnumTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 381)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_enumDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                          extensionGetter_enumDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_enumDeclarationAST_keyRepresentation (defineExtensionGetter_enumDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension getter '@sortedListDeclarationAST keyRepresentation'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_sortedListDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  result_outString = GALGAS_string ("sorted list @").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 388)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_sortedListDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                          extensionGetter_sortedListDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_sortedListDeclarationAST_keyRepresentation (defineExtensionGetter_sortedListDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension getter '@structDeclarationAST keyRepresentation'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_structDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  result_outString = GALGAS_string ("struct @").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 395)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_structDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                          extensionGetter_structDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_structDeclarationAST_keyRepresentation (defineExtensionGetter_structDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension getter '@listDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_listDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  result_outString = GALGAS_string ("list @").add_operation (object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 402)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_listDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                          extensionGetter_listDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_listDeclarationAST_keyRepresentation (defineExtensionGetter_listDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension getter '@classDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_classDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  result_outString = GALGAS_string ("class @").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 409)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_classDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                          extensionGetter_classDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_classDeclarationAST_keyRepresentation (defineExtensionGetter_classDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension getter '@arrayDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_arrayDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  result_outString = GALGAS_string ("array @").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 416)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_arrayDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                          extensionGetter_arrayDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_arrayDeclarationAST_keyRepresentation (defineExtensionGetter_arrayDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension getter '@listmapDeclarationAST keyRepresentation'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_listmapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  result_outString = GALGAS_string ("listmap @").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 423)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_listmapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                          extensionGetter_listmapDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_listmapDeclarationAST_keyRepresentation (defineExtensionGetter_listmapDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension getter '@filewrapperDeclarationAST keyRepresentation'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_filewrapperDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  result_outString = GALGAS_string ("filewrapper @").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticContext.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 430)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_filewrapperDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                          extensionGetter_filewrapperDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_filewrapperDeclarationAST_keyRepresentation (defineExtensionGetter_filewrapperDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@optionComponentDeclarationAST keyRepresentation'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_optionComponentDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  result_outString = GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 437)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_optionComponentDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                          extensionGetter_optionComponentDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_optionComponentDeclarationAST_keyRepresentation (defineExtensionGetter_optionComponentDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension getter '@graphDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_graphDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  result_outString = GALGAS_string ("graph @").add_operation (object->mAttribute_mGraphTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 444)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_graphDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                          extensionGetter_graphDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_graphDeclarationAST_keyRepresentation (defineExtensionGetter_graphDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension getter '@externTypeDeclarationAST keyRepresentation'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_externTypeDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  result_outString = GALGAS_string ("extern @").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 451)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_externTypeDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                          extensionGetter_externTypeDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_externTypeDeclarationAST_keyRepresentation (defineExtensionGetter_externTypeDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension getter '@onceFunctionDeclarationAST keyRepresentation'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_onceFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  result_outString = GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticContext.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 458)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_onceFunctionDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                          extensionGetter_onceFunctionDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_onceFunctionDeclarationAST_keyRepresentation (defineExtensionGetter_onceFunctionDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension getter '@externFunctionDeclarationAST keyRepresentation'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_externFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  result_outString = GALGAS_string ("extern function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticContext.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 465)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_externFunctionDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                          extensionGetter_externFunctionDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_externFunctionDeclarationAST_keyRepresentation (defineExtensionGetter_externFunctionDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension getter '@externRoutineDeclarationAST keyRepresentation'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_externRoutineDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  result_outString = GALGAS_string ("extern routine ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticContext.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 472)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_externRoutineDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                          extensionGetter_externRoutineDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_externRoutineDeclarationAST_keyRepresentation (defineExtensionGetter_externRoutineDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionMethodAST enterInSemanticContext'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
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
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionMethodAST enterInSemanticContext'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
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
//                                                                                                                     *
//            Overriding extension method '@overridingAbstractExtensionModifierAST enterInSemanticContext'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionModifierAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                           const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                           const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                           const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
                                                                                           GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionModifierAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractExtensionModifierAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionModifierAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionModifierAST_enterInSemanticContext (defineExtensionMethod_overridingAbstractExtensionModifierAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionGetterAST enterInSemanticContext'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
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
//                                                                                                                     *
//                       Overriding extension method '@predefinedTypeAST enterInSemanticContext'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_predefinedTypeAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                      const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                      const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  GALGAS_constructorMap var_constructorMap_31962 ;
  const GALGAS_predefinedTypeAST temp_0 = object ;
  callExtensionMethod_getConstructorMap ((const cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_constructorMap_31962, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 641)) ;
  GALGAS_getterMap var_getterMap_32039 ;
  const GALGAS_predefinedTypeAST temp_1 = object ;
  callExtensionMethod_getGetterMap ((const cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_32039, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 642)) ;
  GALGAS_setterMap var_modifierMap_32120 ;
  const GALGAS_predefinedTypeAST temp_2 = object ;
  callExtensionMethod_getModifierMap ((const cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_modifierMap_32120, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 643)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_32221 ;
  const GALGAS_predefinedTypeAST temp_3 = object ;
  callExtensionMethod_getInstanceMethodMap ((const cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_instanceMethodMap_32221, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 644)) ;
  GALGAS_classMethodMap var_classMethodMap_32313 ;
  const GALGAS_predefinedTypeAST temp_4 = object ;
  callExtensionMethod_getClassMethodMap ((const cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_classMethodMap_32313, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 645)) ;
  GALGAS_functionSignature var_addAssignArgumentList_32422 ;
  const GALGAS_predefinedTypeAST temp_5 = object ;
  callExtensionMethod_getAddAssignArgumentList ((const cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_addAssignArgumentList_32422, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 646)) ;
  GALGAS_enumerationDescriptorList var_enumerationList_32535 ;
  GALGAS_stringlist var_enumerationVariants_32576 ;
  GALGAS_string var_enumeratedTypeName_32612 ;
  const GALGAS_predefinedTypeAST temp_6 = object ;
  callExtensionMethod_getEnumerationList ((const cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_enumerationList_32535, var_enumerationVariants_32576, var_enumeratedTypeName_32612, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 647)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_32764 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mPredefinedTypeName, var_selfTypeProxy_32764 COMMA_SOURCE_FILE ("semanticContext.galgas", 653)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedTypeProxy_32829 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_enumeratedTypeName_32612.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    var_enumeratedTypeProxy_32829 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 661)) ;
  }else if (kBoolFalse == test_7) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_enumeratedTypeName_32612, var_enumeratedTypeProxy_32829 COMMA_SOURCE_FILE ("semanticContext.galgas", 663)) ;
    }
  }
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 671))  COMMA_SOURCE_FILE ("semanticContext.galgas", 671)), var_getterMap_32039, var_modifierMap_32120, var_instanceMethodMap_32221, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 666)) ;
  }
  {
  const GALGAS_predefinedTypeAST temp_8 = object ;
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 678))  COMMA_SOURCE_FILE ("semanticContext.galgas", 678)), object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 681)), GALGAS_typeKindEnum::constructor_predefinedType (SOURCE_FILE ("semanticContext.galgas", 682)), GALGAS_bool (kIsEqual, object->mAttribute_mPredefinedTypeName.objectCompare (GALGAS_string ("stringset"))), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 684)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 685)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 686)), var_constructorMap_31962, var_getterMap_32039, var_modifierMap_32120, var_instanceMethodMap_32221, var_classMethodMap_32313, var_enumerationList_32535, var_enumerationVariants_32576, callExtensionGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_8.ptr (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 694)), var_addAssignArgumentList_32422, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 696)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 697)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 698)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 699)), GALGAS_bool (false), var_enumeratedTypeProxy_32829, extensionGetter_defaultConstructorName (object->mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 702)), GALGAS_string ("galgas2/predefined-types"), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 677)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_predefinedTypeAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                               extensionMethod_predefinedTypeAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_predefinedTypeAST_enterInSemanticContext (defineExtensionMethod_predefinedTypeAST_enterInSemanticContext, NULL) ;

