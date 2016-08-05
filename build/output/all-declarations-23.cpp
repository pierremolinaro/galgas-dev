#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-23.h"


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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 652)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 653)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("type-map.galgas", 651))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 658)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 659)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 660)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 661)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 662)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 663)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 664)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 665)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 666)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 667)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 668)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 669)) COMMA_SOURCE_FILE ("type-map.galgas", 657))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 657)) ;
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
  cEnumerator_typedPropertyList enumerator_25471 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_25471.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_25471.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 680)) ;
    enumerator_25471.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 684)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 685)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-map.galgas", 683))) ;
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
  extensionMethod_addHeaderFileName (object->mAttribute_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 696)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 697)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 699)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, object->mAttribute_mHasInsertOrReplaceModifier COMMA_SOURCE_FILE ("type-map.galgas", 698))) ;
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
  cEnumerator_mapSearchMethodListAST enumerator_5294 (var_searchMethodList_2577, kEnumeration_up) ;
  while (enumerator_5294.hasCurrentObject ()) {
    {
    var_constructorMap_2835.setter_insertKey (enumerator_5294.current_mSearchMethodName (HERE), var_constructorAttributeTypeList_5082, GALGAS_bool (true), var_mapProxyTypeProxy_3666, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 99)) ;
    }
    enumerator_5294.gotoNextObject () ;
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
  cEnumerator_typedPropertyList enumerator_6556 (var_mapTypedAttributeList_2518, kEnumeration_up) ;
  while (enumerator_6556.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_inheritedGetterMap_6507.getter_hasKey (enumerator_6556.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-map-proxy.galgas", 152)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 152)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s_6637 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_6697 (var_inheritedGetterMap_6507.getter_keySet (SOURCE_FILE ("type-map-proxy.galgas", 154)), kEnumeration_up) ;
      while (enumerator_6697.hasCurrentObject ()) {
        var_s_6637.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_6697.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 155)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 155)) ;
        if (enumerator_6697.hasNextObject ()) {
          var_s_6637.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 156)) ;
        }
        enumerator_6697.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_6556.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-map-proxy.galgas", 158)), GALGAS_string ("the map has a associated map proxy, which has predefined getters: ").add_operation (var_s_6637, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 158)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 159)), fixItArray3  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 158)) ;
    }else if (kBoolFalse == test_2) {
      {
      var_getterMap_2949.setter_insertKey (enumerator_6556.current_mAttributeName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map-proxy.galgas", 163)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 164)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 165)), GALGAS_bool (true), enumerator_6556.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map-proxy.galgas", 168)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 161)) ;
      }
    }
    enumerator_6556.gotoNextObject () ;
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
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typedPropertyList var_listTypeAttributeList_9223 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_9282 ;
  GALGAS_bool joker_9171_7 ; // Joker input parameter
  GALGAS_bool joker_9171_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9171_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9171_4 ; // Joker input parameter
  GALGAS_bool joker_9171_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9171_2 ; // Joker input parameter
  GALGAS_attributeMap joker_9171_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9229_11 ; // Joker input parameter
  GALGAS_getterMap joker_9229_10 ; // Joker input parameter
  GALGAS_setterMap joker_9229_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9229_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_9229_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9229_6 ; // Joker input parameter
  GALGAS_stringlist joker_9229_5 ; // Joker input parameter
  GALGAS_uint joker_9229_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9229_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9229_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9229_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9288_6 ; // Joker input parameter
  GALGAS_bool joker_9288_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9288_4 ; // Joker input parameter
  GALGAS_string joker_9288_3 ; // Joker input parameter
  GALGAS_string joker_9288_2 ; // Joker input parameter
  GALGAS_headerKind joker_9288_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_9171_7, joker_9171_6, joker_9171_5, joker_9171_4, joker_9171_3, joker_9171_2, joker_9171_1, var_listTypeAttributeList_9223, joker_9229_11, joker_9229_10, joker_9229_9, joker_9229_8, joker_9229_7, joker_9229_6, joker_9229_5, joker_9229_4, joker_9229_3, joker_9229_2, joker_9229_1, var_searchMethodList_9282, joker_9288_6, joker_9288_5, joker_9288_4, joker_9288_3, joker_9288_2, joker_9288_1, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 226)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map proxy ").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 236)), GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 238)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 239)), var_listTypeAttributeList_9223, var_searchMethodList_9282  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 237)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 235)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 280)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 281)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 279))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 284)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 285)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 286)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 287)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 288)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 289)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 290)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 291)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 292)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 293)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 294)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 295)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 283))), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 283)) ;
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
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 305)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mAssociatedMapTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 306)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 308)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 309)), object->mAttribute_mAssociatedMapTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 310)), object->mAttribute_mAssociatedMapTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("type-map-proxy.galgas", 307))) ;
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
  GALGAS_lstring var_key_11310 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 289)), object->mAttribute_mMapTypeName.getter_location (SOURCE_FILE ("type-shared-map.galgas", 289))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 289)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11310, temp_0, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 290)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_11456 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_11456.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_11456.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 292)), enumerator_11456.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 292))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 292)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 292)) ;
    }
    enumerator_11456.gotoNextObject () ;
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
  result_outString = GALGAS_string ("shared map @").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 299)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_12683 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_12683 COMMA_SOURCE_FILE ("type-shared-map.galgas", 313)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_12815 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_12815 COMMA_SOURCE_FILE ("type-shared-map.galgas", 315)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringlistTypeIndex_12959 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex_12959 COMMA_SOURCE_FILE ("type-shared-map.galgas", 317)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 319)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_12815, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 319)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_13040 = temp_0 ;
  GALGAS_stringlist var_enumerationVariants_13104 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 320)) ;
  var_enumerationVariants_13104.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 321)) ;
  var_enumerationVariants_13104.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 322)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_13228 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_13267 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_13267.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_13267.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_usesSelectorsInInsertAndSearch_13228.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_13267.current_mValue (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 328)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-shared-map.galgas", 328)) ;
      }
      var_usesSelectorsInInsertAndSearch_13228 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_13267.current_mValue (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 332)), GALGAS_string ("unknown attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-shared-map.galgas", 332)) ;
    }
    enumerator_13267.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_13540 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 336)) ;
  GALGAS_getterMap var_getterMap_13630 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_13630, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 337)) ;
  }
  GALGAS_setterMap var_setterMap_13655 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 338)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_13699 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 339)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_13540, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 345)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 341)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13630, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 349)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13630, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 356)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_13630, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 363)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_13630, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 372)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13630, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 381)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13630, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 388)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13630, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 395)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13630, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 402)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_15444 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 410)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_15508 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 411)) ;
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = var_usesSelectorsInInsertAndSearch_13228.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_15508.addAssign_operation (temp_5.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 413)), var_lstringTypeIndex_12815, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 415)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 412)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_15742 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 417)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch_13228.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_15742.addAssign_operation (temp_7.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 419)), var_lstringTypeIndex_12815, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 421)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 418)) ;
  cEnumerator_propertyInCollectionListAST enumerator_15946 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_15946.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_15991 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_15946.current_mPropertyTypeName (HERE), var_attributeTypeIndex_15991 COMMA_SOURCE_FILE ("type-shared-map.galgas", 425)) ;
    }
    GALGAS_bool var_hasGetter_16117 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_16144 = GALGAS_bool (true) ;
    var_typedAttributeList_15444.addAssign_operation (var_attributeTypeIndex_15991, enumerator_15946.current_mPropertyName (HERE), var_hasSetter_16144, var_hasGetter_16117  COMMA_SOURCE_FILE ("type-shared-map.galgas", 428)) ;
    var_enumerationDescriptor_13040.addAssign_operation (var_attributeTypeIndex_15991, enumerator_15946.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 429))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 429)) ;
    GALGAS_lstring temp_9 ;
    const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch_13228.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_15946.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 431)) ;
    }
    var_insertMethodFormalArgumentList_15508.addAssign_operation (temp_9, var_attributeTypeIndex_15991, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 433)), enumerator_15946.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 430)) ;
    GALGAS_lstring temp_11 ;
    const enumGalgasBool test_12 = var_usesSelectorsInInsertAndSearch_13228.boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = enumerator_15946.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 436)) ;
    }
    var_removeMethodFormalArgumentList_15742.addAssign_operation (temp_11, var_attributeTypeIndex_15991, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 438)), enumerator_15946.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 435)) ;
    enumerator_15946.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_16787 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_16787.hasCurrentObject ()) {
    const enumGalgasBool test_13 = var_setterMap_13655.getter_hasKey (enumerator_16787.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 443)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 443)).boolEnum () ;
    if (kBoolTrue == test_13) {
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (enumerator_16787.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 444)), GALGAS_string ("the '").add_operation (enumerator_16787.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 444)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 444)), fixItArray14  COMMA_SOURCE_FILE ("type-shared-map.galgas", 444)) ;
    }else if (kBoolFalse == test_13) {
      {
      var_setterMap_13655.setter_insertOrReplace (enumerator_16787.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 448)), var_insertMethodFormalArgumentList_15508, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 451)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 446)) ;
      }
    }
    enumerator_16787.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList_17273 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 457)) ;
  var_enterEdgeFormalArgumentList_17273.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 458)), var_lstringTypeIndex_12815, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 458)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 458)) ;
  var_enterEdgeFormalArgumentList_17273.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 459)), var_lstringTypeIndex_12815, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 459)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 459)) ;
  {
  var_setterMap_13655.setter_insertOrReplace (GALGAS_string ("enterEdge").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 461)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 462)), var_enterEdgeFormalArgumentList_17273, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 465)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 460)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList_17792 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 469)) ;
  var_topologicalSortFormalArgumentList_17792.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 470)), var_lstringlistTypeIndex_12959, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 470)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 470)) ;
  var_topologicalSortFormalArgumentList_17792.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 471)), var_lstringlistTypeIndex_12959, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 471)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 471)) ;
  {
  var_instanceMethodMap_13699.setter_insertKey (GALGAS_string ("topologicalSort").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 473)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 474)), var_topologicalSortFormalArgumentList_17792, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 476)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 478)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 472)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 482)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_18413 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_18413.hasCurrentObject ()) {
      {
      var_instanceMethodMap_13699.setter_insertKey (enumerator_18413.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 486)), var_removeMethodFormalArgumentList_15742, enumerator_18413.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 488)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 490)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 484)) ;
      }
      enumerator_18413.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_18729 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_18729.hasCurrentObject ()) {
      {
      var_setterMap_13655.setter_insertKey (enumerator_18729.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 498)), var_removeMethodFormalArgumentList_15742, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 501)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 496)) ;
      }
      enumerator_18729.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 507)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    GALGAS_unifiedTypeMap_2D_proxy var_locationTypeIndex_19121 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex_19121 COMMA_SOURCE_FILE ("type-shared-map.galgas", 509)) ;
    }
    {
    var_setterMap_13655.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 511))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 511)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 512)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 513)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 515)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 510)) ;
    }
    {
    var_setterMap_13655.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 519))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 519)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 520)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 521)), var_locationTypeIndex_19121, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 521)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 521)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 523)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 518)) ;
    }
    {
    var_setterMap_13655.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 527))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 527)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 528)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 529)), var_locationTypeIndex_19121, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 529)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 529)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 531)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 526)) ;
    }
    {
    var_instanceMethodMap_13699.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 535))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 535)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 536)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 537)), var_locationTypeIndex_19121, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 537)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 537)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 538)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 540)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 534)) ;
    }
    cEnumerator_mapOverrideBlockListAST enumerator_20485 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
    while (enumerator_20485.hasCurrentObject ()) {
      {
      var_setterMap_13655.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_20485.current_mOverrideBlockName (HERE).mAttribute_string.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 545)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 545))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 545)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 546)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 547)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 549)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 544)) ;
      }
      enumerator_20485.gotoNextObject () ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_20880 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_20880.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_20901 = GALGAS_lstring::constructor_new (enumerator_20880.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 556)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 556)), enumerator_20880.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 556))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 556)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_21024 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_20880.current_mPropertyTypeName (HERE), var_attributeTypeIndex_21024 COMMA_SOURCE_FILE ("type-shared-map.galgas", 558)) ;
    }
    {
    GALGAS_functionSignature temp_17 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 562)) ;
    temp_17.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 562)), var_stringTypeIndex_12683, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 562)) ;
    var_getterMap_13630.setter_insertOrReplace (var_accessorName_20901, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 561)), temp_17, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 563)), GALGAS_bool (true), var_attributeTypeIndex_21024, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 566)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 559)) ;
    }
    enumerator_20880.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_21532 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_21532.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_21553 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_21532.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 572)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 572)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 572)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 572)), enumerator_21532.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 572))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 572)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_21807 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_21532.current_mPropertyTypeName (HERE), var_attributeTypeIndex_21807 COMMA_SOURCE_FILE ("type-shared-map.galgas", 573)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_21843 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 574)) ;
    var_accessorFormalArgumentList_21843.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 575)), var_attributeTypeIndex_21807, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 575)), enumerator_21532.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 575)) ;
    var_accessorFormalArgumentList_21843.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 576)), var_stringTypeIndex_12683, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 576)), enumerator_21532.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-shared-map.galgas", 576)) ;
    {
    var_setterMap_13655.setter_insertOrReplace (var_accessorName_21553, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 579)), var_accessorFormalArgumentList_21843, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 582)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 577)) ;
    }
    enumerator_21532.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_getterMap_13630, var_setterMap_13655, var_instanceMethodMap_13699, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 587)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 602)), GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("type-shared-map.galgas", 603)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 605)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 606)), var_typedAttributeList_15444, var_constructorMap_13540, var_getterMap_13630, var_setterMap_13655, var_instanceMethodMap_13699, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 612)), var_enumerationDescriptor_13040, var_enumerationVariants_13104, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 615)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 615)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 615)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 616)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 617)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 618)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 620)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 622)), GALGAS_string ("emptyMap"), GALGAS_string ("uniquemap-").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 624)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-shared-map.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 598)) ;
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
                                                                      const GALGAS_string constinArgument_inProductDirectory,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_mapAutomatonMessageKind var_shadowBehaviour_26288 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 705)) ;
  GALGAS_string var_shadowMessage_26321 = GALGAS_string::makeEmptyString () ;
  cEnumerator_sharedMapAttributeListAST enumerator_26401 (object->mAttribute_mSharedMapAttributeListAST, kEnumeration_up) ;
  while (enumerator_26401.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_26401.current_mAttributeName (HERE).mAttribute_string.objectCompare (GALGAS_string ("shadow"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_26401.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 709)), GALGAS_string ("only %shadow attribute is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-shared-map.galgas", 709)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_shadowBehaviour_26288.objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 710)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_26401.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 711)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-shared-map.galgas", 711)) ;
      }else if (kBoolFalse == test_2) {
        GALGAS_mapAutomatonMessageKind temp_4 ;
        const enumGalgasBool test_5 = enumerator_26401.current_mIsError (HERE).boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 713)) ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 713)) ;
        }
        var_shadowBehaviour_26288 = temp_4 ;
        {
        routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_26401.current_mMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 714)) ;
        }
        var_shadowMessage_26321 = enumerator_26401.current_mMessage (HERE).mAttribute_string ;
      }
    }
    enumerator_26401.gotoNextObject () ;
  }
  GALGAS_stringset var_initialStateSet_26855 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 719)) ;
  cEnumerator_insertMethodListAST enumerator_26904 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_26904.hasCurrentObject ()) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 721)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_26904.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 722)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_26904.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 723)), GALGAS_string ("the '").add_operation (enumerator_26904.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 723)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 723)), fixItArray8  COMMA_SOURCE_FILE ("type-shared-map.galgas", 723)) ;
      }else if (kBoolFalse == test_7) {
        var_initialStateSet_26855.addAssign_operation (enumerator_26904.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 725))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 725)) ;
      }
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_26904.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 727)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_26904.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 728)), GALGAS_string ("the '").add_operation (enumerator_26904.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 728)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 728)), fixItArray10  COMMA_SOURCE_FILE ("type-shared-map.galgas", 728)) ;
      }
    }
    enumerator_26904.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap_27437 = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 732)) ;
  cEnumerator_mapSearchMethodListAST enumerator_27475 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_27475.hasCurrentObject ()) {
    const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 734)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_27475.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 735)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_27475.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 736)), GALGAS_string ("the '").add_operation (enumerator_27475.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 736)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 736)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 736)), fixItArray13  COMMA_SOURCE_FILE ("type-shared-map.galgas", 736)) ;
      }else if (kBoolFalse == test_12) {
        const enumGalgasBool test_14 = var_mapAutomatonActionMap_27437.getter_hasKey (enumerator_27475.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 737)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 737)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 737)).boolEnum () ;
        if (kBoolTrue == test_14) {
          {
          var_mapAutomatonActionMap_27437.setter_insertKey (enumerator_27475.current_mActionName (HERE), var_mapAutomatonActionMap_27437.getter_count (SOURCE_FILE ("type-shared-map.galgas", 738)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 738)) ;
          }
        }
      }
    }else if (kBoolFalse == test_11) {
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_27475.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 740)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_27475.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 741)), GALGAS_string ("the '").add_operation (enumerator_27475.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 741)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 741)), fixItArray16  COMMA_SOURCE_FILE ("type-shared-map.galgas", 741)) ;
      }
    }
    enumerator_27475.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap_28083 = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 745)) ;
  cEnumerator_mapStateList enumerator_28117 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_28117.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap_28083.setter_insertKey (enumerator_28117.current_mStateName (HERE), var_mapAutomatonStateMap_28083.getter_count (SOURCE_FILE ("type-shared-map.galgas", 747)), enumerator_28117.current_mStateMessageKind (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 747)) ;
    }
    enumerator_28117.gotoNextObject () ;
  }
  cEnumerator_mapStateList enumerator_28252 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_28252.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_28285 (enumerator_28252.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_28285.hasCurrentObject ()) {
      GALGAS_uint joker_28343_2 ; // Joker input parameter
      GALGAS_mapAutomatonMessageKind joker_28343_1 ; // Joker input parameter
      var_mapAutomatonStateMap_28083.method_searchKey (enumerator_28285.current_mTargetStateName (HERE), joker_28343_2, joker_28343_1, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 751)) ;
      enumerator_28285.gotoNextObject () ;
    }
    enumerator_28252.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions_28433 = var_mapAutomatonActionMap_27437.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 755)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList_28507 = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 756)) ;
  cEnumerator_mapStateList enumerator_28541 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_28541.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState_28579 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 758)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList_28647 = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 759)) ;
    cEnumerator_mapStateTransitionList enumerator_28685 (enumerator_28541.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_28685.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex_28760 ;
      var_mapAutomatonActionMap_27437.method_searchKey (enumerator_28685.current_mActionName (HERE), var_actionIndex_28760, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 761)) ;
      const enumGalgasBool test_17 = var_actionsForCurrentState_28579.getter_hasKey (enumerator_28685.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 762)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 762)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_28685.current_mActionName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 763)), GALGAS_string ("the '").add_operation (enumerator_28685.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 763)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 763)), fixItArray18  COMMA_SOURCE_FILE ("type-shared-map.galgas", 763)) ;
      }
      var_actionsForCurrentState_28579.addAssign_operation (enumerator_28685.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 765))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 765)) ;
      GALGAS_uint var_targetStateIndex_29071 ;
      GALGAS_mapAutomatonMessageKind joker_29073 ; // Joker input parameter
      var_mapAutomatonStateMap_28083.method_searchKey (enumerator_28685.current_mTargetStateName (HERE), var_targetStateIndex_29071, joker_29073, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 766)) ;
      var_mapStateTransitionSortedList_28647.addAssign_operation (var_actionIndex_28760, enumerator_28685.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 769)), var_targetStateIndex_29071, enumerator_28685.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 771)), enumerator_28685.current_mTransitionMessageKind (HERE), enumerator_28685.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 773))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 767)) ;
      enumerator_28685.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex_29372 ;
    GALGAS_mapAutomatonMessageKind joker_29374 ; // Joker input parameter
    var_mapAutomatonStateMap_28083.method_searchKey (enumerator_28541.current_mStateName (HERE), var_stateIndex_29372, joker_29374, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 775)) ;
    var_mapStateSortedList_28507.addAssign_operation (var_stateIndex_29372, enumerator_28541.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 778)), enumerator_28541.current_mStateMessageKind (HERE), enumerator_28541.current_mStateMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 780)), var_mapStateTransitionSortedList_28647  COMMA_SOURCE_FILE ("type-shared-map.galgas", 776)) ;
    GALGAS_stringset var_missingActions_29572 = var_allActions_28433.substract_operation (var_actionsForCurrentState_28579, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 782)) ;
    const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_missingActions_29572.getter_count (SOURCE_FILE ("type-shared-map.galgas", 783)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_string var_s_29665 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_29712 (var_missingActions_29572, kEnumeration_up) ;
      while (enumerator_29712.hasCurrentObject ()) {
        var_s_29665.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_29712.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 786)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 786)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 786)) ;
        if (enumerator_29712.hasNextObject ()) {
          var_s_29665.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 787)) ;
        }
        enumerator_29712.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (enumerator_28541.current_mStateName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 789)), GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s_29665, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 789)), fixItArray20  COMMA_SOURCE_FILE ("type-shared-map.galgas", 789)) ;
    }
    enumerator_28541.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates_29946 = var_initialStateSet_26855 ;
  GALGAS_bool var_progress_29981 = GALGAS_bool (true) ;
  if (object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 795)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 795)).isValid ()) {
    uint32_t variant_29996 = object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 795)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 795)).uintValue () ;
    bool loop_29996 = true ;
    while (loop_29996) {
      loop_29996 = var_progress_29981.isValid () ;
      if (loop_29996) {
        loop_29996 = var_progress_29981.boolValue () ;
      }
      if (loop_29996 && (0 == variant_29996)) {
        loop_29996 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 795)) ;
      }
      if (loop_29996) {
        variant_29996 -- ;
        var_progress_29981 = GALGAS_bool (false) ;
        cEnumerator_mapStateList enumerator_30094 (object->mAttribute_mMapStateList, kEnumeration_up) ;
        while (enumerator_30094.hasCurrentObject ()) {
          const enumGalgasBool test_21 = var_accessibleStates_29946.getter_hasKey (enumerator_30094.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 798)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 798)).boolEnum () ;
          if (kBoolTrue == test_21) {
            cEnumerator_mapStateTransitionList enumerator_30192 (enumerator_30094.current_mTransitionList (HERE), kEnumeration_up) ;
            while (enumerator_30192.hasCurrentObject ()) {
              const enumGalgasBool test_22 = var_accessibleStates_29946.getter_hasKey (enumerator_30192.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 800)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 800)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 800)).boolEnum () ;
              if (kBoolTrue == test_22) {
                var_accessibleStates_29946.addAssign_operation (enumerator_30192.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 801))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 801)) ;
                var_progress_29981 = GALGAS_bool (true) ;
              }
              enumerator_30192.gotoNextObject () ;
            }
          }
          enumerator_30094.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates_30435 = var_mapAutomatonStateMap_28083.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 808)).substract_operation (var_accessibleStates_29946, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 808)) ;
  const enumGalgasBool test_23 = GALGAS_bool (kIsStrictSup, var_uselessStates_30435.getter_count (SOURCE_FILE ("type-shared-map.galgas", 809)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_23) {
    GALGAS_string var_s_30532 = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_30574 (var_uselessStates_30435, kEnumeration_up) ;
    while (enumerator_30574.hasCurrentObject ()) {
      var_s_30532.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_30574.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 812)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 812)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 812)) ;
      if (enumerator_30574.hasNextObject ()) {
        var_s_30532.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 813)) ;
      }
      enumerator_30574.gotoNextObject () ;
    }
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 815)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s_30532, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 815))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 815)) ;
  }
  GALGAS_stringset var_neededAssociations_30835 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 819)) ;
  GALGAS_stringset var_accessibilityGraph_30872 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 820)) ;
  cEnumerator_mapAutomatonStateMap enumerator_30928 (var_mapAutomatonStateMap_28083, kEnumeration_up) ;
  while (enumerator_30928.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates_30959 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 822)) ;
    var_reachableStates_30959.addAssign_operation (enumerator_30928.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 823))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 823)) ;
    var_progress_29981 = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap_28083.getter_count (SOURCE_FILE ("type-shared-map.galgas", 825)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 825)).isValid ()) {
      uint32_t variant_31051 = var_mapAutomatonStateMap_28083.getter_count (SOURCE_FILE ("type-shared-map.galgas", 825)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 825)).uintValue () ;
      bool loop_31051 = true ;
      while (loop_31051) {
        loop_31051 = var_progress_29981.isValid () ;
        if (loop_31051) {
          loop_31051 = var_progress_29981.boolValue () ;
        }
        if (loop_31051 && (0 == variant_31051)) {
          loop_31051 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 825)) ;
        }
        if (loop_31051) {
          variant_31051 -- ;
          var_progress_29981 = GALGAS_bool (false) ;
          cEnumerator_mapStateList enumerator_31158 (object->mAttribute_mMapStateList, kEnumeration_up) ;
          while (enumerator_31158.hasCurrentObject ()) {
            const enumGalgasBool test_24 = var_reachableStates_30959.getter_hasKey (enumerator_31158.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 828)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 828)).boolEnum () ;
            if (kBoolTrue == test_24) {
              cEnumerator_mapStateTransitionList enumerator_31259 (enumerator_31158.current_mTransitionList (HERE), kEnumeration_up) ;
              while (enumerator_31259.hasCurrentObject ()) {
                const enumGalgasBool test_25 = var_reachableStates_30959.getter_hasKey (enumerator_31259.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 830)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 830)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 830)).boolEnum () ;
                if (kBoolTrue == test_25) {
                  var_reachableStates_30959.addAssign_operation (enumerator_31259.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 831))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 831)) ;
                  var_accessibilityGraph_30872.addAssign_operation (enumerator_30928.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 832)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 832)).add_operation (enumerator_31259.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 832)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 832))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 832)) ;
                  var_progress_29981 = GALGAS_bool (true) ;
                }
                enumerator_31259.gotoNextObject () ;
              }
            }
            enumerator_31158.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_31621 (var_reachableStates_30959, kEnumeration_up) ;
    while (enumerator_31621.hasCurrentObject ()) {
      const enumGalgasBool test_26 = GALGAS_bool (kIsNotEqual, enumerator_30928.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 840)).objectCompare (enumerator_31621.current_key (HERE))).boolEnum () ;
      if (kBoolTrue == test_26) {
        var_neededAssociations_30835.addAssign_operation (enumerator_30928.current (HERE).mAttribute_lkey.getter_string (SOURCE_FILE ("type-shared-map.galgas", 841)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 841)).add_operation (enumerator_31621.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 841))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 841)) ;
      }
      enumerator_31621.gotoNextObject () ;
    }
    enumerator_30928.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList_31813 = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 846)) ;
  cEnumerator_mapOverrideBlockListAST enumerator_31858 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
  while (enumerator_31858.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations_31886 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 848)) ;
    GALGAS_stringset var_neededCombinaisons_31928 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 849)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31__31992 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 850)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_32101 (enumerator_31858.current_mMapOverrideBlockDescriptor_31_AST (HERE), kEnumeration_up) ;
    while (enumerator_32101.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex_32176 ;
      GALGAS_mapAutomatonMessageKind joker_32178 ; // Joker input parameter
      var_mapAutomatonStateMap_28083.method_searchKey (enumerator_32101.current_mLeftState (HERE), var_startStateNameIndex_32176, joker_32178, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 852)) ;
      GALGAS_uint var_currentStateNameIndex_32258 ;
      GALGAS_mapAutomatonMessageKind joker_32260 ; // Joker input parameter
      var_mapAutomatonStateMap_28083.method_searchKey (enumerator_32101.current_mRightState (HERE), var_currentStateNameIndex_32258, joker_32260, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 853)) ;
      GALGAS_string var_association_32292 = enumerator_32101.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 854)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 854)).add_operation (enumerator_32101.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 854)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 854)) ;
      const enumGalgasBool test_27 = var_neededAssociations_30835.getter_hasKey (var_association_32292 COMMA_SOURCE_FILE ("type-shared-map.galgas", 855)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 855)).boolEnum () ;
      if (kBoolTrue == test_27) {
        inCompiler->emitSemanticWarning (enumerator_32101.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 856)), GALGAS_string ("the '").add_operation (var_association_32292, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 856)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 856))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 856)) ;
      }
      const enumGalgasBool test_28 = var_handledAssociations_31886.getter_hasKey (var_association_32292 COMMA_SOURCE_FILE ("type-shared-map.galgas", 858)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_32101.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 859)), GALGAS_string ("the '").add_operation (var_association_32292, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 860)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 860)), fixItArray29  COMMA_SOURCE_FILE ("type-shared-map.galgas", 859)) ;
      }
      var_handledAssociations_31886.addAssign_operation (var_association_32292  COMMA_SOURCE_FILE ("type-shared-map.galgas", 862)) ;
      GALGAS_uint var_finalStateNameIndex_32774 ;
      GALGAS_mapAutomatonMessageKind joker_32776 ; // Joker input parameter
      var_mapAutomatonStateMap_28083.method_searchKey (enumerator_32101.current_mResultingState (HERE), var_finalStateNameIndex_32774, joker_32776, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 863)) ;
      const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_32101.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 864)).objectCompare (enumerator_32101.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 864)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        var_neededCombinaisons_31928.addAssign_operation (enumerator_32101.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 865)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 865)).add_operation (enumerator_32101.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 865))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 865)) ;
        var_neededCombinaisons_31928.addAssign_operation (enumerator_32101.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 866)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 866)).add_operation (enumerator_32101.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 866)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 866))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 866)) ;
        const enumGalgasBool test_31 = var_accessibilityGraph_30872.getter_hasKey (enumerator_32101.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 867)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 867)).add_operation (enumerator_32101.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 867)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 867)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 867)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 867)).boolEnum () ;
        if (kBoolTrue == test_31) {
          TC_Array <C_FixItDescription> fixItArray32 ;
          inCompiler->emitSemanticError (enumerator_32101.current_mResultingState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 868)), GALGAS_string ("the '").add_operation (enumerator_32101.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 869)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 869)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 869)).add_operation (enumerator_32101.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 869)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 869)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 869)), fixItArray32  COMMA_SOURCE_FILE ("type-shared-map.galgas", 868)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_32101.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 872)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31__31992.addAssign_operation (var_startStateNameIndex_32176, enumerator_32101.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 875)), var_currentStateNameIndex_32258, enumerator_32101.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 877)), var_finalStateNameIndex_32774, enumerator_32101.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 879)), enumerator_32101.current_mMessageKind (HERE), enumerator_32101.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 881))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 873)) ;
      enumerator_32101.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations_33649 = var_neededAssociations_30835.substract_operation (var_handledAssociations_31886, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 883)) ;
    const enumGalgasBool test_33 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations_33649.getter_count (SOURCE_FILE ("type-shared-map.galgas", 884)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_33) {
      GALGAS_string var_s_33754 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_33800 (var_forgottenAssociations_33649, kEnumeration_up) ;
      while (enumerator_33800.hasCurrentObject ()) {
        var_s_33754.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_33800.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 887)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 887)) ;
        enumerator_33800.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray34 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)), var_forgottenAssociations_33649.getter_count (SOURCE_FILE ("type-shared-map.galgas", 889)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 889)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)).add_operation (var_s_33754, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)), fixItArray34  COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)) ;
    }
    GALGAS_stringset var_definedCombinaisons_33982 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 891)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32__34046 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 892)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_34155 (enumerator_31858.current_mMapOverrideBlockDescriptor_32_AST (HERE), kEnumeration_up) ;
    while (enumerator_34155.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex_34225 ;
      GALGAS_mapAutomatonMessageKind joker_34227 ; // Joker input parameter
      var_mapAutomatonStateMap_28083.method_searchKey (enumerator_34155.current_mLeftState (HERE), var_leftStateIndex_34225, joker_34227, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 894)) ;
      GALGAS_uint var_rightStateIndex_34301 ;
      GALGAS_mapAutomatonMessageKind joker_34303 ; // Joker input parameter
      var_mapAutomatonStateMap_28083.method_searchKey (enumerator_34155.current_mRightState (HERE), var_rightStateIndex_34301, joker_34303, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 895)) ;
      GALGAS_string var_combinaison_34335 = enumerator_34155.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 896)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 896)).add_operation (enumerator_34155.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 896)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 896)) ;
      const enumGalgasBool test_35 = var_neededCombinaisons_31928.getter_hasKey (var_combinaison_34335 COMMA_SOURCE_FILE ("type-shared-map.galgas", 897)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 897)).boolEnum () ;
      if (kBoolTrue == test_35) {
        TC_Array <C_FixItDescription> fixItArray36 ;
        inCompiler->emitSemanticError (enumerator_34155.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 898)), GALGAS_string ("the '").add_operation (enumerator_34155.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 899)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)).add_operation (enumerator_34155.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 899)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)), fixItArray36  COMMA_SOURCE_FILE ("type-shared-map.galgas", 898)) ;
      }
      const enumGalgasBool test_37 = var_definedCombinaisons_33982.getter_hasKey (var_combinaison_34335 COMMA_SOURCE_FILE ("type-shared-map.galgas", 901)).boolEnum () ;
      if (kBoolTrue == test_37) {
        TC_Array <C_FixItDescription> fixItArray38 ;
        inCompiler->emitSemanticError (enumerator_34155.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 902)), GALGAS_string ("the '").add_operation (enumerator_34155.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 903)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 903)).add_operation (enumerator_34155.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 903)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 903)), fixItArray38  COMMA_SOURCE_FILE ("type-shared-map.galgas", 902)) ;
      }
      var_definedCombinaisons_33982.addAssign_operation (var_combinaison_34335  COMMA_SOURCE_FILE ("type-shared-map.galgas", 905)) ;
      GALGAS_uint var_resultingStateNameIndex_34865 ;
      GALGAS_mapAutomatonMessageKind joker_34867 ; // Joker input parameter
      var_mapAutomatonStateMap_28083.method_searchKey (enumerator_34155.current_mResultingState (HERE), var_resultingStateNameIndex_34865, joker_34867, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 906)) ;
      const enumGalgasBool test_39 = GALGAS_bool (kIsNotEqual, enumerator_34155.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 907)).objectCompare (enumerator_34155.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 907)))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_34155.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 908)).objectCompare (enumerator_34155.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 908)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 908)).operator_and (var_accessibilityGraph_30872.getter_hasKey (enumerator_34155.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 909)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 909)).add_operation (enumerator_34155.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 909)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 909)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 909)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 909)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 909)).boolEnum () ;
      if (kBoolTrue == test_39) {
        TC_Array <C_FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticError (enumerator_34155.current_mResultingState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 910)), GALGAS_string ("the '").add_operation (enumerator_34155.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 911)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 911)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 911)).add_operation (enumerator_34155.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 911)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 911)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 911)), fixItArray40  COMMA_SOURCE_FILE ("type-shared-map.galgas", 910)) ;
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_34155.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 913)) ;
      }
      const enumGalgasBool test_41 = GALGAS_bool (kIsEqual, enumerator_34155.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 914)))).boolEnum () ;
      if (kBoolTrue == test_41) {
        var_definedCombinaisons_33982.addAssign_operation (enumerator_34155.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 915)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 915)).add_operation (enumerator_34155.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 915)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 915))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 915)) ;
        var_branchBehaviourSortedListForMapOverride_32__34046.addAssign_operation (var_rightStateIndex_34301, enumerator_34155.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 918)), var_leftStateIndex_34225, enumerator_34155.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 920)), var_resultingStateNameIndex_34865, enumerator_34155.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 922)), enumerator_34155.current_mMessageKind (HERE), enumerator_34155.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 924))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 916)) ;
      }
      var_branchBehaviourSortedListForMapOverride_32__34046.addAssign_operation (var_leftStateIndex_34225, enumerator_34155.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 928)), var_rightStateIndex_34301, enumerator_34155.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 930)), var_resultingStateNameIndex_34865, enumerator_34155.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 932)), enumerator_34155.current_mMessageKind (HERE), enumerator_34155.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 934))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 926)) ;
      enumerator_34155.gotoNextObject () ;
    }
    const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, var_forgottenAssociations_33649.getter_count (SOURCE_FILE ("type-shared-map.galgas", 936)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_42) {
      GALGAS_stringset var_forgottenCombinaisons_36170 = var_neededCombinaisons_31928.substract_operation (var_definedCombinaisons_33982, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 937)) ;
      const enumGalgasBool test_43 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons_36170.getter_count (SOURCE_FILE ("type-shared-map.galgas", 938)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_43) {
        GALGAS_string var_s_36279 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_36327 (var_forgottenCombinaisons_36170, kEnumeration_up) ;
        while (enumerator_36327.hasCurrentObject ()) {
          var_s_36279.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_36327.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 941)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 941)) ;
          enumerator_36327.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray44 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 943)), var_forgottenCombinaisons_36170.getter_count (SOURCE_FILE ("type-shared-map.galgas", 943)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 943)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 943)).add_operation (var_s_36279, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 943)), fixItArray44  COMMA_SOURCE_FILE ("type-shared-map.galgas", 943)) ;
      }
    }
    var_mapOverrideList_31813.addAssign_operation (enumerator_31858.current_mOverrideBlockName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 947)), var_branchBehaviourSortedListForMapOverride_31__31992, var_branchBehaviourSortedListForMapOverride_32__34046  COMMA_SOURCE_FILE ("type-shared-map.galgas", 946)) ;
    enumerator_31858.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_36718 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 952)) ;
  GALGAS_attributeIndexMap var_attributeMap_36757 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 953)) ;
  cEnumerator_propertyInCollectionListAST enumerator_36791 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_36791.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_36801 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_36791.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 955)) ;
    GALGAS_bool var_hasSetter_36902 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_36927 = GALGAS_bool (true) ;
    var_typedAttributeList_36718.addAssign_operation (var_t_36801, enumerator_36791.current_mPropertyName (HERE), var_hasSetter_36902, var_hasGetter_36927  COMMA_SOURCE_FILE ("type-shared-map.galgas", 958)) ;
    {
    var_attributeMap_36757.setter_insertKey (enumerator_36791.current_mPropertyName (HERE), var_t_36801, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 963)) ;
    }
    enumerator_36791.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_37140 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 966)) ;
  cEnumerator_insertMethodListAST enumerator_37188 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_37188.hasCurrentObject ()) {
    {
    var_insertMethodMap_37140.setter_insertKey (enumerator_37188.current (HERE).mAttribute_mInsertMethodName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 968)) ;
    }
    cEnumerator_stringlist enumerator_37421 (enumerator_37188.current (HERE).mAttribute_mErrorMessage.getter_string (SOURCE_FILE ("type-shared-map.galgas", 970)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 970)), kEnumeration_up) ;
    while (enumerator_37421.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_37453 = enumerator_37421.current (HERE).mAttribute_mValue.getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 971)) ;
      {
      GALGAS_string joker_37548 ; // Joker input parameter
      var_explodedArray_37453.setter_popFirst (joker_37548, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 972)) ;
      }
      cEnumerator_stringlist enumerator_37583 (var_explodedArray_37453, kEnumeration_up) ;
      while (enumerator_37583.hasCurrentObject ()) {
        const enumGalgasBool test_45 = GALGAS_bool (kIsStrictSup, enumerator_37583.current_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 974)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_45) {
          GALGAS_char var_c_37641 = enumerator_37583.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 975)) ;
          const enumGalgasBool test_46 = GALGAS_bool (kIsNotEqual, var_c_37641.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_37641.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 976)).boolEnum () ;
          if (kBoolTrue == test_46) {
            TC_Array <C_FixItDescription> fixItArray47 ;
            inCompiler->emitSemanticError (enumerator_37188.current (HERE).mAttribute_mErrorMessage.getter_location (SOURCE_FILE ("type-shared-map.galgas", 977)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message"), fixItArray47  COMMA_SOURCE_FILE ("type-shared-map.galgas", 977)) ;
          }
        }
        enumerator_37583.gotoNextObject () ;
      }
      enumerator_37421.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_38073 (enumerator_37188.current (HERE).mAttribute_mShadowErrorMessage.getter_string (SOURCE_FILE ("type-shared-map.galgas", 983)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 983)), kEnumeration_up) ;
    while (enumerator_38073.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_38105 = enumerator_38073.current (HERE).mAttribute_mValue.getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 984)) ;
      {
      GALGAS_string joker_38206 ; // Joker input parameter
      var_explodedArray_38105.setter_popFirst (joker_38206, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 985)) ;
      }
      cEnumerator_stringlist enumerator_38248 (var_explodedArray_38105, kEnumeration_up) ;
      while (enumerator_38248.hasCurrentObject ()) {
        const enumGalgasBool test_48 = GALGAS_bool (kIsStrictSup, enumerator_38248.current (HERE).mAttribute_mValue.getter_length (SOURCE_FILE ("type-shared-map.galgas", 987)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_48) {
          GALGAS_char var_c_38316 = enumerator_38248.current (HERE).mAttribute_mValue.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 988)) ;
          const enumGalgasBool test_49 = GALGAS_bool (kIsNotEqual, var_c_38316.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_38316.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 989)).boolEnum () ;
          if (kBoolTrue == test_49) {
            TC_Array <C_FixItDescription> fixItArray50 ;
            inCompiler->emitSemanticError (enumerator_37188.current (HERE).mAttribute_mErrorMessage.getter_location (SOURCE_FILE ("type-shared-map.galgas", 990)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message"), fixItArray50  COMMA_SOURCE_FILE ("type-shared-map.galgas", 990)) ;
          }
        }
        enumerator_38248.gotoNextObject () ;
      }
      enumerator_38073.gotoNextObject () ;
    }
    enumerator_37188.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_38638 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 997)) ;
  cEnumerator_mapSearchMethodListAST enumerator_38686 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_38686.hasCurrentObject ()) {
    const enumGalgasBool test_51 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 999)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_51) {
      {
      var_searchMethodMap_38638.setter_insertKey (enumerator_38686.current (HERE).mAttribute_mSearchMethodName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1000)) ;
      }
    }else if (kBoolFalse == test_51) {
      {
      var_searchMethodMap_38638.setter_insertKey (enumerator_38686.current (HERE).mAttribute_mSearchMethodName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1002)) ;
      }
    }
    cEnumerator_stringlist enumerator_39047 (enumerator_38686.current (HERE).mAttribute_mErrorMessage.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1005)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1005)), kEnumeration_up) ;
    while (enumerator_39047.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_39079 = enumerator_39047.current (HERE).mAttribute_mValue.getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1006)) ;
      {
      GALGAS_string joker_39179 ; // Joker input parameter
      var_explodedArray_39079.setter_popFirst (joker_39179, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1007)) ;
      }
      cEnumerator_stringlist enumerator_39221 (var_explodedArray_39079, kEnumeration_up) ;
      while (enumerator_39221.hasCurrentObject ()) {
        const enumGalgasBool test_52 = GALGAS_bool (kIsStrictSup, enumerator_39221.current (HERE).mAttribute_mValue.getter_length (SOURCE_FILE ("type-shared-map.galgas", 1009)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_52) {
          GALGAS_char var_c_39289 = enumerator_39221.current (HERE).mAttribute_mValue.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1010)) ;
          const enumGalgasBool test_53 = GALGAS_bool (kIsNotEqual, var_c_39289.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
          if (kBoolTrue == test_53) {
            TC_Array <C_FixItDescription> fixItArray54 ;
            inCompiler->emitSemanticError (enumerator_38686.current (HERE).mAttribute_mErrorMessage.getter_location (SOURCE_FILE ("type-shared-map.galgas", 1012)), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message"), fixItArray54  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1012)) ;
          }
        }
        enumerator_39221.gotoNextObject () ;
      }
      enumerator_39047.gotoNextObject () ;
    }
    enumerator_38686.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1020)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1020)), GALGAS_sharedMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1022)), object->mAttribute_mMapTypeName, var_typedAttributeList_36718, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, var_mapAutomatonStateMap_28083, var_mapAutomatonActionMap_27437, var_mapStateSortedList_28507, var_mapOverrideList_31813, var_shadowBehaviour_26288, var_shadowMessage_26321  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1021)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1019)) ;
  GALGAS_string var_graphFile_40063 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/shared-map-"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1036)).add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1036)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1036)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1036)) ;
  const enumGalgasBool test_55 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_55) {
    GALGAS_string var_theGraph_40232 = GALGAS_string ("digraph G {\n") ;
    cEnumerator_mapAutomatonStateMap enumerator_40288 (var_mapAutomatonStateMap_28083, kEnumeration_up) ;
    while (enumerator_40288.hasCurrentObject ()) {
      var_theGraph_40232.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_40288.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1040)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1040)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1040)).add_operation (enumerator_40288.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1040)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1040)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1040)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1040)) ;
      const enumGalgasBool test_56 = var_initialStateSet_26855.getter_hasKey (enumerator_40288.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("type-shared-map.galgas", 1041)).boolEnum () ;
      if (kBoolTrue == test_56) {
        var_theGraph_40232.plusAssign_operation(GALGAS_string (" shape=box color=blue"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1042)) ;
      }else if (kBoolFalse == test_56) {
        var_theGraph_40232.plusAssign_operation(GALGAS_string (" shape=box"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1044)) ;
      }
      switch (enumerator_40288.current_mStateMessageKind (HERE).enumValue ()) {
      case GALGAS_mapAutomatonMessageKind::kNotBuilt:
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
        {
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
        {
          var_theGraph_40232.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1049)) ;
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
        {
          var_theGraph_40232.plusAssign_operation(GALGAS_string (" fontcolor=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1051)) ;
        }
        break ;
      }
      var_theGraph_40232.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1053)) ;
      enumerator_40288.gotoNextObject () ;
    }
    cEnumerator_mapStateList enumerator_40766 (object->mAttribute_mMapStateList, kEnumeration_up) ;
    while (enumerator_40766.hasCurrentObject ()) {
      cEnumerator_mapStateTransitionList enumerator_40801 (enumerator_40766.current_mTransitionList (HERE), kEnumeration_up) ;
      while (enumerator_40801.hasCurrentObject ()) {
        var_theGraph_40232.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_40766.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)).add_operation (enumerator_40801.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)).add_operation (enumerator_40801.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)) ;
        switch (enumerator_40801.current_mTransitionMessageKind (HERE).enumValue ()) {
        case GALGAS_mapAutomatonMessageKind::kNotBuilt:
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
          {
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
          {
            var_theGraph_40232.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\" color=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1061)) ;
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
          {
            var_theGraph_40232.plusAssign_operation(GALGAS_string (" fontcolor=\"red\" color=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1063)) ;
          }
          break ;
        }
        var_theGraph_40232.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1065)) ;
        enumerator_40801.gotoNextObject () ;
      }
      enumerator_40766.gotoNextObject () ;
    }
    var_theGraph_40232.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1068)) ;
    GALGAS_bool joker_41293 ; // Joker input parameter
    var_theGraph_40232.method_writeToFileWhenDifferentContents (var_graphFile_40063, joker_41293, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1069)) ;
  }else if (kBoolFalse == test_55) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_graphFile_40063, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1071)) ;
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
  cEnumerator_typedPropertyList enumerator_43658 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_43658.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_43658.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1131)) ;
    enumerator_43658.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1135)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1136)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("type-shared-map.galgas", 1134))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1141)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1142)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1143)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1144)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1145)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1146)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1147)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1148)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1149)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1150)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1151)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1152)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1140))), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1140)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1164)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1165)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-shared-map.galgas", 1163))) ;
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
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1176)) ;
  GALGAS_keySortedList var_keySortedList_45239 = GALGAS_keySortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 1177)) ;
  cEnumerator_mapAutomatonStateMap enumerator_45310 (object->mAttribute_mMapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_45310.hasCurrentObject ()) {
    var_keySortedList_45239.addAssign_operation (enumerator_45310.current_lkey (HERE).mAttribute_string, enumerator_45310.current_mStateIndex (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1179)) ;
    enumerator_45310.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1182)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mMapAutomatonStateMap, object->mAttribute_mMapAutomatonActionMap, object->mAttribute_mMapStateSortedList, object->mAttribute_mMapOverrideList, var_keySortedList_45239, object->mAttribute_mShadowBehaviour, object->mAttribute_mShadowMessage COMMA_SOURCE_FILE ("type-shared-map.galgas", 1181))) ;
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
  cEnumerator_propertyInCollectionListAST enumerator_3630 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3630.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3630.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)), enumerator_3630.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-sorted-list.galgas", 87))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)) ;
    }
    enumerator_3630.gotoNextObject () ;
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
  cEnumerator_propertyInCollectionListAST enumerator_4333 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_4333.hasCurrentObject ()) {
    var_structAttributeList_4270.addAssign_operation (enumerator_4333.current_mPropertyTypeName (HERE), enumerator_4333.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 103))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 99)) ;
    enumerator_4333.gotoNextObject () ;
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
  cEnumerator_propertyInCollectionListAST enumerator_5843 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_5843.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_5974 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_5843.current_mPropertyTypeName (HERE), var_attributeTypeIndex_5974 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 133)) ;
    }
    GALGAS_bool var_hasGetter_5995 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_6022 = GALGAS_bool (true) ;
    var_typedAttributeList_5790.addAssign_operation (var_attributeTypeIndex_5974, enumerator_5843.current_mPropertyName (HERE), var_hasSetter_6022, var_hasGetter_5995  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 136)) ;
    var_enumerationDescriptor_5615.addAssign_operation (var_attributeTypeIndex_5974, enumerator_5843.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 137)) ;
    var_constructorAttributeTypeList_5681.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 138)), var_attributeTypeIndex_5974, enumerator_5843.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 138)) ;
    var_setterFormalArgumentList_5735.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 139)), var_attributeTypeIndex_5974, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-sorted-list.galgas", 139)), enumerator_5843.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 139)) ;
    enumerator_5843.gotoNextObject () ;
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
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList_10244 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 262)) ;
  GALGAS_attributeIndexMap var_attributeMap_10286 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 263)) ;
  cEnumerator_propertyInCollectionListAST enumerator_10347 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_10347.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_10357 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_10347.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 265)) ;
    GALGAS_bool var_hasSetter_10460 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_10487 = GALGAS_bool (true) ;
    var_typedAttributeList_10244.addAssign_operation (var_t_10357, enumerator_10347.current_mPropertyName (HERE), var_hasSetter_10460, var_hasGetter_10487  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 268)) ;
    {
    var_attributeMap_10286.setter_insertKey (enumerator_10347.current_mPropertyName (HERE), var_t_10357, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 273)) ;
    }
    enumerator_10347.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting_10691 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sorted-list.galgas", 276)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_10731 = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 277)) ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_10803 (object->mAttribute_mSortDescriptorList, kEnumeration_up) ;
  while (enumerator_10803.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_10885 ;
    var_attributeMap_10286.method_searchKey (enumerator_10803.current_mSortedAttributeName (HERE), var_type_10885, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 279)) ;
    var_sortDescriptorList_10731.addAssign_operation (var_type_10885, enumerator_10803.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 280)), enumerator_10803.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 280)) ;
    const enumGalgasBool test_0 = var_attributesUsedForSorting_10691.getter_hasKey (enumerator_10803.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 281)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 281)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_10803.current_mSortedAttributeName (HERE).getter_location (SOURCE_FILE ("type-sorted-list.galgas", 282)), GALGAS_string ("the '").add_operation (enumerator_10803.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 282)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 282)), fixItArray1  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 282)) ;
    }
    var_attributesUsedForSorting_10691.addAssign_operation (enumerator_10803.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 284))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 284)) ;
    enumerator_10803.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("type-sorted-list.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 288)), GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 290)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 291)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 291)), var_typedAttributeList_10244, var_sortDescriptorList_10731  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 289)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 287)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 338)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 339)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-sorted-list.galgas", 337))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 343)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 344)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 345)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 347)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 348)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 349)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 350)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 351)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 352)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 353)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 342))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 342)) ;
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
  cEnumerator_typedPropertyList enumerator_14330 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_14330.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14330.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 365)) ;
    enumerator_14330.gotoNextObject () ;
  }
  extensionMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 367)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 368)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 370)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSortDescriptorList COMMA_SOURCE_FILE ("type-sorted-list.galgas", 369))) ;
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
  cEnumerator_propertyInCollectionListAST enumerator_2438 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2438.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey_2458 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2438.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-struct.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 52)), enumerator_2438.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-struct.galgas", 52))  COMMA_SOURCE_FILE ("type-struct.galgas", 52)) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2285, var_propertyKey_2458 COMMA_SOURCE_FILE ("type-struct.galgas", 53)) ;
    }
    enumerator_2438.gotoNextObject () ;
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
  cEnumerator_propertyInCollectionListAST enumerator_3826 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3826.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_3957 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_3826.current_mPropertyTypeName (HERE), var_attributeTypeIndex_3957 COMMA_SOURCE_FILE ("type-struct.galgas", 76)) ;
    }
    var_constructorAttributeTypeList_3648.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-struct.galgas", 77)), var_attributeTypeIndex_3957, enumerator_3826.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-struct.galgas", 77)) ;
    var_typesToIncludeInHeaderCompilation_3759.addAssign_operation (var_attributeTypeIndex_3957  COMMA_SOURCE_FILE ("type-struct.galgas", 78)) ;
    GALGAS_bool var_hasSetter_4129 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_4155 = GALGAS_bool (true) ;
    var_typedAttributeList_3696.addAssign_operation (var_attributeTypeIndex_3957, enumerator_3826.current_mPropertyName (HERE), var_hasSetter_4129, var_hasGetter_4155  COMMA_SOURCE_FILE ("type-struct.galgas", 81)) ;
    {
    var_attributeMap_3538.setter_insertKey (enumerator_3826.current_mPropertyName (HERE), var_attributeTypeIndex_3957, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 82)) ;
    }
    enumerator_3826.gotoNextObject () ;
  }
  {
  var_constructorMap_3585.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 89))  COMMA_SOURCE_FILE ("type-struct.galgas", 89)), var_constructorAttributeTypeList_3648, GALGAS_bool (false), var_structTypeIndex_3384, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 88)) ;
  }
  GALGAS_getterMap var_getterMap_4523 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_4523, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 96)) ;
  }
  cEnumerator_typedPropertyList enumerator_4630 (var_typedAttributeList_3696, kEnumeration_up) ;
  while (enumerator_4630.hasCurrentObject ()) {
    {
    routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4523, ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_4630.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-struct.galgas", 101)), enumerator_4630.current_mAttributeTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 102)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 98)) ;
    }
    enumerator_4630.gotoNextObject () ;
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
  cEnumerator_typedPropertyList enumerator_5679 (var_typedAttributeList_3696, kEnumeration_up) ;
  bool bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_5630.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_5679.hasCurrentObject () && bool_1) {
    while (enumerator_5679.hasCurrentObject () && bool_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_5679.current_mAttributeTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 135)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_5679.current_mAttributeTypeProxy (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 135)).operator_not (SOURCE_FILE ("type-struct.galgas", 135)) COMMA_SOURCE_FILE ("type-struct.galgas", 135)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_defaultConstructorName_5630 = GALGAS_string::makeEmptyString () ;
      }
      enumerator_5679.gotoNextObject () ;
      if (enumerator_5679.hasCurrentObject ()) {
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
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mStructTypeName.getter_location (SOURCE_FILE ("type-struct.galgas", 190)), GALGAS_string ("a structure cannot be empty: it must have at least one field"), fixItArray1  COMMA_SOURCE_FILE ("type-struct.galgas", 190)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_7850 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 192)) ;
  GALGAS_attributeIndexMap var_attributeMap_7892 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 193)) ;
  cEnumerator_propertyInCollectionListAST enumerator_7953 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_7953.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_7963 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_7953.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 195)) ;
    cEnumerator_lstringlist enumerator_8076 (enumerator_7953.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_8076.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_8076.current_mValue (HERE).getter_location (SOURCE_FILE ("type-struct.galgas", 197)), GALGAS_string ("a struct attribute does not accept any feature"), fixItArray2  COMMA_SOURCE_FILE ("type-struct.galgas", 197)) ;
      enumerator_8076.gotoNextObject () ;
    }
    GALGAS_bool var_hasSetter_8178 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_8210 = GALGAS_bool (false) ;
    var_typedAttributeList_7850.addAssign_operation (var_t_7963, enumerator_7953.current_mPropertyName (HERE), var_hasSetter_8178, var_hasGetter_8210  COMMA_SOURCE_FILE ("type-struct.galgas", 201)) ;
    const enumGalgasBool test_3 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 206)).getter_hasKey (enumerator_7953.current_mPropertyName (HERE).mAttribute_string COMMA_SOURCE_FILE ("type-struct.galgas", 206)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_m_8393 = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_8471 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 208)), kEnumeration_up) ;
      while (enumerator_8471.hasCurrentObject ()) {
        var_m_8393.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_8471.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 209)) ;
        enumerator_8471.gotoNextObject () ;
      }
      var_m_8393.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 211)) ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_7953.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-struct.galgas", 212)), var_m_8393, fixItArray4  COMMA_SOURCE_FILE ("type-struct.galgas", 212)) ;
    }
    {
    var_attributeMap_7892.setter_insertKey (enumerator_7953.current_mPropertyName (HERE), var_t_7963, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 214)) ;
    }
    enumerator_7953.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("type-struct.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 217)), GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 219)), var_typedAttributeList_7850  COMMA_SOURCE_FILE ("type-struct.galgas", 218)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("type-struct.galgas", 216)) ;
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
  cEnumerator_typedPropertyList enumerator_10211 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_10211.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_10211.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 258)) ;
    enumerator_10211.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 262)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 263)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 265)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 261))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 268)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 269)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 270)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 271)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 272)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 273)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 274)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 275)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 276)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 277)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 278)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 279)) COMMA_SOURCE_FILE ("type-struct.galgas", 267))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 267)) ;
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
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 290)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 292)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 293)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 295)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 291))) ;
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
  GALGAS_lstring var_key_3437 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 68)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 68)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 68)), object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 69))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 67)) ;
  {
  const GALGAS_abstractExtensionGetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3437, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 71)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3437, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 72)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 72))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 72)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 72)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 74)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 74)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-getter.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 75)) ;
    }
  }
  cMapElement_extensionGetterMapForBuildingContext * objectArray_4043 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 81)) ;
  if (NULL != objectArray_4043) {
      macroValidSharedObject (objectArray_4043, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    objectArray_4043->mAttribute_mExtensionGetterMapForType.setter_insertKey (object->mAttribute_mAbstractExtensionGetterName, object->mAttribute_mAbstractExtensionGetterReturnedTypeName, object->mAttribute_mAbstractExtensionGetterFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 82)) ;
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
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_6904 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 136)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_6904.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 138)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-abstract-getter.galgas", 138)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 139)), GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_6904.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 139)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 139)), fixItArray1  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 139)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_6904.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 140)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 141)), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (var_selfType_6904.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 141)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 141)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 141)) ;
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_7485 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-getter.galgas", 144)) ;
  cEnumerator_formalInputParameterListAST enumerator_7554 (object->mAttribute_mAbstractExtensionGetterFormalInputParameterList, kEnumeration_up) ;
  while (enumerator_7554.hasCurrentObject ()) {
    var_formalParameterListForGeneration_7485.addAssign_operation (enumerator_7554.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_7554.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)), enumerator_7554.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 149)), enumerator_7554.current_mFormalArgumentName (HERE), enumerator_7554.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 146)) ;
    enumerator_7554.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 155)), GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 158)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 158)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 158)), var_selfType_6904, object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 160)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractExtensionGetterReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 161)), var_formalParameterListForGeneration_7485  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 156)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 154)) ;
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
  ioArgument_ioAbstractExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 185)), object->mAttribute_mAbstractExtensionGetterName  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 184)) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 203)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 213)), object->mAttribute_mAbstractExtensionGetterName, object->mAttribute_mAbstractExtensionGetterFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 212))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 227)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 227)).add_operation (object->mAttribute_mAbstractExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 227))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 227)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 228)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 229)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_11671 (object->mAttribute_mAbstractExtensionGetterFormalParameterList, kEnumeration_up) ;
  while (enumerator_11671.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11671.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 231)) ;
    enumerator_11671.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 234)), object->mAttribute_mAbstractExtensionGetterName, object->mAttribute_mAbstractExtensionGetterFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 233))) ;
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
  cMapElement_extensionMethodMapForBuildingContext * objectArray_3058 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 58)) ;
  if (NULL != objectArray_3058) {
      macroValidSharedObject (objectArray_3058, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    objectArray_3058->mAttribute_mExtensionMethodMapForType.setter_insertKey (object->mAttribute_mAbstractExtensionMethodName, object->mAttribute_mAbstractExtensionMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 59)) ;
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
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5275 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 96)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5275.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 98)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-abstract-method.galgas", 98)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionMethodName.getter_location (SOURCE_FILE ("extension-abstract-method.galgas", 99)), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_5275.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 99)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 99)), fixItArray1  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 99)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_5275.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 100)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionMethodName.getter_location (SOURCE_FILE ("extension-abstract-method.galgas", 101)), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (var_selfType_5275.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 101)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 101)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 101)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_5822 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-method.galgas", 104)) ;
  cEnumerator_formalParameterListAST enumerator_5919 (object->mAttribute_mAbstractExtensionMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_5919.hasCurrentObject ()) {
    var_formalParameterListForGeneration_5822.addAssign_operation (enumerator_5919.current_mFormalSelector (HERE), enumerator_5919.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_5919.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 109)), enumerator_5919.current_mFormalArgumentName (HERE), enumerator_5919.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 111))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)) ;
    enumerator_5919.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 115)), GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_5275.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 118)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 118)).add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 118)), var_selfType_5275, object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 120)), var_formalParameterListForGeneration_5822  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 116)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 114)) ;
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
  ioArgument_ioAbstractExtensionMethodListMapAST.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 143)), object->mAttribute_mAbstractExtensionMethodName  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 142)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 163)), object->mAttribute_mAbstractExtensionMethodName, object->mAttribute_mAbstractExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 162))) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 172)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 181)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 181)).add_operation (object->mAttribute_mAbstractExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 181))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 181)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 182)) ;
  cEnumerator_formalParameterListForGeneration enumerator_9854 (object->mAttribute_mAbstractExtensionMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_9854.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_9854.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 184)) ;
    enumerator_9854.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, object->mAttribute_mReceiverType, object->mAttribute_mAbstractExtensionMethodName, object->mAttribute_mAbstractExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186))) ;
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
  cMapElement_extensionSetterMapForBuildingContext * objectArray_3090 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 58)) ;
  if (NULL != objectArray_3090) {
      macroValidSharedObject (objectArray_3090, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    objectArray_3090->mAttribute_mExtensionSetterMapForType.setter_insertKey (object->mAttribute_mAbstractExtensionSetterName, object->mAttribute_mAbstractExtensionSetterFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 59)) ;
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
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5307 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 97)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5307.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 99)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-abstract-setter.galgas", 99)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionSetterName.getter_location (SOURCE_FILE ("extension-abstract-setter.galgas", 100)), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_5307.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 100)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 100)), fixItArray1  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 100)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_5307.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 101)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionSetterName.getter_location (SOURCE_FILE ("extension-abstract-setter.galgas", 102)), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (var_selfType_5307.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 102)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 102)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 102)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_5854 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-setter.galgas", 105)) ;
  cEnumerator_formalParameterListAST enumerator_5951 (object->mAttribute_mAbstractExtensionSetterFormalParameterList, kEnumeration_up) ;
  while (enumerator_5951.hasCurrentObject ()) {
    var_formalParameterListForGeneration_5854.addAssign_operation (enumerator_5951.current_mFormalSelector (HERE), enumerator_5951.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_5951.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 110)), enumerator_5951.current_mFormalArgumentName (HERE), enumerator_5951.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 112))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 107)) ;
    enumerator_5951.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (object->mAttribute_mAbstractExtensionSetterName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 116)), GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 119)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 119)).add_operation (object->mAttribute_mAbstractExtensionSetterName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 119)), var_selfType_5307, object->mAttribute_mAbstractExtensionSetterName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 121)), var_formalParameterListForGeneration_5854  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 117)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 115)) ;
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
  ioArgument_ioAbstractExtensionSetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 146)), object->mAttribute_mAbstractExtensionSetterName  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 145)) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 163)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 172)), object->mAttribute_mAbstractExtensionSetterName, object->mAttribute_mAbstractExtensionSetterFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 171))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 185)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 185)).add_operation (object->mAttribute_mAbstractExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 185))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 185)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 186)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 188)), object->mAttribute_mAbstractExtensionSetterName, object->mAttribute_mAbstractExtensionSetterFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 187))) ;
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
  cMapElement_extensionGetterMapForBuildingContext * objectArray_4328 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 87)) ;
  if (NULL != objectArray_4328) {
      macroValidSharedObject (objectArray_4328, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    objectArray_4328->mAttribute_mExtensionGetterMapForType.setter_insertKey (object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterReturnedTypeName, object->mAttribute_mExtensionGetterFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 88)) ;
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
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_6933 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 142)) ;
  GALGAS_string var_selfObjectName_7033 ;
  GALGAS_string var_selfObjectAccessor_7062 ;
  GALGAS_bool var_implementedAsFunction_7092 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType_6933.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 147)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-getter.galgas", 147)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName_7033 = GALGAS_string ("object") ;
    var_selfObjectAccessor_7062 = GALGAS_string ("object->") ;
    var_implementedAsFunction_7092 = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName_7033 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_7062 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_7092 = GALGAS_bool (true) ;
  }
  GALGAS_analysisContext var_analysisContext_7454 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_6933, var_selfObjectName_7033, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-getter.galgas", 162))  COMMA_SOURCE_FILE ("extension-getter.galgas", 157)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_7628 ;
  GALGAS_string var_returnVariableCppName_7660 ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_7734 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_7811 ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType_6933.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 170)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-getter.galgas", 170)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_6933.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 170)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-getter.galgas", 170)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 170)).operator_or (GALGAS_bool (kIsEqual, var_selfType_6933.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 170)).objectCompare (GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("extension-getter.galgas", 170)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 170)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType_6933.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 171)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-getter.galgas", 172)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext_7454, object->mAttribute_mExtensionGetterFormalInputParameterList, temp_1, var_selfObjectAccessor_7062, object->mAttribute_mExtensionGetterInstructionList, object->mAttribute_mExtensionGetterReturnedVariableName, object->mAttribute_mExtensionGetterReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration_7734, var_returnType_7628, var_returnVariableCppName_7660, var_semanticInstructionListForGeneration_7811, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 167)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 186)), GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (var_selfType_6933.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 189)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 189)).add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 189)), var_selfType_6933, object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 191)), var_implementedAsFunction_7092, var_returnType_7628, var_returnVariableCppName_7660, var_formalParameterListForGeneration_7734, var_selfType_6933.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 196)), var_semanticInstructionListForGeneration_7811  COMMA_SOURCE_FILE ("extension-getter.galgas", 187)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-getter.galgas", 185)) ;
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
  ioArgument_ioExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 220)), object->mAttribute_mExtensionGetterName  COMMA_SOURCE_FILE ("extension-getter.galgas", 219)) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-getter.galgas", 242)) ;
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
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 252)), object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 255)) COMMA_SOURCE_FILE ("extension-getter.galgas", 251))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 259)), object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("extension-getter.galgas", 258))) ;
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
    GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_12631 = object->mAttribute_mExtensionGetterFormalParameterList ;
    {
    var_extensionReaderFormalParameterList_12631.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 276)), object->mAttribute_mReceiverType, GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 279))  COMMA_SOURCE_FILE ("extension-getter.galgas", 279)), GALGAS_bool (true), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 275)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 283)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 283)).add_operation (object->mAttribute_mExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 283))  COMMA_SOURCE_FILE ("extension-getter.galgas", 283)) ;
    GALGAS_string var_code_13273 ;
    {
    routine_generateFunction (GALGAS_string ("extensionGetter_").add_operation (object->mAttribute_mExtensionGetterName.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 285)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_12631, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType, object->mAttribute_mResultVarCppName, GALGAS_bool (false), var_code_13273, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 284)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 296)), object->mAttribute_mExtensionGetterName, var_code_13273 COMMA_SOURCE_FILE ("extension-getter.galgas", 295))) ;
  }else if (kBoolFalse == test_0) {
    extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 301)) ;
    extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 302)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_13635 (object->mAttribute_mExtensionGetterFormalParameterList, kEnumeration_up) ;
    while (enumerator_13635.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_13635.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 304)) ;
      enumerator_13635.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_baseType_13741 = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching_13777 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 308)).isValid ()) {
      uint32_t variant_13794 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 308)).uintValue () ;
      bool loop_13794 = true ;
      while (loop_13794) {
        loop_13794 = var_searching_13777.isValid () ;
        if (loop_13794) {
          loop_13794 = var_searching_13777.boolValue () ;
        }
        if (loop_13794 && (0 == variant_13794)) {
          loop_13794 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 308)) ;
        }
        if (loop_13794) {
          variant_13794 -- ;
          const enumGalgasBool test_1 = var_baseType_13741.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 309)).getter_isNull (SOURCE_FILE ("extension-getter.galgas", 309)).operator_not (SOURCE_FILE ("extension-getter.galgas", 309)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType_13741.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 310)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 310)).getter_hasKey (object->mAttribute_mExtensionGetterName COMMA_SOURCE_FILE ("extension-getter.galgas", 310)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType_13741 = var_baseType_13741.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 311)) ;
            }else if (kBoolFalse == test_2) {
              var_searching_13777 = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching_13777 = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_13741.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 319)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 319)).add_operation (object->mAttribute_mExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 319))  COMMA_SOURCE_FILE ("extension-getter.galgas", 319)) ;
    GALGAS_string var_extensionReaderCode_14496 ;
    {
    routine_generateExtensionGetter (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 328)), object->mAttribute_mResultVarCppName, var_extensionReaderCode_14496, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 320)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 333)), object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mResultType, var_extensionReaderCode_14496 COMMA_SOURCE_FILE ("extension-getter.galgas", 332))) ;
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
  cMapElement_extensionMethodMapForBuildingContext * objectArray_3827 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 74)) ;
  if (NULL != objectArray_3827) {
      macroValidSharedObject (objectArray_3827, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    objectArray_3827->mAttribute_mExtensionMethodMapForType.setter_insertKey (object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 75)) ;
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
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5459 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 104)) ;
  GALGAS_string var_selfObjectName_5559 ;
  GALGAS_string var_selfObjectAccessor_5588 ;
  GALGAS_bool var_implementedAsFunction_5618 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType_5459.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 109)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-method.galgas", 109)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName_5559 = GALGAS_string ("object") ;
    var_selfObjectAccessor_5588 = GALGAS_string ("object->") ;
    var_implementedAsFunction_5618 = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName_5559 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_5588 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_5618 = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_5997 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 119)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6112 ;
  GALGAS_analysisContext var_analysisContext_6134 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5459, var_selfObjectName_5559, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-method.galgas", 126))  COMMA_SOURCE_FILE ("extension-method.galgas", 121)) ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType_5459.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 131)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-method.galgas", 131)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_5459.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 131)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-method.galgas", 131)))) COMMA_SOURCE_FILE ("extension-method.galgas", 131)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType_5459.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 132)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 133)) ;
  }
  routine_analyzeRoutineBody (var_analysisContext_6134, object->mAttribute_mExtensionMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 130)), temp_1, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 135)), var_selfObjectAccessor_5588, object->mAttribute_mExtensionMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration_6112, var_formalParameterListForGeneration_5997, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 127)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 144)), GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_5459.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 147)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 147)).add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 147)), var_selfType_5459, object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 149)), var_implementedAsFunction_5618, var_formalParameterListForGeneration_5997, var_selfType_5459.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 152)), var_semanticInstructionListForGeneration_6112  COMMA_SOURCE_FILE ("extension-method.galgas", 145)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-method.galgas", 143)) ;
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
  ioArgument_ioExtensionMethodListMap.addAssign_operation (object->mAttribute_mTypeName.mAttribute_string, object->mAttribute_mExtensionMethodName  COMMA_SOURCE_FILE ("extension-method.galgas", 176)) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-method.galgas", 195)) ;
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
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 205)), object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-method.galgas", 204))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 211)), object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-method.galgas", 210))) ;
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
    GALGAS_formalParameterListForGeneration var_extensionMethodFormalParameterList_10776 = object->mAttribute_mExtensionMethodFormalParameterList ;
    {
    var_extensionMethodFormalParameterList_10776.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 227)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 228)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 230))  COMMA_SOURCE_FILE ("extension-method.galgas", 230)), GALGAS_string ("inObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 226)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 234)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 234)).add_operation (object->mAttribute_mExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 234))  COMMA_SOURCE_FILE ("extension-method.galgas", 234)) ;
    GALGAS_string var_code_11598 ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionMethod_").add_operation (object->mAttribute_mExtensionMethodName.getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 237)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_10776, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_11598, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 235)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 249)), object->mAttribute_mExtensionMethodName, var_code_11598 COMMA_SOURCE_FILE ("extension-method.galgas", 248))) ;
  }else if (kBoolFalse == test_0) {
    extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 254)) ;
    cEnumerator_formalParameterListForGeneration enumerator_11906 (object->mAttribute_mExtensionMethodFormalParameterList, kEnumeration_up) ;
    while (enumerator_11906.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_11906.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 256)) ;
      enumerator_11906.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_baseType_12012 = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching_12048 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 260)).isValid ()) {
      uint32_t variant_12065 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 260)).uintValue () ;
      bool loop_12065 = true ;
      while (loop_12065) {
        loop_12065 = var_searching_12048.isValid () ;
        if (loop_12065) {
          loop_12065 = var_searching_12048.boolValue () ;
        }
        if (loop_12065 && (0 == variant_12065)) {
          loop_12065 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 260)) ;
        }
        if (loop_12065) {
          variant_12065 -- ;
          const enumGalgasBool test_1 = var_baseType_12012.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 261)).getter_isNull (SOURCE_FILE ("extension-method.galgas", 261)).operator_not (SOURCE_FILE ("extension-method.galgas", 261)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType_12012.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 262)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 262)).getter_hasKey (object->mAttribute_mExtensionMethodName COMMA_SOURCE_FILE ("extension-method.galgas", 262)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType_12012 = var_baseType_12012.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 263)) ;
            }else if (kBoolFalse == test_2) {
              var_searching_12048 = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching_12048 = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType_12012.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 271)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 271)).add_operation (object->mAttribute_mExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 271))  COMMA_SOURCE_FILE ("extension-method.galgas", 271)) ;
    GALGAS_string var_methodImplementation_12706 ;
    {
    routine_generateExtensionMethod (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation_12706, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 272)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 282)), object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, var_methodImplementation_12706 COMMA_SOURCE_FILE ("extension-method.galgas", 281))) ;
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
  cMapElement_extensionSetterMapForBuildingContext * objectArray_3846 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-setter.galgas", 73)) ;
  if (NULL != objectArray_3846) {
      macroValidSharedObject (objectArray_3846, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    objectArray_3846->mAttribute_mExtensionSetterMapForType.setter_insertKey (object->mAttribute_mExtensionSetterName, object->mAttribute_mExtensionSetterFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 74)) ;
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
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5478 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 104)) ;
  GALGAS_string var_selfObjectName_5578 ;
  GALGAS_string var_selfObjectAccessor_5607 ;
  GALGAS_bool var_implementedAsFunction_5637 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType_5478.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 109)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-setter.galgas", 109)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName_5578 = GALGAS_string ("object") ;
    var_selfObjectAccessor_5607 = GALGAS_string ("object->") ;
    var_implementedAsFunction_5637 = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName_5578 = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor_5607 = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction_5637 = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6016 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 119)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6131 ;
  GALGAS_analysisContext var_analysisContext_6153 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5478, var_selfObjectName_5578, var_selfType_5478  COMMA_SOURCE_FILE ("extension-setter.galgas", 121)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext_6153, object->mAttribute_mExtensionSetterFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 130)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 131)), var_selfType_5478.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 132)), var_selfObjectAccessor_5607, object->mAttribute_mExtensionSetterInstructionList, object->mAttribute_mEndOfSetterDeclarationLocation, var_semanticInstructionListForGeneration_6131, var_formalParameterListForGeneration_6016, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 127)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (object->mAttribute_mExtensionSetterName.getter_string (SOURCE_FILE ("extension-setter.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 141)), GALGAS_extensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (var_selfType_5478.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 144)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 144)).add_operation (object->mAttribute_mExtensionSetterName.getter_string (SOURCE_FILE ("extension-setter.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 144)), var_selfType_5478, object->mAttribute_mExtensionSetterName.getter_string (SOURCE_FILE ("extension-setter.galgas", 146)), var_implementedAsFunction_5637, var_formalParameterListForGeneration_6016, var_selfType_5478.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 149)), var_semanticInstructionListForGeneration_6131  COMMA_SOURCE_FILE ("extension-setter.galgas", 142)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-setter.galgas", 140)) ;
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
  ioArgument_ioExtensionSettierListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 173)), object->mAttribute_mExtensionSetterName  COMMA_SOURCE_FILE ("extension-setter.galgas", 172)) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-setter.galgas", 193)) ;
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
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 203)), object->mAttribute_mExtensionSetterName, object->mAttribute_mExtensionSetterFormalParameterList COMMA_SOURCE_FILE ("extension-setter.galgas", 202))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 209)), object->mAttribute_mExtensionSetterName, object->mAttribute_mExtensionSetterFormalParameterList COMMA_SOURCE_FILE ("extension-setter.galgas", 208))) ;
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
    GALGAS_formalParameterListForGeneration var_extensionSetterFormalParameterList_10584 = object->mAttribute_mExtensionSetterFormalParameterList ;
    {
    var_extensionSetterFormalParameterList_10584.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas", 225)), GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.galgas", 226)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 228))  COMMA_SOURCE_FILE ("extension-setter.galgas", 228)), GALGAS_string ("ioObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 224)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 232)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 232)).add_operation (object->mAttribute_mExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 232))  COMMA_SOURCE_FILE ("extension-setter.galgas", 232)) ;
    GALGAS_string var_code_11402 ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionSetter_").add_operation (object->mAttribute_mExtensionSetterName.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 235)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_10584, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_11402, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 233)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 247)), object->mAttribute_mExtensionSetterName, var_code_11402 COMMA_SOURCE_FILE ("extension-setter.galgas", 246))) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_baseType_11637 = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching_11673 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 254)).isValid ()) {
      uint32_t variant_11690 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 254)).uintValue () ;
      bool loop_11690 = true ;
      while (loop_11690) {
        loop_11690 = var_searching_11673.isValid () ;
        if (loop_11690) {
          loop_11690 = var_searching_11673.boolValue () ;
        }
        if (loop_11690 && (0 == variant_11690)) {
          loop_11690 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas", 254)) ;
        }
        if (loop_11690) {
          variant_11690 -- ;
          const enumGalgasBool test_1 = var_baseType_11637.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 255)).getter_isNull (SOURCE_FILE ("extension-setter.galgas", 255)).operator_not (SOURCE_FILE ("extension-setter.galgas", 255)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType_11637.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 256)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 256)).getter_hasKey (object->mAttribute_mExtensionSetterName COMMA_SOURCE_FILE ("extension-setter.galgas", 256)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType_11637 = var_baseType_11637.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 257)) ;
            }else if (kBoolFalse == test_2) {
              var_searching_11673 = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching_11673 = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType_11637.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 265)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 265)).add_operation (object->mAttribute_mExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 265))  COMMA_SOURCE_FILE ("extension-setter.galgas", 265)) ;
    extensionMethod_addHeaderFileName (var_baseType_11637, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 266)) ;
    GALGAS_string var_setterImplementation_12379 ;
    {
    routine_generateExtensionSetter (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 268)), GALGAS_string::makeEmptyString (), object->mAttribute_mExtensionSetterName, ioArgument_ioInclusionSet, object->mAttribute_mExtensionSetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_setterImplementation_12379, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 267)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 277)), object->mAttribute_mExtensionSetterName, object->mAttribute_mExtensionSetterFormalParameterList, var_setterImplementation_12379 COMMA_SOURCE_FILE ("extension-setter.galgas", 276))) ;
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
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5988 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 115)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_6119 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractExtensionGetterReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 117)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5988.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 119)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 119)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 120)), GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_5988.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 120)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 120)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 120)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_5988.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 121)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 122)), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (var_selfType_5988.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 122)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 122)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 122)) ;
    }
  }
  GALGAS_string var_baseTypeName_6671 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_6710 = var_selfType_5988.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 126)) ;
  GALGAS_functionSignature var_inheritedSignature_6774 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 127)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType_6805 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 128)) ;
  GALGAS_location var_inheritedDeclarationLocation_6876 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 129)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 130)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 130)).isValid ()) {
    uint32_t variant_6901 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 130)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 130)).uintValue () ;
    bool loop_6901 = true ;
    while (loop_6901) {
      loop_6901 = var_superType_6710.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 131)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 131)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6671.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 131)).isValid () ;
      if (loop_6901) {
        loop_6901 = var_superType_6710.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 131)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 131)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6671.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 131)).boolValue () ;
      }
      if (loop_6901 && (0 == variant_6901)) {
        loop_6901 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 130)) ;
      }
      if (loop_6901) {
        variant_6901 -- ;
        const enumGalgasBool test_4 = var_superType_6710.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 132)).getter_hasKey (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 132)) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 132)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier_7301 ;
          GALGAS_methodKind joker_7171 ; // Joker input parameter
          GALGAS_bool joker_7248 ; // Joker input parameter
          GALGAS_string joker_7311 ; // Joker input parameter
          var_superType_6710.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 133)).method_searchKey (object->mAttribute_mAbstractExtensionGetterName, joker_7171, var_inheritedSignature_6774, var_inheritedDeclarationLocation_6876, joker_7248, var_inheritedReturnType_6805, var_qualifier_7301, joker_7311, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 133)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier_7301.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 143)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName_6671 = var_superType_6710.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 144)) ;
          }
        }
        var_superType_6710 = var_superType_6710.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 147)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName_6671.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 150)), GALGAS_string ("this getter is not declared by a super class"), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 150)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6671.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_7692 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 154)) ;
    cEnumerator_formalInputParameterListAST enumerator_7801 (object->mAttribute_mAbstractExtensionGetterFormalInputParameterList, kEnumeration_up) ;
    while (enumerator_7801.hasCurrentObject ()) {
      var_formalParameterListForGeneration_7692.addAssign_operation (enumerator_7801.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_7801.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 158)), enumerator_7801.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 159)), enumerator_7801.current_mFormalArgumentName (HERE), enumerator_7801.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 156)) ;
      enumerator_7801.gotoNextObject () ;
    }
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration_7692, var_returnType_6119, object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 166)), var_inheritedSignature_6774, var_inheritedReturnType_6805, var_inheritedDeclarationLocation_6876, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 163)) ;
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
  ioArgument_ioOverridingAbstractExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 192)), object->mAttribute_mAbstractExtensionGetterName  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 191)) ;
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
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_4721 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 83)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_4721.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 85)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 85)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 86)), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_4721.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 86)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 86)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 86)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_4721.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 87)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 88)), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (var_selfType_4721.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 88)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 88)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 88)) ;
    }
  }
  GALGAS_string var_baseTypeName_5246 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5285 = var_selfType_4721.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 92)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5334 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 93)) ;
  GALGAS_location var_inheritedDeclarationLocation_5405 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 94)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)).isValid ()) {
    uint32_t variant_5430 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)).uintValue () ;
    bool loop_5430 = true ;
    while (loop_5430) {
      loop_5430 = var_superType_5285.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 96)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 96)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5246.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 96)).isValid () ;
      if (loop_5430) {
        loop_5430 = var_superType_5285.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 96)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 96)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5246.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 96)).boolValue () ;
      }
      if (loop_5430 && (0 == variant_5430)) {
        loop_5430 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)) ;
      }
      if (loop_5430) {
        variant_5430 -- ;
        const enumGalgasBool test_4 = var_superType_5285.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 97)).getter_hasKey (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 97)) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 97)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier_5655 ;
          GALGAS_methodKind joker_5737 ; // Joker input parameter
          GALGAS_bool joker_5790 ; // Joker input parameter
          GALGAS_string joker_5804 ; // Joker input parameter
          var_superType_5285.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 99)).method_searchKey (object->mAttribute_mOverridingExtensionMethodName, joker_5737, var_inheritedSignature_5334, var_inheritedDeclarationLocation_5405, joker_5790, var_qualifier_5655, joker_5804, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 99)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier_5655.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 100)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName_5246 = var_superType_5285.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 101)) ;
          }
        }
        var_superType_5285 = var_superType_5285.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 104)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName_5246.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 107)), GALGAS_string ("this getter is not declared by a super class"), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 107)) ;
  }
  GALGAS_variableMap var_variableMap_6141 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 110)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6235 ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingExtensionMethodFormalParameterList, var_variableMap_6141, var_formalParameterListForGeneration_6235, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 112)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5246.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration_6235, object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 122)), var_inheritedSignature_5334, var_inheritedDeclarationLocation_5405, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 120)) ;
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
  ioArgument_ioOverridingAbstractExtensionMethodListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 147)), object->mAttribute_mOverridingExtensionMethodName  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 146)) ;
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
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_4714 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 82)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_4714.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 84)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 84)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 85)), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_4714.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 85)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 85)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 85)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_4714.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 86)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 87)), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (var_selfType_4714.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 87)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 87)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 87)) ;
    }
  }
  GALGAS_string var_baseTypeName_5239 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5278 = var_selfType_4714.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 91)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5327 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 92)) ;
  GALGAS_location var_inheritedDeclarationLocation_5398 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 93)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 94)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 94)).isValid ()) {
    uint32_t variant_5423 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 94)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 94)).uintValue () ;
    bool loop_5423 = true ;
    while (loop_5423) {
      loop_5423 = var_superType_5278.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 95)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 95)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5239.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 95)).isValid () ;
      if (loop_5423) {
        loop_5423 = var_superType_5278.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 95)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 95)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5239.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 95)).boolValue () ;
      }
      if (loop_5423 && (0 == variant_5423)) {
        loop_5423 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 94)) ;
      }
      if (loop_5423) {
        variant_5423 -- ;
        const enumGalgasBool test_4 = var_superType_5278.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 96)).getter_hasKey (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 96)) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 96)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier_5640 ;
          GALGAS_methodKind joker_5714 ; // Joker input parameter
          GALGAS_bool joker_5737 ; // Joker input parameter
          GALGAS_string joker_5751 ; // Joker input parameter
          var_superType_5278.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 98)).method_searchKey (object->mAttribute_mOverridingExtensionSetterName, joker_5714, var_inheritedSignature_5327, joker_5737, var_qualifier_5640, joker_5751, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 98)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier_5640.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 99)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName_5239 = var_superType_5278.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)) ;
          }
        }
        var_superType_5278 = var_superType_5278.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 103)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName_5239.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 106)), GALGAS_string ("this setter is not declared by a super class"), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 106)) ;
  }
  GALGAS_variableMap var_variableMap_6088 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 109)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6182 ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingExtensionSetterFormalParameterList, var_variableMap_6088, var_formalParameterListForGeneration_6182, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 111)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5239.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration_6182, object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 121)), var_inheritedSignature_5327, var_inheritedDeclarationLocation_5398, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 119)) ;
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
  ioArgument_ioOverridingAbstractExtensionSetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 146)), object->mAttribute_mOverridingExtensionSetterName  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 145)) ;
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
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_6266 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 123)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_6266.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 125)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-getter.galgas", 125)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-getter.galgas", 126)), GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_6266.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 126)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 126)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 126)) ;
  }
  GALGAS_string var_baseTypeName_6610 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_6649 = var_selfType_6266.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 130)) ;
  GALGAS_functionSignature var_inheritedSignature_6713 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 131)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType_6744 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-getter.galgas", 132)) ;
  GALGAS_location var_inheritedDeclarationLocation_6815 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 133)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 134)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 134)).isValid ()) {
    uint32_t variant_6840 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 134)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 134)).uintValue () ;
    bool loop_6840 = true ;
    while (loop_6840) {
      loop_6840 = var_superType_6649.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 135)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 135)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6610.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 135)).isValid () ;
      if (loop_6840) {
        loop_6840 = var_superType_6649.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 135)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 135)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6610.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 135)).boolValue () ;
      }
      if (loop_6840 && (0 == variant_6840)) {
        loop_6840 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas", 134)) ;
      }
      if (loop_6840) {
        variant_6840 -- ;
        const enumGalgasBool test_2 = var_superType_6649.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 136)).getter_hasKey (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 136)) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 136)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier_7261 ;
          GALGAS_methodKind joker_7114 ; // Joker input parameter
          GALGAS_bool joker_7191 ; // Joker input parameter
          GALGAS_string joker_7271 ; // Joker input parameter
          var_superType_6649.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 137)).method_searchKey (object->mAttribute_mOverridingExtensionGetterName, joker_7114, var_inheritedSignature_6713, var_inheritedDeclarationLocation_6815, joker_7191, var_inheritedReturnType_6744, var_qualifier_7261, joker_7271, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 137)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier_7261.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas", 147)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName_6610 = var_superType_6649.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 148)) ;
          }
        }
        var_superType_6649 = var_superType_6649.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 151)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName_6610.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-getter.galgas", 154)), GALGAS_string ("this getter is not declared by a super class"), fixItArray5  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 154)) ;
  }
  GALGAS_analysisContext var_analysisContext_7615 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_6266, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-getter.galgas", 162))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 157)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_8336 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_8378 ;
  GALGAS_string var_returnVariableCppName_8417 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8501 ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType_6266.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 166)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-getter.galgas", 166)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_6266.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 166)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-overriding-getter.galgas", 166)))) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 166)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType_6266.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 167)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 168)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext_7615, object->mAttribute_mOverridingExtensionGetterFormalInputParameterList, temp_6, GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionGetterInstructionList, object->mAttribute_mOverridingExtensionGetterReturnedVariableName, object->mAttribute_mOverridingExtensionGetterReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration_8336, var_returnType_8378, var_returnVariableCppName_8417, var_semanticInstructionListForGeneration_8501, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 163)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6610.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration_8336, var_returnType_8378, object->mAttribute_mOverridingExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-getter.galgas", 185)), var_inheritedSignature_6713, var_inheritedReturnType_6744, var_inheritedDeclarationLocation_6815, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 182)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 193)), GALGAS_overrideExtensionGetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 196)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 196)).add_operation (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 196)), var_selfType_6266, var_baseTypeName_6610, object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 199)), var_returnType_8378, var_returnVariableCppName_8417, var_formalParameterListForGeneration_8336, var_selfType_6266.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 203)), var_semanticInstructionListForGeneration_8501  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 194)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 192)) ;
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
  ioArgument_ioOverridingExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 227)), object->mAttribute_mOverridingExtensionGetterName  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 226)) ;
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
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas", 249)) ;
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
  GALGAS_string var_extensionReaderCode_12498 ;
  {
  routine_generateExtensionGetter (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mOverridingExtensionGetterName, object->mAttribute_mOverridingExtensionGetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 266)), object->mAttribute_mResultVarCppName, var_extensionReaderCode_12498, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 258)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 271)), object->mAttribute_mOverridingExtensionGetterName, object->mAttribute_mResultType, var_extensionReaderCode_12498 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 270))) ;
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
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_4959 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 89)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_4959.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 91)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-method.galgas", 91)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-method.galgas", 92)), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_4959.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 92)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 92)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 92)) ;
  }
  GALGAS_string var_baseTypeName_5303 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5342 = var_selfType_4959.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 96)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5391 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 97)) ;
  GALGAS_location var_inheritedDeclarationLocation_5462 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 98)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 99)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 99)).isValid ()) {
    uint32_t variant_5487 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 99)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 99)).uintValue () ;
    bool loop_5487 = true ;
    while (loop_5487) {
      loop_5487 = var_superType_5342.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 100)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 100)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5303.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 100)).isValid () ;
      if (loop_5487) {
        loop_5487 = var_superType_5342.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 100)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 100)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5303.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 100)).boolValue () ;
      }
      if (loop_5487 && (0 == variant_5487)) {
        loop_5487 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas", 99)) ;
      }
      if (loop_5487) {
        variant_5487 -- ;
        const enumGalgasBool test_2 = var_superType_5342.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 101)).getter_hasKey (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 101)) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 101)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier_5712 ;
          GALGAS_methodKind joker_5794 ; // Joker input parameter
          GALGAS_bool joker_5847 ; // Joker input parameter
          GALGAS_string joker_5861 ; // Joker input parameter
          var_superType_5342.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 103)).method_searchKey (object->mAttribute_mOverridingExtensionMethodName, joker_5794, var_inheritedSignature_5391, var_inheritedDeclarationLocation_5462, joker_5847, var_qualifier_5712, joker_5861, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 103)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier_5712.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas", 104)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName_5303 = var_superType_5342.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 105)) ;
          }
        }
        var_superType_5342 = var_superType_5342.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 108)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName_5303.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-method.galgas", 111)), GALGAS_string ("this method is not declared by a super class"), fixItArray5  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 111)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6215 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 114)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6330 ;
  GALGAS_analysisContext var_analysisContext_6352 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_4959, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-method.galgas", 121))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 116)) ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType_4959.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 126)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-method.galgas", 126)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_4959.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 126)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-overriding-method.galgas", 126)))) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 126)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType_4959.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 127)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 128)) ;
  }
  routine_analyzeRoutineBody (var_analysisContext_6352, object->mAttribute_mOverridingExtensionMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 125)), temp_6, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 130)), GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration_6330, var_formalParameterListForGeneration_6215, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 122)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5303.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration_6215, object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-method.galgas", 141)), var_inheritedSignature_5391, var_inheritedDeclarationLocation_5462, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 139)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 148)), GALGAS_overridingExtensionMethodForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("method-").add_operation (var_selfType_4959.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 151)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 151)).add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 151)), var_selfType_4959, var_baseTypeName_5303, object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 154)), var_formalParameterListForGeneration_6215, var_selfType_4959.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 156)), var_semanticInstructionListForGeneration_6330  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 149)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 147)) ;
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
  ioArgument_ioOverridingExtensionMethodListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 179)), object->mAttribute_mOverridingExtensionMethodName  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 178)) ;
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
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-method.galgas", 199)) ;
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
  GALGAS_string var_methodImplementation_10775 ;
  {
  routine_generateExtensionMethod (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation_10775, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 208)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 218)), object->mAttribute_mExtensionMethodName, var_methodImplementation_10775 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 217))) ;
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
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_4967 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 89)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_4967.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 91)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-setter.galgas", 91)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-setter.galgas", 92)), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_4967.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 92)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 92)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 92)) ;
  }
  GALGAS_string var_baseTypeName_5310 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5349 = var_selfType_4967.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 96)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5398 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 97)) ;
  GALGAS_location var_inheritedDeclarationLocation_5469 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 98)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 99)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 99)).isValid ()) {
    uint32_t variant_5494 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 99)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 99)).uintValue () ;
    bool loop_5494 = true ;
    while (loop_5494) {
      loop_5494 = var_superType_5349.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 100)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 100)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5310.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 100)).isValid () ;
      if (loop_5494) {
        loop_5494 = var_superType_5349.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 100)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 100)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5310.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 100)).boolValue () ;
      }
      if (loop_5494 && (0 == variant_5494)) {
        loop_5494 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 99)) ;
      }
      if (loop_5494) {
        variant_5494 -- ;
        const enumGalgasBool test_2 = var_superType_5349.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 101)).getter_hasKey (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 101)) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 101)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier_5711 ;
          GALGAS_methodKind joker_5785 ; // Joker input parameter
          GALGAS_bool joker_5808 ; // Joker input parameter
          GALGAS_string joker_5822 ; // Joker input parameter
          var_superType_5349.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 103)).method_searchKey (object->mAttribute_mOverridingExtensionSetterName, joker_5785, var_inheritedSignature_5398, joker_5808, var_qualifier_5711, joker_5822, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 103)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier_5711.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-setter.galgas", 104)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName_5310 = var_superType_5349.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 105)) ;
          }
        }
        var_superType_5349 = var_superType_5349.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 108)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName_5310.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-setter.galgas", 111)), GALGAS_string ("this setter is not declared by a super class"), fixItArray5  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 111)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6176 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 114)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6291 ;
  GALGAS_analysisContext var_analysisContext_6313 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_4967, GALGAS_string ("object"), var_selfType_4967  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 116)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext_6313, object->mAttribute_mOverridingExtensionSetterFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 126)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 127)), var_selfType_4967.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 128)), GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionSetterInstructionList, object->mAttribute_mEndOfSetterDeclarationLocation, var_semanticInstructionListForGeneration_6291, var_formalParameterListForGeneration_6176, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 123)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5310.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration_6176, object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-setter.galgas", 139)), var_inheritedSignature_5398, var_inheritedDeclarationLocation_5469, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 137)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 146)), GALGAS_overridingExtensionSetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 149)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 149)).add_operation (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 149)), var_selfType_4967, var_baseTypeName_5310, object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 152)), var_formalParameterListForGeneration_6176, var_selfType_4967.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 154)), var_semanticInstructionListForGeneration_6291  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 147)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 145)) ;
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
  ioArgument_ioOverridingExtensionSetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 179)), object->mAttribute_mOverridingExtensionSetterName  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 178)) ;
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
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-setter.galgas", 199)) ;
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
  GALGAS_string var_methodImplementation_10562 ;
  {
  routine_generateExtensionSetter (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 209)), object->mAttribute_mBaseTypeName, object->mAttribute_mExtensionSetterName, ioArgument_ioInclusionSet, object->mAttribute_mExtensionSetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation_10562, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 208)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType_10599 = object->mAttribute_mReceiverType ;
  GALGAS_bool var_searching_10633 = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 219)).isValid ()) {
    uint32_t variant_10648 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 219)).uintValue () ;
    bool loop_10648 = true ;
    while (loop_10648) {
      loop_10648 = var_searching_10633.isValid () ;
      if (loop_10648) {
        loop_10648 = var_searching_10633.boolValue () ;
      }
      if (loop_10648 && (0 == variant_10648)) {
        loop_10648 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 219)) ;
      }
      if (loop_10648) {
        variant_10648 -- ;
        const enumGalgasBool test_0 = var_baseType_10599.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 220)).getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 220)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 220)).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = var_baseType_10599.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 221)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 221)).getter_hasKey (object->mAttribute_mExtensionSetterName COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 221)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_baseType_10599 = var_baseType_10599.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 222)) ;
          }else if (kBoolFalse == test_1) {
            var_searching_10633 = GALGAS_bool (false) ;
          }
        }else if (kBoolFalse == test_0) {
          var_searching_10633 = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType_10599.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 230)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 230)).add_operation (object->mAttribute_mExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 230))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 230)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 231)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 233)), object->mAttribute_mExtensionSetterName, var_methodImplementation_10562 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 232))) ;
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
  result_outFlags = function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) ;
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
  result_outFlags = function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_prefixNotOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) ;
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
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) ;
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
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)).operator_or (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) ;
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
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) ;
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
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)).operator_or (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) ;
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
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) ;
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
  result_outFlags = function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 192)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (function_generateEnumerationHelperMethods (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)).operator_or (function_generateCopyConstructorAndAssignmentOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 196)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 196)) ;
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
  result_outFlags = function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 204)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 204)) ;
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
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 216)).operator_or (function_generateEnumerationHelperMethods (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 217)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 217)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 147)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("homeDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 148)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("newWithStdIn"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 155)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("retrieveAndResetTemplateString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 162)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSymbolicLinkContents"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 169)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSourceFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 178)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 185)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 192)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDateTime"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 201)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariable"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 208)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariableOrEmpty"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 217)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppLineComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 226)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppSpaceComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 233)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppTitleComment"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 240)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 249)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppChar"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 258)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsJoinedByString"), GALGAS_string ("stringlist"), GALGAS_string ("inComponents"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 267)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSequenceOfCharacters"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 278)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 296)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("verboseOutput"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 297)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("projectVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 304)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("galgasVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 311)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 318)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 325)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 335)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 342)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 353)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 364)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 376)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 383)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 394)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 405)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 417)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 424)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 435)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 446)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordIdentifierSet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 458)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordListForIdentifier"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 465)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 481)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("replacementCharacter"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 482)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeCharacterWithUnsigned"), GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 489)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 505)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compilationMode"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 506)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 513)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("errorCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 520)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("warningCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 527)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueWithMask"), GALGAS_string ("uint"), GALGAS_string ("inLowerIndex"), GALGAS_string ("uint"), GALGAS_string ("inUpperIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 534)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 552)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 553)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 560)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 574)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 575)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64MaskWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 582)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64BaseValueWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 591)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64WithBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 600)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 616)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 617)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 624)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 638)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 639)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 646)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithStringList"), GALGAS_string ("stringlist"), GALGAS_string ("inStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 655)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithLStringList"), GALGAS_string ("lstringlist"), GALGAS_string ("inLStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 664)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 680)) ;
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithBit"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 681)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 690)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fullBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 697)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithPredicateString"), GALGAS_string ("string"), GALGAS_string ("inPredicateString"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 704)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 713)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 726)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 739)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 752)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 765)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 778)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 791)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 804)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 817)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 830)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 843)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 856)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 876)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("typeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 877)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 892)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("zero"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 893)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 908)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyData"), GALGAS_string ("data"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 909)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dataWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 916)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 932)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionList"), GALGAS_string ("functionlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 933)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionWithName"), GALGAS_string ("string"), GALGAS_string ("inName"), GALGAS_string ("function"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 940)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFunctionDefined"), GALGAS_string ("string"), GALGAS_string ("inFunctionName"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 949)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 966)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pi"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 967)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doubleWithBinaryImage"), GALGAS_string ("uint64"), GALGAS_string ("inBinaryImage"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 974)) ;
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
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 991)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("start"), GALGAS_string ("timer"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 992)) ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@stringsetPredefinedTypeAST getGetterMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringsetPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_getterMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1591)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1592)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1599)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("anyString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1606)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1613)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringsetPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringsetPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getGetterMap (defineExtensionMethod_stringsetPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@binarysetPredefinedTypeAST getGetterMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_binarysetPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_getterMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1627)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1628)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nodeCount"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1635)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isEmpty"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1642)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantVariableCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1649)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ITE"), GALGAS_string ("binaryset"), GALGAS_string ("inTHENoperand"), GALGAS_string ("binaryset"), GALGAS_string ("inELSEoperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1656)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("print"), GALGAS_string ("stringlist"), GALGAS_string ("inVariableList"), GALGAS_string ("uintlist"), GALGAS_string ("inBDDCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1665)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphvizDump"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1674)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("stringlist"), GALGAS_string ("inBitNameList"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1681)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transformedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransformationArray"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1689)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1697)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1705)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1712)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1719)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1726)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigValueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1735)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedValueCount"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1744)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64ValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1751)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1758)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueListWithNameList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_string ("inNameList"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1765)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("predicateStringValue"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1772)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedStringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1779)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap10"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1786)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap021"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1793)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap102"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1800)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap120"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1807)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap201"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1814)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap210"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1821)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transitiveClosure"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1828)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("accessibleStates"), GALGAS_string ("binaryset"), GALGAS_string ("inInitialStateSet"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1835)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("implies"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1842)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("equalTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1849)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("notEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1856)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowerOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1863)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("greaterOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1870)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictGreaterThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1877)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictLowerThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1884)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetByTranslatingFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inFirstIndexToTranslate"), GALGAS_string ("uint"), GALGAS_string ("inTranslation"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1891)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsValue"), GALGAS_string ("uint64"), GALGAS_string ("inValue"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1898)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existsOnBitRange"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1905)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_binarysetPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                     extensionMethod_binarysetPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getGetterMap (defineExtensionMethod_binarysetPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@typePredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typePredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1919)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1920)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasSuperclass"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1927)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("superclass"), GALGAS_string ("type"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1934)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typePredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                     extensionMethod_typePredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typePredefinedTypeAST_getGetterMap (defineExtensionMethod_typePredefinedTypeAST_getGetterMap, NULL) ;

