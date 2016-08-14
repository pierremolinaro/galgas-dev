#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-23.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@mapDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_lstring var_nameForUsefullness_21771 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mMapTypeName, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 579)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_21771, var_nameForUsefullness_21771, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 580)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_21946 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 582)) ;
  GALGAS_attributeIndexMap var_attributeMap_21988 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 583)) ;
  cEnumerator_propertyInCollectionListAST enumerator_22045 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_22045.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefullness_22087 = function_typeNameForUsefulEntitiesGraph (enumerator_22045.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 585)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefullness_21771, var_propertyTypeNameForUsefullness_22087 COMMA_SOURCE_FILE ("type-map.galgas", 586)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_22241 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_22045.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 587)) ;
    GALGAS_bool var_hasSetter_22342 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_22369 = GALGAS_bool (true) ;
    var_typedAttributeList_21946.addAssign_operation (var_t_22241, enumerator_22045.current_mPropertyName (HERE), var_hasSetter_22342, var_hasGetter_22369  COMMA_SOURCE_FILE ("type-map.galgas", 590)) ;
    const enumGalgasBool test_0 = function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 595)).getter_hasKey (enumerator_22045.current_mPropertyName (HERE).mAttribute_string COMMA_SOURCE_FILE ("type-map.galgas", 595)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_m_22548 = GALGAS_string ("a property cannot be named:") ;
      cEnumerator_stringset enumerator_22618 (function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 597)), kEnumeration_up) ;
      while (enumerator_22618.hasCurrentObject ()) {
        var_m_22548.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_22618.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 598)) ;
        enumerator_22618.gotoNextObject () ;
      }
      var_m_22548.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 600)) ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_22045.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 601)), var_m_22548, fixItArray1  COMMA_SOURCE_FILE ("type-map.galgas", 601)) ;
    }
    {
    var_attributeMap_21988.setter_insertKey (enumerator_22045.current_mPropertyName (HERE), var_t_22241, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 603)) ;
    }
    enumerator_22045.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_22832 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 606)) ;
  cEnumerator_insertMethodListAST enumerator_22891 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_22891.hasCurrentObject ()) {
    {
    var_insertMethodMap_22832.setter_insertKey (enumerator_22891.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 608)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22891.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 609)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22891.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 610)) ;
    }
    enumerator_22891.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_23107 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 613)) ;
  cEnumerator_mapSearchMethodListAST enumerator_23166 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_23166.hasCurrentObject ()) {
    {
    var_searchMethodMap_23107.setter_insertKey (enumerator_23166.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 615)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_23166.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 616)) ;
    }
    enumerator_23166.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_23332 (object->mAttribute_mRemoveMethodList, kEnumeration_up) ;
  while (enumerator_23332.hasCurrentObject ()) {
    {
    var_insertMethodMap_22832.setter_insertKey (enumerator_23332.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 620)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_23332.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 621)) ;
    }
    enumerator_23332.gotoNextObject () ;
  }
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_23549 (object->mAttribute_mInsertOrReplaceDeclarationListAST, kEnumeration_up) ;
  GALGAS_uint index_23508 ((uint32_t) 0) ;
  while (enumerator_23549.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, index_23508.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (enumerator_23549.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray3  COMMA_SOURCE_FILE ("type-map.galgas", 626)) ;
    }
    enumerator_23549.gotoNextObject () ;
    index_23508.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 624)) ;
  }
  GALGAS_bool var_hasInsertOrReplaceModifier_23732 = GALGAS_bool (kIsStrictSup, object->mAttribute_mInsertOrReplaceDeclarationListAST.getter_length (SOURCE_FILE ("type-map.galgas", 629)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_4 = var_hasInsertOrReplaceModifier_23732.operator_and (var_insertMethodMap_22832.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 630)) COMMA_SOURCE_FILE ("type-map.galgas", 630)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location var_insertOrReplaceDeclarationLocation_23914 ;
    object->mAttribute_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceDeclarationLocation_23914, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 632)) ;
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_23914, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray5  COMMA_SOURCE_FILE ("type-map.galgas", 633)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 637)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 639)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 640)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-map.galgas", 640)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 640)), object->mAttribute_mMapTypeName, var_typedAttributeList_21946, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, var_hasInsertOrReplaceModifier_23732  COMMA_SOURCE_FILE ("type-map.galgas", 638)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 636)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                         extensionMethod_mapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_semanticAnalysis (defineExtensionMethod_mapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@mapTypeForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 671)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 672)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("type-map.galgas", 670))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 677)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 678)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 679)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 680)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 681)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 682)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 683)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 684)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 685)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 686)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 687)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 688)) COMMA_SOURCE_FILE ("type-map.galgas", 676))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 676)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@mapTypeForGeneration appendDeclaration2'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_26648 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_26648.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_26648.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 699)) ;
    enumerator_26648.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 703)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 704)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-map.galgas", 702))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@mapTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 715)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 716)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 718)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, object->mAttribute_mHasInsertOrReplaceModifier COMMA_SOURCE_FILE ("type-map.galgas", 717))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                                     extensionMethod_mapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@mapProxyDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                            GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                            GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                            GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                            GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_lstring var_key_1326 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 20)), object->mAttribute_mMapProxyTypeName.getter_location (SOURCE_FILE ("type-map-proxy.galgas", 20))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 20)) ;
  {
  const GALGAS_mapProxyDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1326, temp_0, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 21)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1326, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedMapTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 22)), object->mAttribute_mAssociatedMapTypeName.getter_location (SOURCE_FILE ("type-map-proxy.galgas", 22))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 22)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 22)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                                extensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@mapProxyDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum_2460 ;
  GALGAS_typedPropertyList var_mapTypedAttributeList_2518 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_2577 ;
  GALGAS_bool joker_2422_3 ; // Joker input parameter
  GALGAS_bool joker_2422_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2422_1 ; // Joker input parameter
  GALGAS_bool joker_2466_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2466_2 ; // Joker input parameter
  GALGAS_attributeMap joker_2466_1 ; // Joker input parameter
  GALGAS_constructorMap joker_2524_11 ; // Joker input parameter
  GALGAS_getterMap joker_2524_10 ; // Joker input parameter
  GALGAS_setterMap joker_2524_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_2524_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_2524_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_2524_6 ; // Joker input parameter
  GALGAS_stringlist joker_2524_5 ; // Joker input parameter
  GALGAS_uint joker_2524_4 ; // Joker input parameter
  GALGAS_functionSignature joker_2524_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_2524_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_2524_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2583_6 ; // Joker input parameter
  GALGAS_bool joker_2583_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2583_4 ; // Joker input parameter
  GALGAS_string joker_2583_3 ; // Joker input parameter
  GALGAS_string joker_2583_2 ; // Joker input parameter
  GALGAS_headerKind joker_2583_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_2422_3, joker_2422_2, joker_2422_1, var_typeKindEnum_2460, joker_2466_3, joker_2466_2, joker_2466_1, var_mapTypedAttributeList_2518, joker_2524_11, joker_2524_10, joker_2524_9, joker_2524_8, joker_2524_7, joker_2524_6, joker_2524_5, joker_2524_4, joker_2524_3, joker_2524_2, joker_2524_1, var_searchMethodList_2577, joker_2583_6, joker_2583_5, joker_2583_4, joker_2583_3, joker_2583_2, joker_2583_1, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 35)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_2460.objectCompare (GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("type-map-proxy.galgas", 45)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAssociatedMapTypeName.getter_location (SOURCE_FILE ("type-map-proxy.galgas", 46)), GALGAS_string ("the @").add_operation (object->mAttribute_mAssociatedMapTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 46)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 46)), fixItArray1  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 46)) ;
    var_mapTypedAttributeList_2518 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 47)) ;
  }
  GALGAS_constructorMap var_constructorMap_2835 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 50)) ;
  GALGAS_getterMap var_getterMap_2949 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_2949, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 51)) ;
  }
  GALGAS_setterMap var_setterMap_2967 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 52)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_3014 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 53)) ;
  GALGAS_classMethodMap var_classMethodMap_3066 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 54)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedMapTypeIndex_3263 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, var_associatedMapTypeIndex_3263 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 56)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_3327 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_3327 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 59)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_3494 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_3494 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 62)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_mapProxyTypeProxy_3666 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, var_mapProxyTypeProxy_3666 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 65)) ;
  }
  GALGAS_formalParameterSignature var_argList_3813 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 67)) ;
  var_argList_3813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 68)), var_associatedMapTypeIndex_3263, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-proxy.galgas", 68)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 68)) ;
  var_argList_3813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 69)), var_lstringTypeIndex_3494, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-proxy.galgas", 69)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 69)) ;
  var_argList_3813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 70)), var_mapProxyTypeProxy_3666, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-proxy.galgas", 70)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 70)) ;
  {
  var_classMethodMap_3066.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 72))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 72)), var_argList_3813, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 71)) ;
  }
  var_argList_3813 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 77)) ;
  var_argList_3813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 78)), var_associatedMapTypeIndex_3263, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-proxy.galgas", 78)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 78)) ;
  var_argList_3813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 79)), var_stringTypeIndex_3327, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-proxy.galgas", 79)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 79)) ;
  var_argList_3813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 80)), var_mapProxyTypeProxy_3666, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-proxy.galgas", 80)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 80)) ;
  {
  var_classMethodMap_3066.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxyFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 82))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 82)), var_argList_3813, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 81)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_2835, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("null"), object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 91)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 87)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_5082 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 95)) ;
  var_constructorAttributeTypeList_5082.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 96)), var_associatedMapTypeIndex_3263, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 96)) ;
  var_constructorAttributeTypeList_5082.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 97)), var_lstringTypeIndex_3494, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 97)) ;
  cEnumerator_mapSearchMethodListAST enumerator_5291 (var_searchMethodList_2577, kEnumeration_up) ;
  while (enumerator_5291.hasCurrentObject ()) {
    {
    var_constructorMap_2835.setter_insertKey (enumerator_5291.current_mSearchMethodName (HERE), var_constructorAttributeTypeList_5082, GALGAS_bool (true), var_mapProxyTypeProxy_3666, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 99)) ;
    }
    enumerator_5291.gotoNextObject () ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 107)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 114)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 121)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 128)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 135)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 142)) ;
  }
  GALGAS_getterMap var_inheritedGetterMap_6507 = var_getterMap_2949 ;
  cEnumerator_typedPropertyList enumerator_6553 (var_mapTypedAttributeList_2518, kEnumeration_up) ;
  while (enumerator_6553.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_inheritedGetterMap_6507.getter_hasKey (enumerator_6553.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-map-proxy.galgas", 152)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 152)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s_6637 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_6686 (var_inheritedGetterMap_6507.getter_keySet (SOURCE_FILE ("type-map-proxy.galgas", 154)), kEnumeration_up) ;
      while (enumerator_6686.hasCurrentObject ()) {
        var_s_6637.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_6686.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 155)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 155)) ;
        if (enumerator_6686.hasNextObject ()) {
          var_s_6637.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 156)) ;
        }
        enumerator_6686.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_6553.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-map-proxy.galgas", 158)), GALGAS_string ("the map has a associated map proxy, which has predefined getters: ").add_operation (var_s_6637, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 158)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 158)), fixItArray3  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 158)) ;
    }else if (kBoolFalse == test_2) {
      {
      var_getterMap_2949.setter_insertKey (enumerator_6553.current_mAttributeName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map-proxy.galgas", 163)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 164)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 165)), GALGAS_bool (true), enumerator_6553.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map-proxy.galgas", 168)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 161)) ;
      }
    }
    enumerator_6553.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapProxyTypeName, var_getterMap_2949, var_setterMap_2967, var_instanceMethodMap_3014, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 174)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mMapProxyTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-map-proxy.galgas", 189)), GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("type-map-proxy.galgas", 190)), GALGAS_bool (false), var_mapTypedAttributeList_2518, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 193)), var_mapTypedAttributeList_2518, var_constructorMap_2835, var_getterMap_2949, var_setterMap_2967, var_instanceMethodMap_3014, var_classMethodMap_3066, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 200)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 201)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 202)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 203)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 204)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 205)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 206)), var_searchMethodList_2577, GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-map-proxy.galgas", 209)), GALGAS_string ("null"), GALGAS_string ("mapproxy-").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 211)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-map-proxy.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 185)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                               extensionMethod_mapProxyDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapProxyDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@mapProxyDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_lstring var_nameForUsefullness_9154 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mMapProxyTypeName, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 228)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_9154, var_nameForUsefullness_9154, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 229)) ;
  }
  GALGAS_typedPropertyList var_listTypeAttributeList_9452 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_9511 ;
  GALGAS_bool joker_9400_7 ; // Joker input parameter
  GALGAS_bool joker_9400_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9400_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9400_4 ; // Joker input parameter
  GALGAS_bool joker_9400_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9400_2 ; // Joker input parameter
  GALGAS_attributeMap joker_9400_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9458_11 ; // Joker input parameter
  GALGAS_getterMap joker_9458_10 ; // Joker input parameter
  GALGAS_setterMap joker_9458_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9458_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_9458_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9458_6 ; // Joker input parameter
  GALGAS_stringlist joker_9458_5 ; // Joker input parameter
  GALGAS_uint joker_9458_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9458_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9458_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9458_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9517_6 ; // Joker input parameter
  GALGAS_bool joker_9517_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9517_4 ; // Joker input parameter
  GALGAS_string joker_9517_3 ; // Joker input parameter
  GALGAS_string joker_9517_2 ; // Joker input parameter
  GALGAS_headerKind joker_9517_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_9400_7, joker_9400_6, joker_9400_5, joker_9400_4, joker_9400_3, joker_9400_2, joker_9400_1, var_listTypeAttributeList_9452, joker_9458_11, joker_9458_10, joker_9458_9, joker_9458_8, joker_9458_7, joker_9458_6, joker_9458_5, joker_9458_4, joker_9458_3, joker_9458_2, joker_9458_1, var_searchMethodList_9511, joker_9517_6, joker_9517_5, joker_9517_4, joker_9517_3, joker_9517_2, joker_9517_1, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 231)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map proxy ").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 241)), GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 243)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 244)), var_listTypeAttributeList_9452, var_searchMethodList_9511  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 242)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                         extensionMethod_mapProxyDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_semanticAnalysis (defineExtensionMethod_mapProxyDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@mapProxyTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 285)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 286)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 284))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 289)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 290)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 291)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 292)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 293)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 294)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 295)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 296)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 297)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 298)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 299)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 300)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 288))), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 288)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                              extensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@mapProxyTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 310)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mAssociatedMapTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 311)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 313)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 314)), object->mAttribute_mAssociatedMapTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 315)), object->mAttribute_mAssociatedMapTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("type-map-proxy.galgas", 312))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                                     extensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@sharedMapDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_key_11990 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 308)), object->mAttribute_mMapTypeName.getter_location (SOURCE_FILE ("type-shared-map.galgas", 308))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 308)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11990, temp_0, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 309)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_12133 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_12133.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_12133.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 311)), enumerator_12133.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 311))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 311)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 311)) ;
    }
    enumerator_12133.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                                extensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@sharedMapDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_sharedMapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  result_outString = GALGAS_string ("shared map @").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 318)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                          extensionGetter_sharedMapDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_sharedMapDeclarationAST_keyRepresentation (defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@sharedMapDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                            const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                            const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_13363 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_13363 COMMA_SOURCE_FILE ("type-shared-map.galgas", 332)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_13495 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_13495 COMMA_SOURCE_FILE ("type-shared-map.galgas", 334)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringlistTypeIndex_13639 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex_13639 COMMA_SOURCE_FILE ("type-shared-map.galgas", 336)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 338)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_13495, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 338)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_13720 = temp_0 ;
  GALGAS_stringlist var_enumerationVariants_13784 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 339)) ;
  var_enumerationVariants_13784.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 340)) ;
  var_enumerationVariants_13784.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 341)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_13908 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_13944 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_13944.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_13944.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_usesSelectorsInInsertAndSearch_13908.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_13944.current_mValue (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 347)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-shared-map.galgas", 347)) ;
      }
      var_usesSelectorsInInsertAndSearch_13908 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_13944.current_mValue (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 351)), GALGAS_string ("unknown attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-shared-map.galgas", 351)) ;
    }
    enumerator_13944.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_14220 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 355)) ;
  GALGAS_getterMap var_getterMap_14310 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_14310, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 356)) ;
  }
  GALGAS_setterMap var_setterMap_14335 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 357)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_14379 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 358)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_14220, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 364)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 360)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 368)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 375)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 382)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 391)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 400)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 407)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 414)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14310, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 421)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_16124 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 429)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_16188 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 430)) ;
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = var_usesSelectorsInInsertAndSearch_13908.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_16188.addAssign_operation (temp_5.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 432)), var_lstringTypeIndex_13495, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 434)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 431)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_16422 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 436)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch_13908.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_16422.addAssign_operation (temp_7.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 438)), var_lstringTypeIndex_13495, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 440)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 437)) ;
  cEnumerator_propertyInCollectionListAST enumerator_16623 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_16623.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_16671 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_16623.current_mPropertyTypeName (HERE), var_attributeTypeIndex_16671 COMMA_SOURCE_FILE ("type-shared-map.galgas", 444)) ;
    }
    GALGAS_bool var_hasGetter_16797 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_16824 = GALGAS_bool (true) ;
    var_typedAttributeList_16124.addAssign_operation (var_attributeTypeIndex_16671, enumerator_16623.current_mPropertyName (HERE), var_hasSetter_16824, var_hasGetter_16797  COMMA_SOURCE_FILE ("type-shared-map.galgas", 447)) ;
    var_enumerationDescriptor_13720.addAssign_operation (var_attributeTypeIndex_16671, enumerator_16623.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 448))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 448)) ;
    GALGAS_lstring temp_9 ;
    const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch_13908.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_16623.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 450)) ;
    }
    var_insertMethodFormalArgumentList_16188.addAssign_operation (temp_9, var_attributeTypeIndex_16671, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 452)), enumerator_16623.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 449)) ;
    GALGAS_lstring temp_11 ;
    const enumGalgasBool test_12 = var_usesSelectorsInInsertAndSearch_13908.boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = enumerator_16623.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 455)) ;
    }
    var_removeMethodFormalArgumentList_16422.addAssign_operation (temp_11, var_attributeTypeIndex_16671, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 457)), enumerator_16623.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 454)) ;
    enumerator_16623.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_17464 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_17464.hasCurrentObject ()) {
    const enumGalgasBool test_13 = var_setterMap_14335.getter_hasKey (enumerator_17464.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 462)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 462)).boolEnum () ;
    if (kBoolTrue == test_13) {
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (enumerator_17464.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 463)), GALGAS_string ("the '").add_operation (enumerator_17464.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 463)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 463)), fixItArray14  COMMA_SOURCE_FILE ("type-shared-map.galgas", 463)) ;
    }else if (kBoolFalse == test_13) {
      {
      var_setterMap_14335.setter_insertOrReplace (enumerator_17464.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 467)), var_insertMethodFormalArgumentList_16188, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 470)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 465)) ;
      }
    }
    enumerator_17464.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList_17953 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 476)) ;
  var_enterEdgeFormalArgumentList_17953.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 477)), var_lstringTypeIndex_13495, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 477)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 477)) ;
  var_enterEdgeFormalArgumentList_17953.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 478)), var_lstringTypeIndex_13495, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 478)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 478)) ;
  {
  var_setterMap_14335.setter_insertOrReplace (GALGAS_string ("enterEdge").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 480)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 481)), var_enterEdgeFormalArgumentList_17953, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 484)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 479)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList_18472 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 488)) ;
  var_topologicalSortFormalArgumentList_18472.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 489)), var_lstringlistTypeIndex_13639, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 489)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 489)) ;
  var_topologicalSortFormalArgumentList_18472.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 490)), var_lstringlistTypeIndex_13639, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 490)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 490)) ;
  {
  var_instanceMethodMap_14379.setter_insertKey (GALGAS_string ("topologicalSort").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 492)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 493)), var_topologicalSortFormalArgumentList_18472, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 495)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 497)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 491)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 501)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_19090 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_19090.hasCurrentObject ()) {
      {
      var_instanceMethodMap_14379.setter_insertKey (enumerator_19090.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 505)), var_removeMethodFormalArgumentList_16422, enumerator_19090.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 507)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 509)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 503)) ;
      }
      enumerator_19090.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_19406 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_19406.hasCurrentObject ()) {
      {
      var_setterMap_14335.setter_insertKey (enumerator_19406.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 517)), var_removeMethodFormalArgumentList_16422, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 520)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 515)) ;
      }
      enumerator_19406.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 526)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    GALGAS_unifiedTypeMap_2D_proxy var_locationTypeIndex_19801 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex_19801 COMMA_SOURCE_FILE ("type-shared-map.galgas", 528)) ;
    }
    {
    var_setterMap_14335.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 530))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 530)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 531)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 532)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 534)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 529)) ;
    }
    {
    var_setterMap_14335.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 538))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 538)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 539)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 540)), var_locationTypeIndex_19801, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 540)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 540)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 542)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 537)) ;
    }
    {
    var_setterMap_14335.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 546))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 546)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 547)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 548)), var_locationTypeIndex_19801, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 548)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 548)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 550)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 545)) ;
    }
    {
    var_instanceMethodMap_14379.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 554))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 554)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 555)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 556)), var_locationTypeIndex_19801, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 556)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 556)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 557)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 559)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 553)) ;
    }
    cEnumerator_mapOverrideBlockListAST enumerator_21162 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
    while (enumerator_21162.hasCurrentObject ()) {
      {
      var_setterMap_14335.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_21162.current_mOverrideBlockName (HERE).mAttribute_string.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 564)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 564))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 564)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 565)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 566)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 568)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 563)) ;
      }
      enumerator_21162.gotoNextObject () ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_21557 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_21557.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_21581 = GALGAS_lstring::constructor_new (enumerator_21557.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 575)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 575)), enumerator_21557.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 575))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 575)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_21704 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_21557.current_mPropertyTypeName (HERE), var_attributeTypeIndex_21704 COMMA_SOURCE_FILE ("type-shared-map.galgas", 577)) ;
    }
    {
    GALGAS_functionSignature temp_17 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 581)) ;
    temp_17.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 581)), var_stringTypeIndex_13363, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 581)) ;
    var_getterMap_14310.setter_insertOrReplace (var_accessorName_21581, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 580)), temp_17, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 582)), GALGAS_bool (true), var_attributeTypeIndex_21704, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 585)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 578)) ;
    }
    enumerator_21557.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_22209 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_22209.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_22233 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_22209.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 591)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 591)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 591)), enumerator_22209.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 591))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 591)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_22487 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_22209.current_mPropertyTypeName (HERE), var_attributeTypeIndex_22487 COMMA_SOURCE_FILE ("type-shared-map.galgas", 592)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_22523 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 593)) ;
    var_accessorFormalArgumentList_22523.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 594)), var_attributeTypeIndex_22487, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 594)), enumerator_22209.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 594)) ;
    var_accessorFormalArgumentList_22523.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 595)), var_stringTypeIndex_13363, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 595)), enumerator_22209.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 595)) ;
    {
    var_setterMap_14335.setter_insertOrReplace (var_accessorName_22233, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 598)), var_accessorFormalArgumentList_22523, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 601)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 596)) ;
    }
    enumerator_22209.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_getterMap_14310, var_setterMap_14335, var_instanceMethodMap_14379, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 606)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 621)), GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("type-shared-map.galgas", 622)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 624)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 625)), var_typedAttributeList_16124, var_constructorMap_14220, var_getterMap_14310, var_setterMap_14335, var_instanceMethodMap_14379, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 631)), var_enumerationDescriptor_13720, var_enumerationVariants_13784, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 634)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 634)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 634)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 635)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 636)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 637)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 639)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 641)), GALGAS_string ("emptyMap"), GALGAS_string ("uniquemap-").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 643)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-shared-map.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 617)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                               extensionMethod_sharedMapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterInSemanticContext (defineExtensionMethod_sharedMapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@sharedMapDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_string constinArgument_inProductDirectory,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_lstring var_nameForUsefullness_27019 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mMapTypeName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 725)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_27019, var_nameForUsefullness_27019, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 726)) ;
  }
  GALGAS_mapAutomatonMessageKind var_shadowBehaviour_27192 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 728)) ;
  GALGAS_string var_shadowMessage_27225 = GALGAS_string::makeEmptyString () ;
  cEnumerator_sharedMapAttributeListAST enumerator_27302 (object->mAttribute_mSharedMapAttributeListAST, kEnumeration_up) ;
  while (enumerator_27302.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_27302.current_mAttributeName (HERE).mAttribute_string.objectCompare (GALGAS_string ("shadow"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_27302.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 732)), GALGAS_string ("only %shadow attribute is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-shared-map.galgas", 732)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_shadowBehaviour_27192.objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 733)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_27302.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 734)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-shared-map.galgas", 734)) ;
      }else if (kBoolFalse == test_2) {
        GALGAS_mapAutomatonMessageKind temp_4 ;
        const enumGalgasBool test_5 = enumerator_27302.current_mIsError (HERE).boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 736)) ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 736)) ;
        }
        var_shadowBehaviour_27192 = temp_4 ;
        {
        routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_27302.current_mMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 737)) ;
        }
        var_shadowMessage_27225 = enumerator_27302.current_mMessage (HERE).mAttribute_string ;
      }
    }
    enumerator_27302.gotoNextObject () ;
  }
  GALGAS_stringset var_initialStateSet_27759 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 742)) ;
  cEnumerator_insertMethodListAST enumerator_27805 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_27805.hasCurrentObject ()) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 744)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_27805.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 745)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_27805.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 746)), GALGAS_string ("the '").add_operation (enumerator_27805.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 746)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 746)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 746)), fixItArray8  COMMA_SOURCE_FILE ("type-shared-map.galgas", 746)) ;
      }else if (kBoolFalse == test_7) {
        var_initialStateSet_27759.addAssign_operation (enumerator_27805.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 748))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 748)) ;
      }
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_27805.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 750)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_27805.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 751)), GALGAS_string ("the '").add_operation (enumerator_27805.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 751)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 751)), fixItArray10  COMMA_SOURCE_FILE ("type-shared-map.galgas", 751)) ;
      }
    }
    enumerator_27805.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap_28341 = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 755)) ;
  cEnumerator_mapSearchMethodListAST enumerator_28376 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_28376.hasCurrentObject ()) {
    const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 757)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_28376.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 758)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_28376.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 759)), GALGAS_string ("the '").add_operation (enumerator_28376.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 759)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 759)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 759)), fixItArray13  COMMA_SOURCE_FILE ("type-shared-map.galgas", 759)) ;
      }else if (kBoolFalse == test_12) {
        const enumGalgasBool test_14 = var_mapAutomatonActionMap_28341.getter_hasKey (enumerator_28376.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 760)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 760)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 760)).boolEnum () ;
        if (kBoolTrue == test_14) {
          {
          var_mapAutomatonActionMap_28341.setter_insertKey (enumerator_28376.current_mActionName (HERE), var_mapAutomatonActionMap_28341.getter_count (SOURCE_FILE ("type-shared-map.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 761)) ;
          }
        }
      }
    }else if (kBoolFalse == test_11) {
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_28376.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 763)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_28376.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 764)), GALGAS_string ("the '").add_operation (enumerator_28376.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 764)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 764)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 764)), fixItArray16  COMMA_SOURCE_FILE ("type-shared-map.galgas", 764)) ;
      }
    }
    enumerator_28376.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap_28987 = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 768)) ;
  cEnumerator_mapStateList enumerator_29018 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_29018.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap_28987.setter_insertKey (enumerator_29018.current_mStateName (HERE), var_mapAutomatonStateMap_28987.getter_count (SOURCE_FILE ("type-shared-map.galgas", 770)), enumerator_29018.current_mStateMessageKind (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 770)) ;
    }
    enumerator_29018.gotoNextObject () ;
  }
  cEnumerator_mapStateList enumerator_29153 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_29153.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_29186 (enumerator_29153.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_29186.hasCurrentObject ()) {
      GALGAS_uint joker_29247_2 ; // Joker input parameter
      GALGAS_mapAutomatonMessageKind joker_29247_1 ; // Joker input parameter
      var_mapAutomatonStateMap_28987.method_searchKey (enumerator_29186.current_mTargetStateName (HERE), joker_29247_2, joker_29247_1, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 774)) ;
      enumerator_29186.gotoNextObject () ;
    }
    enumerator_29153.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions_29337 = var_mapAutomatonActionMap_28341.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 778)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList_29411 = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 779)) ;
  cEnumerator_mapStateList enumerator_29442 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_29442.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState_29483 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 781)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList_29551 = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 782)) ;
    cEnumerator_mapStateTransitionList enumerator_29586 (enumerator_29442.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_29586.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex_29664 ;
      var_mapAutomatonActionMap_28341.method_searchKey (enumerator_29586.current_mActionName (HERE), var_actionIndex_29664, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 784)) ;
      const enumGalgasBool test_17 = var_actionsForCurrentState_29483.getter_hasKey (enumerator_29586.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 785)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 785)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_29586.current_mActionName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 786)), GALGAS_string ("the '").add_operation (enumerator_29586.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 786)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 786)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 786)), fixItArray18  COMMA_SOURCE_FILE ("type-shared-map.galgas", 786)) ;
      }
      var_actionsForCurrentState_29483.addAssign_operation (enumerator_29586.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 788))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 788)) ;
      GALGAS_uint var_targetStateIndex_29975 ;
      GALGAS_mapAutomatonMessageKind joker_29977 ; // Joker input parameter
      var_mapAutomatonStateMap_28987.method_searchKey (enumerator_29586.current_mTargetStateName (HERE), var_targetStateIndex_29975, joker_29977, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 789)) ;
      var_mapStateTransitionSortedList_29551.addAssign_operation (var_actionIndex_29664, enumerator_29586.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 792)), var_targetStateIndex_29975, enumerator_29586.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 794)), enumerator_29586.current_mTransitionMessageKind (HERE), enumerator_29586.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 796))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 790)) ;
      enumerator_29586.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex_30276 ;
    GALGAS_mapAutomatonMessageKind joker_30278 ; // Joker input parameter
    var_mapAutomatonStateMap_28987.method_searchKey (enumerator_29442.current_mStateName (HERE), var_stateIndex_30276, joker_30278, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 798)) ;
    var_mapStateSortedList_29411.addAssign_operation (var_stateIndex_30276, enumerator_29442.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 801)), enumerator_29442.current_mStateMessageKind (HERE), enumerator_29442.current_mStateMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 803)), var_mapStateTransitionSortedList_29551  COMMA_SOURCE_FILE ("type-shared-map.galgas", 799)) ;
    GALGAS_stringset var_missingActions_30476 = var_allActions_29337.substract_operation (var_actionsForCurrentState_29483, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 805)) ;
    const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_missingActions_30476.getter_count (SOURCE_FILE ("type-shared-map.galgas", 806)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_string var_s_30569 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_30605 (var_missingActions_30476, kEnumeration_up) ;
      while (enumerator_30605.hasCurrentObject ()) {
        var_s_30569.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_30605.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 809)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 809)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 809)) ;
        if (enumerator_30605.hasNextObject ()) {
          var_s_30569.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 810)) ;
        }
        enumerator_30605.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (enumerator_29442.current_mStateName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 812)), GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s_30569, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 812)), fixItArray20  COMMA_SOURCE_FILE ("type-shared-map.galgas", 812)) ;
    }
    enumerator_29442.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates_30850 = var_initialStateSet_27759 ;
  GALGAS_bool var_progress_30885 = GALGAS_bool (true) ;
  if (object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 818)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 818)).isValid ()) {
    uint32_t variant_30899 = object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 818)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 818)).uintValue () ;
    bool loop_30899 = true ;
    while (loop_30899) {
      loop_30899 = var_progress_30885.isValid () ;
      if (loop_30899) {
        loop_30899 = var_progress_30885.boolValue () ;
      }
      if (loop_30899 && (0 == variant_30899)) {
        loop_30899 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 818)) ;
      }
      if (loop_30899) {
        variant_30899 -- ;
        var_progress_30885 = GALGAS_bool (false) ;
        cEnumerator_mapStateList enumerator_30995 (object->mAttribute_mMapStateList, kEnumeration_up) ;
        while (enumerator_30995.hasCurrentObject ()) {
          const enumGalgasBool test_21 = var_accessibleStates_30850.getter_hasKey (enumerator_30995.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 821)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 821)).boolEnum () ;
          if (kBoolTrue == test_21) {
            cEnumerator_mapStateTransitionList enumerator_31093 (enumerator_30995.current_mTransitionList (HERE), kEnumeration_up) ;
            while (enumerator_31093.hasCurrentObject ()) {
              const enumGalgasBool test_22 = var_accessibleStates_30850.getter_hasKey (enumerator_31093.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 823)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 823)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 823)).boolEnum () ;
              if (kBoolTrue == test_22) {
                var_accessibleStates_30850.addAssign_operation (enumerator_31093.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 824))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 824)) ;
                var_progress_30885 = GALGAS_bool (true) ;
              }
              enumerator_31093.gotoNextObject () ;
            }
          }
          enumerator_30995.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates_31339 = var_mapAutomatonStateMap_28987.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 831)).substract_operation (var_accessibleStates_30850, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 831)) ;
  const enumGalgasBool test_23 = GALGAS_bool (kIsStrictSup, var_uselessStates_31339.getter_count (SOURCE_FILE ("type-shared-map.galgas", 832)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_23) {
    GALGAS_string var_s_31436 = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_31469 (var_uselessStates_31339, kEnumeration_up) ;
    while (enumerator_31469.hasCurrentObject ()) {
      var_s_31436.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_31469.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 835)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 835)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 835)) ;
      if (enumerator_31469.hasNextObject ()) {
        var_s_31436.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 836)) ;
      }
      enumerator_31469.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 838)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s_31436, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 838)), fixItArray24  COMMA_SOURCE_FILE ("type-shared-map.galgas", 838)) ;
  }
  GALGAS_stringset var_neededAssociations_31739 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 842)) ;
  GALGAS_stringset var_accessibilityGraph_31776 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 843)) ;
  cEnumerator_mapAutomatonStateMap enumerator_31829 (var_mapAutomatonStateMap_28987, kEnumeration_up) ;
  while (enumerator_31829.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates_31863 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 845)) ;
    var_reachableStates_31863.addAssign_operation (enumerator_31829.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 846))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 846)) ;
    var_progress_30885 = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap_28987.getter_count (SOURCE_FILE ("type-shared-map.galgas", 848)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 848)).isValid ()) {
      uint32_t variant_31953 = var_mapAutomatonStateMap_28987.getter_count (SOURCE_FILE ("type-shared-map.galgas", 848)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 848)).uintValue () ;
      bool loop_31953 = true ;
      while (loop_31953) {
        loop_31953 = var_progress_30885.isValid () ;
        if (loop_31953) {
          loop_31953 = var_progress_30885.boolValue () ;
        }
        if (loop_31953 && (0 == variant_31953)) {
          loop_31953 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 848)) ;
        }
        if (loop_31953) {
          variant_31953 -- ;
          var_progress_30885 = GALGAS_bool (false) ;
          cEnumerator_mapStateList enumerator_32059 (object->mAttribute_mMapStateList, kEnumeration_up) ;
          while (enumerator_32059.hasCurrentObject ()) {
            const enumGalgasBool test_25 = var_reachableStates_31863.getter_hasKey (enumerator_32059.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 851)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 851)).boolEnum () ;
            if (kBoolTrue == test_25) {
              cEnumerator_mapStateTransitionList enumerator_32160 (enumerator_32059.current_mTransitionList (HERE), kEnumeration_up) ;
              while (enumerator_32160.hasCurrentObject ()) {
                const enumGalgasBool test_26 = var_reachableStates_31863.getter_hasKey (enumerator_32160.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 853)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 853)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 853)).boolEnum () ;
                if (kBoolTrue == test_26) {
                  var_reachableStates_31863.addAssign_operation (enumerator_32160.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 854))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 854)) ;
                  var_accessibilityGraph_31776.addAssign_operation (enumerator_31829.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 855)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 855)).add_operation (enumerator_32160.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 855)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 855))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 855)) ;
                  var_progress_30885 = GALGAS_bool (true) ;
                }
                enumerator_32160.gotoNextObject () ;
              }
            }
            enumerator_32059.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_32522 (var_reachableStates_31863, kEnumeration_up) ;
    while (enumerator_32522.hasCurrentObject ()) {
      const enumGalgasBool test_27 = GALGAS_bool (kIsNotEqual, enumerator_31829.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 863)).objectCompare (enumerator_32522.current_key (HERE))).boolEnum () ;
      if (kBoolTrue == test_27) {
        var_neededAssociations_31739.addAssign_operation (enumerator_31829.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 864)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 864)).add_operation (enumerator_32522.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 864))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 864)) ;
      }
      enumerator_32522.gotoNextObject () ;
    }
    enumerator_31829.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList_32717 = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 869)) ;
  cEnumerator_mapOverrideBlockListAST enumerator_32759 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
  while (enumerator_32759.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations_32790 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 871)) ;
    GALGAS_stringset var_neededCombinaisons_32832 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 872)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31__32896 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 873)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_33002 (enumerator_32759.current_mMapOverrideBlockDescriptor_31_AST (HERE), kEnumeration_up) ;
    while (enumerator_33002.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex_33080 ;
      GALGAS_mapAutomatonMessageKind joker_33082 ; // Joker input parameter
      var_mapAutomatonStateMap_28987.method_searchKey (enumerator_33002.current_mLeftState (HERE), var_startStateNameIndex_33080, joker_33082, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 875)) ;
      GALGAS_uint var_currentStateNameIndex_33162 ;
      GALGAS_mapAutomatonMessageKind joker_33164 ; // Joker input parameter
      var_mapAutomatonStateMap_28987.method_searchKey (enumerator_33002.current_mRightState (HERE), var_currentStateNameIndex_33162, joker_33164, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 876)) ;
      GALGAS_string var_association_33196 = enumerator_33002.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 877)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 877)).add_operation (enumerator_33002.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 877)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 877)) ;
      const enumGalgasBool test_28 = var_neededAssociations_31739.getter_hasKey (var_association_33196 COMMA_SOURCE_FILE ("type-shared-map.galgas", 878)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 878)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticWarning (enumerator_33002.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 879)), GALGAS_string ("the '").add_operation (var_association_33196, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 879)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 879)), fixItArray29  COMMA_SOURCE_FILE ("type-shared-map.galgas", 879)) ;
      }
      const enumGalgasBool test_30 = var_handledAssociations_32790.getter_hasKey (var_association_33196 COMMA_SOURCE_FILE ("type-shared-map.galgas", 881)).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_33002.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 882)), GALGAS_string ("the '").add_operation (var_association_33196, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 883)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 883)), fixItArray31  COMMA_SOURCE_FILE ("type-shared-map.galgas", 882)) ;
      }
      var_handledAssociations_32790.addAssign_operation (var_association_33196  COMMA_SOURCE_FILE ("type-shared-map.galgas", 885)) ;
      GALGAS_uint var_finalStateNameIndex_33678 ;
      GALGAS_mapAutomatonMessageKind joker_33680 ; // Joker input parameter
      var_mapAutomatonStateMap_28987.method_searchKey (enumerator_33002.current_mResultingState (HERE), var_finalStateNameIndex_33678, joker_33680, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 886)) ;
      const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, enumerator_33002.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 887)).objectCompare (enumerator_33002.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 887)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        var_neededCombinaisons_32832.addAssign_operation (enumerator_33002.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 888)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 888)).add_operation (enumerator_33002.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 888))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 888)) ;
        var_neededCombinaisons_32832.addAssign_operation (enumerator_33002.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 889)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)).add_operation (enumerator_33002.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 889)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 889))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)) ;
        const enumGalgasBool test_33 = var_accessibilityGraph_31776.getter_hasKey (enumerator_33002.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 890)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 890)).add_operation (enumerator_33002.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 890)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 890)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 890)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 890)).boolEnum () ;
        if (kBoolTrue == test_33) {
          TC_Array <C_FixItDescription> fixItArray34 ;
          inCompiler->emitSemanticError (enumerator_33002.current_mResultingState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 891)), GALGAS_string ("the '").add_operation (enumerator_33002.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 892)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 892)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 892)).add_operation (enumerator_33002.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 892)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 892)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 892)), fixItArray34  COMMA_SOURCE_FILE ("type-shared-map.galgas", 891)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_33002.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 895)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31__32896.addAssign_operation (var_startStateNameIndex_33080, enumerator_33002.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 898)), var_currentStateNameIndex_33162, enumerator_33002.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 900)), var_finalStateNameIndex_33678, enumerator_33002.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 902)), enumerator_33002.current_mMessageKind (HERE), enumerator_33002.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 904))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 896)) ;
      enumerator_33002.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations_34553 = var_neededAssociations_31739.substract_operation (var_handledAssociations_32790, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 906)) ;
    const enumGalgasBool test_35 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations_34553.getter_count (SOURCE_FILE ("type-shared-map.galgas", 907)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_35) {
      GALGAS_string var_s_34658 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_34701 (var_forgottenAssociations_34553, kEnumeration_up) ;
      while (enumerator_34701.hasCurrentObject ()) {
        var_s_34658.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_34701.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 910)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 910)) ;
        enumerator_34701.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray36 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 912)), var_forgottenAssociations_34553.getter_count (SOURCE_FILE ("type-shared-map.galgas", 912)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 912)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 912)).add_operation (var_s_34658, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 912)), fixItArray36  COMMA_SOURCE_FILE ("type-shared-map.galgas", 912)) ;
    }
    GALGAS_stringset var_definedCombinaisons_34886 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 914)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32__34950 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 915)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_35056 (enumerator_32759.current_mMapOverrideBlockDescriptor_32_AST (HERE), kEnumeration_up) ;
    while (enumerator_35056.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex_35129 ;
      GALGAS_mapAutomatonMessageKind joker_35131 ; // Joker input parameter
      var_mapAutomatonStateMap_28987.method_searchKey (enumerator_35056.current_mLeftState (HERE), var_leftStateIndex_35129, joker_35131, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 917)) ;
      GALGAS_uint var_rightStateIndex_35205 ;
      GALGAS_mapAutomatonMessageKind joker_35207 ; // Joker input parameter
      var_mapAutomatonStateMap_28987.method_searchKey (enumerator_35056.current_mRightState (HERE), var_rightStateIndex_35205, joker_35207, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 918)) ;
      GALGAS_string var_combinaison_35239 = enumerator_35056.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 919)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 919)).add_operation (enumerator_35056.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 919)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 919)) ;
      const enumGalgasBool test_37 = var_neededCombinaisons_32832.getter_hasKey (var_combinaison_35239 COMMA_SOURCE_FILE ("type-shared-map.galgas", 920)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 920)).boolEnum () ;
      if (kBoolTrue == test_37) {
        TC_Array <C_FixItDescription> fixItArray38 ;
        inCompiler->emitSemanticError (enumerator_35056.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 921)), GALGAS_string ("the '").add_operation (enumerator_35056.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 922)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 922)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 922)).add_operation (enumerator_35056.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 922)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 922)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 922)), fixItArray38  COMMA_SOURCE_FILE ("type-shared-map.galgas", 921)) ;
      }
      const enumGalgasBool test_39 = var_definedCombinaisons_34886.getter_hasKey (var_combinaison_35239 COMMA_SOURCE_FILE ("type-shared-map.galgas", 924)).boolEnum () ;
      if (kBoolTrue == test_39) {
        TC_Array <C_FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticError (enumerator_35056.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 925)), GALGAS_string ("the '").add_operation (enumerator_35056.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 926)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 926)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 926)).add_operation (enumerator_35056.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 926)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 926)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 926)), fixItArray40  COMMA_SOURCE_FILE ("type-shared-map.galgas", 925)) ;
      }
      var_definedCombinaisons_34886.addAssign_operation (var_combinaison_35239  COMMA_SOURCE_FILE ("type-shared-map.galgas", 928)) ;
      GALGAS_uint var_resultingStateNameIndex_35769 ;
      GALGAS_mapAutomatonMessageKind joker_35771 ; // Joker input parameter
      var_mapAutomatonStateMap_28987.method_searchKey (enumerator_35056.current_mResultingState (HERE), var_resultingStateNameIndex_35769, joker_35771, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 929)) ;
      const enumGalgasBool test_41 = GALGAS_bool (kIsNotEqual, enumerator_35056.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 930)).objectCompare (enumerator_35056.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 930)))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_35056.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 931)).objectCompare (enumerator_35056.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 931)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 930)).operator_and (var_accessibilityGraph_31776.getter_hasKey (enumerator_35056.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 932)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 932)).add_operation (enumerator_35056.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 932)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 932)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 932)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 932)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 931)).boolEnum () ;
      if (kBoolTrue == test_41) {
        TC_Array <C_FixItDescription> fixItArray42 ;
        inCompiler->emitSemanticError (enumerator_35056.current_mResultingState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 933)), GALGAS_string ("the '").add_operation (enumerator_35056.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 934)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 934)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 934)).add_operation (enumerator_35056.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 934)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 934)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 934)), fixItArray42  COMMA_SOURCE_FILE ("type-shared-map.galgas", 933)) ;
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_35056.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 936)) ;
      }
      const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, enumerator_35056.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 937)))).boolEnum () ;
      if (kBoolTrue == test_43) {
        var_definedCombinaisons_34886.addAssign_operation (enumerator_35056.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 938)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 938)).add_operation (enumerator_35056.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 938)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 938))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 938)) ;
        var_branchBehaviourSortedListForMapOverride_32__34950.addAssign_operation (var_rightStateIndex_35205, enumerator_35056.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 941)), var_leftStateIndex_35129, enumerator_35056.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 943)), var_resultingStateNameIndex_35769, enumerator_35056.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 945)), enumerator_35056.current_mMessageKind (HERE), enumerator_35056.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 947))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 939)) ;
      }
      var_branchBehaviourSortedListForMapOverride_32__34950.addAssign_operation (var_leftStateIndex_35129, enumerator_35056.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 951)), var_rightStateIndex_35205, enumerator_35056.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 953)), var_resultingStateNameIndex_35769, enumerator_35056.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 955)), enumerator_35056.current_mMessageKind (HERE), enumerator_35056.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 957))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 949)) ;
      enumerator_35056.gotoNextObject () ;
    }
    const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, var_forgottenAssociations_34553.getter_count (SOURCE_FILE ("type-shared-map.galgas", 959)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_44) {
      GALGAS_stringset var_forgottenCombinaisons_37074 = var_neededCombinaisons_32832.substract_operation (var_definedCombinaisons_34886, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 960)) ;
      const enumGalgasBool test_45 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons_37074.getter_count (SOURCE_FILE ("type-shared-map.galgas", 961)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_45) {
        GALGAS_string var_s_37183 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_37228 (var_forgottenCombinaisons_37074, kEnumeration_up) ;
        while (enumerator_37228.hasCurrentObject ()) {
          var_s_37183.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_37228.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 964)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 964)) ;
          enumerator_37228.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray46 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 966)), var_forgottenCombinaisons_37074.getter_count (SOURCE_FILE ("type-shared-map.galgas", 966)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 966)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 966)).add_operation (var_s_37183, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 966)), fixItArray46  COMMA_SOURCE_FILE ("type-shared-map.galgas", 966)) ;
      }
    }
    var_mapOverrideList_32717.addAssign_operation (enumerator_32759.current_mOverrideBlockName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 970)), var_branchBehaviourSortedListForMapOverride_31__32896, var_branchBehaviourSortedListForMapOverride_32__34950  COMMA_SOURCE_FILE ("type-shared-map.galgas", 969)) ;
    enumerator_32759.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_37622 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 975)) ;
  GALGAS_attributeIndexMap var_attributeMap_37661 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 976)) ;
  cEnumerator_propertyInCollectionListAST enumerator_37692 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_37692.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefullness_37734 = function_typeNameForUsefulEntitiesGraph (enumerator_37692.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 978)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefullness_27019, var_propertyTypeNameForUsefullness_37734 COMMA_SOURCE_FILE ("type-shared-map.galgas", 979)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_37888 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_37692.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 980)) ;
    GALGAS_bool var_hasSetter_37989 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_38014 = GALGAS_bool (true) ;
    var_typedAttributeList_37622.addAssign_operation (var_t_37888, enumerator_37692.current_mPropertyName (HERE), var_hasSetter_37989, var_hasGetter_38014  COMMA_SOURCE_FILE ("type-shared-map.galgas", 983)) ;
    {
    var_attributeMap_37661.setter_insertKey (enumerator_37692.current_mPropertyName (HERE), var_t_37888, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 988)) ;
    }
    enumerator_37692.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_38227 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 991)) ;
  cEnumerator_insertMethodListAST enumerator_38272 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_38272.hasCurrentObject ()) {
    {
    var_insertMethodMap_38227.setter_insertKey (enumerator_38272.current (HERE).mAttribute_mInsertMethodName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 993)) ;
    }
    cEnumerator_stringlist enumerator_38505 (enumerator_38272.current (HERE).mAttribute_mErrorMessage.getter_string (SOURCE_FILE ("type-shared-map.galgas", 995)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 995)), kEnumeration_up) ;
    while (enumerator_38505.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_38540 = enumerator_38505.current (HERE).mAttribute_mValue.getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 996)) ;
      {
      GALGAS_string joker_38635 ; // Joker input parameter
      var_explodedArray_38540.setter_popFirst (joker_38635, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 997)) ;
      }
      cEnumerator_stringlist enumerator_38667 (var_explodedArray_38540, kEnumeration_up) ;
      while (enumerator_38667.hasCurrentObject ()) {
        const enumGalgasBool test_47 = GALGAS_bool (kIsStrictSup, enumerator_38667.current_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 999)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_47) {
          GALGAS_char var_c_38728 = enumerator_38667.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1000)) ;
          const enumGalgasBool test_48 = GALGAS_bool (kIsNotEqual, var_c_38728.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_38728.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1001)).boolEnum () ;
          if (kBoolTrue == test_48) {
            TC_Array <C_FixItDescription> fixItArray49 ;
            inCompiler->emitSemanticError (enumerator_38272.current (HERE).mAttribute_mErrorMessage.getter_location (SOURCE_FILE ("type-shared-map.galgas", 1002)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message"), fixItArray49  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1002)) ;
          }
        }
        enumerator_38667.gotoNextObject () ;
      }
      enumerator_38505.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_39157 (enumerator_38272.current (HERE).mAttribute_mShadowErrorMessage.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1008)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1008)), kEnumeration_up) ;
    while (enumerator_39157.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_39192 = enumerator_39157.current (HERE).mAttribute_mValue.getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1009)) ;
      {
      GALGAS_string joker_39293 ; // Joker input parameter
      var_explodedArray_39192.setter_popFirst (joker_39293, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1010)) ;
      }
      cEnumerator_stringlist enumerator_39332 (var_explodedArray_39192, kEnumeration_up) ;
      while (enumerator_39332.hasCurrentObject ()) {
        const enumGalgasBool test_50 = GALGAS_bool (kIsStrictSup, enumerator_39332.current (HERE).mAttribute_mValue.getter_length (SOURCE_FILE ("type-shared-map.galgas", 1012)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_50) {
          GALGAS_char var_c_39403 = enumerator_39332.current (HERE).mAttribute_mValue.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1013)) ;
          const enumGalgasBool test_51 = GALGAS_bool (kIsNotEqual, var_c_39403.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_39403.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1014)).boolEnum () ;
          if (kBoolTrue == test_51) {
            TC_Array <C_FixItDescription> fixItArray52 ;
            inCompiler->emitSemanticError (enumerator_38272.current (HERE).mAttribute_mErrorMessage.getter_location (SOURCE_FILE ("type-shared-map.galgas", 1015)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message"), fixItArray52  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1015)) ;
          }
        }
        enumerator_39332.gotoNextObject () ;
      }
      enumerator_39157.gotoNextObject () ;
    }
    enumerator_38272.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_39725 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1022)) ;
  cEnumerator_mapSearchMethodListAST enumerator_39770 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_39770.hasCurrentObject ()) {
    const enumGalgasBool test_53 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 1024)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_53) {
      {
      var_searchMethodMap_39725.setter_insertKey (enumerator_39770.current (HERE).mAttribute_mSearchMethodName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1025)) ;
      }
    }else if (kBoolFalse == test_53) {
      {
      var_searchMethodMap_39725.setter_insertKey (enumerator_39770.current (HERE).mAttribute_mSearchMethodName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1027)) ;
      }
    }
    cEnumerator_stringlist enumerator_40131 (enumerator_39770.current (HERE).mAttribute_mErrorMessage.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1030)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1030)), kEnumeration_up) ;
    while (enumerator_40131.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_40166 = enumerator_40131.current (HERE).mAttribute_mValue.getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1031)) ;
      {
      GALGAS_string joker_40266 ; // Joker input parameter
      var_explodedArray_40166.setter_popFirst (joker_40266, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1032)) ;
      }
      cEnumerator_stringlist enumerator_40305 (var_explodedArray_40166, kEnumeration_up) ;
      while (enumerator_40305.hasCurrentObject ()) {
        const enumGalgasBool test_54 = GALGAS_bool (kIsStrictSup, enumerator_40305.current (HERE).mAttribute_mValue.getter_length (SOURCE_FILE ("type-shared-map.galgas", 1034)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_54) {
          GALGAS_char var_c_40376 = enumerator_40305.current (HERE).mAttribute_mValue.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1035)) ;
          const enumGalgasBool test_55 = GALGAS_bool (kIsNotEqual, var_c_40376.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
          if (kBoolTrue == test_55) {
            TC_Array <C_FixItDescription> fixItArray56 ;
            inCompiler->emitSemanticError (enumerator_39770.current (HERE).mAttribute_mErrorMessage.getter_location (SOURCE_FILE ("type-shared-map.galgas", 1037)), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message"), fixItArray56  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1037)) ;
          }
        }
        enumerator_40305.gotoNextObject () ;
      }
      enumerator_40131.gotoNextObject () ;
    }
    enumerator_39770.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1045)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1045)), GALGAS_sharedMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1047)), object->mAttribute_mMapTypeName, var_typedAttributeList_37622, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, var_mapAutomatonStateMap_28987, var_mapAutomatonActionMap_28341, var_mapStateSortedList_29411, var_mapOverrideList_32717, var_shadowBehaviour_27192, var_shadowMessage_27225  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1046)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1044)) ;
  GALGAS_string var_graphFile_41150 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/shared-map-"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1061)).add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1061)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1061)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1061)) ;
  const enumGalgasBool test_57 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_57) {
    GALGAS_string var_theGraph_41319 = GALGAS_string ("digraph G {\n") ;
    cEnumerator_mapAutomatonStateMap enumerator_41372 (var_mapAutomatonStateMap_28987, kEnumeration_up) ;
    while (enumerator_41372.hasCurrentObject ()) {
      var_theGraph_41319.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_41372.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1065)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1065)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1065)).add_operation (enumerator_41372.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1065)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1065)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1065)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1065)) ;
      const enumGalgasBool test_58 = var_initialStateSet_27759.getter_hasKey (enumerator_41372.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("type-shared-map.galgas", 1066)).boolEnum () ;
      if (kBoolTrue == test_58) {
        var_theGraph_41319.plusAssign_operation(GALGAS_string (" shape=box color=blue"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1067)) ;
      }else if (kBoolFalse == test_58) {
        var_theGraph_41319.plusAssign_operation(GALGAS_string (" shape=box"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1069)) ;
      }
      switch (enumerator_41372.current_mStateMessageKind (HERE).enumValue ()) {
      case GALGAS_mapAutomatonMessageKind::kNotBuilt:
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
        {
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
        {
          var_theGraph_41319.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1074)) ;
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
        {
          var_theGraph_41319.plusAssign_operation(GALGAS_string (" fontcolor=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1076)) ;
        }
        break ;
      }
      var_theGraph_41319.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1078)) ;
      enumerator_41372.gotoNextObject () ;
    }
    cEnumerator_mapStateList enumerator_41850 (object->mAttribute_mMapStateList, kEnumeration_up) ;
    while (enumerator_41850.hasCurrentObject ()) {
      cEnumerator_mapStateTransitionList enumerator_41885 (enumerator_41850.current_mTransitionList (HERE), kEnumeration_up) ;
      while (enumerator_41885.hasCurrentObject ()) {
        var_theGraph_41319.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_41850.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1082)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1082)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1082)).add_operation (enumerator_41885.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1082)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1082)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1082)).add_operation (enumerator_41885.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1082)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1082)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1082)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1082)) ;
        switch (enumerator_41885.current_mTransitionMessageKind (HERE).enumValue ()) {
        case GALGAS_mapAutomatonMessageKind::kNotBuilt:
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
          {
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
          {
            var_theGraph_41319.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\" color=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1086)) ;
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
          {
            var_theGraph_41319.plusAssign_operation(GALGAS_string (" fontcolor=\"red\" color=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1088)) ;
          }
          break ;
        }
        var_theGraph_41319.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1090)) ;
        enumerator_41885.gotoNextObject () ;
      }
      enumerator_41850.gotoNextObject () ;
    }
    var_theGraph_41319.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1093)) ;
    GALGAS_bool joker_42380 ; // Joker input parameter
    var_theGraph_41319.method_writeToFileWhenDifferentContents (var_graphFile_41150, joker_42380, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1094)) ;
  }else if (kBoolFalse == test_57) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_graphFile_41150, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1096)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                         extensionMethod_sharedMapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_semanticAnalysis (defineExtensionMethod_sharedMapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@sharedMapTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_44742 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_44742.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_44742.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1156)) ;
    enumerator_44742.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1160)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1161)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("type-shared-map.galgas", 1159))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1166)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1167)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1168)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1169)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1170)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1171)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1172)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1173)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1174)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1175)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1176)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1177)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1165))), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1165)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                              extensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@sharedMapTypeForGeneration appendDeclaration2'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1189)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1190)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-shared-map.galgas", 1188))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                              extensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_sharedMapTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@sharedMapTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1201)) ;
  GALGAS_keySortedList var_keySortedList_46326 = GALGAS_keySortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 1202)) ;
  cEnumerator_mapAutomatonStateMap enumerator_46394 (object->mAttribute_mMapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_46394.hasCurrentObject ()) {
    var_keySortedList_46326.addAssign_operation (enumerator_46394.current_lkey (HERE).mAttribute_string, enumerator_46394.current_mStateIndex (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1204)) ;
    enumerator_46394.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1207)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mMapAutomatonStateMap, object->mAttribute_mMapAutomatonActionMap, object->mAttribute_mMapStateSortedList, object->mAttribute_mMapOverrideList, var_keySortedList_46326, object->mAttribute_mShadowBehaviour, object->mAttribute_mShadowMessage COMMA_SOURCE_FILE ("type-shared-map.galgas", 1206))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                                     extensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_sharedMapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@sortedListDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_key_3469 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("type-sorted-list.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)), object->mAttribute_mSortedListTypeName.getter_location (SOURCE_FILE ("type-sorted-list.galgas", 84))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3469, temp_0, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 85)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_3627 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3627.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3627.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)), enumerator_3627.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-sorted-list.galgas", 87))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)) ;
    }
    enumerator_3627.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                                extensionMethod_sortedListDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_sortedListDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@sortedListDeclarationAST addAssociatedElement'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_4270 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 97)) ;
  cEnumerator_propertyInCollectionListAST enumerator_4330 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_4330.hasCurrentObject ()) {
    var_structAttributeList_4270.addAssign_operation (enumerator_4330.current_mPropertyTypeName (HERE), enumerator_4330.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 103))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 99)) ;
    enumerator_4330.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 107)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 107)), var_structAttributeList_4270, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 105))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 105)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                             extensionMethod_sortedListDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_addAssociatedElement (defineExtensionMethod_sortedListDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@sortedListDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                             const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                             const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex_5304 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, var_listTypeIndex_5304 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 120)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex_5554 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 124)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 124)), var_listElementTypeIndex_5554 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 122)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5615 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 128)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5681 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 129)) ;
  GALGAS_formalParameterSignature var_setterFormalArgumentList_5735 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 130)) ;
  GALGAS_typedPropertyList var_typedAttributeList_5790 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 131)) ;
  cEnumerator_propertyInCollectionListAST enumerator_5840 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_5840.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_5974 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_5840.current_mPropertyTypeName (HERE), var_attributeTypeIndex_5974 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 133)) ;
    }
    GALGAS_bool var_hasGetter_5995 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_6022 = GALGAS_bool (true) ;
    var_typedAttributeList_5790.addAssign_operation (var_attributeTypeIndex_5974, enumerator_5840.current_mPropertyName (HERE), var_hasSetter_6022, var_hasGetter_5995  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 136)) ;
    var_enumerationDescriptor_5615.addAssign_operation (var_attributeTypeIndex_5974, enumerator_5840.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 137)) ;
    var_constructorAttributeTypeList_5681.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 138)), var_attributeTypeIndex_5974, enumerator_5840.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 138)) ;
    var_setterFormalArgumentList_5735.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 139)), var_attributeTypeIndex_5974, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-sorted-list.galgas", 139)), enumerator_5840.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 139)) ;
    enumerator_5840.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6451 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 142)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_6451, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptySortedList"), object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("type-sorted-list.galgas", 147)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 143)) ;
  }
  {
  var_constructorMap_6451.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 151))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 151)), var_constructorAttributeTypeList_5681, GALGAS_bool (false), var_listTypeIndex_5304, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 150)) ;
  }
  GALGAS_getterMap var_getterMap_6944 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_6944, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 157)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6944, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 158)) ;
  }
  GALGAS_setterMap var_setterMap_7135 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 166)) ;
  {
  var_setterMap_7135.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 168))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 168)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 169)), var_setterFormalArgumentList_5735, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 172)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 167)) ;
  }
  {
  var_setterMap_7135.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 176))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 176)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 177)), var_setterFormalArgumentList_5735, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 180)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 175)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_7636 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 184)) ;
  {
  var_instanceMethodMap_7636.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 186))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 186)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 187)), var_setterFormalArgumentList_5735, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 189)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 191)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 185)) ;
  }
  {
  var_instanceMethodMap_7636.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 195))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 195)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 196)), var_setterFormalArgumentList_5735, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 198)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 200)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 194)) ;
  }
  GALGAS_stringlist var_enumerationVariants_8189 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 204)) ;
  var_enumerationVariants_8189.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 205)) ;
  var_enumerationVariants_8189.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 206)) ;
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mSortedListTypeName, var_getterMap_6944, var_setterMap_7135, var_instanceMethodMap_7636, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 208)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mSortedListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-sorted-list.galgas", 223)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("type-sorted-list.galgas", 224)), GALGAS_bool (true), var_typedAttributeList_5790, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 227)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 228)), var_constructorMap_6451, var_getterMap_6944, var_setterMap_7135, var_instanceMethodMap_7636, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 233)), var_enumerationDescriptor_5615, var_enumerationVariants_8189, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 236)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 236)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 236)), var_constructorAttributeTypeList_5681, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 238)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 239)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 240)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 241)), GALGAS_bool (false), var_listElementTypeIndex_5554, GALGAS_string ("emptySortedList"), GALGAS_string ("sortedlist-").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("type-sorted-list.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 247)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-sorted-list.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 219)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                               extensionMethod_sortedListDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_enterInSemanticContext (defineExtensionMethod_sortedListDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@sortedListDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_lstring var_sortedListNameForUsefullness_10313 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mSortedListTypeName, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 264)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefullness_10313, var_sortedListNameForUsefullness_10313, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 265)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_10505 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 267)) ;
  GALGAS_attributeIndexMap var_attributeMap_10547 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 268)) ;
  cEnumerator_propertyInCollectionListAST enumerator_10605 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_10605.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefullness_10647 = function_typeNameForUsefulEntitiesGraph (enumerator_10605.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 270)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefullness_10313, var_propertyTypeNameForUsefullness_10647 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 271)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_10811 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_10605.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 272)) ;
    GALGAS_bool var_hasSetter_10914 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_10941 = GALGAS_bool (true) ;
    var_typedAttributeList_10505.addAssign_operation (var_t_10811, enumerator_10605.current_mPropertyName (HERE), var_hasSetter_10914, var_hasGetter_10941  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 275)) ;
    {
    var_attributeMap_10547.setter_insertKey (enumerator_10605.current_mPropertyName (HERE), var_t_10811, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 280)) ;
    }
    enumerator_10605.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting_11145 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sorted-list.galgas", 283)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_11185 = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 284)) ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_11254 (object->mAttribute_mSortDescriptorList, kEnumeration_up) ;
  while (enumerator_11254.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_11339 ;
    var_attributeMap_10547.method_searchKey (enumerator_11254.current_mSortedAttributeName (HERE), var_type_11339, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 286)) ;
    var_sortDescriptorList_11185.addAssign_operation (var_type_11339, enumerator_11254.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 287)), enumerator_11254.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 287)) ;
    const enumGalgasBool test_0 = var_attributesUsedForSorting_11145.getter_hasKey (enumerator_11254.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 288)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 288)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_11254.current_mSortedAttributeName (HERE).getter_location (SOURCE_FILE ("type-sorted-list.galgas", 289)), GALGAS_string ("the '").add_operation (enumerator_11254.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 289)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 289)), fixItArray1  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 289)) ;
    }
    var_attributesUsedForSorting_11145.addAssign_operation (enumerator_11254.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 291))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 291)) ;
    enumerator_11254.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("type-sorted-list.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 295)), GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 297)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 298)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 298)), var_typedAttributeList_10505, var_sortDescriptorList_11185  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 296)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 294)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                         extensionMethod_sortedListDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_semanticAnalysis (defineExtensionMethod_sortedListDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@sortedListTypeForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                               GALGAS_string & outArgument_outHeader,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 345)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-sorted-list.galgas", 344))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 350)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 351)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 352)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 353)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 356)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 357)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 358)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 359)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 360)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 361)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 349))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 349)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                              extensionMethod_sortedListTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_sortedListTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@sortedListTypeForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_string & outArgument_outImplementation,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_14781 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_14781.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14781.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 372)) ;
    enumerator_14781.gotoNextObject () ;
  }
  extensionMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 374)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 375)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 377)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSortDescriptorList COMMA_SOURCE_FILE ("type-sorted-list.galgas", 376))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                                     extensionMethod_sortedListTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_sortedListTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@structDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_key_2285 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("type-struct.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 49)), object->mAttribute_mStructTypeName.getter_location (SOURCE_FILE ("type-struct.galgas", 49))  COMMA_SOURCE_FILE ("type-struct.galgas", 49)) ;
  {
  const GALGAS_structDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2285, temp_0, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 50)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2435 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2435.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey_2458 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2435.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-struct.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 52)), enumerator_2435.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-struct.galgas", 52))  COMMA_SOURCE_FILE ("type-struct.galgas", 52)) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2285, var_propertyKey_2458 COMMA_SOURCE_FILE ("type-struct.galgas", 53)) ;
    }
    enumerator_2435.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                                extensionMethod_structDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_structDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@structDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_structTypeIndex_3384 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, var_structTypeIndex_3384 COMMA_SOURCE_FILE ("type-struct.galgas", 68)) ;
  }
  GALGAS_attributeMap var_attributeMap_3538 = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 70)) ;
  GALGAS_constructorMap var_constructorMap_3585 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 71)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_3648 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 72)) ;
  GALGAS_typedPropertyList var_typedAttributeList_3696 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 73)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation_3759 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 74)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3823 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3823.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_3957 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_3823.current_mPropertyTypeName (HERE), var_attributeTypeIndex_3957 COMMA_SOURCE_FILE ("type-struct.galgas", 76)) ;
    }
    var_constructorAttributeTypeList_3648.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-struct.galgas", 77)), var_attributeTypeIndex_3957, enumerator_3823.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-struct.galgas", 77)) ;
    var_typesToIncludeInHeaderCompilation_3759.addAssign_operation (var_attributeTypeIndex_3957  COMMA_SOURCE_FILE ("type-struct.galgas", 78)) ;
    GALGAS_bool var_hasSetter_4129 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_4155 = GALGAS_bool (true) ;
    var_typedAttributeList_3696.addAssign_operation (var_attributeTypeIndex_3957, enumerator_3823.current_mPropertyName (HERE), var_hasSetter_4129, var_hasGetter_4155  COMMA_SOURCE_FILE ("type-struct.galgas", 81)) ;
    {
    var_attributeMap_3538.setter_insertKey (enumerator_3823.current_mPropertyName (HERE), var_attributeTypeIndex_3957, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 82)) ;
    }
    enumerator_3823.gotoNextObject () ;
  }
  {
  var_constructorMap_3585.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 89))  COMMA_SOURCE_FILE ("type-struct.galgas", 89)), var_constructorAttributeTypeList_3648, GALGAS_bool (false), var_structTypeIndex_3384, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 88)) ;
  }
  GALGAS_getterMap var_getterMap_4523 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_4523, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 96)) ;
  }
  cEnumerator_typedPropertyList enumerator_4627 (var_typedAttributeList_3696, kEnumeration_up) ;
  while (enumerator_4627.hasCurrentObject ()) {
    {
    routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4523, ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_4627.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-struct.galgas", 101)), enumerator_4627.current_mAttributeTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 102)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 98)) ;
    }
    enumerator_4627.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_4874 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 107)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4936 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 109)) ;
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mStructTypeName, var_getterMap_4523, var_setterMap_4874, var_instanceMethodMap_4936, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 111)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedType_5312 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mEnumeratedElementTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_enumeratedType_5312 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-struct.galgas", 124)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumeratedElementTypeName, var_enumeratedType_5312 COMMA_SOURCE_FILE ("type-struct.galgas", 126)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_5630 = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_5673 (var_typedAttributeList_3696, kEnumeration_up) ;
  bool bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_5630.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_5673.hasCurrentObject () && bool_1) {
    while (enumerator_5673.hasCurrentObject () && bool_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_5673.current_mAttributeTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 135)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_5673.current_mAttributeTypeProxy (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 135)).operator_not (SOURCE_FILE ("type-struct.galgas", 135)) COMMA_SOURCE_FILE ("type-struct.galgas", 135)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_defaultConstructorName_5630 = GALGAS_string::makeEmptyString () ;
      }
      enumerator_5673.gotoNextObject () ;
      if (enumerator_5673.hasCurrentObject ()) {
        bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_5630.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mStructTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-struct.galgas", 144)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("type-struct.galgas", 145)), GALGAS_bool (false), var_typedAttributeList_3696, var_attributeMap_3538, var_typedAttributeList_3696, var_constructorMap_3585, var_getterMap_4523, var_setterMap_4874, var_instanceMethodMap_4936, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 154)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 155)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 156)), function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 157)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 158)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 159)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 160)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 161)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 162)), GALGAS_bool (false), var_enumeratedType_5312, var_defaultConstructorName_5630, GALGAS_string ("struct-").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("type-struct.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 166)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-struct.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 140)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                               extensionMethod_structDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_enterInSemanticContext (defineExtensionMethod_structDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@structDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                   GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_lstring var_structNameForUsefullness_7794 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mStructTypeName, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 192)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefullness_7794, var_structNameForUsefullness_7794, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 193)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mAttributeList.getter_length (SOURCE_FILE ("type-struct.galgas", 195)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mStructTypeName.getter_location (SOURCE_FILE ("type-struct.galgas", 196)), GALGAS_string ("a structure cannot be empty: it must have at least one field"), fixItArray1  COMMA_SOURCE_FILE ("type-struct.galgas", 196)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_8100 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 198)) ;
  GALGAS_attributeIndexMap var_attributeMap_8142 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 199)) ;
  cEnumerator_propertyInCollectionListAST enumerator_8200 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_8200.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefullness_8242 = function_typeNameForUsefulEntitiesGraph (enumerator_8200.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 201)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefullness_7794, var_propertyTypeNameForUsefullness_8242 COMMA_SOURCE_FILE ("type-struct.galgas", 202)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_8402 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_8200.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 203)) ;
    cEnumerator_lstringlist enumerator_8512 (enumerator_8200.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_8512.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_8512.current_mValue (HERE).getter_location (SOURCE_FILE ("type-struct.galgas", 205)), GALGAS_string ("a struct attribute does not accept any feature"), fixItArray2  COMMA_SOURCE_FILE ("type-struct.galgas", 205)) ;
      enumerator_8512.gotoNextObject () ;
    }
    GALGAS_bool var_hasSetter_8617 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_8649 = GALGAS_bool (false) ;
    var_typedAttributeList_8100.addAssign_operation (var_t_8402, enumerator_8200.current_mPropertyName (HERE), var_hasSetter_8617, var_hasGetter_8649  COMMA_SOURCE_FILE ("type-struct.galgas", 209)) ;
    const enumGalgasBool test_3 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 214)).getter_hasKey (enumerator_8200.current_mPropertyName (HERE).mAttribute_string COMMA_SOURCE_FILE ("type-struct.galgas", 214)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_m_8832 = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_8907 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 216)), kEnumeration_up) ;
      while (enumerator_8907.hasCurrentObject ()) {
        var_m_8832.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_8907.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 217)) ;
        enumerator_8907.gotoNextObject () ;
      }
      var_m_8832.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 219)) ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_8200.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-struct.galgas", 220)), var_m_8832, fixItArray4  COMMA_SOURCE_FILE ("type-struct.galgas", 220)) ;
    }
    {
    var_attributeMap_8142.setter_insertKey (enumerator_8200.current_mPropertyName (HERE), var_t_8402, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 222)) ;
    }
    enumerator_8200.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("type-struct.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 225)), GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 227)), var_typedAttributeList_8100  COMMA_SOURCE_FILE ("type-struct.galgas", 226)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("type-struct.galgas", 224)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                         extensionMethod_structDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_semanticAnalysis (defineExtensionMethod_structDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@structTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_string & outArgument_outHeader,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_10647 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_10647.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_10647.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 266)) ;
    enumerator_10647.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 270)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 271)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 273)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 269))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 276)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 277)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 278)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 279)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 280)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 281)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 282)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 283)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 284)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 285)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 286)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 287)) COMMA_SOURCE_FILE ("type-struct.galgas", 275))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 275)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                              extensionMethod_structTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_structTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@structTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outImplementation,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 298)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 300)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 301)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 303)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 299))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                                     extensionMethod_structTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_structTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@abstractExtensionGetterAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_abstractExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  result_outString = GALGAS_string ("abstract extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_abstractExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                          extensionGetter_abstractExtensionGetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractExtensionGetterAST_keyRepresentation (defineExtensionGetter_abstractExtensionGetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionGetterAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_key_3443 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 68)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 68)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 68)), object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 69))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 67)) ;
  {
  const GALGAS_abstractExtensionGetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3443, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 71)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3443, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 72)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 72))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 72)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 72)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 74)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 74)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-getter.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 75)) ;
    }
  }
  cMapElement_extensionGetterMapForBuildingContext * objectArray_4039 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 81)) ;
  if (NULL != objectArray_4039) {
      macroValidSharedObject (objectArray_4039, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    objectArray_4039->mAttribute_mExtensionGetterMapForType.setter_insertKey (object->mAttribute_mAbstractExtensionGetterName, object->mAttribute_mAbstractExtensionGetterReturnedTypeName, object->mAttribute_mAbstractExtensionGetterFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 82)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                                extensionMethod_abstractExtensionGetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_abstractExtensionGetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionGetterAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                               extensionMethod_abstractExtensionGetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_enterInSemanticContext (defineExtensionMethod_abstractExtensionGetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@abstractExtensionGetterAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  GALGAS_lstring var_nameForUsefullness_5839 = function_getterNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 115)), object->mAttribute_mAbstractExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 115)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_5839, var_nameForUsefullness_5839, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 116)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_6045 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 118)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_6045.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 120)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-abstract-getter.galgas", 120)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 121)), GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_6045.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 121)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 121)), fixItArray1  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 121)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_6045.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 122)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 123)), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (var_selfType_6045.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 123)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 123)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 123)) ;
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_6626 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-getter.galgas", 126)) ;
  cEnumerator_formalInputParameterListAST enumerator_6692 (object->mAttribute_mAbstractExtensionGetterFormalInputParameterList, kEnumeration_up) ;
  while (enumerator_6692.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6626.addAssign_operation (enumerator_6692.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_6692.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 130)), enumerator_6692.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 131)), enumerator_6692.current_mFormalArgumentName (HERE), enumerator_6692.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 128)) ;
    enumerator_6692.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 137)), GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 140)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 140)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 140)), var_selfType_6045, object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 142)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractExtensionGetterReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 143)), var_formalParameterListForGeneration_6626  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 138)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                         extensionMethod_abstractExtensionGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_semanticAnalysis (defineExtensionMethod_abstractExtensionGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionGetterAST buildExtensionListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioAbstractExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 167)), object->mAttribute_mAbstractExtensionGetterName  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                               extensionMethod_abstractExtensionGetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionGetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@abstractExtensionGetterForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_abstractExtensionGetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 185)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_abstractExtensionGetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration.mSlotID,
                                   extensionGetter_abstractExtensionGetterForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractExtensionGetterForGeneration_headerKind (defineExtensionGetter_abstractExtensionGetterForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@abstractExtensionGetterForGeneration appendDeclaration1'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterForGeneration * object = (const cPtr_abstractExtensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 195)), object->mAttribute_mAbstractExtensionGetterName, object->mAttribute_mAbstractExtensionGetterFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 194))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration.mSlotID,
                                              extensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@abstractExtensionGetterForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterForGeneration * object = (const cPtr_abstractExtensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 209)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 209)).add_operation (object->mAttribute_mAbstractExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 209))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 209)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 210)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 211)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_10809 (object->mAttribute_mAbstractExtensionGetterFormalParameterList, kEnumeration_up) ;
  while (enumerator_10809.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10809.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 213)) ;
    enumerator_10809.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 216)), object->mAttribute_mAbstractExtensionGetterName, object->mAttribute_mAbstractExtensionGetterFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 215))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration.mSlotID,
                                                     extensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation (defineExtensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionMethodAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_key_2571 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)).add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)), object->mAttribute_mAbstractExtensionMethodName.getter_location (SOURCE_FILE ("extension-abstract-method.galgas", 48))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)) ;
  {
  const GALGAS_abstractExtensionMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2571, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 49)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2571, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-abstract-method.galgas", 50))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 52)) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 52)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 52)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-method.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 53)) ;
    }
  }
  cMapElement_extensionMethodMapForBuildingContext * objectArray_3048 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 58)) ;
  if (NULL != objectArray_3048) {
      macroValidSharedObject (objectArray_3048, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    objectArray_3048->mAttribute_mExtensionMethodMapForType.setter_insertKey (object->mAttribute_mAbstractExtensionMethodName, object->mAttribute_mAbstractExtensionMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 59)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                                extensionMethod_abstractExtensionMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_abstractExtensionMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@abstractExtensionMethodAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_abstractExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                          extensionGetter_abstractExtensionMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractExtensionMethodAST_keyRepresentation (defineExtensionGetter_abstractExtensionMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionMethodAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                               extensionMethod_abstractExtensionMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_enterInSemanticContext (defineExtensionMethod_abstractExtensionMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@abstractExtensionMethodAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  GALGAS_lstring var_nameForUsefullness_5322 = function_methodNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 98)), object->mAttribute_mAbstractExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 98)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_5322, var_nameForUsefullness_5322, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 99)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5528 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 101)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5528.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 103)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-abstract-method.galgas", 103)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionMethodName.getter_location (SOURCE_FILE ("extension-abstract-method.galgas", 104)), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_5528.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 104)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 104)), fixItArray1  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 104)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_5528.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionMethodName.getter_location (SOURCE_FILE ("extension-abstract-method.galgas", 106)), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (var_selfType_5528.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6075 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-method.galgas", 109)) ;
  cEnumerator_formalParameterListAST enumerator_6169 (object->mAttribute_mAbstractExtensionMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_6169.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6075.addAssign_operation (enumerator_6169.current_mFormalSelector (HERE), enumerator_6169.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_6169.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 114)), enumerator_6169.current_mFormalArgumentName (HERE), enumerator_6169.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 116))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 111)) ;
    enumerator_6169.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 120)), GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_5528.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 123)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 123)).add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 123)), var_selfType_5528, object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 125)), var_formalParameterListForGeneration_6075  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 121)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                         extensionMethod_abstractExtensionMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_semanticAnalysis (defineExtensionMethod_abstractExtensionMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionMethodAST buildExtensionListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioAbstractExtensionMethodListMapAST.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 148)), object->mAttribute_mAbstractExtensionMethodName  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                               extensionMethod_abstractExtensionMethodAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionMethodAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@abstractExtensionMethodForGeneration appendDeclaration1'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodForGeneration * object = (const cPtr_abstractExtensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 168)), object->mAttribute_mAbstractExtensionMethodName, object->mAttribute_mAbstractExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 167))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration.mSlotID,
                                              extensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_ (defineExtensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@abstractExtensionMethodForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_abstractExtensionMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 177)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_abstractExtensionMethodForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration.mSlotID,
                                   extensionGetter_abstractExtensionMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractExtensionMethodForGeneration_headerKind (defineExtensionGetter_abstractExtensionMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@abstractExtensionMethodForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodForGeneration * object = (const cPtr_abstractExtensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)).add_operation (object->mAttribute_mAbstractExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 187)) ;
  cEnumerator_formalParameterListForGeneration enumerator_10104 (object->mAttribute_mAbstractExtensionMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_10104.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10104.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 189)) ;
    enumerator_10104.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, object->mAttribute_mReceiverType, object->mAttribute_mAbstractExtensionMethodName, object->mAttribute_mAbstractExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 191))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration.mSlotID,
                                                     extensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation (defineExtensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionSetterAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_key_2569 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)).add_operation (object->mAttribute_mAbstractExtensionSetterName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)), object->mAttribute_mAbstractExtensionSetterName.getter_location (SOURCE_FILE ("extension-abstract-setter.galgas", 48))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)) ;
  {
  const GALGAS_abstractExtensionSetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2569, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 49)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2569, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 50)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-abstract-setter.galgas", 50))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 50)) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 50)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 52)) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 52)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 52)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-setter.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 53)) ;
    }
  }
  cMapElement_extensionSetterMapForBuildingContext * objectArray_3080 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 58)) ;
  if (NULL != objectArray_3080) {
      macroValidSharedObject (objectArray_3080, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    objectArray_3080->mAttribute_mExtensionSetterMapForType.setter_insertKey (object->mAttribute_mAbstractExtensionSetterName, object->mAttribute_mAbstractExtensionSetterFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 59)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                                extensionMethod_abstractExtensionSetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_abstractExtensionSetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@abstractExtensionSetterAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_abstractExtensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  result_outString = GALGAS_string ("abstract extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)).add_operation (object->mAttribute_mAbstractExtensionSetterName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_abstractExtensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                          extensionGetter_abstractExtensionSetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractExtensionSetterAST_keyRepresentation (defineExtensionGetter_abstractExtensionSetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionSetterAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                               extensionMethod_abstractExtensionSetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_enterInSemanticContext (defineExtensionMethod_abstractExtensionSetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@abstractExtensionSetterAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  GALGAS_lstring var_nameForUsefullness_5354 = function_setterNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 99)), object->mAttribute_mAbstractExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 99)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_5354, var_nameForUsefullness_5354, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5560 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 102)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5560.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 104)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-abstract-setter.galgas", 104)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionSetterName.getter_location (SOURCE_FILE ("extension-abstract-setter.galgas", 105)), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_5560.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 105)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 105)), fixItArray1  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 105)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_5560.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 106)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionSetterName.getter_location (SOURCE_FILE ("extension-abstract-setter.galgas", 107)), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (var_selfType_5560.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 107)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 107)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6107 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-setter.galgas", 110)) ;
  cEnumerator_formalParameterListAST enumerator_6201 (object->mAttribute_mAbstractExtensionSetterFormalParameterList, kEnumeration_up) ;
  while (enumerator_6201.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6107.addAssign_operation (enumerator_6201.current_mFormalSelector (HERE), enumerator_6201.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_6201.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 115)), enumerator_6201.current_mFormalArgumentName (HERE), enumerator_6201.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 117))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 112)) ;
    enumerator_6201.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (object->mAttribute_mAbstractExtensionSetterName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)), GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 124)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 124)).add_operation (object->mAttribute_mAbstractExtensionSetterName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 124)), var_selfType_5560, object->mAttribute_mAbstractExtensionSetterName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 126)), var_formalParameterListForGeneration_6107  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 122)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 120)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                         extensionMethod_abstractExtensionSetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_semanticAnalysis (defineExtensionMethod_abstractExtensionSetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionSetterAST buildExtensionListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioAbstractExtensionSetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 151)), object->mAttribute_mAbstractExtensionSetterName  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                               extensionMethod_abstractExtensionSetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionSetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@abstractExtensionSetterForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_abstractExtensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 168)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_abstractExtensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration.mSlotID,
                                   extensionGetter_abstractExtensionSetterForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractExtensionSetterForGeneration_headerKind (defineExtensionGetter_abstractExtensionSetterForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@abstractExtensionSetterForGeneration appendDeclaration1'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterForGeneration * object = (const cPtr_abstractExtensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 177)), object->mAttribute_mAbstractExtensionSetterName, object->mAttribute_mAbstractExtensionSetterFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 176))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration.mSlotID,
                                              extensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@abstractExtensionSetterForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterForGeneration * object = (const cPtr_abstractExtensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 190)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 190)).add_operation (object->mAttribute_mAbstractExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 190))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 190)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 193)), object->mAttribute_mAbstractExtensionSetterName, object->mAttribute_mAbstractExtensionSetterFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 192))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration.mSlotID,
                                                     extensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation (defineExtensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@extensionGetterAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_extensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  result_outString = GALGAS_string ("extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 62)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 62)).add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 62)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                          extensionGetter_extensionGetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extensionGetterAST_keyRepresentation (defineExtensionGetter_extensionGetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionGetterAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_key_3738 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 76)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 76)).add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 76)), object->mAttribute_mExtensionGetterName.getter_location (SOURCE_FILE ("extension-getter.galgas", 76))  COMMA_SOURCE_FILE ("extension-getter.galgas", 76)) ;
  {
  const GALGAS_extensionGetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3738, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 77)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3738, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 78)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-getter.galgas", 78))  COMMA_SOURCE_FILE ("extension-getter.galgas", 78)) COMMA_SOURCE_FILE ("extension-getter.galgas", 78)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 81)) COMMA_SOURCE_FILE ("extension-getter.galgas", 81)).operator_not (SOURCE_FILE ("extension-getter.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-getter.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 82)) ;
    }
  }
  cMapElement_extensionGetterMapForBuildingContext * objectArray_4318 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 87)) ;
  if (NULL != objectArray_4318) {
      macroValidSharedObject (objectArray_4318, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    objectArray_4318->mAttribute_mExtensionGetterMapForType.setter_insertKey (object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterReturnedTypeName, object->mAttribute_mExtensionGetterFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 88)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                                extensionMethod_extensionGetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_extensionGetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionGetterAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                               extensionMethod_extensionGetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterAST_enterInSemanticContext (defineExtensionMethod_extensionGetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@extensionGetterAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  GALGAS_lstring var_nameForUsefullness_6979 = function_getterNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 143)), object->mAttribute_mExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 143)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_6979, var_nameForUsefullness_6979, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 144)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_7177 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 146)) ;
  GALGAS_string var_selfObjectName_7277 ;
  GALGAS_string var_selfObjectAccessor_7306 ;
  GALGAS_bool var_implementedAsFunction_7336 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType_7177.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 151)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-getter.galgas", 151)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName_7277 = GALGAS_string ("object") ;
    var_selfObjectAccessor_7306 = GALGAS_string ("object->") ;
    var_implementedAsFunction_7336 = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName_7277 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_7306 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_7336 = GALGAS_bool (true) ;
  }
  GALGAS_analysisContext var_analysisContext_7698 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_7177, var_selfObjectName_7277, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-getter.galgas", 166))  COMMA_SOURCE_FILE ("extension-getter.galgas", 161)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_7872 ;
  GALGAS_string var_returnVariableCppName_7904 ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_7978 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8055 ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType_7177.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 176)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-getter.galgas", 176)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_7177.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 176)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-getter.galgas", 176)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 176)).operator_or (GALGAS_bool (kIsEqual, var_selfType_7177.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 176)).objectCompare (GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("extension-getter.galgas", 176)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 176)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType_7177.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 177)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-getter.galgas", 178)) ;
  }
  routine_analyzeFunctionBody (var_nameForUsefullness_6979, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_7698, object->mAttribute_mExtensionGetterFormalInputParameterList, temp_1, var_selfObjectAccessor_7306, object->mAttribute_mExtensionGetterInstructionList, object->mAttribute_mExtensionGetterReturnedVariableName, object->mAttribute_mExtensionGetterReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration_7978, var_returnType_7872, var_returnVariableCppName_7904, var_semanticInstructionListForGeneration_8055, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 171)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 192)), GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (var_selfType_7177.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 195)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 195)).add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 195)), var_selfType_7177, object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 197)), var_implementedAsFunction_7336, var_returnType_7872, var_returnVariableCppName_7904, var_formalParameterListForGeneration_7978, var_selfType_7177.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 202)), var_semanticInstructionListForGeneration_8055  COMMA_SOURCE_FILE ("extension-getter.galgas", 193)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-getter.galgas", 191)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                         extensionMethod_extensionGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterAST_semanticAnalysis (defineExtensionMethod_extensionGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionGetterAST buildExtensionListMaps'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 226)), object->mAttribute_mExtensionGetterName  COMMA_SOURCE_FILE ("extension-getter.galgas", 225)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                               extensionMethod_extensionGetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterAST_buildExtensionListMaps (defineExtensionMethod_extensionGetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@extensionGetterForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_extensionGetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-getter.galgas", 248)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extensionGetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_extensionGetterForGeneration.mSlotID,
                                   extensionGetter_extensionGetterForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extensionGetterForGeneration_headerKind (defineExtensionGetter_extensionGetterForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@extensionGetterForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionGetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterForGeneration * object = (const cPtr_extensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 258)), object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 261)) COMMA_SOURCE_FILE ("extension-getter.galgas", 257))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 265)), object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("extension-getter.galgas", 264))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_extensionGetterForGeneration.mSlotID,
                                              extensionMethod_extensionGetterForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_extensionGetterForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@extensionGetterForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_12927 = object->mAttribute_mExtensionGetterFormalParameterList ;
    {
    var_extensionReaderFormalParameterList_12927.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 282)), object->mAttribute_mReceiverType, GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 285))  COMMA_SOURCE_FILE ("extension-getter.galgas", 285)), GALGAS_bool (true), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 281)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 289)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 289)).add_operation (object->mAttribute_mExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 289))  COMMA_SOURCE_FILE ("extension-getter.galgas", 289)) ;
    GALGAS_string var_code_13569 ;
    {
    routine_generateFunction (GALGAS_string ("extensionGetter_").add_operation (object->mAttribute_mExtensionGetterName.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 291)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_12927, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType, object->mAttribute_mResultVarCppName, GALGAS_bool (false), var_code_13569, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 290)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 302)), object->mAttribute_mExtensionGetterName, var_code_13569 COMMA_SOURCE_FILE ("extension-getter.galgas", 301))) ;
  }else if (kBoolFalse == test_0) {
    extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 307)) ;
    extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 308)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_13928 (object->mAttribute_mExtensionGetterFormalParameterList, kEnumeration_up) ;
    while (enumerator_13928.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_13928.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 310)) ;
      enumerator_13928.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_baseType_14037 = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching_14073 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 314)).isValid ()) {
      uint32_t variant_14089 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 314)).uintValue () ;
      bool loop_14089 = true ;
      while (loop_14089) {
        loop_14089 = var_searching_14073.isValid () ;
        if (loop_14089) {
          loop_14089 = var_searching_14073.boolValue () ;
        }
        if (loop_14089 && (0 == variant_14089)) {
          loop_14089 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 314)) ;
        }
        if (loop_14089) {
          variant_14089 -- ;
          const enumGalgasBool test_1 = var_baseType_14037.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 315)).getter_isNull (SOURCE_FILE ("extension-getter.galgas", 315)).operator_not (SOURCE_FILE ("extension-getter.galgas", 315)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType_14037.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 316)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 316)).getter_hasKey (object->mAttribute_mExtensionGetterName COMMA_SOURCE_FILE ("extension-getter.galgas", 316)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType_14037 = var_baseType_14037.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 317)) ;
            }else if (kBoolFalse == test_2) {
              var_searching_14073 = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching_14073 = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_14037.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 325)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 325)).add_operation (object->mAttribute_mExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 325))  COMMA_SOURCE_FILE ("extension-getter.galgas", 325)) ;
    GALGAS_string var_extensionReaderCode_14792 ;
    {
    routine_generateExtensionGetter (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 334)), object->mAttribute_mResultVarCppName, var_extensionReaderCode_14792, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 326)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 339)), object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mResultType, var_extensionReaderCode_14792 COMMA_SOURCE_FILE ("extension-getter.galgas", 338))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_extensionGetterForGeneration.mSlotID,
                                                     extensionMethod_extensionGetterForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterForGeneration_appendSpecificImplementation (defineExtensionMethod_extensionGetterForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@extensionMethodAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                          extensionGetter_extensionMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extensionMethodAST_keyRepresentation (defineExtensionGetter_extensionMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionMethodAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_key_3322 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-method.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 64)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 64)).add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 64)), object->mAttribute_mExtensionMethodName.getter_location (SOURCE_FILE ("extension-method.galgas", 64))  COMMA_SOURCE_FILE ("extension-method.galgas", 64)) ;
  {
  const GALGAS_extensionMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3322, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 65)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3322, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-method.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 66)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-method.galgas", 66))  COMMA_SOURCE_FILE ("extension-method.galgas", 66)) COMMA_SOURCE_FILE ("extension-method.galgas", 66)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-method.galgas", 68)) COMMA_SOURCE_FILE ("extension-method.galgas", 68)).operator_not (SOURCE_FILE ("extension-method.galgas", 68)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-method.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 69)) ;
    }
  }
  cMapElement_extensionMethodMapForBuildingContext * objectArray_3817 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 74)) ;
  if (NULL != objectArray_3817) {
      macroValidSharedObject (objectArray_3817, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    objectArray_3817->mAttribute_mExtensionMethodMapForType.setter_insertKey (object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 75)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                                extensionMethod_extensionMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_extensionMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionMethodAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                               extensionMethod_extensionMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodAST_enterInSemanticContext (defineExtensionMethod_extensionMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@extensionMethodAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  GALGAS_lstring var_nameForUsefullness_5506 = function_methodNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-method.galgas", 106)), object->mAttribute_mExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 106)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_5506, var_nameForUsefullness_5506, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 107)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5704 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 109)) ;
  GALGAS_string var_selfObjectName_5804 ;
  GALGAS_string var_selfObjectAccessor_5833 ;
  GALGAS_bool var_implementedAsFunction_5863 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType_5704.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 114)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-method.galgas", 114)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName_5804 = GALGAS_string ("object") ;
    var_selfObjectAccessor_5833 = GALGAS_string ("object->") ;
    var_implementedAsFunction_5863 = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName_5804 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_5833 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_5863 = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6242 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 124)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6357 ;
  GALGAS_analysisContext var_analysisContext_6379 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5704, var_selfObjectName_5804, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-method.galgas", 131))  COMMA_SOURCE_FILE ("extension-method.galgas", 126)) ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType_5704.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 138)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-method.galgas", 138)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_5704.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 138)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-method.galgas", 138)))) COMMA_SOURCE_FILE ("extension-method.galgas", 138)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType_5704.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 139)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 140)) ;
  }
  routine_analyzeRoutineBody (var_nameForUsefullness_5506, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6379, object->mAttribute_mExtensionMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 137)), temp_1, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 142)), var_selfObjectAccessor_5833, object->mAttribute_mExtensionMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration_6357, var_formalParameterListForGeneration_6242, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 132)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 151)), GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_5704.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 154)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 154)).add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 154)), var_selfType_5704, object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 156)), var_implementedAsFunction_5863, var_formalParameterListForGeneration_6242, var_selfType_5704.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 159)), var_semanticInstructionListForGeneration_6357  COMMA_SOURCE_FILE ("extension-method.galgas", 152)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-method.galgas", 150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                         extensionMethod_extensionMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodAST_semanticAnalysis (defineExtensionMethod_extensionMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionMethodAST buildExtensionListMaps'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioExtensionMethodListMap.addAssign_operation (object->mAttribute_mTypeName.mAttribute_string, object->mAttribute_mExtensionMethodName  COMMA_SOURCE_FILE ("extension-method.galgas", 183)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                               extensionMethod_extensionMethodAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodAST_buildExtensionListMaps (defineExtensionMethod_extensionMethodAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@extensionMethodForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_extensionMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-method.galgas", 202)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extensionMethodForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_extensionMethodForGeneration.mSlotID,
                                   extensionGetter_extensionMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extensionMethodForGeneration_headerKind (defineExtensionGetter_extensionMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@extensionMethodForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodForGeneration * object = (const cPtr_extensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 212)), object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-method.galgas", 211))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 218)), object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-method.galgas", 217))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_extensionMethodForGeneration.mSlotID,
                                              extensionMethod_extensionMethodForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodForGeneration_appendDeclaration_31_ (defineExtensionMethod_extensionMethodForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@extensionMethodForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    GALGAS_formalParameterListForGeneration var_extensionMethodFormalParameterList_11073 = object->mAttribute_mExtensionMethodFormalParameterList ;
    {
    var_extensionMethodFormalParameterList_11073.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 234)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 235)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 237))  COMMA_SOURCE_FILE ("extension-method.galgas", 237)), GALGAS_string ("inObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 233)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 241)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 241)).add_operation (object->mAttribute_mExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 241))  COMMA_SOURCE_FILE ("extension-method.galgas", 241)) ;
    GALGAS_string var_code_11895 ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionMethod_").add_operation (object->mAttribute_mExtensionMethodName.getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 244)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_11073, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_11895, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 242)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 256)), object->mAttribute_mExtensionMethodName, var_code_11895 COMMA_SOURCE_FILE ("extension-method.galgas", 255))) ;
  }else if (kBoolFalse == test_0) {
    extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 261)) ;
    cEnumerator_formalParameterListForGeneration enumerator_12200 (object->mAttribute_mExtensionMethodFormalParameterList, kEnumeration_up) ;
    while (enumerator_12200.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_12200.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 263)) ;
      enumerator_12200.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_baseType_12309 = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching_12345 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 267)).isValid ()) {
      uint32_t variant_12361 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 267)).uintValue () ;
      bool loop_12361 = true ;
      while (loop_12361) {
        loop_12361 = var_searching_12345.isValid () ;
        if (loop_12361) {
          loop_12361 = var_searching_12345.boolValue () ;
        }
        if (loop_12361 && (0 == variant_12361)) {
          loop_12361 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 267)) ;
        }
        if (loop_12361) {
          variant_12361 -- ;
          const enumGalgasBool test_1 = var_baseType_12309.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 268)).getter_isNull (SOURCE_FILE ("extension-method.galgas", 268)).operator_not (SOURCE_FILE ("extension-method.galgas", 268)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType_12309.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 269)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 269)).getter_hasKey (object->mAttribute_mExtensionMethodName COMMA_SOURCE_FILE ("extension-method.galgas", 269)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType_12309 = var_baseType_12309.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 270)) ;
            }else if (kBoolFalse == test_2) {
              var_searching_12345 = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching_12345 = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType_12309.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 278)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 278)).add_operation (object->mAttribute_mExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 278))  COMMA_SOURCE_FILE ("extension-method.galgas", 278)) ;
    GALGAS_string var_methodImplementation_13003 ;
    {
    routine_generateExtensionMethod (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation_13003, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 279)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 289)), object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, var_methodImplementation_13003 COMMA_SOURCE_FILE ("extension-method.galgas", 288))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_extensionMethodForGeneration.mSlotID,
                                                     extensionMethod_extensionMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodForGeneration_appendSpecificImplementation (defineExtensionMethod_extensionMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@extensionSetterAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_extensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  result_outString = GALGAS_string ("extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 50)).add_operation (object->mAttribute_mExtensionSetterName.getter_string (SOURCE_FILE ("extension-setter.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 50)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                          extensionGetter_extensionSetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extensionSetterAST_keyRepresentation (defineExtensionGetter_extensionSetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionSetterAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_key_3341 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 63)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 63)).add_operation (object->mAttribute_mExtensionSetterName.getter_string (SOURCE_FILE ("extension-setter.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 63)), object->mAttribute_mExtensionSetterName.getter_location (SOURCE_FILE ("extension-setter.galgas", 63))  COMMA_SOURCE_FILE ("extension-setter.galgas", 63)) ;
  {
  const GALGAS_extensionSetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3341, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 64)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3341, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 65)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-setter.galgas", 65))  COMMA_SOURCE_FILE ("extension-setter.galgas", 65)) COMMA_SOURCE_FILE ("extension-setter.galgas", 65)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 67)) COMMA_SOURCE_FILE ("extension-setter.galgas", 67)).operator_not (SOURCE_FILE ("extension-setter.galgas", 67)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-setter.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 68)) ;
    }
  }
  cMapElement_extensionSetterMapForBuildingContext * objectArray_3836 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-setter.galgas", 73)) ;
  if (NULL != objectArray_3836) {
      macroValidSharedObject (objectArray_3836, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    objectArray_3836->mAttribute_mExtensionSetterMapForType.setter_insertKey (object->mAttribute_mExtensionSetterName, object->mAttribute_mExtensionSetterFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 74)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                                extensionMethod_extensionSetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_extensionSetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionSetterAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                               extensionMethod_extensionSetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionSetterAST_enterInSemanticContext (defineExtensionMethod_extensionSetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@extensionSetterAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  GALGAS_lstring var_nameForUsefullness_5525 = function_setterNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 105)), object->mAttribute_mExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 105)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_5525, var_nameForUsefullness_5525, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 106)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5723 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 108)) ;
  GALGAS_string var_selfObjectName_5823 ;
  GALGAS_string var_selfObjectAccessor_5852 ;
  GALGAS_bool var_implementedAsFunction_5882 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType_5723.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 113)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-setter.galgas", 113)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName_5823 = GALGAS_string ("object") ;
    var_selfObjectAccessor_5852 = GALGAS_string ("object->") ;
    var_implementedAsFunction_5882 = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName_5823 = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor_5852 = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction_5882 = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6261 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 123)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6376 ;
  GALGAS_analysisContext var_analysisContext_6398 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5723, var_selfObjectName_5823, var_selfType_5723  COMMA_SOURCE_FILE ("extension-setter.galgas", 125)) ;
  {
  routine_analyzeRoutineBody (var_nameForUsefullness_5525, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6398, object->mAttribute_mExtensionSetterFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 136)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 137)), var_selfType_5723.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 138)), var_selfObjectAccessor_5852, object->mAttribute_mExtensionSetterInstructionList, object->mAttribute_mEndOfSetterDeclarationLocation, var_semanticInstructionListForGeneration_6376, var_formalParameterListForGeneration_6261, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 131)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (object->mAttribute_mExtensionSetterName.getter_string (SOURCE_FILE ("extension-setter.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 147)), GALGAS_extensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (var_selfType_5723.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 150)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 150)).add_operation (object->mAttribute_mExtensionSetterName.getter_string (SOURCE_FILE ("extension-setter.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 150)), var_selfType_5723, object->mAttribute_mExtensionSetterName.getter_string (SOURCE_FILE ("extension-setter.galgas", 152)), var_implementedAsFunction_5882, var_formalParameterListForGeneration_6261, var_selfType_5723.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 155)), var_semanticInstructionListForGeneration_6376  COMMA_SOURCE_FILE ("extension-setter.galgas", 148)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-setter.galgas", 146)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                         extensionMethod_extensionSetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionSetterAST_semanticAnalysis (defineExtensionMethod_extensionSetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionSetterAST buildExtensionListMaps'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioExtensionSettierListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 179)), object->mAttribute_mExtensionSetterName  COMMA_SOURCE_FILE ("extension-setter.galgas", 178)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                               extensionMethod_extensionSetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionSetterAST_buildExtensionListMaps (defineExtensionMethod_extensionSetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@extensionSetterForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_extensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-setter.galgas", 199)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_extensionSetterForGeneration.mSlotID,
                                   extensionGetter_extensionSetterForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extensionSetterForGeneration_headerKind (defineExtensionGetter_extensionSetterForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@extensionSetterForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionSetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterForGeneration * object = (const cPtr_extensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 209)), object->mAttribute_mExtensionSetterName, object->mAttribute_mExtensionSetterFormalParameterList COMMA_SOURCE_FILE ("extension-setter.galgas", 208))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 215)), object->mAttribute_mExtensionSetterName, object->mAttribute_mExtensionSetterFormalParameterList COMMA_SOURCE_FILE ("extension-setter.galgas", 214))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionSetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_extensionSetterForGeneration.mSlotID,
                                              extensionMethod_extensionSetterForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionSetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_extensionSetterForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@extensionSetterForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    GALGAS_formalParameterListForGeneration var_extensionSetterFormalParameterList_10881 = object->mAttribute_mExtensionSetterFormalParameterList ;
    {
    var_extensionSetterFormalParameterList_10881.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas", 231)), GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.galgas", 232)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 234))  COMMA_SOURCE_FILE ("extension-setter.galgas", 234)), GALGAS_string ("ioObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 230)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 238)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 238)).add_operation (object->mAttribute_mExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 238))  COMMA_SOURCE_FILE ("extension-setter.galgas", 238)) ;
    GALGAS_string var_code_11699 ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionSetter_").add_operation (object->mAttribute_mExtensionSetterName.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 241)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_10881, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_11699, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 239)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 253)), object->mAttribute_mExtensionSetterName, var_code_11699 COMMA_SOURCE_FILE ("extension-setter.galgas", 252))) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_baseType_11934 = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching_11970 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 260)).isValid ()) {
      uint32_t variant_11986 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 260)).uintValue () ;
      bool loop_11986 = true ;
      while (loop_11986) {
        loop_11986 = var_searching_11970.isValid () ;
        if (loop_11986) {
          loop_11986 = var_searching_11970.boolValue () ;
        }
        if (loop_11986 && (0 == variant_11986)) {
          loop_11986 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas", 260)) ;
        }
        if (loop_11986) {
          variant_11986 -- ;
          const enumGalgasBool test_1 = var_baseType_11934.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 261)).getter_isNull (SOURCE_FILE ("extension-setter.galgas", 261)).operator_not (SOURCE_FILE ("extension-setter.galgas", 261)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType_11934.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 262)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 262)).getter_hasKey (object->mAttribute_mExtensionSetterName COMMA_SOURCE_FILE ("extension-setter.galgas", 262)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType_11934 = var_baseType_11934.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 263)) ;
            }else if (kBoolFalse == test_2) {
              var_searching_11970 = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching_11970 = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType_11934.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 271)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 271)).add_operation (object->mAttribute_mExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 271))  COMMA_SOURCE_FILE ("extension-setter.galgas", 271)) ;
    extensionMethod_addHeaderFileName (var_baseType_11934, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 272)) ;
    GALGAS_string var_setterImplementation_12676 ;
    {
    routine_generateExtensionSetter (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 274)), GALGAS_string::makeEmptyString (), object->mAttribute_mExtensionSetterName, ioArgument_ioInclusionSet, object->mAttribute_mExtensionSetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_setterImplementation_12676, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 273)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 283)), object->mAttribute_mExtensionSetterName, object->mAttribute_mExtensionSetterFormalParameterList, var_setterImplementation_12676 COMMA_SOURCE_FILE ("extension-setter.galgas", 282))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionSetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_extensionSetterForGeneration.mSlotID,
                                                     extensionMethod_extensionSetterForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionSetterForGeneration_appendSpecificImplementation (defineExtensionMethod_extensionSetterForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@overridingAbstractExtensionGetterAST keyRepresentation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  result_outString = GALGAS_string ("overriding extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingAbstractExtensionGetterAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionGetterAST enterDeclarationInGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                                extensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionGetterAST enterInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext (defineExtensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@overridingAbstractExtensionGetterAST semanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  GALGAS_lstring var_nameForUsefullness_6041 = function_getterNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 116)), object->mAttribute_mAbstractExtensionGetterReturnedTypeName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 116)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_6041, var_nameForUsefullness_6041, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 117)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_6259 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 119)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_6390 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractExtensionGetterReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 121)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_6259.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 123)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 123)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 124)), GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_6259.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 124)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 124)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 124)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_6259.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 125)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 126)), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (var_selfType_6259.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 126)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 126)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 126)) ;
    }
  }
  GALGAS_string var_baseTypeName_6942 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_6981 = var_selfType_6259.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 130)) ;
  GALGAS_functionSignature var_inheritedSignature_7045 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 131)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType_7076 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 132)) ;
  GALGAS_location var_inheritedDeclarationLocation_7147 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 133)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)).isValid ()) {
    uint32_t variant_7171 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)).uintValue () ;
    bool loop_7171 = true ;
    while (loop_7171) {
      loop_7171 = var_superType_6981.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 135)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 135)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6942.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 135)).isValid () ;
      if (loop_7171) {
        loop_7171 = var_superType_6981.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 135)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 135)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6942.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 135)).boolValue () ;
      }
      if (loop_7171 && (0 == variant_7171)) {
        loop_7171 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)) ;
      }
      if (loop_7171) {
        variant_7171 -- ;
        const enumGalgasBool test_4 = var_superType_6981.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)).getter_hasKey (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier_7572 ;
          GALGAS_methodKind joker_7442 ; // Joker input parameter
          GALGAS_bool joker_7519 ; // Joker input parameter
          GALGAS_string joker_7582 ; // Joker input parameter
          var_superType_6981.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 137)).method_searchKey (object->mAttribute_mAbstractExtensionGetterName, joker_7442, var_inheritedSignature_7045, var_inheritedDeclarationLocation_7147, joker_7519, var_inheritedReturnType_7076, var_qualifier_7572, joker_7582, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 137)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier_7572.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 147)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName_6942 = var_superType_6981.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 148)) ;
          }
        }
        var_superType_6981 = var_superType_6981.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 151)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName_6942.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 154)), GALGAS_string ("this getter is not declared by a super class"), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 154)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6942.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_7963 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 158)) ;
    cEnumerator_formalInputParameterListAST enumerator_8069 (object->mAttribute_mAbstractExtensionGetterFormalInputParameterList, kEnumeration_up) ;
    while (enumerator_8069.hasCurrentObject ()) {
      var_formalParameterListForGeneration_7963.addAssign_operation (enumerator_8069.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_8069.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 162)), enumerator_8069.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 163)), enumerator_8069.current_mFormalArgumentName (HERE), enumerator_8069.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 160)) ;
      enumerator_8069.gotoNextObject () ;
    }
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration_7963, var_returnType_6390, object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 170)), var_inheritedSignature_7045, var_inheritedReturnType_7076, var_inheritedDeclarationLocation_7147, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 167)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionGetterAST buildExtensionListMaps'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioOverridingAbstractExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 196)), object->mAttribute_mAbstractExtensionGetterName  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 195)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@overridingAbstractExtensionMethodAST keyRepresentation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  result_outString = GALGAS_string ("overriding extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)).add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingAbstractExtensionMethodAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                                extensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionMethodAST enterInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext (defineExtensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@overridingAbstractExtensionMethodAST semanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  GALGAS_lstring var_nameForUsefullness_4768 = function_methodNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 84)), object->mAttribute_mOverridingExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 84)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_4768, var_nameForUsefullness_4768, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 85)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_4976 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 87)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_4976.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 89)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 89)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 90)), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_4976.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 90)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 90)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 90)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_4976.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 91)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 92)), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (var_selfType_4976.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 92)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 92)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 92)) ;
    }
  }
  GALGAS_string var_baseTypeName_5501 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5540 = var_selfType_4976.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 96)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5589 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 97)) ;
  GALGAS_location var_inheritedDeclarationLocation_5660 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 98)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 99)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 99)).isValid ()) {
    uint32_t variant_5684 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 99)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 99)).uintValue () ;
    bool loop_5684 = true ;
    while (loop_5684) {
      loop_5684 = var_superType_5540.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 100)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 100)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5501.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 100)).isValid () ;
      if (loop_5684) {
        loop_5684 = var_superType_5540.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 100)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 100)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5501.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 100)).boolValue () ;
      }
      if (loop_5684 && (0 == variant_5684)) {
        loop_5684 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 99)) ;
      }
      if (loop_5684) {
        variant_5684 -- ;
        const enumGalgasBool test_4 = var_superType_5540.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 101)).getter_hasKey (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 101)) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 101)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier_5910 ;
          GALGAS_methodKind joker_5992 ; // Joker input parameter
          GALGAS_bool joker_6045 ; // Joker input parameter
          GALGAS_string joker_6059 ; // Joker input parameter
          var_superType_5540.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)).method_searchKey (object->mAttribute_mOverridingExtensionMethodName, joker_5992, var_inheritedSignature_5589, var_inheritedDeclarationLocation_5660, joker_6045, var_qualifier_5910, joker_6059, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier_5910.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 104)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName_5501 = var_superType_5540.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 105)) ;
          }
        }
        var_superType_5540 = var_superType_5540.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 108)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName_5501.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 111)), GALGAS_string ("this getter is not declared by a super class"), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 111)) ;
  }
  GALGAS_variableMap var_variableMap_6396 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 114)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6490 ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingExtensionMethodFormalParameterList, var_variableMap_6396, var_formalParameterListForGeneration_6490, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 116)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5501.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration_6490, object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 126)), var_inheritedSignature_5589, var_inheritedDeclarationLocation_5660, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 124)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionMethodAST buildExtensionListMaps'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioOverridingAbstractExtensionMethodListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 152)), object->mAttribute_mOverridingExtensionMethodName  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@overridingAbstractExtensionSetterAST keyRepresentation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  result_outString = GALGAS_string ("overriding extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 43)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 43)).add_operation (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 43)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingAbstractExtensionSetterAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionSetterAST enterDeclarationInGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 57)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                                extensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionSetterAST enterInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext (defineExtensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@overridingAbstractExtensionSetterAST semanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  GALGAS_lstring var_nameForUsefullness_4761 = function_setterNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 84)), object->mAttribute_mOverridingExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 84)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_4761, var_nameForUsefullness_4761, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 85)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_4969 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 87)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_4969.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 89)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 89)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 90)), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_4969.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 90)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 90)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 90)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_4969.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 91)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 92)), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (var_selfType_4969.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 92)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 92)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 92)) ;
    }
  }
  GALGAS_string var_baseTypeName_5494 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5533 = var_selfType_4969.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 96)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5582 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 97)) ;
  GALGAS_location var_inheritedDeclarationLocation_5653 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 98)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 99)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 99)).isValid ()) {
    uint32_t variant_5677 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 99)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 99)).uintValue () ;
    bool loop_5677 = true ;
    while (loop_5677) {
      loop_5677 = var_superType_5533.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5494.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).isValid () ;
      if (loop_5677) {
        loop_5677 = var_superType_5533.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5494.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).boolValue () ;
      }
      if (loop_5677 && (0 == variant_5677)) {
        loop_5677 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 99)) ;
      }
      if (loop_5677) {
        variant_5677 -- ;
        const enumGalgasBool test_4 = var_superType_5533.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).getter_hasKey (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier_5895 ;
          GALGAS_methodKind joker_5969 ; // Joker input parameter
          GALGAS_bool joker_5992 ; // Joker input parameter
          GALGAS_string joker_6006 ; // Joker input parameter
          var_superType_5533.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 103)).method_searchKey (object->mAttribute_mOverridingExtensionSetterName, joker_5969, var_inheritedSignature_5582, joker_5992, var_qualifier_5895, joker_6006, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 103)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier_5895.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 104)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName_5494 = var_superType_5533.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 105)) ;
          }
        }
        var_superType_5533 = var_superType_5533.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 108)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName_5494.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 111)), GALGAS_string ("this setter is not declared by a super class"), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 111)) ;
  }
  GALGAS_variableMap var_variableMap_6343 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 114)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6437 ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingExtensionSetterFormalParameterList, var_variableMap_6343, var_formalParameterListForGeneration_6437, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5494.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration_6437, object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 126)), var_inheritedSignature_5582, var_inheritedDeclarationLocation_5653, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionSetterAST buildExtensionListMaps'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioOverridingAbstractExtensionSetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 151)), object->mAttribute_mOverridingExtensionSetterName  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionGetterAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                                extensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@overridingExtensionGetterAST keyRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  result_outString = GALGAS_string ("overriding extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 76)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 76)).add_operation (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 76)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                          extensionGetter_overridingExtensionGetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingExtensionGetterAST_keyRepresentation (defineExtensionGetter_overridingExtensionGetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionGetterAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingExtensionGetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_enterInSemanticContext (defineExtensionMethod_overridingExtensionGetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@overridingExtensionGetterAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  GALGAS_lstring var_nameForUsefullness_6313 = function_getterNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 125)), object->mAttribute_mOverridingExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 125)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_6313, var_nameForUsefullness_6313, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 126)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_6521 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 128)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_6521.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 130)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-getter.galgas", 130)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-getter.galgas", 131)), GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_6521.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 131)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 131)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 131)) ;
  }
  GALGAS_string var_baseTypeName_6865 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_6904 = var_selfType_6521.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 135)) ;
  GALGAS_functionSignature var_inheritedSignature_6968 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 136)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType_6999 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-getter.galgas", 137)) ;
  GALGAS_location var_inheritedDeclarationLocation_7070 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 138)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 139)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 139)).isValid ()) {
    uint32_t variant_7094 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 139)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 139)).uintValue () ;
    bool loop_7094 = true ;
    while (loop_7094) {
      loop_7094 = var_superType_6904.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 140)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 140)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6865.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 140)).isValid () ;
      if (loop_7094) {
        loop_7094 = var_superType_6904.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 140)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 140)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6865.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 140)).boolValue () ;
      }
      if (loop_7094 && (0 == variant_7094)) {
        loop_7094 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas", 139)) ;
      }
      if (loop_7094) {
        variant_7094 -- ;
        const enumGalgasBool test_2 = var_superType_6904.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 141)).getter_hasKey (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 141)) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 141)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier_7516 ;
          GALGAS_methodKind joker_7369 ; // Joker input parameter
          GALGAS_bool joker_7446 ; // Joker input parameter
          GALGAS_string joker_7526 ; // Joker input parameter
          var_superType_6904.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 142)).method_searchKey (object->mAttribute_mOverridingExtensionGetterName, joker_7369, var_inheritedSignature_6968, var_inheritedDeclarationLocation_7070, joker_7446, var_inheritedReturnType_6999, var_qualifier_7516, joker_7526, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 142)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier_7516.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas", 152)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName_6865 = var_superType_6904.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 153)) ;
          }
        }
        var_superType_6904 = var_superType_6904.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 156)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName_6865.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-getter.galgas", 159)), GALGAS_string ("this getter is not declared by a super class"), fixItArray5  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 159)) ;
  }
  GALGAS_analysisContext var_analysisContext_7870 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_6521, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-getter.galgas", 167))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 162)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_8646 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_8688 ;
  GALGAS_string var_returnVariableCppName_8727 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8811 ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType_6521.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 174)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-getter.galgas", 174)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_6521.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 174)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-overriding-getter.galgas", 174)))) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 174)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType_6521.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 175)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 176)) ;
  }
  routine_analyzeFunctionBody (var_nameForUsefullness_6313, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_7870, object->mAttribute_mOverridingExtensionGetterFormalInputParameterList, temp_6, GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionGetterInstructionList, object->mAttribute_mOverridingExtensionGetterReturnedVariableName, object->mAttribute_mOverridingExtensionGetterReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration_8646, var_returnType_8688, var_returnVariableCppName_8727, var_semanticInstructionListForGeneration_8811, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 169)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6865.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration_8646, var_returnType_8688, object->mAttribute_mOverridingExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-getter.galgas", 193)), var_inheritedSignature_6968, var_inheritedReturnType_6999, var_inheritedDeclarationLocation_7070, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 190)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 201)), GALGAS_overrideExtensionGetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 204)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 204)).add_operation (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 204)), var_selfType_6521, var_baseTypeName_6865, object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 207)), var_returnType_8688, var_returnVariableCppName_8727, var_formalParameterListForGeneration_8646, var_selfType_6521.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 211)), var_semanticInstructionListForGeneration_8811  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 202)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 200)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                         extensionMethod_overridingExtensionGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_semanticAnalysis (defineExtensionMethod_overridingExtensionGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionGetterAST buildExtensionListMaps'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioOverridingExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 235)), object->mAttribute_mOverridingExtensionGetterName  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 234)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingExtensionGetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionGetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@overrideExtensionGetterForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_overrideExtensionGetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas", 257)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overrideExtensionGetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration.mSlotID,
                                   extensionGetter_overrideExtensionGetterForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overrideExtensionGetterForGeneration_headerKind (defineExtensionGetter_overrideExtensionGetterForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@overrideExtensionGetterForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overrideExtensionGetterForGeneration * object = (const cPtr_overrideExtensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overrideExtensionGetterForGeneration) ;
  GALGAS_string var_extensionReaderCode_12808 ;
  {
  routine_generateExtensionGetter (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mOverridingExtensionGetterName, object->mAttribute_mOverridingExtensionGetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 274)), object->mAttribute_mResultVarCppName, var_extensionReaderCode_12808, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 266)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 279)), object->mAttribute_mOverridingExtensionGetterName, object->mAttribute_mResultType, var_extensionReaderCode_12808 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 278))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration.mSlotID,
                                                     extensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (defineExtensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@overridingExtensionMethodAST keyRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingExtensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  result_outString = GALGAS_string ("overriding extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 51)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 51)).add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 51)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                          extensionGetter_overridingExtensionMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingExtensionMethodAST_keyRepresentation (defineExtensionGetter_overridingExtensionMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionMethodAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                                extensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionMethodAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingExtensionMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_enterInSemanticContext (defineExtensionMethod_overridingExtensionMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@overridingExtensionMethodAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  GALGAS_lstring var_nameForUsefullness_5006 = function_methodNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 90)), object->mAttribute_mOverridingExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 90)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_5006, var_nameForUsefullness_5006, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 91)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5214 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 93)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5214.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 95)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-method.galgas", 95)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-method.galgas", 96)), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_5214.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 96)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 96)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 96)) ;
  }
  GALGAS_string var_baseTypeName_5558 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5597 = var_selfType_5214.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 100)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5646 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 101)) ;
  GALGAS_location var_inheritedDeclarationLocation_5717 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 102)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 103)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 103)).isValid ()) {
    uint32_t variant_5741 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 103)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 103)).uintValue () ;
    bool loop_5741 = true ;
    while (loop_5741) {
      loop_5741 = var_superType_5597.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 104)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 104)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5558.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 104)).isValid () ;
      if (loop_5741) {
        loop_5741 = var_superType_5597.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 104)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 104)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5558.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 104)).boolValue () ;
      }
      if (loop_5741 && (0 == variant_5741)) {
        loop_5741 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas", 103)) ;
      }
      if (loop_5741) {
        variant_5741 -- ;
        const enumGalgasBool test_2 = var_superType_5597.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 105)).getter_hasKey (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 105)) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 105)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier_5967 ;
          GALGAS_methodKind joker_6049 ; // Joker input parameter
          GALGAS_bool joker_6102 ; // Joker input parameter
          GALGAS_string joker_6116 ; // Joker input parameter
          var_superType_5597.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 107)).method_searchKey (object->mAttribute_mOverridingExtensionMethodName, joker_6049, var_inheritedSignature_5646, var_inheritedDeclarationLocation_5717, joker_6102, var_qualifier_5967, joker_6116, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 107)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier_5967.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas", 108)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName_5558 = var_superType_5597.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 109)) ;
          }
        }
        var_superType_5597 = var_superType_5597.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 112)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName_5558.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-method.galgas", 115)), GALGAS_string ("this method is not declared by a super class"), fixItArray5  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 115)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6470 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 118)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6585 ;
  GALGAS_analysisContext var_analysisContext_6607 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5214, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-method.galgas", 125))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 120)) ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType_5214.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 132)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-method.galgas", 132)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_5214.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 132)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-overriding-method.galgas", 132)))) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 132)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType_5214.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 133)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 134)) ;
  }
  routine_analyzeRoutineBody (var_nameForUsefullness_5006, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6607, object->mAttribute_mOverridingExtensionMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 131)), temp_6, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 136)), GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration_6585, var_formalParameterListForGeneration_6470, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 126)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5558.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration_6470, object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-method.galgas", 147)), var_inheritedSignature_5646, var_inheritedDeclarationLocation_5717, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 145)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 154)), GALGAS_overridingExtensionMethodForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("method-").add_operation (var_selfType_5214.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 157)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 157)).add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 157)), var_selfType_5214, var_baseTypeName_5558, object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 160)), var_formalParameterListForGeneration_6470, var_selfType_5214.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 162)), var_semanticInstructionListForGeneration_6585  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 155)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 153)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                         extensionMethod_overridingExtensionMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_semanticAnalysis (defineExtensionMethod_overridingExtensionMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionMethodAST buildExtensionListMaps'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioOverridingExtensionMethodListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 185)), object->mAttribute_mOverridingExtensionMethodName  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 184)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingExtensionMethodAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionMethodAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@overridingExtensionMethodForGeneration headerKind'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_overridingExtensionMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-method.galgas", 205)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingExtensionMethodForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration.mSlotID,
                                   extensionGetter_overridingExtensionMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingExtensionMethodForGeneration_headerKind (defineExtensionGetter_overridingExtensionMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@overridingExtensionMethodForGeneration appendSpecificImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodForGeneration * object = (const cPtr_overridingExtensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodForGeneration) ;
  GALGAS_string var_methodImplementation_11082 ;
  {
  routine_generateExtensionMethod (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation_11082, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 214)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 224)), object->mAttribute_mExtensionMethodName, var_methodImplementation_11082 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 223))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration.mSlotID,
                                                     extensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation (defineExtensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionSetterAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                                extensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@overridingExtensionSetterAST keyRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingExtensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  result_outString = GALGAS_string ("overriding extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 64)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 64)).add_operation (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 64)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingExtensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                          extensionGetter_overridingExtensionSetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingExtensionSetterAST_keyRepresentation (defineExtensionGetter_overridingExtensionSetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionSetterAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingExtensionSetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_enterInSemanticContext (defineExtensionMethod_overridingExtensionSetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@overridingExtensionSetterAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  GALGAS_lstring var_nameForUsefullness_5014 = function_setterNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 90)), object->mAttribute_mOverridingExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 90)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_5014, var_nameForUsefullness_5014, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 91)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5222 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 93)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5222.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 95)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-setter.galgas", 95)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-setter.galgas", 96)), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_5222.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 96)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 96)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 96)) ;
  }
  GALGAS_string var_baseTypeName_5565 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5604 = var_selfType_5222.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 100)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5653 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 101)) ;
  GALGAS_location var_inheritedDeclarationLocation_5724 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 102)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 103)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 103)).isValid ()) {
    uint32_t variant_5748 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 103)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 103)).uintValue () ;
    bool loop_5748 = true ;
    while (loop_5748) {
      loop_5748 = var_superType_5604.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 104)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 104)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5565.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 104)).isValid () ;
      if (loop_5748) {
        loop_5748 = var_superType_5604.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 104)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 104)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5565.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 104)).boolValue () ;
      }
      if (loop_5748 && (0 == variant_5748)) {
        loop_5748 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 103)) ;
      }
      if (loop_5748) {
        variant_5748 -- ;
        const enumGalgasBool test_2 = var_superType_5604.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 105)).getter_hasKey (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 105)) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 105)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier_5966 ;
          GALGAS_methodKind joker_6040 ; // Joker input parameter
          GALGAS_bool joker_6063 ; // Joker input parameter
          GALGAS_string joker_6077 ; // Joker input parameter
          var_superType_5604.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 107)).method_searchKey (object->mAttribute_mOverridingExtensionSetterName, joker_6040, var_inheritedSignature_5653, joker_6063, var_qualifier_5966, joker_6077, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 107)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier_5966.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-setter.galgas", 108)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName_5565 = var_superType_5604.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 109)) ;
          }
        }
        var_superType_5604 = var_superType_5604.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 112)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName_5565.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-setter.galgas", 115)), GALGAS_string ("this setter is not declared by a super class"), fixItArray5  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 115)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6431 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 118)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6546 ;
  GALGAS_analysisContext var_analysisContext_6568 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5222, GALGAS_string ("object"), var_selfType_5222  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 120)) ;
  {
  routine_analyzeRoutineBody (var_nameForUsefullness_5014, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6568, object->mAttribute_mOverridingExtensionSetterFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 132)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 133)), var_selfType_5222.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 134)), GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionSetterInstructionList, object->mAttribute_mEndOfSetterDeclarationLocation, var_semanticInstructionListForGeneration_6546, var_formalParameterListForGeneration_6431, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 127)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5565.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration_6431, object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-setter.galgas", 145)), var_inheritedSignature_5653, var_inheritedDeclarationLocation_5724, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 143)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 152)), GALGAS_overridingExtensionSetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 155)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 155)).add_operation (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 155)), var_selfType_5222, var_baseTypeName_5565, object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 158)), var_formalParameterListForGeneration_6431, var_selfType_5222.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 160)), var_semanticInstructionListForGeneration_6546  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 153)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                         extensionMethod_overridingExtensionSetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_semanticAnalysis (defineExtensionMethod_overridingExtensionSetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionSetterAST buildExtensionListMaps'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioOverridingExtensionSetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 185)), object->mAttribute_mOverridingExtensionSetterName  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 184)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingExtensionSetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionSetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@overridingExtensionSetterForGeneration headerKind'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_overridingExtensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-setter.galgas", 205)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingExtensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration.mSlotID,
                                   extensionGetter_overridingExtensionSetterForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingExtensionSetterForGeneration_headerKind (defineExtensionGetter_overridingExtensionSetterForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@overridingExtensionSetterForGeneration appendSpecificImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterForGeneration * object = (const cPtr_overridingExtensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterForGeneration) ;
  GALGAS_string var_methodImplementation_10869 ;
  {
  routine_generateExtensionSetter (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 215)), object->mAttribute_mBaseTypeName, object->mAttribute_mExtensionSetterName, ioArgument_ioInclusionSet, object->mAttribute_mExtensionSetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation_10869, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 214)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType_10906 = object->mAttribute_mReceiverType ;
  GALGAS_bool var_searching_10940 = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 225)).isValid ()) {
    uint32_t variant_10954 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 225)).uintValue () ;
    bool loop_10954 = true ;
    while (loop_10954) {
      loop_10954 = var_searching_10940.isValid () ;
      if (loop_10954) {
        loop_10954 = var_searching_10940.boolValue () ;
      }
      if (loop_10954 && (0 == variant_10954)) {
        loop_10954 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 225)) ;
      }
      if (loop_10954) {
        variant_10954 -- ;
        const enumGalgasBool test_0 = var_baseType_10906.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 226)).getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 226)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 226)).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = var_baseType_10906.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 227)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 227)).getter_hasKey (object->mAttribute_mExtensionSetterName COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 227)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_baseType_10906 = var_baseType_10906.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 228)) ;
          }else if (kBoolFalse == test_1) {
            var_searching_10940 = GALGAS_bool (false) ;
          }
        }else if (kBoolFalse == test_0) {
          var_searching_10940 = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType_10906.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 236)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 236)).add_operation (object->mAttribute_mExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 236))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 236)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 237)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 239)), object->mAttribute_mExtensionSetterName, var_methodImplementation_10869 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 238))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration.mSlotID,
                                                     extensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (defineExtensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@stringsetPredefinedTypeAST getEnumerationList'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringsetPredefinedTypeAST_getEnumerationList (void) {
  enterExtensionMethod_getEnumerationList (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                           extensionMethod_stringsetPredefinedTypeAST_getEnumerationList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getEnumerationList (defineExtensionMethod_stringsetPredefinedTypeAST_getEnumerationList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@dataPredefinedTypeAST getEnumerationList'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_dataPredefinedTypeAST_getEnumerationList (void) {
  enterExtensionMethod_getEnumerationList (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                           extensionMethod_dataPredefinedTypeAST_getEnumerationList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getEnumerationList (defineExtensionMethod_dataPredefinedTypeAST_getEnumerationList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@stringsetPredefinedTypeAST getSetterMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringsetPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_setterMap & outArgument_outSetterMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_stringType_4399 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_4399 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 65)) ;
  }
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeFeatures.galgas", 66)) ;
  {
  outArgument_outSetterMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 68))  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 68)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsTypeFeatures.galgas", 69)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeFeatures.galgas", 70)), var_stringType_4399, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticsTypeFeatures.galgas", 70)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 70)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsTypeFeatures.galgas", 72)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 67)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringsetPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringsetPredefinedTypeAST_getSetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getSetterMap (defineExtensionMethod_stringsetPredefinedTypeAST_getSetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@applicationPredefinedTypeAST getSupportedOperatorFlags'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                                  extensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@bigintPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@timerPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 100)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                                  extensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@objectPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 106)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_objectPredefinedTypeAST.mSlotID,
                                                  extensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@stringPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                                  extensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@charPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                                  extensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_charPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@boolPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_prefixNotOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_boolPredefinedTypeAST.mSlotID,
                                                  extensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@uintPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@sintPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@uint64PredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                                  extensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@sint64PredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                                  extensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@doublePredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                                  extensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@stringsetPredefinedTypeAST getSupportedOperatorFlags'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 192)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 192)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (function_generateEnumerationHelperMethods (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)).operator_or (function_generateCopyConstructorAndAssignmentOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 196)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                                  extensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@binarysetPredefinedTypeAST getSupportedOperatorFlags'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 204)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                                  extensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@typePredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 210)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                                  extensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typePredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@dataPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 216)).operator_or (function_generateEnumerationHelperMethods (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 217)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 216)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                                  extensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@functionPredefinedTypeAST getSupportedOperatorFlags'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 223)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                                  extensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@locationPredefinedTypeAST getSupportedOperatorFlags'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 229)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                                  extensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@filewrapperPredefinedTypeAST getSupportedOperatorFlags'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 235)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                                  extensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@stringsetPredefinedTypeAST getAddAssignArgumentList'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                 GALGAS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_14594 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_14594 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 244)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 245)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeFeatures.galgas", 245)), var_stringTypeIndex_14594, GALGAS_string ("inString")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 245)) ;
  outArgument_outAddAssignArgumentList = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (void) {
  enterExtensionMethod_getAddAssignArgumentList (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                                 extensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (defineExtensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@locationPredefinedTypeAST getConstructorMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("next"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 140)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_locationPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                          extensionMethod_locationPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_locationPredefinedTypeAST_getConstructorMap (defineExtensionMethod_locationPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@stringPredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_constructorMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 154)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("homeDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 155)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("newWithStdIn"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 162)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("retrieveAndResetTemplateString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 169)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSymbolicLinkContents"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 176)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSourceFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 185)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 192)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 199)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDateTime"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 208)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariable"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 215)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariableOrEmpty"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 224)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppLineComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 233)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppSpaceComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 240)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppTitleComment"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 247)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 256)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppChar"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 265)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsJoinedByString"), GALGAS_string ("stringlist"), GALGAS_string ("inComponents"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 274)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSequenceOfCharacters"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 285)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                          extensionMethod_stringPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getConstructorMap (defineExtensionMethod_stringPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@applicationPredefinedTypeAST getConstructorMap'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_applicationPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                            GALGAS_constructorMap & outArgument_outMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 303)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("verboseOutput"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 304)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("projectVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 311)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("galgasVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 318)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 325)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 332)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 342)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 349)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 360)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 371)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 383)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 390)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 401)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 412)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 424)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 431)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 442)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 453)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordIdentifierSet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 465)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordListForIdentifier"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 472)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_applicationPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                          extensionMethod_applicationPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_applicationPredefinedTypeAST_getConstructorMap (defineExtensionMethod_applicationPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@charPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_charPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 488)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("replacementCharacter"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 489)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeCharacterWithUnsigned"), GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 496)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_charPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                          extensionMethod_charPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_charPredefinedTypeAST_getConstructorMap (defineExtensionMethod_charPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@uintPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_uintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 512)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compilationMode"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 513)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 520)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("errorCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 527)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("warningCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 534)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueWithMask"), GALGAS_string ("uint"), GALGAS_string ("inLowerIndex"), GALGAS_string ("uint"), GALGAS_string ("inUpperIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 541)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_uintPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                          extensionMethod_uintPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getConstructorMap (defineExtensionMethod_uintPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@sintPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 559)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 560)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 567)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sintPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                          extensionMethod_sintPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sintPredefinedTypeAST_getConstructorMap (defineExtensionMethod_sintPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@uint64PredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                             GALGAS_constructorMap & outArgument_outMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 581)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 582)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64MaskWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 589)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64BaseValueWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 598)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64WithBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 607)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                          extensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (defineExtensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@sint64PredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                             GALGAS_constructorMap & outArgument_outMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 623)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 624)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 631)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                          extensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (defineExtensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@stringsetPredefinedTypeAST getConstructorMap'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringsetPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_constructorMap & outArgument_outMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 645)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 646)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 653)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithStringList"), GALGAS_string ("stringlist"), GALGAS_string ("inStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 662)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithLStringList"), GALGAS_string ("lstringlist"), GALGAS_string ("inLStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 671)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringsetPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                          extensionMethod_stringsetPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getConstructorMap (defineExtensionMethod_stringsetPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@binarysetPredefinedTypeAST getConstructorMap'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_binarysetPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_constructorMap & outArgument_outMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 687)) ;
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithBit"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 688)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 697)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fullBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 704)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithPredicateString"), GALGAS_string ("string"), GALGAS_string ("inPredicateString"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 711)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 720)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 733)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 746)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 759)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 772)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 785)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 798)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 811)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 824)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 837)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 850)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 863)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_binarysetPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                          extensionMethod_binarysetPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getConstructorMap (defineExtensionMethod_binarysetPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@typePredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typePredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 883)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("typeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 884)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typePredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                          extensionMethod_typePredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typePredefinedTypeAST_getConstructorMap (defineExtensionMethod_typePredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@bigintPredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bigintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_constructorMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 899)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("zero"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 900)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bigintPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                          extensionMethod_bigintPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getConstructorMap (defineExtensionMethod_bigintPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@dataPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_dataPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 915)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyData"), GALGAS_string ("data"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 916)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dataWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 923)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_dataPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                          extensionMethod_dataPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getConstructorMap (defineExtensionMethod_dataPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@functionPredefinedTypeAST getConstructorMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_constructorMap & outArgument_outMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 939)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionList"), GALGAS_string ("functionlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 940)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionWithName"), GALGAS_string ("string"), GALGAS_string ("inName"), GALGAS_string ("function"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 947)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFunctionDefined"), GALGAS_string ("string"), GALGAS_string ("inFunctionName"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 956)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                          extensionMethod_functionPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionPredefinedTypeAST_getConstructorMap (defineExtensionMethod_functionPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@doublePredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_doublePredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_constructorMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 973)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pi"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 974)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doubleWithBinaryImage"), GALGAS_string ("uint64"), GALGAS_string ("inBinaryImage"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 981)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_doublePredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                          extensionMethod_doublePredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_doublePredefinedTypeAST_getConstructorMap (defineExtensionMethod_doublePredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@timerPredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_timerPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_constructorMap & outArgument_outMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 998)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("start"), GALGAS_string ("timer"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 999)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_timerPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                          extensionMethod_timerPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getConstructorMap (defineExtensionMethod_timerPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@locationPredefinedTypeAST getGetterMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_locationPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                     extensionMethod_locationPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_locationPredefinedTypeAST_getGetterMap (defineExtensionMethod_locationPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@stringPredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("assemblerRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 470)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nameRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 477)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 484)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decodedStringFromRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 491)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("HTMLRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 498)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Representation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 505)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithoutDelimiters"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 512)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32Representation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 519)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByTrimmingWhiteSpaces"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 526)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("md5"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 533)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsignedNumber"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 540)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsignedNumber"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 547)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("capacity"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 554)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isSymbolicLink"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 561)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExists"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 568)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExists"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 575)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pathExtension"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 582)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nativePathWithUnixPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 589)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unixPathWithNativePath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 596)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastPathComponent"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 603)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingPathExtension"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 610)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByCapitalizingFirstCharacter"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 617)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("firstCharacterOrNul"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 624)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingLastPathComponent"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 631)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByStandardizingPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 638)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowercaseString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 645)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uppercaseString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 652)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("reversedString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 659)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentColumn"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 666)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("system"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 673)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("popen"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 680)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("characterAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 687)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacter"), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 694)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacterInRange"), GALGAS_string ("char"), GALGAS_string ("inFirstCharacter"), GALGAS_string ("char"), GALGAS_string ("inLastCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 701)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRemovingCharacterAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 712)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subStringFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 719)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("rightSubString"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 726)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("leftSubString"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 733)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subString"), GALGAS_string ("uint"), GALGAS_string ("inStart"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 740)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathFromPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 747)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("relativePathFromPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 754)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsSeparatedByString"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 761)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 768)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRightPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 775)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftAndRightPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 782)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByReplacingStringByString"), GALGAS_string ("string"), GALGAS_string ("inSearchedString"), GALGAS_string ("string"), GALGAS_string ("inReplacementString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 789)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFiles"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 796)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenFiles"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 803)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directories"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 810)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesWithExtensions"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 817)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFilesWithExtensions"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 824)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getGetterMap (defineExtensionMethod_stringPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@charPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_charPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 838)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 839)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32CharConstantRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 846)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 853)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalnum"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 860)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalpha"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 867)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("iscntrl"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 874)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isdigit"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 881)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("islower"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 888)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isupper"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 895)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isxdigit"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 902)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeLetter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 909)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeMark"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 916)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeNumber"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 923)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSeparator"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 930)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeCommand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 937)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodePunctuation"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 944)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSymbol"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 951)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 958)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToLower"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 965)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToUpper"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 972)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_charPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                     extensionMethod_charPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_charPredefinedTypeAST_getGetterMap (defineExtensionMethod_charPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@boolPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_boolPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 986)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 987)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ocString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 994)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1001)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1008)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1015)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1022)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1029)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_boolPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_boolPredefinedTypeAST.mSlotID,
                                     extensionMethod_boolPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolPredefinedTypeAST_getGetterMap (defineExtensionMethod_boolPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@uintPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_uintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1043)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1044)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1051)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1058)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1065)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1072)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lsbIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1079)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantBitCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1086)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("oneBitCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1093)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1100)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1107)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1114)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeValueAssigned"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1121)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isInRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1128)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1136)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1143)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1150)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1157)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_uintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                     extensionMethod_uintPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getGetterMap (defineExtensionMethod_uintPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@sintPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1171)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1172)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1179)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1186)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1193)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1200)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1207)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1214)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1221)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1229)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1236)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1243)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1250)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                     extensionMethod_sintPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sintPredefinedTypeAST_getGetterMap (defineExtensionMethod_sintPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@uint64PredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_getterMap & outArgument_outMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1265)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1266)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1273)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1280)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1286)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1293)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintSlice"), GALGAS_string ("uint"), GALGAS_string ("inStartBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1300)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1307)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1314)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1321)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1329)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1336)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1343)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1350)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                     extensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uint_36__34_PredefinedTypeAST_getGetterMap (defineExtensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@sint64PredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_getterMap & outArgument_outMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1364)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1365)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1372)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1379)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1386)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1393)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1400)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1407)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1414)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1422)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1429)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1436)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1443)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                     extensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sint_36__34_PredefinedTypeAST_getGetterMap (defineExtensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@doublePredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_doublePredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1457)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1458)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1465)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1472)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1479)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1486)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cos"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1493)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sin"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1500)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tan"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1507)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log10"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1514)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log2"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1521)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("logn"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1528)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("exp"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1535)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cosDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1542)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sinDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1549)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tanDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1556)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sqrt"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1563)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("power"), GALGAS_string ("double"), GALGAS_string ("inExponant"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1570)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryImage"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1577)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_doublePredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                     extensionMethod_doublePredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_doublePredefinedTypeAST_getGetterMap (defineExtensionMethod_doublePredefinedTypeAST_getGetterMap, NULL) ;

