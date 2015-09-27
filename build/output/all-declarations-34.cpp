#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-34.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@sharedMapTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_42161 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_42161.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_42161.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1086)) ;
    enumerator_42161.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1090)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1091)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("shared-map.galgas", 1089))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1096)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1097)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1098)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1099)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1100)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1101)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1102)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1103)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1104)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1105)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1106)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1107)) COMMA_SOURCE_FILE ("shared-map.galgas", 1095)))  COMMA_SOURCE_FILE ("shared-map.galgas", 1095)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                             categoryMethod_sharedMapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_sharedMapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@sharedMapTypeForGeneration appendDeclaration2'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             const GALGAS_bool /* constinArgument_inGenerateForGalgas_33_ */,
                                                                             const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1119)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1120)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("shared-map.galgas", 1118))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                             categoryMethod_sharedMapTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_sharedMapTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@sharedMapTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1131)) ;
  GALGAS_keySortedList var_keySortedList = GALGAS_keySortedList::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 1132)) ;
  cEnumerator_mapAutomatonStateMap enumerator_43856 (object->mAttribute_mMapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_43856.hasCurrentObject ()) {
    var_keySortedList.addAssign_operation (enumerator_43856.current_lkey (HERE).mAttribute_string, enumerator_43856.current_mStateIndex (HERE)  COMMA_SOURCE_FILE ("shared-map.galgas", 1134)) ;
    enumerator_43856.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1137)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mMapAutomatonStateMap, object->mAttribute_mMapAutomatonActionMap, object->mAttribute_mMapStateSortedList, object->mAttribute_mMapOverrideList, var_keySortedList COMMA_SOURCE_FILE ("shared-map.galgas", 1136))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                                    categoryMethod_sharedMapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_sharedMapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@mapProxyDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                           GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                           GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                           GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 20)), object->mAttribute_mMapProxyTypeName.reader_location (SOURCE_FILE ("map-proxy.galgas", 20))  COMMA_SOURCE_FILE ("map-proxy.galgas", 20)) ;
  {
  const GALGAS_mapProxyDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 21)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedMapTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 22)), object->mAttribute_mAssociatedMapTypeName.reader_location (SOURCE_FILE ("map-proxy.galgas", 22))  COMMA_SOURCE_FILE ("map-proxy.galgas", 22)) COMMA_SOURCE_FILE ("map-proxy.galgas", 22)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                               categoryMethod_mapProxyDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_mapProxyDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@mapProxyDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                          const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                          const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum ;
  GALGAS_typedPropertyList var_mapTypedAttributeList ;
  GALGAS_mapSearchMethodListAST var_searchMethodList ;
  GALGAS_bool joker_2417_3 ; // Joker input parameter
  GALGAS_bool joker_2417_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2417_1 ; // Joker input parameter
  GALGAS_bool joker_2461_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2461_2 ; // Joker input parameter
  GALGAS_attributeMap joker_2461_1 ; // Joker input parameter
  GALGAS_constructorMap joker_2519_11 ; // Joker input parameter
  GALGAS_getterMap joker_2519_10 ; // Joker input parameter
  GALGAS_setterMap joker_2519_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_2519_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_2519_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_2519_6 ; // Joker input parameter
  GALGAS_stringlist joker_2519_5 ; // Joker input parameter
  GALGAS_uint joker_2519_4 ; // Joker input parameter
  GALGAS_functionSignature joker_2519_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_2519_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_2519_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2578_6 ; // Joker input parameter
  GALGAS_bool joker_2578_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2578_4 ; // Joker input parameter
  GALGAS_string joker_2578_3 ; // Joker input parameter
  GALGAS_string joker_2578_2 ; // Joker input parameter
  GALGAS_headerKind joker_2578_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_2417_3, joker_2417_2, joker_2417_1, var_typeKindEnum, joker_2461_3, joker_2461_2, joker_2461_1, var_mapTypedAttributeList, joker_2519_11, joker_2519_10, joker_2519_9, joker_2519_8, joker_2519_7, joker_2519_6, joker_2519_5, joker_2519_4, joker_2519_3, joker_2519_2, joker_2519_1, var_searchMethodList, joker_2578_6, joker_2578_5, joker_2578_4, joker_2578_3, joker_2578_2, joker_2578_1, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 35)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("map-proxy.galgas", 45)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedMapTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the @").add_operation (object->mAttribute_mAssociatedMapTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 46)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 46))  COMMA_SOURCE_FILE ("map-proxy.galgas", 46)) ;
    var_mapTypedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 47)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 50)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 51)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 52)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 53)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 54)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedMapTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, var_associatedMapTypeIndex COMMA_SOURCE_FILE ("map-proxy.galgas", 56)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("map-proxy.galgas", 59)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("map-proxy.galgas", 62)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_mapProxyTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, var_mapProxyTypeProxy COMMA_SOURCE_FILE ("map-proxy.galgas", 65)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 67)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 68)), var_associatedMapTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("map-proxy.galgas", 68)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("map-proxy.galgas", 68)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 69)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("map-proxy.galgas", 69)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("map-proxy.galgas", 69)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 70)), var_mapProxyTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("map-proxy.galgas", 70)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("map-proxy.galgas", 70)) ;
  {
  var_classMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 72))  COMMA_SOURCE_FILE ("map-proxy.galgas", 72)), var_argList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 71)) ;
  }
  var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 77)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 78)), var_associatedMapTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("map-proxy.galgas", 78)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("map-proxy.galgas", 78)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 79)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("map-proxy.galgas", 79)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("map-proxy.galgas", 79)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 80)), var_mapProxyTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("map-proxy.galgas", 80)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("map-proxy.galgas", 80)) ;
  {
  var_classMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxyFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 82))  COMMA_SOURCE_FILE ("map-proxy.galgas", 82)), var_argList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 81)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("null"), object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 87)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 87)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 89)) ;
  var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 90)), var_associatedMapTypeIndex, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("map-proxy.galgas", 90)) ;
  var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 91)), var_lstringTypeIndex, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("map-proxy.galgas", 91)) ;
  cEnumerator_mapSearchMethodListAST enumerator_5240 (var_searchMethodList, kEnumeration_up) ;
  while (enumerator_5240.hasCurrentObject ()) {
    {
    var_constructorMap.modifier_insertKey (enumerator_5240.current_mSearchMethodName (HERE), var_constructorAttributeTypeList, GALGAS_bool (true), var_mapProxyTypeProxy, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 93)) ;
    }
    enumerator_5240.gotoNextObject () ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 101)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 108)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 115)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 122)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 129)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 136)) ;
  }
  GALGAS_getterMap var_inheritedReaderMap = var_getterMap ;
  cEnumerator_typedPropertyList enumerator_6502 (var_mapTypedAttributeList, kEnumeration_up) ;
  while (enumerator_6502.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_inheritedReaderMap.reader_hasKey (enumerator_6502.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("map-proxy.galgas", 146)) COMMA_SOURCE_FILE ("map-proxy.galgas", 146)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_6635 (var_inheritedReaderMap.reader_keySet (SOURCE_FILE ("map-proxy.galgas", 148)), kEnumeration_up) ;
      while (enumerator_6635.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_6635.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 149)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 149))  COMMA_SOURCE_FILE ("map-proxy.galgas", 149)) ;
        if (enumerator_6635.hasNextObject ()) {
          var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("map-proxy.galgas", 150)) ;
        }
        enumerator_6635.gotoNextObject () ;
      }
      GALGAS_location location_3 (enumerator_6502.current_mAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the map has a associated map proxy, which has predefined readers: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 152)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 152))  COMMA_SOURCE_FILE ("map-proxy.galgas", 152)) ;
    }else if (kBoolFalse == test_2) {
      {
      var_getterMap.modifier_insertKey (enumerator_6502.current_mAttributeName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("map-proxy.galgas", 157)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 158)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 159)), GALGAS_bool (true), enumerator_6502.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("map-proxy.galgas", 162)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 155)) ;
      }
    }
    enumerator_6502.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapProxyTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 168)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mMapProxyTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("map-proxy.galgas", 183)), GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("map-proxy.galgas", 184)), GALGAS_bool (false), var_mapTypedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 187)), var_mapTypedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, var_classMethodMap, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 194)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 195)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 196)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 197)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 198)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 199)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 200)), var_searchMethodList, GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("map-proxy.galgas", 203)), GALGAS_string ("null"), GALGAS_string ("mapproxy-").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 205)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("map-proxy.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 179)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                              categoryMethod_mapProxyDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterInSemanticContext (defineCategoryMethod_mapProxyDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@mapProxyDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                    GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typedPropertyList var_listTypeAttributeList ;
  GALGAS_mapSearchMethodListAST var_searchMethodList ;
  GALGAS_bool joker_9128_7 ; // Joker input parameter
  GALGAS_bool joker_9128_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9128_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9128_4 ; // Joker input parameter
  GALGAS_bool joker_9128_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9128_2 ; // Joker input parameter
  GALGAS_attributeMap joker_9128_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9186_11 ; // Joker input parameter
  GALGAS_getterMap joker_9186_10 ; // Joker input parameter
  GALGAS_setterMap joker_9186_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9186_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_9186_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9186_6 ; // Joker input parameter
  GALGAS_stringlist joker_9186_5 ; // Joker input parameter
  GALGAS_uint joker_9186_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9186_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9186_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9186_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9245_6 ; // Joker input parameter
  GALGAS_bool joker_9245_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9245_4 ; // Joker input parameter
  GALGAS_string joker_9245_3 ; // Joker input parameter
  GALGAS_string joker_9245_2 ; // Joker input parameter
  GALGAS_headerKind joker_9245_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_9128_7, joker_9128_6, joker_9128_5, joker_9128_4, joker_9128_3, joker_9128_2, joker_9128_1, var_listTypeAttributeList, joker_9186_11, joker_9186_10, joker_9186_9, joker_9186_8, joker_9186_7, joker_9186_6, joker_9186_5, joker_9186_4, joker_9186_3, joker_9186_2, joker_9186_1, var_searchMethodList, joker_9245_6, joker_9245_5, joker_9245_4, joker_9245_3, joker_9245_2, joker_9245_1, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 220)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map proxy ").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 230)), GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 232)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 233)), var_listTypeAttributeList, var_searchMethodList  COMMA_SOURCE_FILE ("map-proxy.galgas", 231)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("map-proxy.galgas", 229)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                        categoryMethod_mapProxyDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_semanticAnalysis (defineCategoryMethod_mapProxyDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@mapProxyTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 274)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 275)) COMMA_SOURCE_FILE ("map-proxy.galgas", 273))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 278)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 279)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 280)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 281)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 282)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 283)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 284)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 285)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 286)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 287)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 288)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 289)) COMMA_SOURCE_FILE ("map-proxy.galgas", 277)))  COMMA_SOURCE_FILE ("map-proxy.galgas", 277)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                             categoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@mapProxyTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 299)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedMapTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 300)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 302)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 303)), object->mAttribute_mAssociatedMapTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 304)), object->mAttribute_mAssociatedMapTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("map-proxy.galgas", 301))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                                    categoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@listDeclarationAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                       GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                       GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("list.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 48)), object->mAttribute_mListTypeName.reader_location (SOURCE_FILE ("list.galgas", 48))  COMMA_SOURCE_FILE ("list.galgas", 48)) ;
  {
  const GALGAS_listDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("list.galgas", 49)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2405 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2405.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2405.current_mPropertyTypeName (HERE).reader_string (SOURCE_FILE ("list.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 51)), enumerator_2405.current_mPropertyTypeName (HERE).reader_location (SOURCE_FILE ("list.galgas", 51))  COMMA_SOURCE_FILE ("list.galgas", 51)) COMMA_SOURCE_FILE ("list.galgas", 51)) ;
    }
    enumerator_2405.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                               categoryMethod_listDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_listDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@listDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                      const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                      const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("list.galgas", 65)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3356 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3356.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_3356.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("list.galgas", 67)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3573 (enumerator_3356.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_3573.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3573.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_hasGetter = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_3573.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_hasSetter = GALGAS_bool (true) ;
        }
      }
      enumerator_3573.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_3356.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("list.galgas", 77)) ;
    enumerator_3356.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("list.galgas", 80)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, var_listTypeIndex COMMA_SOURCE_FILE ("list.galgas", 82)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("list.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 86)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("list.galgas", 86)), var_listElementTypeIndex COMMA_SOURCE_FILE ("list.galgas", 84)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("list.galgas", 90)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 91)) ;
  GALGAS_formalParameterSignature var_modifierOutputFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 92)) ;
  GALGAS_formalParameterSignature var_modifierInputFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 93)) ;
  cEnumerator_typedPropertyList enumerator_4689 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_4689.hasCurrentObject ()) {
    var_enumerationDescriptor.addAssign_operation (enumerator_4689.current_mAttributeTypeProxy (HERE), enumerator_4689.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("list.galgas", 95))  COMMA_SOURCE_FILE ("list.galgas", 95)) ;
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 96)), enumerator_4689.current_mAttributeTypeProxy (HERE), enumerator_4689.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 96)) ;
    var_modifierOutputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 97)), enumerator_4689.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("list.galgas", 97)), enumerator_4689.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 97)) ;
    var_modifierInputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 98)), enumerator_4689.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 98)), enumerator_4689.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 98)) ;
    enumerator_4689.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 101)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyList"), object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("list.galgas", 102)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 102)) ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 104))  COMMA_SOURCE_FILE ("list.galgas", 104)), var_constructorAttributeTypeList, GALGAS_bool (false), var_listTypeIndex, inCompiler COMMA_SOURCE_FILE ("list.galgas", 103)) ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("list.galgas", 110)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 111)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 118)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("list.galgas", 125)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 125)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("list.galgas", 126)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 126)) ;
  }
  cEnumerator_typedPropertyList enumerator_6272 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_6272.hasCurrentObject ()) {
    const enumGalgasBool test_2 = enumerator_6272.current_mHasGetter (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      GALGAS_functionSignature temp_3 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 132)) ;
      temp_3.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 132)), var_uintType, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("list.galgas", 132)) ;
      var_getterMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_6272.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("list.galgas", 130)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("list.galgas", 130)), enumerator_6272.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("list.galgas", 130))  COMMA_SOURCE_FILE ("list.galgas", 130)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 131)), temp_3, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 133)), GALGAS_bool (true), enumerator_6272.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 136)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 129)) ;
      }
    }
    enumerator_6272.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 142)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 144))  COMMA_SOURCE_FILE ("list.galgas", 144)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 145)), var_modifierOutputFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 147)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 149)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("list.galgas", 143)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 153))  COMMA_SOURCE_FILE ("list.galgas", 153)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 154)), var_modifierOutputFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 156)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 158)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("list.galgas", 152)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 162)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 164))  COMMA_SOURCE_FILE ("list.galgas", 164)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 165)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 168)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 163)) ;
  }
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 172))  COMMA_SOURCE_FILE ("list.galgas", 172)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 173)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 176)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 171)) ;
  }
  var_modifierOutputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 179)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 179)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("list.galgas", 179)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 181))  COMMA_SOURCE_FILE ("list.galgas", 181)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 182)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 185)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 180)) ;
  }
  var_modifierOutputFormalArgumentList.drop () ; // drop instruction
  cEnumerator_typedPropertyList enumerator_8121 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_8121.hasCurrentObject ()) {
    const enumGalgasBool test_4 = enumerator_8121.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_formalParameterSignature var_setterFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 191)) ;
      var_setterFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 192)), enumerator_8121.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 192)), enumerator_8121.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 192)) ;
      var_setterFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 193)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 193)), enumerator_8121.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 193)) ;
      {
      var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_8121.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("list.galgas", 195)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("list.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 195)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("list.galgas", 195)), enumerator_8121.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("list.galgas", 195))  COMMA_SOURCE_FILE ("list.galgas", 195)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 196)), var_setterFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 199)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 194)) ;
      }
    }
    enumerator_8121.gotoNextObject () ;
  }
  var_modifierInputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("list.galgas", 205)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 205)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("list.galgas", 205)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 207))  COMMA_SOURCE_FILE ("list.galgas", 207)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 208)), var_modifierInputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 211)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 206)) ;
  }
  var_modifierInputFormalArgumentList.drop () ; // drop instruction
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("list.galgas", 216)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("list.galgas", 217)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("list.galgas", 218)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mListTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("list.galgas", 220)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("list.galgas", 235)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("list.galgas", 236)), GALGAS_bool (true), var_typedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 239)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("list.galgas", 240)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 245)), var_enumerationDescriptor, var_enumerationVariants, function_binaryConcatOperator (inCompiler COMMA_SOURCE_FILE ("list.galgas", 248)).operator_or (function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("list.galgas", 248)) COMMA_SOURCE_FILE ("list.galgas", 248)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("list.galgas", 248)) COMMA_SOURCE_FILE ("list.galgas", 248)).operator_or (function_binaryAddOperator (inCompiler COMMA_SOURCE_FILE ("list.galgas", 248)) COMMA_SOURCE_FILE ("list.galgas", 248)), var_constructorAttributeTypeList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 250)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("list.galgas", 251)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("list.galgas", 252)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("list.galgas", 253)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("list.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 257)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("list.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 231)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                              categoryMethod_listDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_enterInSemanticContext (defineCategoryMethod_listDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@listDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("list.galgas", 267)) ;
  cEnumerator_propertyInCollectionListAST enumerator_10959 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_10959.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_10959.current_mPropertyTypeName (HERE), enumerator_10959.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("list.galgas", 272))  COMMA_SOURCE_FILE ("list.galgas", 269)) ;
    enumerator_10959.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("list.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 276)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("list.galgas", 276)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("list.galgas", 274))  COMMA_SOURCE_FILE ("list.galgas", 274)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listDeclarationAST_addAssociatedElement (void) {
  enterCategoryMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                            categoryMethod_listDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_addAssociatedElement (defineCategoryMethod_listDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@listDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("list.galgas", 292)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 293)) ;
  cEnumerator_propertyInCollectionListAST enumerator_12028 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_12028.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_12028.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 295)) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_12202 (enumerator_12028.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_12202.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_12202.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_hasGetter.operator_not (SOURCE_FILE ("list.galgas", 300)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (enumerator_12202.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicate feature")  COMMA_SOURCE_FILE ("list.galgas", 301)) ;
        }
        var_hasGetter = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_12202.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_hasSetter.boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_location location_5 (enumerator_12202.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_5, GALGAS_string ("duplicate feature")  COMMA_SOURCE_FILE ("list.galgas", 306)) ;
          }
          var_hasSetter = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          GALGAS_location location_6 (enumerator_12202.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_6, GALGAS_string ("unknown feature; the features available here are: 'nogetter', 'setter'")  COMMA_SOURCE_FILE ("list.galgas", 310)) ;
        }
      }
      enumerator_12202.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_t, enumerator_12028.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("list.galgas", 313)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_12028.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("list.galgas", 318)) ;
    }
    enumerator_12028.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("list.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 322)), GALGAS_listTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, inCompiler  COMMA_SOURCE_FILE ("list.galgas", 324)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("list.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 325)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("list.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 325)), var_typedAttributeList  COMMA_SOURCE_FILE ("list.galgas", 323)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("list.galgas", 321)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                        categoryMethod_listDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_semanticAnalysis (defineCategoryMethod_listDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@listTypeForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("list.galgas", 362)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("list.galgas", 363)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("list.galgas", 361))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("list.galgas", 367)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("list.galgas", 368)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("list.galgas", 369)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 370)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 371)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 372)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 373)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 374)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("list.galgas", 375)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("list.galgas", 376)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("list.galgas", 377)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("list.galgas", 378)) COMMA_SOURCE_FILE ("list.galgas", 366)))  COMMA_SOURCE_FILE ("list.galgas", 366)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                             categoryMethod_listTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_listTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@listTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_15410 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_15410.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_15410.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("list.galgas", 389)) ;
    enumerator_15410.gotoNextObject () ;
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("list.galgas", 391)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("list.galgas", 392)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("list.galgas", 394)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("list.galgas", 395)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("list.galgas", 393))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                                    categoryMethod_listTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_listTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@structDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                         GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                         GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("struct.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 51)), object->mAttribute_mStructTypeName.reader_location (SOURCE_FILE ("struct.galgas", 51))  COMMA_SOURCE_FILE ("struct.galgas", 51)) ;
  {
  const GALGAS_structDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 52)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2443 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2443.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2443.current_mPropertyTypeName (HERE).reader_string (SOURCE_FILE ("struct.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 54)), enumerator_2443.current_mPropertyTypeName (HERE).reader_location (SOURCE_FILE ("struct.galgas", 54))  COMMA_SOURCE_FILE ("struct.galgas", 54)) COMMA_SOURCE_FILE ("struct.galgas", 54)) ;
    }
    enumerator_2443.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                               categoryMethod_structDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_structDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@structDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                        const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                        const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_structTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, var_structTypeIndex COMMA_SOURCE_FILE ("struct.galgas", 69)) ;
  }
  GALGAS_attributeMap var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 71)) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 72)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("struct.galgas", 73)) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 74)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 75)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3814 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3814.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_3814.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("struct.galgas", 77)) ;
    }
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("struct.galgas", 78)), var_attributeTypeIndex, enumerator_3814.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("struct.galgas", 78)) ;
    var_typesToIncludeInHeaderCompilation.addAssign_operation (var_attributeTypeIndex  COMMA_SOURCE_FILE ("struct.galgas", 79)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_3814.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("struct.galgas", 82)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_3814.current_mPropertyName (HERE), var_attributeTypeIndex, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 83)) ;
    }
    enumerator_3814.gotoNextObject () ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 90))  COMMA_SOURCE_FILE ("struct.galgas", 90)), var_constructorAttributeTypeList, GALGAS_bool (false), var_structTypeIndex, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 89)) ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 97)) ;
  }
  cEnumerator_typedPropertyList enumerator_4618 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_4618.hasCurrentObject ()) {
    {
    routine_enterBaseFinalGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_4618.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("struct.galgas", 102)), enumerator_4618.current_mAttributeTypeProxy (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 103)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 99)) ;
    }
    enumerator_4618.gotoNextObject () ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 108)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 110)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mStructTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 112)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mEnumeratedElementTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_enumeratedType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("struct.galgas", 125)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumeratedElementTypeName, var_enumeratedType COMMA_SOURCE_FILE ("struct.galgas", 127)) ;
    }
  }
  GALGAS_string var_defaultConstructorName = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_5667 (var_typedAttributeList, kEnumeration_up) ;
  bool bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_5667.hasCurrentObject () && bool_1) {
    while (enumerator_5667.hasCurrentObject () && bool_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_5667.current_mAttributeTypeProxy (HERE).reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 136)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_5667.current_mAttributeTypeProxy (HERE).reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 136)).operator_not (SOURCE_FILE ("struct.galgas", 136)) COMMA_SOURCE_FILE ("struct.galgas", 136)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_defaultConstructorName = GALGAS_string::makeEmptyString () ;
      }
      enumerator_5667.gotoNextObject () ;
      if (enumerator_5667.hasCurrentObject ()) {
        bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mStructTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("struct.galgas", 145)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("struct.galgas", 146)), GALGAS_bool (false), var_typedAttributeList, var_attributeMap, var_typedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 155)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 156)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("struct.galgas", 157)), function_generateDescriptionReaderUtilityMethod (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 158)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("struct.galgas", 159)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 160)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 161)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("struct.galgas", 162)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("struct.galgas", 163)), GALGAS_bool (false), var_enumeratedType, var_defaultConstructorName, GALGAS_string ("struct-").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("struct.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 167)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("struct.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 141)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                              categoryMethod_structDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_enterInSemanticContext (defineCategoryMethod_structDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@structDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mAttributeList.reader_length (SOURCE_FILE ("struct.galgas", 190)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mStructTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a structure cannot be empty: it must have at least one field")  COMMA_SOURCE_FILE ("struct.galgas", 191)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 193)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 194)) ;
  cEnumerator_propertyInCollectionListAST enumerator_7961 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_7961.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_7961.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 196)) ;
    cEnumerator_lstringlist enumerator_8084 (enumerator_7961.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_8084.hasCurrentObject ()) {
      GALGAS_location location_2 (enumerator_8084.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("a struct attribute does not accept any feature")  COMMA_SOURCE_FILE ("struct.galgas", 198)) ;
      enumerator_8084.gotoNextObject () ;
    }
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (false) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_7961.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("struct.galgas", 202)) ;
    const enumGalgasBool test_3 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 207)).reader_hasKey (enumerator_7961.current_mPropertyName (HERE).mAttribute_string COMMA_SOURCE_FILE ("struct.galgas", 207)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_m = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_8479 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 209)), kEnumeration_up) ;
      while (enumerator_8479.hasCurrentObject ()) {
        var_m.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_8479.current (HERE), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 210))  COMMA_SOURCE_FILE ("struct.galgas", 210)) ;
        enumerator_8479.gotoNextObject () ;
      }
      var_m.dotAssign_operation (GALGAS_string ("; theses names are reserved")  COMMA_SOURCE_FILE ("struct.galgas", 212)) ;
      GALGAS_location location_4 (enumerator_7961.current_mPropertyName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, var_m  COMMA_SOURCE_FILE ("struct.galgas", 213)) ;
    }
    {
    var_attributeMap.modifier_insertKey (enumerator_7961.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 215)) ;
    }
    enumerator_7961.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("struct.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 218)), GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 220)), var_typedAttributeList  COMMA_SOURCE_FILE ("struct.galgas", 219)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("struct.galgas", 217)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                        categoryMethod_structDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_semanticAnalysis (defineCategoryMethod_structDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@structTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_10219 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_10219.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_10219.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 259)) ;
    enumerator_10219.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 263)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 264)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 266)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("struct.galgas", 262))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 269)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 270)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 271)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 272)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 273)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 274)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 275)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 276)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 277)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 278)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 279)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 280)) COMMA_SOURCE_FILE ("struct.galgas", 268)))  COMMA_SOURCE_FILE ("struct.galgas", 268)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                             categoryMethod_structTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_structTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@structTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 291)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 293)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 294)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 296)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("struct.galgas", 292))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                                    categoryMethod_structTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_structTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@sortedListDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                             GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                             GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                             GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("sorted-list.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 66)), object->mAttribute_mSortedListTypeName.reader_location (SOURCE_FILE ("sorted-list.galgas", 66))  COMMA_SOURCE_FILE ("sorted-list.galgas", 66)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 67)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2914 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2914.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2914.current_mPropertyTypeName (HERE).reader_string (SOURCE_FILE ("sorted-list.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 69)), enumerator_2914.current_mPropertyTypeName (HERE).reader_location (SOURCE_FILE ("sorted-list.galgas", 69))  COMMA_SOURCE_FILE ("sorted-list.galgas", 69)) COMMA_SOURCE_FILE ("sorted-list.galgas", 69)) ;
    }
    enumerator_2914.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                               categoryMethod_sortedListDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_sortedListDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@sortedListDeclarationAST addAssociatedElement'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 79)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3626 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3626.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_3626.current_mPropertyTypeName (HERE), enumerator_3626.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 85))  COMMA_SOURCE_FILE ("sorted-list.galgas", 81)) ;
    enumerator_3626.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 89)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("sorted-list.galgas", 89)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("sorted-list.galgas", 87))  COMMA_SOURCE_FILE ("sorted-list.galgas", 87)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListDeclarationAST_addAssociatedElement (void) {
  enterCategoryMethod_addAssociatedElement (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                            categoryMethod_sortedListDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_addAssociatedElement (defineCategoryMethod_sortedListDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@sortedListDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                            const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                            const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, var_listTypeIndex COMMA_SOURCE_FILE ("sorted-list.galgas", 102)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 106)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("sorted-list.galgas", 106)), var_listElementTypeIndex COMMA_SOURCE_FILE ("sorted-list.galgas", 104)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 110)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 111)) ;
  GALGAS_formalParameterSignature var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 112)) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 113)) ;
  cEnumerator_propertyInCollectionListAST enumerator_5173 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_5173.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_5173.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("sorted-list.galgas", 115)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_5173.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("sorted-list.galgas", 118)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_5173.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("sorted-list.galgas", 119)) ;
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("sorted-list.galgas", 120)), var_attributeTypeIndex, enumerator_5173.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("sorted-list.galgas", 120)) ;
    var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("sorted-list.galgas", 121)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("sorted-list.galgas", 121)), enumerator_5173.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("sorted-list.galgas", 121)) ;
    enumerator_5173.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 124)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptySortedList"), object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("sorted-list.galgas", 125)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 125)) ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 127))  COMMA_SOURCE_FILE ("sorted-list.galgas", 127)), var_constructorAttributeTypeList, GALGAS_bool (false), var_listTypeIndex, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 126)) ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 133)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 134)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 142)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 144))  COMMA_SOURCE_FILE ("sorted-list.galgas", 144)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("sorted-list.galgas", 145)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("sorted-list.galgas", 148)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("sorted-list.galgas", 143)) ;
  }
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 152))  COMMA_SOURCE_FILE ("sorted-list.galgas", 152)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("sorted-list.galgas", 153)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("sorted-list.galgas", 156)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("sorted-list.galgas", 151)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 160)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 162))  COMMA_SOURCE_FILE ("sorted-list.galgas", 162)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("sorted-list.galgas", 163)), var_modifierFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 165)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("sorted-list.galgas", 167)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 161)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 171))  COMMA_SOURCE_FILE ("sorted-list.galgas", 171)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("sorted-list.galgas", 172)), var_modifierFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 174)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("sorted-list.galgas", 176)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 170)) ;
  }
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 180)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("sorted-list.galgas", 181)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("sorted-list.galgas", 182)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mSortedListTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 184)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mSortedListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("sorted-list.galgas", 199)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("sorted-list.galgas", 200)), GALGAS_bool (true), var_typedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 203)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 204)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 209)), var_enumerationDescriptor, var_enumerationVariants, function_binaryConcatOperator (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 212)).operator_or (function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 212)) COMMA_SOURCE_FILE ("sorted-list.galgas", 212)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 212)) COMMA_SOURCE_FILE ("sorted-list.galgas", 212)), var_constructorAttributeTypeList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 214)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 215)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 216)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 217)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptySortedList"), GALGAS_string ("sortedlist-").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("sorted-list.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 223)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("sorted-list.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 195)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                              categoryMethod_sortedListDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_enterInSemanticContext (defineCategoryMethod_sortedListDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@sortedListDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 238)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 239)) ;
  cEnumerator_propertyInCollectionListAST enumerator_9675 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_9675.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_9675.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 241)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_9675.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("sorted-list.galgas", 244)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_9675.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 249)) ;
    }
    enumerator_9675.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("sorted-list.galgas", 252)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 253)) ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_10148 (object->mAttribute_mSortDescriptorList, kEnumeration_up) ;
  while (enumerator_10148.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type ;
    var_attributeMap.method_searchKey (enumerator_10148.current_mSortedAttributeName (HERE), var_type, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 255)) ;
    var_sortDescriptorList.addAssign_operation (var_type, enumerator_10148.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("sorted-list.galgas", 256)), enumerator_10148.current_mAscending (HERE)  COMMA_SOURCE_FILE ("sorted-list.galgas", 256)) ;
    const enumGalgasBool test_0 = var_attributesUsedForSorting.reader_hasKey (enumerator_10148.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("sorted-list.galgas", 257)) COMMA_SOURCE_FILE ("sorted-list.galgas", 257)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_10148.current_mSortedAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_10148.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("sorted-list.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 258)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 258))  COMMA_SOURCE_FILE ("sorted-list.galgas", 258)) ;
    }
    var_attributesUsedForSorting.addAssign_operation (enumerator_10148.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("sorted-list.galgas", 260))  COMMA_SOURCE_FILE ("sorted-list.galgas", 260)) ;
    enumerator_10148.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("sorted-list.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 264)), GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 266)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 267)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("sorted-list.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 267)), var_typedAttributeList, var_sortDescriptorList  COMMA_SOURCE_FILE ("sorted-list.galgas", 265)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("sorted-list.galgas", 263)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                        categoryMethod_sortedListDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_semanticAnalysis (defineCategoryMethod_sortedListDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@sortedListTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 314)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 315)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("sorted-list.galgas", 313))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 319)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 320)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 321)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 322)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 323)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 324)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 325)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 326)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 327)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 328)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 329)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 330)) COMMA_SOURCE_FILE ("sorted-list.galgas", 318)))  COMMA_SOURCE_FILE ("sorted-list.galgas", 318)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                             categoryMethod_sortedListTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_sortedListTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@sortedListTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_13677 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_13677.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_13677.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 341)) ;
    enumerator_13677.gotoNextObject () ;
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 343)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 344)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 346)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSortDescriptorList COMMA_SOURCE_FILE ("sorted-list.galgas", 345))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                                    categoryMethod_sortedListTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_sortedListTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@nonterminalInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      const GALGAS_string constinArgument_inPosfix,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 49)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 50))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 45))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 45)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                             categoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@terminalCheckInstructionForGeneration appendSyntaxSignature'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                        const GALGAS_string /* constinArgument_inPosfix */,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, object->mAttribute_mLexiqueIdentifier, GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 64)), object->mAttribute_mIndexingKeyList, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 66)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 67))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 60))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 60)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                             categoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@repeatInstructionForGeneration appendSyntaxSignature'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 const GALGAS_string constinArgument_inPosfix,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_m_5F_repeated_5F_instructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 77)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 78)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4763 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_4763.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_4763.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 81)), enumerator_4763.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 80)) ;
    enumerator_4763.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_repeated_5F_instructionList, object->mAttribute_mEndOfRepeatedInstructions, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 85))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 85)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                             categoryMethod_repeatInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_repeatInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@selectInstructionForGeneration appendSyntaxSignature'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 const GALGAS_string constinArgument_inPosfix,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 100)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_5641 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_5641.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_5641.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 103)), enumerator_5641.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 102)) ;
    enumerator_5641.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 106))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 106)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                             categoryMethod_selectInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_selectInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@parseRewindInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      const GALGAS_string constinArgument_inPosfix,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstructionForGeneration * object = (const cPtr_parseRewindInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  GALGAS_location joker_6420 ; // Joker input parameter
  object->mAttribute_mListOfSemanticInstructionListForGeneration.method_first (var_instructionList, joker_6420, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 119)) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 120))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 120)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration.mSlotID,
                                             categoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@parseLoopInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    const GALGAS_string constinArgument_inPosfix,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstructionForGeneration * object = (const cPtr_parseLoopInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 128))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 128)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration.mSlotID,
                                             categoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@parseWhenInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    const GALGAS_string constinArgument_inPosfix,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstructionForGeneration * object = (const cPtr_parseWhenInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 136))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 136)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration.mSlotID,
                                             categoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category reader '@terminalCheckInstructionForGeneration compareSyntaxInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                  const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_terminalCheckInstructionForGeneration cast_10092_si ((cPtr_terminalCheckInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 192)).objectCompare (cast_10092_si.reader_mTerminalName (SOURCE_FILE ("syntaxSignature.galgas", 192)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 192)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 193)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_10092_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 194)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 195)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 195))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 194)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_10391_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_10391_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 198)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 199)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 199))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 198)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 202)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 205)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 206)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                                categoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@nonterminalInstructionForGeneration compareSyntaxInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_nonterminalInstructionForGeneration cast_11108_si ((cPtr_nonterminalInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mNonterminalName.objectCompare (cast_11108_si.reader_mNonterminalName (SOURCE_FILE ("syntaxSignature.galgas", 218)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 219)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_11108_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 220)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 221)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 221))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 220)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_11406_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_11406_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 224)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 225)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 225))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 224)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 228)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 231)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 232)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                                categoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_nonterminalInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@repeatInstructionForGeneration compareSyntaxInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_repeatInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                           const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_repeatInstructionForGeneration cast_12124_si ((cPtr_repeatInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = function_compareSyntaxSignature (object->mAttribute_m_5F_repeated_5F_instructionList, cast_12124_si.reader_m_5F_repeated_5F_instructionList (SOURCE_FILE ("syntaxSignature.galgas", 244)), cast_12124_si.reader_mEndOfRepeatedInstructions (SOURCE_FILE ("syntaxSignature.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 244)) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 245)).objectCompare (cast_12124_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 245)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 245)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 245)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_12124_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 246)), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 248)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 247)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 248)).add_operation (cast_12124_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 250)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 250)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 249))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 246)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_12805 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_12867 (cast_12124_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 253)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_12805.hasCurrentObject () && enumerator_12867.hasCurrentObject () && bool_1) {
        while (enumerator_12805.hasCurrentObject () && enumerator_12867.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_12805.current_mInstructionList (HERE), enumerator_12867.current_mInstructionList (HERE), enumerator_12867.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 254)) ;
          enumerator_12805.gotoNextObject () ;
          enumerator_12867.gotoNextObject () ;
          if (enumerator_12805.hasCurrentObject () && enumerator_12867.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_13051_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_13051_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 257)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 257)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 261)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 264)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 265)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_repeatInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                                categoryReader_repeatInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_repeatInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_repeatInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@selectInstructionForGeneration compareSyntaxInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_selectInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                           const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_selectInstructionForGeneration cast_13736_si ((cPtr_selectInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (true) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 278)).objectCompare (cast_13736_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 278)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 278)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 278)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_13736_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 279)), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 281)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 280)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 281)).add_operation (cast_13736_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 283)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 283)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 282))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 279)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_14303 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_14365 (cast_13736_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 286)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_14303.hasCurrentObject () && enumerator_14365.hasCurrentObject () && bool_1) {
        while (enumerator_14303.hasCurrentObject () && enumerator_14365.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_14303.current_mInstructionList (HERE), enumerator_14365.current_mInstructionList (HERE), enumerator_14365.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 287)) ;
          enumerator_14303.gotoNextObject () ;
          enumerator_14365.gotoNextObject () ;
          if (enumerator_14303.hasCurrentObject () && enumerator_14365.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_14549_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_14549_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 290)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 290)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 294)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 297)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 298)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_selectInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                                categoryReader_selectInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_selectInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_selectInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@semanticInstructionAST transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticInstructionAST_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                        GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                        const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                        GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticInstructionAST_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                            categoryMethod_semanticInstructionAST_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_transformInstruction (defineCategoryMethod_semanticInstructionAST_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@syntaxSendInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxSendInstruction_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                       GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                       const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                       GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                       GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxSendInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_syntaxSendInstruction.mSlotID,
                                            categoryMethod_syntaxSendInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstruction_transformInstruction (defineCategoryMethod_syntaxSendInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@terminalCheckInstruction transformInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                          GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                          GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                          GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstruction * object = (const cPtr_terminalCheckInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstruction) ;
  GALGAS_uint var_terminalSymbolIndex ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_10071 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("grammarCompilation.galgas", 194))) ;
  if (NULL != objectArray_10071) {
      macroValidSharedObject (objectArray_10071, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex = objectArray_10071->mAttribute_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex = ioArgument_ioActuallyUsedTerminalSymbolMap.reader_count (SOURCE_FILE ("grammarCompilation.galgas", 197)) ;
    {
    ioArgument_ioActuallyUsedTerminalSymbolMap.modifier_insertKey (object->mAttribute_mTerminalName, var_terminalSymbolIndex, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 198)) ;
    }
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, var_terminalSymbolIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 200))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 200)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_terminalCheckInstruction.mSlotID,
                                            categoryMethod_terminalCheckInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstruction_transformInstruction (defineCategoryMethod_terminalCheckInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@nonterminalCallInstruction transformInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalCallInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                            GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                            const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                            GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                            GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalCallInstruction * object = (const cPtr_nonterminalCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalCallInstruction) ;
  GALGAS_uint var_nonTerminalSymbolIndex ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_11105 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex, joker_11105, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 214)) ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 215))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 215)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalCallInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                            categoryMethod_nonterminalCallInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalCallInstruction_transformInstruction (defineCategoryMethod_nonterminalCallInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@repeatInstruction transformInstruction'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                   GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                   const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                   GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstruction * object = (const cPtr_repeatInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 229)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 231)) ;
  {
  routine_transformInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 232)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList = GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (var_repeatedInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 239)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_12292 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_12292.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 242)) ;
    {
    routine_transformInstructionList (enumerator_12292.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 243)) ;
    }
    var_repeatBranchList.addAssign_operation (var_syntaxInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 250)) ;
    enumerator_12292.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_repeatBranchList, var_addedNonTerminalIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 253))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 253)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_repeatInstruction.mSlotID,
                                            categoryMethod_repeatInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstruction_transformInstruction (defineCategoryMethod_repeatInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@selectInstruction transformInstruction'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                   GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                   const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                   GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstruction * object = (const cPtr_selectInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 267)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 269)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_13509 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_13509.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 271)) ;
    {
    routine_transformInstructionList (enumerator_13509.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 272)) ;
    }
    var_selectBranchList.addAssign_operation (var_syntaxInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 279)) ;
    enumerator_13509.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_selectBranchList, var_addedNonTerminalIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 282))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 282)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_selectInstruction.mSlotID,
                                            categoryMethod_selectInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstruction_transformInstruction (defineCategoryMethod_selectInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@parseRewindInstruction transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                        GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                        const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                        GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstruction * object = (const cPtr_parseRewindInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstruction) ;
  GALGAS_syntaxInstructionList var_syntaxInstructionList ;
  GALGAS_location joker_14649 ; // Joker input parameter
  object->mAttribute_mParseRewindBranchList.method_first (var_syntaxInstructionList, joker_14649, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 296)) ;
  {
  routine_transformInstructionList (var_syntaxInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 298)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_parseRewindInstruction.mSlotID,
                                            categoryMethod_parseRewindInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstruction_transformInstruction (defineCategoryMethod_parseRewindInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@parseWhenInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                      GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                      GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                      GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstruction * object = (const cPtr_parseWhenInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstruction) ;
  {
  routine_transformInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 314)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_parseWhenInstruction.mSlotID,
                                            categoryMethod_parseWhenInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstruction_transformInstruction (defineCategoryMethod_parseWhenInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@parseLoopInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                      GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                      GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                      GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstruction * object = (const cPtr_parseLoopInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstruction) ;
  {
  routine_transformInstructionList (object->mAttribute_mDoInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 330)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_parseLoopInstruction.mSlotID,
                                            categoryMethod_parseLoopInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstruction_transformInstruction (defineCategoryMethod_parseLoopInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@Xcode_PBXFileReference_CompiledMachOExecutable productExtension'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension (const cPtr_Xcode_5F_productFileReference * /* inObject */,
                                                                                                  GALGAS_string & outArgument_outProductExtension,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductExtension = GALGAS_string ("tool") ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension (void) {
  enterCategoryMethod_productExtension (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable.mSlotID,
                                        categoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@Xcode_PBXFileReference_CompiledMachOExecutable buildXcodeProject'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                                   GALGAS_string & ioArgument_outString,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable * object = (const cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 64)).add_operation (GALGAS_string (" = {isa = PBXFileReference; explicitFileType = \"compiled.mach-o.executable\"; includeInIndex = 0; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 64)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 65)).add_operation (GALGAS_string ("; sourceTree = BUILT_PRODUCTS_DIR; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 66))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 64)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@Xcode_PBXFileReference_Application productExtension'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension (const cPtr_Xcode_5F_productFileReference * /* inObject */,
                                                                                      GALGAS_string & outArgument_outProductExtension,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductExtension = GALGAS_string ("application") ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension (void) {
  enterCategoryMethod_productExtension (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_Application.mSlotID,
                                        categoryMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@Xcode_PBXFileReference_Application buildXcodeProject'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                       GALGAS_string & ioArgument_outString,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_Application * object = (const cPtr_Xcode_5F_PBXFileReference_5F_Application *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_Application) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 83)).add_operation (GALGAS_string (" = {isa = PBXFileReference; explicitFileType = \"compiled.wrapper.application\"; includeInIndex = 0; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 83)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 84)).add_operation (GALGAS_string ("; sourceTree = BUILT_PRODUCTS_DIR; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 85))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 83)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_Application.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@Xcode_PBXFileReference_cppSourceFile buildXcodeProject'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                         GALGAS_string & ioArgument_outString,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 97)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.cpp.cpp; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 97)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 98)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 97)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 98)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 98)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 99))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@Xcode_PBXFileReference_hSourceFile buildXcodeProject'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                       GALGAS_string & ioArgument_outString,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 110)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 110)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 111)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 111)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 112)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 111)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 112)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 112)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 113))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 110)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@Xcode_PBXFileReference_pchSourceFile buildXcodeProject'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                         GALGAS_string & ioArgument_outString,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 124)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 124)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 125)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.pch; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 125)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 126)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 125)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 126)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 126)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 127))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 124)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@Xcode_PBXFileReference_mSourceFile buildXcodeProject'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                       GALGAS_string & ioArgument_outString,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 138)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 138)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 139)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.obj; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 139)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 140)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 139)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 140)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 140)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 141))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 138)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@Xcode_PBXFileReference_mmSourceFile buildXcodeProject'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                        GALGAS_string & ioArgument_outString,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 152)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 152)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 153)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.cpp.objcpp; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 153)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 154)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 153)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 154)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 154)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 155))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 152)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_gifFile buildXcodeProject'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                   GALGAS_string & ioArgument_outString,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_gifFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_gifFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_gifFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 166)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 166)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 167)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = image.gif; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 167)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 168)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 167)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 168)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 168)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 169))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 166)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_gifFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_tiffFile buildXcodeProject'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                    GALGAS_string & ioArgument_outString,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_tiffFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_tiffFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_tiffFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 180)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 180)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 181)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = image.tiff; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 181)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 182)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 181)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 182)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 182)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 183))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 180)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_pngFile buildXcodeProject'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                   GALGAS_string & ioArgument_outString,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_pngFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_pngFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_pngFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 194)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 194)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 195)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = image.png; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 195)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 196)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 195)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 196)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 196)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 197))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 194)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_pngFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@Xcode_PBXFileReference_plistFile buildXcodeProject'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                     GALGAS_string & ioArgument_outString,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_plistFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_plistFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_plistFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 208)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 208)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 209)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 209)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 210)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 209)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 210)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 210)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 211))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 208)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_plistFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@Xcode_PBXFileReference_frameworkFile buildXcodeProject'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                         GALGAS_string & ioArgument_outString,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 222)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 222)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 223)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 223)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 224)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 223)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 224)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 224)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 225))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 222)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_icnsFile buildXcodeProject'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                    GALGAS_string & ioArgument_outString,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_icnsFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_icnsFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_icnsFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 236)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 236)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 237)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = image.icns; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 237)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 238)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 237)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 238)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 238)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 239))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 236)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_xibFile buildXcodeProject'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                   GALGAS_string & ioArgument_outString,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_xibFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_xibFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_xibFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 251)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 251)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 252)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = wrapper.xib; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 252)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 253)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 252)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 253)).add_operation (object->mAttribute_mFilePath.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 253)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 254))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 251)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_xibFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@Xcode_PBXFileReference_plistStringFile buildXcodeProject'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                           GALGAS_string & ioArgument_outString,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 266)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 266)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 267)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = text.plist.strings; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 267)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 268)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 267)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 268)).add_operation (object->mAttribute_mFilePath.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 268)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 269))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 266)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryModifierAST buildCategoryListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_genericCategoryMethodListMap & ioArgument_ioAbstractCategoryModifierListMapAST,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierAST * object = (const cPtr_abstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierAST) ;
  ioArgument_ioAbstractCategoryModifierListMapAST.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 61)), object->mAttribute_mAbstractCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 60)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                             categoryMethod_abstractCategoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierAST_buildCategoryListMaps (defineCategoryMethod_abstractCategoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryModifierAST buildCategoryListMaps'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                      GALGAS_genericCategoryMethodListMap & ioArgument_ioCategoryModifierListMap,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierAST * object = (const cPtr_categoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierAST) ;
  ioArgument_ioCategoryModifierListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 81)), object->mAttribute_mCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 80)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                             categoryMethod_categoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierAST_buildCategoryListMaps (defineCategoryMethod_categoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryModifierAST buildCategoryListMaps'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingCategoryModifierListMap,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryModifierAST * object = (const cPtr_overridingCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierAST) ;
  ioArgument_ioOverridingCategoryModifierListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 101)), object->mAttribute_mOverridingCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 100)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                             categoryMethod_overridingCategoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierAST_buildCategoryListMaps (defineCategoryMethod_overridingCategoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryModifierAST buildCategoryListMaps'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingAbstractCategoryModifierListMap,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryModifierAST * object = (const cPtr_overridingAbstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryModifierAST) ;
  ioArgument_ioOverridingAbstractCategoryModifierListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 121)), object->mAttribute_mOverridingCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 120)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                             categoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps (defineCategoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@abstractCategoryMethodAST buildCategoryListMaps'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & ioArgument_ioAbstractCategoryMethodListMapAST,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodAST * object = (const cPtr_abstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodAST) ;
  ioArgument_ioAbstractCategoryMethodListMapAST.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 141)), object->mAttribute_mAbstractCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 140)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                             categoryMethod_abstractCategoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodAST_buildCategoryListMaps (defineCategoryMethod_abstractCategoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@categoryMethodAST buildCategoryListMaps'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & ioArgument_ioCategoryMethodListMap,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodAST * object = (const cPtr_categoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodAST) ;
  ioArgument_ioCategoryMethodListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 161)), object->mAttribute_mCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 160)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                             categoryMethod_categoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodAST_buildCategoryListMaps (defineCategoryMethod_categoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@overridingCategoryMethodAST buildCategoryListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingCategoryMethodListMap,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryMethodAST * object = (const cPtr_overridingCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodAST) ;
  ioArgument_ioOverridingCategoryMethodListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 181)), object->mAttribute_mOverridingCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 180)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                             categoryMethod_overridingCategoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodAST_buildCategoryListMaps (defineCategoryMethod_overridingCategoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@overridingAbstractCategoryMethodAST buildCategoryListMaps'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingAbstractCategoryMethodListMap,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryMethodAST * object = (const cPtr_overridingAbstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryMethodAST) ;
  ioArgument_ioOverridingAbstractCategoryMethodListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 201)), object->mAttribute_mOverridingCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 200)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                             categoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps (defineCategoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@abstractCategoryReaderAST buildCategoryListMaps'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & ioArgument_ioAbstractCategoryReaderListMap,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderAST * object = (const cPtr_abstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderAST) ;
  ioArgument_ioAbstractCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 221)), object->mAttribute_mAbstractCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 220)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_abstractCategoryReaderAST.mSlotID,
                                             categoryMethod_abstractCategoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderAST_buildCategoryListMaps (defineCategoryMethod_abstractCategoryReaderAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@categoryReaderAST buildCategoryListMaps'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & ioArgument_ioCategoryReaderListMap,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderAST * object = (const cPtr_categoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderAST) ;
  ioArgument_ioCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 241)), object->mAttribute_mCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 240)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_categoryReaderAST.mSlotID,
                                             categoryMethod_categoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderAST_buildCategoryListMaps (defineCategoryMethod_categoryReaderAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@overridingCategoryReaderAST buildCategoryListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingCategoryReaderListMap,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryReaderAST * object = (const cPtr_overridingCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryReaderAST) ;
  ioArgument_ioOverridingCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 261)), object->mAttribute_mOverridingCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 260)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingCategoryReaderAST.mSlotID,
                                             categoryMethod_overridingCategoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryReaderAST_buildCategoryListMaps (defineCategoryMethod_overridingCategoryReaderAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@overridingAbstractCategoryReaderAST buildCategoryListMaps'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingAbstractCategoryReaderListMap,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryReaderAST * object = (const cPtr_overridingAbstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryReaderAST) ;
  ioArgument_ioOverridingAbstractCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 281)), object->mAttribute_mAbstractCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 280)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST.mSlotID,
                                             categoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps (defineCategoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps, NULL) ;

