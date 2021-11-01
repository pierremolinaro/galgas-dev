#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

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
  GALGAS_lstring var_nameForUsefulness_8396 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mListmapTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 217)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8396, var_nameForUsefulness_8396, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 218)) ;
  }
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_8566 = function_typeNameForUsefulEntitiesGraph (temp_1.getter_mAssociatedListTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 219)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8396, var_associatedTypeNameForUsefulness_8566 COMMA_SOURCE_FILE ("type-listmap.galgas", 220)) ;
  }
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_8754 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_2.getter_mListmapTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 221)), temp_3.getter_mListmapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 221)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8396, var_elementTypeNameForUsefulness_8754 COMMA_SOURCE_FILE ("type-listmap.galgas", 222)) ;
  }
  GALGAS_typeKindEnum var_typeKindEnum_9111 ;
  GALGAS_typedPropertyList var_listTypeAttributeList_9168 ;
  const GALGAS_listmapDeclarationAST temp_4 = object ;
  GALGAS_bool joker_9073_3 ; // Joker input parameter
  GALGAS_bool joker_9073_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9073_1 ; // Joker input parameter
  GALGAS_bool joker_9117 ; // Joker input parameter
  GALGAS_propertyMap joker_9174_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9174_19 ; // Joker input parameter
  GALGAS_constructorMap joker_9174_18 ; // Joker input parameter
  GALGAS_getterMap joker_9174_17 ; // Joker input parameter
  GALGAS_setterMap joker_9174_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9174_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_9174_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_9174_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9174_12 ; // Joker input parameter
  GALGAS_operators joker_9174_11 ; // Joker input parameter
  GALGAS_functionSignature joker_9174_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9174_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_9174_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9174_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9174_6 ; // Joker input parameter
  GALGAS_bool joker_9174_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9174_4 ; // Joker input parameter
  GALGAS_string joker_9174_3 ; // Joker input parameter
  GALGAS_string joker_9174_2 ; // Joker input parameter
  GALGAS_headerKind joker_9174_1 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mTypeMap (HERE).method_searchKey (temp_4.getter_mAssociatedListTypeName (HERE), joker_9073_3, joker_9073_2, joker_9073_1, var_typeKindEnum_9111, joker_9117, var_listTypeAttributeList_9168, joker_9174_20, joker_9174_19, joker_9174_18, joker_9174_17, joker_9174_16, joker_9174_15, joker_9174_14, joker_9174_13, joker_9174_12, joker_9174_11, joker_9174_10, joker_9174_9, joker_9174_8, joker_9174_7, joker_9174_6, joker_9174_5, joker_9174_4, joker_9174_3, joker_9174_2, joker_9174_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 224)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_9111.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 233)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_listmapDeclarationAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mAssociatedListTypeName (HERE).getter_location (HERE), GALGAS_string ("associated type should be a list type"), fixItArray7  COMMA_SOURCE_FILE ("type-listmap.galgas", 234)) ;
    }
  }
  const GALGAS_listmapDeclarationAST temp_8 = object ;
  const GALGAS_listmapDeclarationAST temp_9 = object ;
  const GALGAS_listmapDeclarationAST temp_10 = object ;
  const GALGAS_listmapDeclarationAST temp_11 = object ;
  const GALGAS_listmapDeclarationAST temp_12 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (temp_8.getter_mListmapTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 238)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_9.getter_mListmapTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 240)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_10.getter_mAssociatedListTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 241)), var_listTypeAttributeList_9168, GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (temp_11.getter_mListmapTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 243)), temp_12.getter_mListmapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 243))  COMMA_SOURCE_FILE ("type-listmap.galgas", 239))  COMMA_SOURCE_FILE ("type-listmap.galgas", 237)) ;
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
  cEnumerator_typedPropertyList enumerator_10580 (temp_0.getter_mAssociatedListTypedAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_10580.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_10580.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 263)) ;
    enumerator_10580.gotoNextObject () ;
  }
  const GALGAS_listmapTypeForGeneration temp_1 = object ;
  const GALGAS_listmapTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, temp_1.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 267)), temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)) COMMA_SOURCE_FILE ("type-listmap.galgas", 266))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 271)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 272)), temp_5.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 273)), temp_6.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 274)), temp_7.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 275)), temp_8.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 276)), temp_9.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), temp_10.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 278)), temp_11.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 279)), temp_12.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 280)), temp_13.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 281)), temp_14.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 282)), temp_15.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 283)) COMMA_SOURCE_FILE ("type-listmap.galgas", 270))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 270)) ;
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
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 293)) ;
  const GALGAS_listmapTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mAssociatedListMapElementTypeIndex (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 294)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = object ;
  const GALGAS_listmapTypeForGeneration temp_3 = object ;
  const GALGAS_listmapTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 296)), temp_3.getter_mAssociatedListTypeIndex (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 297)), temp_4.getter_mAssociatedListTypedAttributeList (HERE) COMMA_SOURCE_FILE ("type-listmap.galgas", 295))) ;
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
  GALGAS_string result_outString ; // Returned variable
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  const GALGAS_dictDeclarationAST temp_0 = object ;
  result_outString = GALGAS_string ("dict @").add_operation (temp_0.getter_mDictTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 15)) ;
//---
  return result_outString ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_2593 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 68)) ;
  const GALGAS_dictDeclarationAST temp_0 = object ;
  var_structAttributeList_2593.addAssign_operation (GALGAS_bool (false), temp_0.getter_mKeyTypeName (HERE), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 69)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 69))  COMMA_SOURCE_FILE ("type-dict.galgas", 69)) ;
  const GALGAS_dictDeclarationAST temp_1 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_2733 (temp_1.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_2733.hasCurrentObject ()) {
    var_structAttributeList_2593.addAssign_operation (GALGAS_bool (false), enumerator_2733.current_mPropertyTypeName (HERE), enumerator_2733.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 71))  COMMA_SOURCE_FILE ("type-dict.galgas", 71)) ;
    enumerator_2733.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_2 = object ;
  const GALGAS_dictDeclarationAST temp_3 = object ;
  const GALGAS_dictDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_2.getter_mIsPredefined (HERE), GALGAS_lstring::constructor_new (temp_3.getter_mDictTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 75)), temp_4.getter_mDictTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 75)), var_structAttributeList_2593, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 73))  COMMA_SOURCE_FILE ("type-dict.galgas", 73)) ;
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
  GALGAS_lstring var_dictionary_3842 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mDictTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 92)), temp_1.getter_mDictTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 92)) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_3842, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_3 = object ;
  const GALGAS_dictDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.getter_mKeyTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 94)), temp_4.getter_mKeyTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 94)) COMMA_SOURCE_FILE ("type-dict.galgas", 94)) ;
  }
  const GALGAS_dictDeclarationAST temp_5 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_4114 (temp_5.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_4114.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4114.current_mPropertyTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 96)), enumerator_4114.current_mPropertyTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 96)) COMMA_SOURCE_FILE ("type-dict.galgas", 96)) ;
    }
    enumerator_4114.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_keyTypeIndex_5027 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.getter_mKeyTypeName (HERE).getter_string (HERE), var_keyTypeIndex_5027 COMMA_SOURCE_FILE ("type-dict.galgas", 110)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5085 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_keyTypeIndex_5027, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 112)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_5210 = GALGAS_bool (false) ;
  const GALGAS_dictDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_5227 (temp_1.getter_mAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_5227.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_5227.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_5210.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_5227.current_mValue (HERE).getter_location (HERE), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-dict.galgas", 118)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_5210 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_5227.current_mValue (HERE).getter_location (HERE), GALGAS_string ("unknown attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 122)) ;
    }
    enumerator_5227.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5531 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 126)) ;
  GALGAS_getterMap var_getterMap_5622 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5622, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 127)) ;
  }
  GALGAS_setterMap var_setterMap_5651 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 128)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5699 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 129)) ;
  {
  const GALGAS_dictDeclarationAST temp_6 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_5531, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyDict"), temp_6.getter_mDictTypeName (HERE).getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 131)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_7 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_5622, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), temp_7.getter_mKeyTypeName (HERE).getter_string (HERE), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 139)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5622, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 146)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_6391 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 154)) ;
  GALGAS_typedPropertyList var_typedPropertyList_6439 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 155)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_6521 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 156)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_6521.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 157)), var_keyTypeIndex_5027, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 157)) ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_5210.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_6391.addAssign_operation (temp_8.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 159)), var_keyTypeIndex_5027, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 161)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 158)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_6874 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 163)) ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_5210.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_6874.addAssign_operation (temp_10.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 165)), var_keyTypeIndex_5027, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 167)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 164)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_7127 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 169)) ;
  GALGAS_string temp_12 ;
  const enumGalgasBool test_13 = var_usesSelectorsInInsertAndSearch_5210.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_7127.addAssign_operation (GALGAS_bool (true), temp_12.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 172)), var_keyTypeIndex_5027, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 170)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_7314 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 175)) ;
  const GALGAS_dictDeclarationAST temp_14 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_7389 (temp_14.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_7389.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_7524 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7389.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7524 COMMA_SOURCE_FILE ("type-dict.galgas", 177)) ;
    }
    GALGAS_bool var_hasSetter_7543 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_7570 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_6521.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 180)), var_attributeTypeIndex_7524, enumerator_7389.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 180)) ;
    var_typedPropertyList_6439.addAssign_operation (var_attributeTypeIndex_7524, enumerator_7389.current_mPropertyName (HERE), var_hasSetter_7543, var_hasSelector_7570  COMMA_SOURCE_FILE ("type-dict.galgas", 181)) ;
    var_typesToIncludeInHeaderCompilation_7314.addAssign_operation (var_attributeTypeIndex_7524  COMMA_SOURCE_FILE ("type-dict.galgas", 182)) ;
    var_enumerationDescriptor_5085.addAssign_operation (var_attributeTypeIndex_7524, enumerator_7389.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 183)) ;
    GALGAS_lstring temp_15 ;
    const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_5210.boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = enumerator_7389.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 185)) ;
    }
    var_insertMethodFormalArgumentList_6391.addAssign_operation (temp_15, var_attributeTypeIndex_7524, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 187)), enumerator_7389.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 184)) ;
    GALGAS_lstring temp_17 ;
    const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_5210.boolEnum () ;
    if (kBoolTrue == test_18) {
      temp_17 = enumerator_7389.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_18) {
      temp_17 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 190)) ;
    }
    var_removeMethodFormalArgumentList_6874.addAssign_operation (temp_17, var_attributeTypeIndex_7524, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-dict.galgas", 192)), enumerator_7389.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 189)) ;
    GALGAS_bool test_19 = var_usesSelectorsInInsertAndSearch_5210 ;
    if (kBoolTrue != test_19.boolEnum ()) {
      test_19 = var_hasSelector_7570 ;
    }
    GALGAS_lstring temp_20 ;
    const enumGalgasBool test_21 = test_19.boolEnum () ;
    if (kBoolTrue == test_21) {
      temp_20 = enumerator_7389.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_21) {
      temp_20 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 196)) ;
    }
    var_optionalMethodSignature_7127.addAssign_operation (GALGAS_bool (false), temp_20, var_attributeTypeIndex_7524, enumerator_7389.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 194)) ;
    enumerator_7389.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_22 = object ;
  var_setterMap_5651.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), temp_22.getter_mDictTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 202)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 203)), var_removeMethodFormalArgumentList_6874, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 206)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 201)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_23 = object ;
  const GALGAS_dictDeclarationAST temp_24 = object ;
  var_instanceMethodMap_5699.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("searchKey"), temp_23.getter_mDictTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 211)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 212)), var_removeMethodFormalArgumentList_6874, temp_24.getter_mDictTypeName (HERE).getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 216)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 210)) ;
  }
  const GALGAS_dictDeclarationAST temp_25 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_9218 (temp_25.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_9218.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_9265 = GALGAS_lstring::constructor_new (enumerator_9218.current_mPropertyName (HERE).getter_string (HERE).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 222)), enumerator_9218.current_mPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 222)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_9448 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9218.current_mPropertyTypeName (HERE), var_attributeTypeIndex_9448 COMMA_SOURCE_FILE ("type-dict.galgas", 223)) ;
    }
    {
    GALGAS_functionSignature temp_26 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 227)) ;
    temp_26.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 227)), var_keyTypeIndex_5027, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 227)) ;
    var_getterMap_5622.setter_insertOrReplace (var_accessorName_9265, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 226)), temp_26, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 228)), GALGAS_bool (true), var_attributeTypeIndex_9448, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 231)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 224)) ;
    }
    enumerator_9218.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_27 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_9854 (temp_27.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_9854.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_9901 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9854.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 238)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 238)), enumerator_9854.current_mPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 237)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_10187 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9854.current_mPropertyTypeName (HERE), var_attributeTypeIndex_10187 COMMA_SOURCE_FILE ("type-dict.galgas", 241)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_10228 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 246)) ;
    var_accessorFormalArgumentList_10228.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 247)), var_attributeTypeIndex_10187, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 247)), enumerator_9854.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 247)) ;
    var_accessorFormalArgumentList_10228.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 248)), var_keyTypeIndex_5027, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 248)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 248)) ;
    {
    var_setterMap_5651.setter_insertOrReplace (var_accessorName_9901, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 251)), var_accessorFormalArgumentList_10228, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 254)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 249)) ;
    }
    enumerator_9854.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_28 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_28.getter_mDictTypeName (HERE), var_getterMap_5622, var_setterMap_5651, var_instanceMethodMap_5699, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 259)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeEntry_11212 ;
  {
  const GALGAS_dictDeclarationAST temp_29 = object ;
  const GALGAS_dictDeclarationAST temp_30 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_29.getter_mDictTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 273)), temp_30.getter_mDictTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 273)), var_elementTypeEntry_11212 COMMA_SOURCE_FILE ("type-dict.galgas", 271)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_11265 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 277)) ;
  {
  var_optionalMethodMap_11265.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 278)), var_optionalMethodSignature_7127, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 278)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_31 = object ;
  const GALGAS_dictDeclarationAST temp_32 = object ;
  const GALGAS_dictDeclarationAST temp_33 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_31.getter_mDictTypeName (HERE), temp_32.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-dict.galgas", 284)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-dict.galgas", 285)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 287)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 288)), var_typedPropertyList_6439, var_constructorMap_5531, var_getterMap_5622, var_setterMap_5651, var_instanceMethodMap_5699, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 294)), var_optionalMethodMap_11265, var_enumerationDescriptor_5085, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 297)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 297)) COMMA_SOURCE_FILE ("type-dict.galgas", 297)), var_argumentTypeListForAddAssignWithFieldExpressionList_6521, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 299)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 300)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 301)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 302)), GALGAS_bool (false), var_elementTypeEntry_11212, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (temp_33.getter_mDictTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 306)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-dict.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 280)) ;
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

void routine_check_5F_K_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_12662 (inArgument_inString.getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 316)), kENUMERATION_UP) ;
  while (enumerator_12662.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_12699 = enumerator_12662.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 317)) ;
    {
    GALGAS_string joker_12786 ; // Joker input parameter
    var_explodedArray_12699.setter_popFirst (joker_12786, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 318)) ;
    }
    cEnumerator_stringlist enumerator_12804 (var_explodedArray_12699, kENUMERATION_UP) ;
    while (enumerator_12804.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_12804.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 320)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_12879 = enumerator_12804.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 321)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_12879.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.getter_location (HERE), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 323)) ;
            }
          }
        }
      }
      enumerator_12804.gotoNextObject () ;
    }
    enumerator_12662.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_13368 (inArgument_inString.getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 333)), kENUMERATION_UP) ;
  while (enumerator_13368.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_13405 = enumerator_13368.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 334)) ;
    {
    GALGAS_string joker_13492 ; // Joker input parameter
    var_explodedArray_13405.setter_popFirst (joker_13492, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 335)) ;
    }
    cEnumerator_stringlist enumerator_13510 (var_explodedArray_13405, kENUMERATION_UP) ;
    while (enumerator_13510.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_13510.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 337)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_13585 = enumerator_13510.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 338)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_13585.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_13585.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 339)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.getter_location (HERE), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 340)) ;
            }
          }
        }
      }
      enumerator_13510.gotoNextObject () ;
    }
    enumerator_13368.gotoNextObject () ;
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
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dict.galgas", 350)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 351)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 352)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 353)) ;
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
  GALGAS_lstring var_nameForUsefulness_14598 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mDictTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 367)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14598, var_nameForUsefulness_14598, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 368)) ;
  }
  const GALGAS_dictDeclarationAST temp_1 = object ;
  const GALGAS_dictDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_14762 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.getter_mDictTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 369)), temp_2.getter_mDictTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 369)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14598, var_elementTypeNameForUsefulness_14762 COMMA_SOURCE_FILE ("type-dict.galgas", 370)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_15018 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 372)) ;
  GALGAS_propertyIndexMap var_attributeMap_15060 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 373)) ;
  const GALGAS_dictDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_15110 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_15110.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_15174 = function_typeNameForUsefulEntitiesGraph (enumerator_15110.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 375)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14598, var_propertyTypeNameForUsefulness_15174 COMMA_SOURCE_FILE ("type-dict.galgas", 376)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_15348 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_15110.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 377)) ;
    GALGAS_bool var_hasSetter_15427 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_15454 = GALGAS_bool (false) ;
    var_typedAttributeList_15018.addAssign_operation (var_t_15348, enumerator_15110.current_mPropertyName (HERE), var_hasSetter_15427, var_hasSelector_15454  COMMA_SOURCE_FILE ("type-dict.galgas", 380)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 385)).getter_hasKey (enumerator_15110.current_mPropertyName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-dict.galgas", 385)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_15647 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_15724 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 387)), kENUMERATION_UP) ;
        while (enumerator_15724.hasCurrentObject ()) {
          var_m_15647.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_15724.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 388)) ;
          enumerator_15724.gotoNextObject () ;
        }
        var_m_15647.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 390)) ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_15110.current_mPropertyName (HERE).getter_location (HERE), var_m_15647, fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 391)) ;
      }
    }
    {
    var_attributeMap_15060.setter_insertKey (enumerator_15110.current_mPropertyName (HERE), var_t_15348, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 393)) ;
    }
    enumerator_15110.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_6 = object ;
  const GALGAS_dictDeclarationAST temp_7 = object ;
  const GALGAS_dictDeclarationAST temp_8 = object ;
  const GALGAS_dictDeclarationAST temp_9 = object ;
  const GALGAS_dictDeclarationAST temp_10 = object ;
  const GALGAS_dictDeclarationAST temp_11 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_6.getter_mDictTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 397)), GALGAS_dictTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_7.getter_mDictTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 399)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (temp_8.getter_mDictTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 400)), temp_9.getter_mDictTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 400)), temp_10.getter_mDictTypeName (HERE), var_typedAttributeList_15018, temp_11.getter_mKeyTypeName (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 398))  COMMA_SOURCE_FILE ("type-dict.galgas", 396)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 425)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 426)), temp_2.getter_mTypedAttributeList (HERE) COMMA_SOURCE_FILE ("type-dict.galgas", 424))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 430)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 431)), temp_5.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 432)), temp_6.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 433)), temp_7.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 434)), temp_8.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 435)), temp_9.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 436)), temp_10.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 437)), temp_11.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 438)), temp_12.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 439)), temp_13.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 440)), temp_14.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 441)), temp_15.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 442)) COMMA_SOURCE_FILE ("type-dict.galgas", 429))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 429)) ;
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
  extensionMethod_addHeaderFileName (temp_0.getter_mElementTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 452)) ;
  const GALGAS_dictTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 453)) ;
  const GALGAS_dictTypeForGeneration temp_2 = object ;
  const GALGAS_dictTypeForGeneration temp_3 = object ;
  const GALGAS_dictTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 455)), temp_3.getter_mTypedAttributeList (HERE), temp_4.getter_mKeyTypeName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 457)) COMMA_SOURCE_FILE ("type-dict.galgas", 454))) ;
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
  GALGAS_string result_outString ; // Returned variable
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  result_outString = GALGAS_string ("map @").add_operation (temp_0.getter_mMapTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 49)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_6645 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 186)) ;
  var_structAttributeList_6645.addAssign_operation (GALGAS_bool (false), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 189)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 190)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 192))  COMMA_SOURCE_FILE ("type-map.galgas", 187)) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_6836 (temp_0.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_6836.hasCurrentObject ()) {
    var_structAttributeList_6645.addAssign_operation (GALGAS_bool (false), enumerator_6836.current_mPropertyTypeName (HERE), enumerator_6836.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 199))  COMMA_SOURCE_FILE ("type-map.galgas", 194)) ;
    enumerator_6836.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_1 = object ;
  const GALGAS_mapDeclarationAST temp_2 = object ;
  const GALGAS_mapDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.getter_mIsPredefined (HERE), GALGAS_lstring::constructor_new (temp_2.getter_mMapTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 203)), temp_3.getter_mMapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 203)), var_structAttributeList_6645, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 201))  COMMA_SOURCE_FILE ("type-map.galgas", 201)) ;
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
  GALGAS_lstring var_key_7972 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mMapTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 219)), temp_1.getter_mMapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 219)) ;
  {
  const GALGAS_mapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7972, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 220)) ;
  }
  const GALGAS_mapDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_8130 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_8130.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_8130.current_mPropertyTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 222)), enumerator_8130.current_mPropertyTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 222)) COMMA_SOURCE_FILE ("type-map.galgas", 222)) ;
    }
    enumerator_8130.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_9048 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_9048 COMMA_SOURCE_FILE ("type-map.galgas", 237)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_locationTypeEntry_9183 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeEntry_9183 COMMA_SOURCE_FILE ("type-map.galgas", 239)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeIndex_9315 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_9315 COMMA_SOURCE_FILE ("type-map.galgas", 241)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 243)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_9315, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 243)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_9400 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_9483 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_9516 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_9532 (temp_1.getter_mAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_9532.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_9532.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_9483.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_9532.current_mValue (HERE).getter_location (HERE), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-map.galgas", 250)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_9483 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_9532.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_activateSuggestion_9516.operator_not (SOURCE_FILE ("type-map.galgas", 254)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_9532.current_mValue (HERE).getter_location (HERE), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 255)) ;
            }
          }
          var_activateSuggestion_9516 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_9532.current_mValue (HERE).getter_location (HERE), GALGAS_string ("unknown attribute"), fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 259)) ;
      }
    }
    enumerator_9532.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_9999 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 263)) ;
  GALGAS_getterMap var_getterMap_10090 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_10090, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 264)) ;
  }
  GALGAS_setterMap var_setterMap_10118 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 265)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_10166 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 266)) ;
  {
  const GALGAS_mapDeclarationAST temp_9 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_9999, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_9.getter_mMapTypeName (HERE).getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 268)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_10 = object ;
  const GALGAS_mapDeclarationAST temp_11 = object ;
  routine_enterConstructorWithArgument (var_constructorMap_9999, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("mapWithMapToOverride"), temp_10.getter_mMapTypeName (HERE).getter_string (HERE), GALGAS_string ("inMap"), temp_11.getter_mMapTypeName (HERE).getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 275)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 285)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 292)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 303)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 310)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 317)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 326)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_12 = object ;
  routine_enterBaseGetterWithoutArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("overriddenMap"), temp_12.getter_mMapTypeName (HERE).getter_string (HERE), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 335)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 342)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_12318 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 350)) ;
  GALGAS_typedPropertyList var_typedPropertyList_12373 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 351)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_12452 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 352)) ;
  GALGAS_string temp_13 ;
  const enumGalgasBool test_14 = var_usesSelectorsInInsertAndSearch_9483.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_12452.addAssign_operation (GALGAS_bool (true), temp_13.getter_nowhere (SOURCE_FILE ("type-map.galgas", 355)), var_stringTypeIndex_9048, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 353)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_12679 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 358)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_12679.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 359)), var_lstringTypeIndex_9315, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 359)) ;
  GALGAS_string temp_15 ;
  const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_9483.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_12318.addAssign_operation (temp_15.getter_nowhere (SOURCE_FILE ("type-map.galgas", 361)), var_lstringTypeIndex_9315, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 363)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 360)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_13043 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 365)) ;
  GALGAS_string temp_17 ;
  const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_9483.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_13043.addAssign_operation (temp_17.getter_nowhere (SOURCE_FILE ("type-map.galgas", 367)), var_lstringTypeIndex_9315, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 369)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 366)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_13312 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 371)) ;
  const GALGAS_mapDeclarationAST temp_19 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_13375 (temp_19.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_13375.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_13510 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13375.current_mPropertyTypeName (HERE), var_attributeTypeIndex_13510 COMMA_SOURCE_FILE ("type-map.galgas", 373)) ;
    }
    GALGAS_bool var_hasSetter_13529 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_13556 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13583 (enumerator_13375.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13583.hasCurrentObject ()) {
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = GALGAS_bool (kIsEqual, enumerator_13583.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_20) {
          var_hasSelector_13556 = GALGAS_bool (true) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = var_hasSelector_13556 ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = var_usesSelectorsInInsertAndSearch_9483 ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticWarning (enumerator_13583.current_mValue (HERE).getter_location (HERE), GALGAS_string ("%selector useless, map has %selectors attributes"), fixItArray23  COMMA_SOURCE_FILE ("type-map.galgas", 380)) ;
            }
          }
        }
      }
      enumerator_13583.gotoNextObject () ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_12679.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 384)), var_attributeTypeIndex_13510, enumerator_13375.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 384)) ;
    var_typedPropertyList_12373.addAssign_operation (var_attributeTypeIndex_13510, enumerator_13375.current_mPropertyName (HERE), var_hasSetter_13529, var_hasSelector_13556  COMMA_SOURCE_FILE ("type-map.galgas", 385)) ;
    var_typesToIncludeInHeaderCompilation_13312.addAssign_operation (var_attributeTypeIndex_13510  COMMA_SOURCE_FILE ("type-map.galgas", 386)) ;
    var_enumerationDescriptor_9400.addAssign_operation (var_attributeTypeIndex_13510, enumerator_13375.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 387)) ;
    GALGAS_bool test_24 = var_usesSelectorsInInsertAndSearch_9483 ;
    if (kBoolTrue != test_24.boolEnum ()) {
      test_24 = var_hasSelector_13556 ;
    }
    GALGAS_lstring temp_25 ;
    const enumGalgasBool test_26 = test_24.boolEnum () ;
    if (kBoolTrue == test_26) {
      temp_25 = enumerator_13375.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_26) {
      temp_25 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 389)) ;
    }
    var_insertMethodFormalArgumentList_12318.addAssign_operation (temp_25, var_attributeTypeIndex_13510, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 391)), enumerator_13375.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 388)) ;
    GALGAS_bool test_27 = var_usesSelectorsInInsertAndSearch_9483 ;
    if (kBoolTrue != test_27.boolEnum ()) {
      test_27 = var_hasSelector_13556 ;
    }
    GALGAS_lstring temp_28 ;
    const enumGalgasBool test_29 = test_27.boolEnum () ;
    if (kBoolTrue == test_29) {
      temp_28 = enumerator_13375.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_29) {
      temp_28 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 394)) ;
    }
    var_removeMethodFormalArgumentList_13043.addAssign_operation (temp_28, var_attributeTypeIndex_13510, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 396)), enumerator_13375.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 393)) ;
    GALGAS_bool test_30 = var_usesSelectorsInInsertAndSearch_9483 ;
    if (kBoolTrue != test_30.boolEnum ()) {
      test_30 = var_hasSelector_13556 ;
    }
    GALGAS_lstring temp_31 ;
    const enumGalgasBool test_32 = test_30.boolEnum () ;
    if (kBoolTrue == test_32) {
      temp_31 = enumerator_13375.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_32) {
      temp_31 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 400)) ;
    }
    var_optionalMethodSignature_12452.addAssign_operation (GALGAS_bool (false), temp_31, var_attributeTypeIndex_13510, enumerator_13375.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 398)) ;
    enumerator_13375.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_33 = object ;
  cEnumerator_insertMethodListAST enumerator_14865 (temp_33.getter_mInsertMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_14865.hasCurrentObject ()) {
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      test_34 = var_setterMap_10118.getter_hasKey (enumerator_14865.current_mInsertMethodName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-map.galgas", 406)).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <C_FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (enumerator_14865.current_mInsertMethodName (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_14865.current_mInsertMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 407)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 407)), fixItArray35  COMMA_SOURCE_FILE ("type-map.galgas", 407)) ;
      }
    }
    if (kBoolFalse == test_34) {
      {
      var_setterMap_10118.setter_insertOrReplace (enumerator_14865.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 411)), var_insertMethodFormalArgumentList_12318, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 414)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 409)) ;
      }
    }
    enumerator_14865.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_36 = object ;
  cEnumerator_mapRemoveMethodListAST enumerator_15328 (temp_36.getter_mRemoveMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_15328.hasCurrentObject ()) {
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      test_37 = var_setterMap_10118.getter_hasKey (enumerator_15328.current_mMethodName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-map.galgas", 421)).boolEnum () ;
      if (kBoolTrue == test_37) {
        TC_Array <C_FixItDescription> fixItArray38 ;
        inCompiler->emitSemanticError (enumerator_15328.current_mMethodName (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_15328.current_mMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 422)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 422)), fixItArray38  COMMA_SOURCE_FILE ("type-map.galgas", 422)) ;
      }
    }
    if (kBoolFalse == test_37) {
      {
      var_setterMap_10118.setter_insertOrReplace (enumerator_15328.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 426)), var_removeMethodFormalArgumentList_13043, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 429)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 424)) ;
      }
    }
    enumerator_15328.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_39 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_15867 (temp_39.getter_mSearchMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_15867.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_searchMethodFormalArgumentList_15936 = var_removeMethodFormalArgumentList_13043 ;
    enumGalgasBool test_40 = kBoolTrue ;
    if (kBoolTrue == test_40) {
      test_40 = enumerator_15867.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_40) {
        GALGAS_lstring temp_41 ;
        const enumGalgasBool test_42 = var_usesSelectorsInInsertAndSearch_9483.boolEnum () ;
        if (kBoolTrue == test_42) {
          temp_41 = GALGAS_string ("keyLocation").getter_nowhere (SOURCE_FILE ("type-map.galgas", 439)) ;
        }else if (kBoolFalse == test_42) {
          temp_41 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 439)) ;
        }
        var_searchMethodFormalArgumentList_15936.addAssign_operation (temp_41, var_locationTypeEntry_9183, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 441)), GALGAS_string ("outKeyLocation")  COMMA_SOURCE_FILE ("type-map.galgas", 438)) ;
      }
    }
    {
    var_instanceMethodMap_10166.setter_insertKey (enumerator_15867.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 446)), var_searchMethodFormalArgumentList_15936, enumerator_15867.current_mSearchMethodName (HERE).getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 450)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 444)) ;
    }
    enumerator_15867.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_43 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_16575 (temp_43.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_16575.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_16622 = GALGAS_lstring::constructor_new (enumerator_16575.current_mPropertyName (HERE).getter_string (HERE).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 457)), enumerator_16575.current_mPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 457)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_16805 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_16575.current_mPropertyTypeName (HERE), var_attributeTypeIndex_16805 COMMA_SOURCE_FILE ("type-map.galgas", 458)) ;
    }
    {
    GALGAS_functionSignature temp_44 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 462)) ;
    temp_44.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 462)), var_stringTypeIndex_9048, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 462)) ;
    var_getterMap_10090.setter_insertOrReplace (var_accessorName_16622, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 461)), temp_44, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 463)), GALGAS_bool (true), var_attributeTypeIndex_16805, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 466)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 459)) ;
    }
    enumerator_16575.gotoNextObject () ;
  }
  enumGalgasBool test_45 = kBoolTrue ;
  if (kBoolTrue == test_45) {
    const GALGAS_mapDeclarationAST temp_46 = object ;
    test_45 = GALGAS_bool (kIsSupOrEqual, temp_46.getter_mInsertOrReplaceDeclarationListAST (HERE).getter_length (SOURCE_FILE ("type-map.galgas", 471)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_45) {
      GALGAS_location var_insertOrReplaceLocation_17245 ;
      const GALGAS_mapDeclarationAST temp_47 = object ;
      temp_47.getter_mInsertOrReplaceDeclarationListAST (HERE).method_first (var_insertOrReplaceLocation_17245, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 473)) ;
      {
      var_setterMap_10118.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_17245  COMMA_SOURCE_FILE ("type-map.galgas", 475)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 476)), var_insertMethodFormalArgumentList_12318, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 479)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 474)) ;
      }
    }
  }
  const GALGAS_mapDeclarationAST temp_48 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_17699 (temp_48.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_17699.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_17746 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_17699.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 486)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 486)), enumerator_17699.current_mPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 485)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_18032 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_17699.current_mPropertyTypeName (HERE), var_attributeTypeIndex_18032 COMMA_SOURCE_FILE ("type-map.galgas", 489)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_18099 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 494)) ;
    var_accessorFormalArgumentList_18099.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 495)), var_attributeTypeIndex_18032, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 495)), enumerator_17699.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 495)) ;
    var_accessorFormalArgumentList_18099.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 496)), var_stringTypeIndex_9048, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 496)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 496)) ;
    {
    var_setterMap_10118.setter_insertOrReplace (var_accessorName_17746, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 499)), var_accessorFormalArgumentList_18099, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 502)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 497)) ;
    }
    enumerator_17699.gotoNextObject () ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_18564 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 507)) ;
  {
  var_optionalMethodMap_18564.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 508)), var_optionalMethodSignature_12452, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 508)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_49 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_49.getter_mMapTypeName (HERE), var_getterMap_10090, var_setterMap_10118, var_instanceMethodMap_10166, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 510)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeEntry_19213 ;
  {
  const GALGAS_mapDeclarationAST temp_50 = object ;
  const GALGAS_mapDeclarationAST temp_51 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_50.getter_mMapTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 524)), temp_51.getter_mMapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 524)), var_elementTypeEntry_19213 COMMA_SOURCE_FILE ("type-map.galgas", 522)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_52 = object ;
  const GALGAS_mapDeclarationAST temp_53 = object ;
  const GALGAS_mapDeclarationAST temp_54 = object ;
  const GALGAS_mapDeclarationAST temp_55 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_52.getter_mMapTypeName (HERE), temp_53.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-map.galgas", 532)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-map.galgas", 533)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 535)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 536)), var_typedPropertyList_12373, var_constructorMap_9999, var_getterMap_10090, var_setterMap_10118, var_instanceMethodMap_10166, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 542)), var_optionalMethodMap_18564, var_enumerationDescriptor_9400, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 545)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 545)) COMMA_SOURCE_FILE ("type-map.galgas", 545)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 545)) COMMA_SOURCE_FILE ("type-map.galgas", 545)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-map.galgas", 545)) COMMA_SOURCE_FILE ("type-map.galgas", 545)), var_argumentTypeListForAddAssignWithFieldExpressionList_12679, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 547)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 548)), temp_54.getter_mSearchMethodList (HERE), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 550)), GALGAS_bool (false), var_elementTypeEntry_19213, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (temp_55.getter_mMapTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 554)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-map.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 528)) ;
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
  GALGAS_lstring var_nameForUsefulness_21210 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mMapTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 584)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_21210, var_nameForUsefulness_21210, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 585)) ;
  }
  const GALGAS_mapDeclarationAST temp_1 = object ;
  const GALGAS_mapDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_21373 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.getter_mMapTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 586)), temp_2.getter_mMapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 586)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_21210, var_elementTypeNameForUsefulness_21373 COMMA_SOURCE_FILE ("type-map.galgas", 587)) ;
  }
  GALGAS_bool var_usesSelectorsInInsertAndSearch_21611 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_21644 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_3 = object ;
  cEnumerator_lstringlist enumerator_21660 (temp_3.getter_mAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_21660.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, enumerator_21660.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_usesSelectorsInInsertAndSearch_21611 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_21660.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_activateSuggestion_21644 = GALGAS_bool (false) ;
        }
      }
    }
    enumerator_21660.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_21923 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 599)) ;
  GALGAS_propertyIndexMap var_attributeMap_21965 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 600)) ;
  const GALGAS_mapDeclarationAST temp_6 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_22015 (temp_6.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_22015.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_22079 = function_typeNameForUsefulEntitiesGraph (enumerator_22015.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 602)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_21210, var_propertyTypeNameForUsefulness_22079 COMMA_SOURCE_FILE ("type-map.galgas", 603)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_22253 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_22015.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 604)) ;
    GALGAS_bool var_hasSetter_22332 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_22359 = GALGAS_bool (false) ;
    var_typedAttributeList_21923.addAssign_operation (var_t_22253, enumerator_22015.current_mPropertyName (HERE), var_hasSetter_22332, var_hasSelector_22359  COMMA_SOURCE_FILE ("type-map.galgas", 607)) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 612)).getter_hasKey (enumerator_22015.current_mPropertyName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-map.galgas", 612)).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_string var_m_22552 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_22629 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 614)), kENUMERATION_UP) ;
        while (enumerator_22629.hasCurrentObject ()) {
          var_m_22552.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_22629.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 615)) ;
          enumerator_22629.gotoNextObject () ;
        }
        var_m_22552.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 617)) ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_22015.current_mPropertyName (HERE).getter_location (HERE), var_m_22552, fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 618)) ;
      }
    }
    {
    var_attributeMap_21965.setter_insertKey (enumerator_22015.current_mPropertyName (HERE), var_t_22253, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 620)) ;
    }
    enumerator_22015.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_22860 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 623)) ;
  const GALGAS_mapDeclarationAST temp_9 = object ;
  cEnumerator_insertMethodListAST enumerator_22926 (temp_9.getter_mInsertMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_22926.hasCurrentObject ()) {
    {
    var_insertMethodMap_22860.setter_insertKey (enumerator_22926.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 625)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22926.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 626)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22926.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 627)) ;
    }
    enumerator_22926.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_23186 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 630)) ;
  const GALGAS_mapDeclarationAST temp_10 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_23234 (temp_10.getter_mSearchMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_23234.hasCurrentObject ()) {
    {
    var_searchMethodMap_23186.setter_insertKey (enumerator_23234.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 632)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_23234.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 633)) ;
    }
    enumerator_23234.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_11 = object ;
  cEnumerator_mapRemoveMethodListAST enumerator_23430 (temp_11.getter_mRemoveMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_23430.hasCurrentObject ()) {
    {
    var_insertMethodMap_22860.setter_insertKey (enumerator_23430.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 637)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_23430.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 638)) ;
    }
    enumerator_23430.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_12 = object ;
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_23670 (temp_12.getter_mInsertOrReplaceDeclarationListAST (HERE), kENUMERATION_UP) ;
  GALGAS_uint index_23633 ((uint32_t) 0) ;
  while (enumerator_23670.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsStrictSup, index_23633.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticWarning (enumerator_23670.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray14  COMMA_SOURCE_FILE ("type-map.galgas", 643)) ;
      }
    }
    enumerator_23670.gotoNextObject () ;
    index_23633.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 641)) ;
  }
  const GALGAS_mapDeclarationAST temp_15 = object ;
  GALGAS_bool var_hasInsertOrReplaceModifier_23897 = GALGAS_bool (kIsStrictSup, temp_15.getter_mInsertOrReplaceDeclarationListAST (HERE).getter_length (SOURCE_FILE ("type-map.galgas", 646)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = var_hasInsertOrReplaceModifier_23897.operator_and (var_insertMethodMap_22860.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 647)) COMMA_SOURCE_FILE ("type-map.galgas", 647)).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_24088 ;
      const GALGAS_mapDeclarationAST temp_17 = object ;
      temp_17.getter_mInsertOrReplaceDeclarationListAST (HERE).method_first (var_insertOrReplaceDeclarationLocation_24088, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 649)) ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_24088, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray18  COMMA_SOURCE_FILE ("type-map.galgas", 650)) ;
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
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (temp_19.getter_mMapTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 654)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_20.getter_mMapTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 656)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (temp_21.getter_mMapTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 657)), temp_22.getter_mMapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 657)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 657)), temp_23.getter_mMapTypeName (HERE), var_typedAttributeList_21923, temp_24.getter_mInsertMethodList (HERE), temp_25.getter_mSearchMethodList (HERE), temp_26.getter_mRemoveMethodList (HERE), var_hasInsertOrReplaceModifier_23897, var_activateSuggestion_21644  COMMA_SOURCE_FILE ("type-map.galgas", 655))  COMMA_SOURCE_FILE ("type-map.galgas", 653)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 690)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 691)), temp_2.getter_mTypedAttributeList (HERE), temp_3.getter_mSearchMethodList (HERE) COMMA_SOURCE_FILE ("type-map.galgas", 689))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 696)), temp_5.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 697)), temp_6.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 698)), temp_7.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 699)), temp_8.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 700)), temp_9.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 701)), temp_10.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 702)), temp_11.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 703)), temp_12.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 704)), temp_13.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 705)), temp_14.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 706)), temp_15.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 707)), temp_16.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 708)) COMMA_SOURCE_FILE ("type-map.galgas", 695))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 695)) ;
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
  cEnumerator_typedPropertyList enumerator_27106 (temp_0.getter_mTypedAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_27106.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_27106.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 719)) ;
    enumerator_27106.gotoNextObject () ;
  }
  const GALGAS_mapTypeForGeneration temp_1 = object ;
  const GALGAS_mapTypeForGeneration temp_2 = object ;
  const GALGAS_mapTypeForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, temp_1.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 723)), temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 724)), temp_3.getter_mTypedAttributeList (HERE) COMMA_SOURCE_FILE ("type-map.galgas", 722))) ;
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
  extensionMethod_addHeaderFileName (temp_0.getter_mElementTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 735)) ;
  const GALGAS_mapTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 736)) ;
  const GALGAS_mapTypeForGeneration temp_2 = object ;
  const GALGAS_mapTypeForGeneration temp_3 = object ;
  const GALGAS_mapTypeForGeneration temp_4 = object ;
  const GALGAS_mapTypeForGeneration temp_5 = object ;
  const GALGAS_mapTypeForGeneration temp_6 = object ;
  const GALGAS_mapTypeForGeneration temp_7 = object ;
  const GALGAS_mapTypeForGeneration temp_8 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 738)), temp_3.getter_mTypedAttributeList (HERE), temp_4.getter_mInsertMethodList (HERE), temp_5.getter_mSearchMethodList (HERE), temp_6.getter_mRemoveMethodList (HERE), temp_7.getter_mHasInsertOrReplaceModifier (HERE), temp_8.getter_mActivateSuggestions (HERE) COMMA_SOURCE_FILE ("type-map.galgas", 737))) ;
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
  GALGAS_lstring var_key_1201 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mMapEntryTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 20)), temp_1.getter_mMapEntryTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-map-entry.galgas", 20)) ;
  {
  const GALGAS_mapEntryDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1201, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 21)) ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_3 = object ;
  const GALGAS_mapEntryDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1201, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.getter_mAssociatedMapTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 23)), temp_4.getter_mAssociatedMapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-map-entry.galgas", 23)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 22)) ;
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
  ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (temp_0.getter_mAssociatedMapTypeName (HERE), joker_2253_3, joker_2253_2, joker_2253_1, var_typeKindEnum_2291, joker_2297_3, joker_2297_2, joker_2297_1, var_mapTypedAttributeList_2349, joker_2355_11, joker_2355_10, joker_2355_9, joker_2355_8, joker_2355_7, joker_2355_6, joker_2355_5, joker_2355_4, joker_2355_3, joker_2355_2, joker_2355_1, var_searchMethodList_2408, joker_2414_6, joker_2414_5, joker_2414_4, joker_2414_3, joker_2414_2, joker_2414_1, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 39)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_2291.objectCompare (GALGAS_typeKindEnum::constructor_sharedMapType (SOURCE_FILE ("type-map-entry.galgas", 49)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_mapEntryDeclarationAST temp_2 = object ;
      const GALGAS_mapEntryDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.getter_mAssociatedMapTypeName (HERE).getter_location (HERE), GALGAS_string ("the @").add_operation (temp_3.getter_mAssociatedMapTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 50)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 50)), fixItArray4  COMMA_SOURCE_FILE ("type-map-entry.galgas", 50)) ;
      var_mapTypedAttributeList_2349 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 51)) ;
    }
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_2652 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 54)) ;
  GALGAS_constructorMap var_constructorMap_2713 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 55)) ;
  GALGAS_getterMap var_getterMap_2804 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_2804, inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 56)) ;
  }
  GALGAS_setterMap var_setterMap_2833 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 57)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_2881 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 58)) ;
  GALGAS_classMethodMap var_classMethodMap_2922 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 59)) ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedMapTypeIndex_3079 ;
  {
  const GALGAS_mapEntryDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.getter_mAssociatedMapTypeName (HERE), var_associatedMapTypeIndex_3079 COMMA_SOURCE_FILE ("type-map-entry.galgas", 61)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_3208 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_3208 COMMA_SOURCE_FILE ("type-map-entry.galgas", 63)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeIndex_3340 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_3340 COMMA_SOURCE_FILE ("type-map-entry.galgas", 65)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_mapEntryTypeIndex_3478 ;
  {
  const GALGAS_mapEntryDeclarationAST temp_6 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_6.getter_mMapEntryTypeName (HERE), var_mapEntryTypeIndex_3478 COMMA_SOURCE_FILE ("type-map-entry.galgas", 67)) ;
  }
  GALGAS_formalParameterSignature var_argList_3569 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 69)) ;
  var_argList_3569.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 70)), var_associatedMapTypeIndex_3079, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-entry.galgas", 70)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 70)) ;
  var_argList_3569.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 71)), var_lstringTypeIndex_3340, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-entry.galgas", 71)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 71)) ;
  var_argList_3569.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 72)), var_mapEntryTypeIndex_3478, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-entry.galgas", 72)), GALGAS_string ("outEntry")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 72)) ;
  {
  var_classMethodMap_2922.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeEntry"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 74))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 74)), var_argList_3569, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 73)) ;
  }
  {
  var_classMethodMap_2922.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeOptionalEntry"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 79))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 79)), var_argList_3569, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 78)) ;
  }
  var_argList_3569 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 84)) ;
  var_argList_3569.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 85)), var_associatedMapTypeIndex_3079, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-entry.galgas", 85)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 85)) ;
  var_argList_3569.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 86)), var_stringTypeIndex_3208, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-entry.galgas", 86)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 86)) ;
  var_argList_3569.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 87)), var_mapEntryTypeIndex_3478, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-entry.galgas", 87)), GALGAS_string ("outEntry")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 87)) ;
  {
  var_classMethodMap_2922.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeEntryFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 89))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 89)), var_argList_3569, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 88)) ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_7 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_2713, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("null"), temp_7.getter_mMapEntryTypeName (HERE).getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 94)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_4859 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 102)) ;
  var_constructorAttributeTypeList_4859.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 103)), var_associatedMapTypeIndex_3079, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 103)) ;
  var_constructorAttributeTypeList_4859.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 104)), var_lstringTypeIndex_3340, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 104)) ;
  cEnumerator_mapSearchMethodListAST enumerator_5070 (var_searchMethodList_2408, kENUMERATION_UP) ;
  while (enumerator_5070.hasCurrentObject ()) {
    {
    var_constructorMap_2713.setter_insertKey (enumerator_5070.current_mSearchMethodName (HERE), var_constructorAttributeTypeList_4859, GALGAS_bool (true), var_mapEntryTypeIndex_3478, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 106)) ;
    }
    enumerator_5070.gotoNextObject () ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2804, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 114)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2804, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 121)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2804, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 128)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2804, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 135)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2804, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 142)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2804, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 149)) ;
  }
  GALGAS_getterMap var_inheritedGetterMap_6427 = var_getterMap_2804 ;
  cEnumerator_typedPropertyList enumerator_6483 (var_mapTypedAttributeList_2349, kENUMERATION_UP) ;
  while (enumerator_6483.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_inheritedGetterMap_6427.getter_hasKey (enumerator_6483.current_mPropertyName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-map-entry.galgas", 159)).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_string var_s_6594 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_6614 (var_inheritedGetterMap_6427.getter_keySet (SOURCE_FILE ("type-map-entry.galgas", 161)), kENUMERATION_UP) ;
        while (enumerator_6614.hasCurrentObject ()) {
          var_s_6594.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_6614.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 162)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 162)) ;
          if (enumerator_6614.hasNextObject ()) {
            var_s_6594.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 163)) ;
          }
          enumerator_6614.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_6483.current_mPropertyName (HERE).getter_location (HERE), GALGAS_string ("the map has a associated map entry, which has predefined getters: ").add_operation (var_s_6594, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 165)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 165)), fixItArray9  COMMA_SOURCE_FILE ("type-map-entry.galgas", 165)) ;
      }
    }
    if (kBoolFalse == test_8) {
      {
      var_getterMap_2804.setter_insertKey (enumerator_6483.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map-entry.galgas", 170)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 171)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 172)), GALGAS_bool (true), enumerator_6483.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map-entry.galgas", 175)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 168)) ;
      }
    }
    enumerator_6483.gotoNextObject () ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_10 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_10.getter_mMapEntryTypeName (HERE), var_getterMap_2804, var_setterMap_2833, var_instanceMethodMap_2881, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 181)) ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_11 = object ;
  const GALGAS_mapEntryDeclarationAST temp_12 = object ;
  const GALGAS_mapEntryDeclarationAST temp_13 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_11.getter_mMapEntryTypeName (HERE), temp_12.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-map-entry.galgas", 197)), GALGAS_typeKindEnum::constructor_sharedMapEntryType (SOURCE_FILE ("type-map-entry.galgas", 198)), GALGAS_bool (false), var_mapTypedAttributeList_2349, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 201)), var_mapTypedAttributeList_2349, var_constructorMap_2713, var_getterMap_2804, var_setterMap_2833, var_instanceMethodMap_2881, var_classMethodMap_2922, var_optionalMethodMap_2652, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 209)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map-entry.galgas", 210)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-map-entry.galgas", 210)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 210)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 211)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 212)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 213)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 214)), var_searchMethodList_2408, GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-map-entry.galgas", 217)), GALGAS_string ("null"), GALGAS_string ("mapentry-").add_operation (temp_13.getter_mMapEntryTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-map-entry.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 219)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-map-entry.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 193)) ;
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
  GALGAS_lstring var_nameForUsefulness_9017 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mMapEntryTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 237)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9017, var_nameForUsefulness_9017, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 238)) ;
  }
  GALGAS_typedPropertyList var_listTypeAttributeList_9323 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_9382 ;
  const GALGAS_mapEntryDeclarationAST temp_1 = object ;
  GALGAS_bool joker_9271_7 ; // Joker input parameter
  GALGAS_bool joker_9271_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9271_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9271_4 ; // Joker input parameter
  GALGAS_bool joker_9271_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9271_2 ; // Joker input parameter
  GALGAS_propertyMap joker_9271_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9329_11 ; // Joker input parameter
  GALGAS_getterMap joker_9329_10 ; // Joker input parameter
  GALGAS_setterMap joker_9329_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9329_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_9329_7 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_9329_6 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9329_5 ; // Joker input parameter
  GALGAS_operators joker_9329_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9329_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9329_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9329_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9388_6 ; // Joker input parameter
  GALGAS_bool joker_9388_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9388_4 ; // Joker input parameter
  GALGAS_string joker_9388_3 ; // Joker input parameter
  GALGAS_string joker_9388_2 ; // Joker input parameter
  GALGAS_headerKind joker_9388_1 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mTypeMap (HERE).method_searchKey (temp_1.getter_mAssociatedMapTypeName (HERE), joker_9271_7, joker_9271_6, joker_9271_5, joker_9271_4, joker_9271_3, joker_9271_2, joker_9271_1, var_listTypeAttributeList_9323, joker_9329_11, joker_9329_10, joker_9329_9, joker_9329_8, joker_9329_7, joker_9329_6, joker_9329_5, joker_9329_4, joker_9329_3, joker_9329_2, joker_9329_1, var_searchMethodList_9382, joker_9388_6, joker_9388_5, joker_9388_4, joker_9388_3, joker_9388_2, joker_9388_1, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 240)) ;
  const GALGAS_mapEntryDeclarationAST temp_2 = object ;
  const GALGAS_mapEntryDeclarationAST temp_3 = object ;
  const GALGAS_mapEntryDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map entry ").add_operation (temp_2.getter_mMapEntryTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 250)), GALGAS_mapEntryTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_3.getter_mMapEntryTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 252)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_4.getter_mAssociatedMapTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 253)), var_listTypeAttributeList_9323, var_searchMethodList_9382  COMMA_SOURCE_FILE ("type-map-entry.galgas", 251))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 249)) ;
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
  GALGAS_uint index_2102_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2102 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2102.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_2102.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 44)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_2102.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 44)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "C_Compiler * inCompiler\n"
        "                                       " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  GALGAS_" ;
      result << enumerator_2102.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 46)).stringValue () ;
      result << " result ;\n"
        "  const cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) getAttributeListPointer (inCompiler, " ;
      result << enumerator_2102.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 47)).stringValue () ;
      result << " COMMA_THERE) ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_2102.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 50)).stringValue () ;
      result << ";\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_2102_IDX.increment () ;
      enumerator_2102.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3042_IDX (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_3042 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3042.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_3042.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 58)).stringValue () ;
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
      result << enumerator_3042.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 63)).stringValue () ;
      result << ", inCompiler COMMA_THERE) ;\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_3042_IDX.increment () ;
      enumerator_3042.gotoNextObject () ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapEntryGenerationTemplate_mapEntryTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 294)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 295)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 293))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 298)), temp_3.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 299)), temp_4.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 300)), temp_5.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 301)), temp_6.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 302)), temp_7.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 303)), temp_8.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 304)), temp_9.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 305)), temp_10.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 306)), temp_11.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 307)), temp_12.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 308)), temp_13.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 309)), temp_14.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 310)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 297))), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 297)) ;
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
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 320)) ;
  const GALGAS_mapEntryTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mAssociatedMapTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 321)) ;
  const GALGAS_mapEntryTypeForGeneration temp_2 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_3 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_4 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_5 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapEntryGenerationTemplate_mapEntryTypeSpecificImplementation (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 323)), temp_3.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 324)), temp_4.getter_mAssociatedMapTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 325)), temp_5.getter_mAssociatedMapTypedAttributeList (HERE), temp_6.getter_mSearchMethodList (HERE) COMMA_SOURCE_FILE ("type-map-entry.galgas", 322))) ;
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
  GALGAS_lstring var_key_11727 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mMapTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 322)), temp_1.getter_mMapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 322)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11727, temp_2, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 323)) ;
  }
  const GALGAS_sharedMapDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_11885 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_11885.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_11885.current_mPropertyTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 325)), enumerator_11885.current_mPropertyTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 325)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 325)) ;
    }
    enumerator_11885.gotoNextObject () ;
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
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  result_outString = GALGAS_string ("shared map @").add_operation (temp_0.getter_mMapTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 332)) ;
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
  GALGAS_optionalMethodMap var_optionalMethodMap_12961 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 345)) ;
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_13113 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_13113 COMMA_SOURCE_FILE ("type-shared-map.galgas", 347)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeIndex_13245 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_13245 COMMA_SOURCE_FILE ("type-shared-map.galgas", 349)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringlistTypeIndex_13389 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex_13389 COMMA_SOURCE_FILE ("type-shared-map.galgas", 351)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 353)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_13245, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 353)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_13474 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_13563 = GALGAS_bool (false) ;
  const GALGAS_sharedMapDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_13580 (temp_1.getter_mAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_13580.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_13580.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_13563.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_13580.current_mValue (HERE).getter_location (HERE), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-shared-map.galgas", 359)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_13563 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_13580.current_mValue (HERE).getter_location (HERE), GALGAS_string ("unknown attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-shared-map.galgas", 363)) ;
    }
    enumerator_13580.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_13884 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 367)) ;
  GALGAS_getterMap var_getterMap_13974 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_13974, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 368)) ;
  }
  GALGAS_setterMap var_setterMap_14003 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 369)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_14051 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 370)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_6 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_13884, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptySharedMap"), temp_6.getter_mMapTypeName (HERE).getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 372)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13974, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 380)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13974, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 387)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_13974, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 394)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_13974, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 403)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13974, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 412)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13974, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("unsolvedEntryCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 419)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13974, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("unsolvedEntryList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 426)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13974, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 433)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_16634 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 461)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_16702 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 462)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch_13563.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_16702.addAssign_operation (temp_7.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 464)), var_lstringTypeIndex_13245, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 466)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 463)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_16940 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 468)) ;
  GALGAS_string temp_9 ;
  const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch_13563.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_16940.addAssign_operation (temp_9.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 470)), var_lstringTypeIndex_13245, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 472)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 469)) ;
  const GALGAS_sharedMapDeclarationAST temp_11 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_17160 (temp_11.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_17160.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_17295 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_17160.current_mPropertyTypeName (HERE), var_attributeTypeIndex_17295 COMMA_SOURCE_FILE ("type-shared-map.galgas", 475)) ;
    }
    GALGAS_bool var_hasSetter_17314 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_17341 = GALGAS_bool (false) ;
    var_typedAttributeList_16634.addAssign_operation (var_attributeTypeIndex_17295, enumerator_17160.current_mPropertyName (HERE), var_hasSetter_17314, var_hasSelector_17341  COMMA_SOURCE_FILE ("type-shared-map.galgas", 478)) ;
    var_enumerationDescriptor_13474.addAssign_operation (var_attributeTypeIndex_17295, enumerator_17160.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 479)) ;
    GALGAS_lstring temp_12 ;
    const enumGalgasBool test_13 = var_usesSelectorsInInsertAndSearch_13563.boolEnum () ;
    if (kBoolTrue == test_13) {
      temp_12 = enumerator_17160.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_13) {
      temp_12 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 481)) ;
    }
    var_insertMethodFormalArgumentList_16702.addAssign_operation (temp_12, var_attributeTypeIndex_17295, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 483)), enumerator_17160.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 480)) ;
    GALGAS_lstring temp_14 ;
    const enumGalgasBool test_15 = var_usesSelectorsInInsertAndSearch_13563.boolEnum () ;
    if (kBoolTrue == test_15) {
      temp_14 = enumerator_17160.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_15) {
      temp_14 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 486)) ;
    }
    var_removeMethodFormalArgumentList_16940.addAssign_operation (temp_14, var_attributeTypeIndex_17295, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 488)), enumerator_17160.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 485)) ;
    enumerator_17160.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_16 = object ;
  cEnumerator_insertMethodListAST enumerator_17983 (temp_16.getter_mInsertMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_17983.hasCurrentObject ()) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_setterMap_14003.getter_hasKey (enumerator_17983.current_mInsertMethodName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 493)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_17983.current_mInsertMethodName (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_17983.current_mInsertMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 494)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 494)), fixItArray18  COMMA_SOURCE_FILE ("type-shared-map.galgas", 494)) ;
      }
    }
    if (kBoolFalse == test_17) {
      {
      var_setterMap_14003.setter_insertOrReplace (enumerator_17983.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 498)), var_insertMethodFormalArgumentList_16702, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 501)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 496)) ;
      }
    }
    enumerator_17983.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList_18497 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 507)) ;
  var_enterEdgeFormalArgumentList_18497.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 508)), var_lstringTypeIndex_13245, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 508)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 508)) ;
  var_enterEdgeFormalArgumentList_18497.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 509)), var_lstringTypeIndex_13245, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 509)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 509)) ;
  {
  var_setterMap_14003.setter_insertOrReplace (GALGAS_string ("enterEdge").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 511)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 512)), var_enterEdgeFormalArgumentList_18497, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 515)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 510)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList_19017 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 519)) ;
  var_topologicalSortFormalArgumentList_19017.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 520)), var_lstringlistTypeIndex_13389, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 520)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 520)) ;
  var_topologicalSortFormalArgumentList_19017.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 521)), var_lstringlistTypeIndex_13389, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 521)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 521)) ;
  {
  var_instanceMethodMap_14051.setter_insertKey (GALGAS_string ("topologicalSort").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 523)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 524)), var_topologicalSortFormalArgumentList_19017, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 526)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 528)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 522)) ;
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_sharedMapDeclarationAST temp_20 = object ;
    test_19 = GALGAS_bool (kIsEqual, temp_20.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 533)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_sharedMapDeclarationAST temp_21 = object ;
      cEnumerator_mapSearchMethodListAST enumerator_19663 (temp_21.getter_mSearchMethodList (HERE), kENUMERATION_UP) ;
      while (enumerator_19663.hasCurrentObject ()) {
        {
        var_instanceMethodMap_14051.setter_insertKey (enumerator_19663.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 537)), var_removeMethodFormalArgumentList_16940, enumerator_19663.current_mSearchMethodName (HERE).getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 541)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 535)) ;
        }
        enumerator_19663.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_19) {
    const GALGAS_sharedMapDeclarationAST temp_22 = object ;
    cEnumerator_mapSearchMethodListAST enumerator_20031 (temp_22.getter_mSearchMethodList (HERE), kENUMERATION_UP) ;
    while (enumerator_20031.hasCurrentObject ()) {
      {
      var_setterMap_14003.setter_insertKey (enumerator_20031.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 550)), var_removeMethodFormalArgumentList_16940, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 553)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 548)) ;
      }
      enumerator_20031.gotoNextObject () ;
    }
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_sharedMapDeclarationAST temp_24 = object ;
    test_23 = GALGAS_bool (kIsStrictSup, temp_24.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 559)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_unifiedTypeMap_2D_entry var_locationTypeIndex_20525 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex_20525 COMMA_SOURCE_FILE ("type-shared-map.galgas", 560)) ;
      }
      {
      var_setterMap_14003.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 562))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 562)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 563)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 564)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 566)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 561)) ;
      }
      {
      var_setterMap_14003.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 570))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 570)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 571)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 572)), var_locationTypeIndex_20525, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 572)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 572)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 574)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 569)) ;
      }
      {
      var_setterMap_14003.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 578))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 578)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 579)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 580)), var_locationTypeIndex_20525, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 580)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 580)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 582)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 577)) ;
      }
      {
      var_instanceMethodMap_14051.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 586))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 586)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 587)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 588)), var_locationTypeIndex_20525, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 588)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 588)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 589)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 591)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 585)) ;
      }
      const GALGAS_sharedMapDeclarationAST temp_25 = object ;
      cEnumerator_mapOverrideBlockListAST enumerator_21763 (temp_25.getter_mMapOverrideBlockListAST (HERE), kENUMERATION_UP) ;
      while (enumerator_21763.hasCurrentObject ()) {
        {
        var_setterMap_14003.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_21763.current_mOverrideBlockName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 597)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 597))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 597)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 598)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 599)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 601)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 596)) ;
        }
        enumerator_21763.gotoNextObject () ;
      }
    }
  }
  const GALGAS_sharedMapDeclarationAST temp_26 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_22178 (temp_26.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_22178.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_22225 = GALGAS_lstring::constructor_new (enumerator_22178.current_mPropertyName (HERE).getter_string (HERE).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 608)), enumerator_22178.current_mPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 608)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_22408 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_22178.current_mPropertyTypeName (HERE), var_attributeTypeIndex_22408 COMMA_SOURCE_FILE ("type-shared-map.galgas", 609)) ;
    }
    {
    GALGAS_functionSignature temp_27 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 613)) ;
    temp_27.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 613)), var_stringTypeIndex_13113, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 613)) ;
    var_getterMap_13974.setter_insertOrReplace (var_accessorName_22225, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 612)), temp_27, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 614)), GALGAS_bool (true), var_attributeTypeIndex_22408, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 617)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 610)) ;
    }
    enumerator_22178.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_28 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_22827 (temp_28.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_22827.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_22874 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_22827.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 623)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 623)), enumerator_22827.current_mPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 623)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_23102 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_22827.current_mPropertyTypeName (HERE), var_attributeTypeIndex_23102 COMMA_SOURCE_FILE ("type-shared-map.galgas", 624)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_23164 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 625)) ;
    var_accessorFormalArgumentList_23164.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 626)), var_attributeTypeIndex_23102, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 626)), enumerator_22827.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 626)) ;
    var_accessorFormalArgumentList_23164.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 627)), var_stringTypeIndex_13113, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 627)), enumerator_22827.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 627)) ;
    {
    var_setterMap_14003.setter_insertOrReplace (var_accessorName_22874, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 630)), var_accessorFormalArgumentList_23164, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 633)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 628)) ;
    }
    enumerator_22827.gotoNextObject () ;
  }
  {
  const GALGAS_sharedMapDeclarationAST temp_29 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_29.getter_mMapTypeName (HERE), var_getterMap_13974, var_setterMap_14003, var_instanceMethodMap_14051, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 638)) ;
  }
  {
  const GALGAS_sharedMapDeclarationAST temp_30 = object ;
  const GALGAS_sharedMapDeclarationAST temp_31 = object ;
  const GALGAS_sharedMapDeclarationAST temp_32 = object ;
  const GALGAS_sharedMapDeclarationAST temp_33 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_30.getter_mMapTypeName (HERE), temp_31.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 654)), GALGAS_typeKindEnum::constructor_sharedMapType (SOURCE_FILE ("type-shared-map.galgas", 655)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 657)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 658)), var_typedAttributeList_16634, var_constructorMap_13884, var_getterMap_13974, var_setterMap_14003, var_instanceMethodMap_14051, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 664)), var_optionalMethodMap_12961, var_enumerationDescriptor_13474, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-shared-map.galgas", 667)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-shared-map.galgas", 667)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 667)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 668)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 669)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 670)), temp_32.getter_mSearchMethodList (HERE), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 672)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 674)), GALGAS_string ("emptySharedMap"), GALGAS_string ("sharedmap-").add_operation (temp_33.getter_mMapTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-shared-map.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 676)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-shared-map.galgas", 677)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 650)) ;
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
  GALGAS_lstring var_nameForUsefulness_27857 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mMapTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 759)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_27857, var_nameForUsefulness_27857, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 760)) ;
  }
  const GALGAS_sharedMapDeclarationAST temp_1 = object ;
  const GALGAS_sharedMapDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_28020 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.getter_mMapTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("-entry"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 761)), temp_2.getter_mMapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 761)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_27857, var_elementTypeNameForUsefulness_28020 COMMA_SOURCE_FILE ("type-shared-map.galgas", 762)) ;
  }
  GALGAS_mapAutomatonMessageKind var_shadowBehaviour_28255 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 764)) ;
  GALGAS_string var_shadowMessage_28288 = GALGAS_string::makeEmptyString () ;
  const GALGAS_sharedMapDeclarationAST temp_3 = object ;
  cEnumerator_sharedMapAttributeListAST enumerator_28334 (temp_3.getter_mSharedMapAttributeListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_28334.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, enumerator_28334.current_mAttributeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("shadow"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_28334.current_mAttributeName (HERE).getter_location (HERE), GALGAS_string ("only %shadow attribute is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("type-shared-map.galgas", 768)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_shadowBehaviour_28255.objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 769)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_28334.current_mAttributeName (HERE).getter_location (HERE), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-shared-map.galgas", 770)) ;
        }
      }
      if (kBoolFalse == test_6) {
        GALGAS_mapAutomatonMessageKind temp_8 ;
        const enumGalgasBool test_9 = enumerator_28334.current_mIsError (HERE).boolEnum () ;
        if (kBoolTrue == test_9) {
          temp_8 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 772)) ;
        }else if (kBoolFalse == test_9) {
          temp_8 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 772)) ;
        }
        var_shadowBehaviour_28255 = temp_8 ;
        {
        routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_28334.current_mMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 773)) ;
        }
        var_shadowMessage_28288 = enumerator_28334.current_mMessage (HERE).getter_string (HERE) ;
      }
    }
    enumerator_28334.gotoNextObject () ;
  }
  GALGAS_stringset var_initialStateSet_28838 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 778)) ;
  const GALGAS_sharedMapDeclarationAST temp_10 = object ;
  cEnumerator_insertMethodListAST enumerator_28890 (temp_10.getter_mInsertMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_28890.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      const GALGAS_sharedMapDeclarationAST temp_12 = object ;
      test_11 = GALGAS_bool (kIsStrictSup, temp_12.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 780)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_11) {
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          test_13 = GALGAS_bool (kIsEqual, enumerator_28890.current_mInitialStateName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_28890.current_mInsertMethodName (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_28890.current_mInsertMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 782)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 782)), fixItArray14  COMMA_SOURCE_FILE ("type-shared-map.galgas", 782)) ;
          }
        }
        if (kBoolFalse == test_13) {
          var_initialStateSet_28838.addAssign_operation (enumerator_28890.current_mInitialStateName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 784)) ;
        }
      }
    }
    if (kBoolFalse == test_11) {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_28890.current_mInitialStateName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (enumerator_28890.current_mInsertMethodName (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_28890.current_mInsertMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 787)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 787)), fixItArray16  COMMA_SOURCE_FILE ("type-shared-map.galgas", 787)) ;
        }
      }
    }
    enumerator_28890.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap_29456 = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 791)) ;
  const GALGAS_sharedMapDeclarationAST temp_17 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_29502 (temp_17.getter_mSearchMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_29502.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      const GALGAS_sharedMapDeclarationAST temp_19 = object ;
      test_18 = GALGAS_bool (kIsStrictSup, temp_19.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 793)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_18) {
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = GALGAS_bool (kIsEqual, enumerator_29502.current_mActionName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_29502.current_mSearchMethodName (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_29502.current_mSearchMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 795)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 795)), fixItArray21  COMMA_SOURCE_FILE ("type-shared-map.galgas", 795)) ;
          }
        }
        if (kBoolFalse == test_20) {
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = var_mapAutomatonActionMap_29456.getter_hasKey (enumerator_29502.current_mActionName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 796)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 796)).boolEnum () ;
            if (kBoolTrue == test_22) {
              {
              var_mapAutomatonActionMap_29456.setter_insertKey (enumerator_29502.current_mActionName (HERE), var_mapAutomatonActionMap_29456.getter_count (SOURCE_FILE ("type-shared-map.galgas", 797)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 797)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_18) {
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        test_23 = GALGAS_bool (kIsNotEqual, enumerator_29502.current_mActionName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_23) {
          TC_Array <C_FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (enumerator_29502.current_mSearchMethodName (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_29502.current_mSearchMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 800)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 800)), fixItArray24  COMMA_SOURCE_FILE ("type-shared-map.galgas", 800)) ;
        }
      }
    }
    enumerator_29502.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap_30143 = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 804)) ;
  const GALGAS_sharedMapDeclarationAST temp_25 = object ;
  cEnumerator_mapStateList enumerator_30188 (temp_25.getter_mMapStateList (HERE), kENUMERATION_UP) ;
  while (enumerator_30188.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap_30143.setter_insertKey (enumerator_30188.current_mStateName (HERE), var_mapAutomatonStateMap_30143.getter_count (SOURCE_FILE ("type-shared-map.galgas", 806)), enumerator_30188.current_mStateMessageKind (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 806)) ;
    }
    enumerator_30188.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_26 = object ;
  cEnumerator_mapStateList enumerator_30349 (temp_26.getter_mMapStateList (HERE), kENUMERATION_UP) ;
  while (enumerator_30349.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_30407 (enumerator_30349.current_mTransitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_30407.hasCurrentObject ()) {
      GALGAS_uint joker_30488_2 ; // Joker input parameter
      GALGAS_mapAutomatonMessageKind joker_30488_1 ; // Joker input parameter
      var_mapAutomatonStateMap_30143.method_searchKey (enumerator_30407.current_mTargetStateName (HERE), joker_30488_2, joker_30488_1, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 810)) ;
      enumerator_30407.gotoNextObject () ;
    }
    enumerator_30349.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions_30578 = var_mapAutomatonActionMap_29456.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 814)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList_30656 = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 815)) ;
  const GALGAS_sharedMapDeclarationAST temp_27 = object ;
  cEnumerator_mapStateList enumerator_30727 (temp_27.getter_mMapStateList (HERE), kENUMERATION_UP) ;
  while (enumerator_30727.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState_30795 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 817)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList_30867 = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 818)) ;
    cEnumerator_mapStateTransitionList enumerator_30952 (enumerator_30727.current_mTransitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_30952.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex_31050 ;
      var_mapAutomatonActionMap_29456.method_searchKey (enumerator_30952.current_mActionName (HERE), var_actionIndex_31050, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 820)) ;
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = var_actionsForCurrentState_30795.getter_hasKey (enumerator_30952.current_mActionName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 821)).boolEnum () ;
        if (kBoolTrue == test_28) {
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (enumerator_30952.current_mActionName (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_30952.current_mActionName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 822)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 822)), fixItArray29  COMMA_SOURCE_FILE ("type-shared-map.galgas", 822)) ;
        }
      }
      var_actionsForCurrentState_30795.addAssign_operation (enumerator_30952.current_mActionName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 824)) ;
      GALGAS_uint var_targetStateIndex_31357 ;
      GALGAS_mapAutomatonMessageKind joker_31359 ; // Joker input parameter
      var_mapAutomatonStateMap_30143.method_searchKey (enumerator_30952.current_mTargetStateName (HERE), var_targetStateIndex_31357, joker_31359, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 825)) ;
      var_mapStateTransitionSortedList_30867.addAssign_operation (var_actionIndex_31050, enumerator_30952.current_mActionName (HERE).getter_string (HERE), var_targetStateIndex_31357, enumerator_30952.current_mTargetStateName (HERE).getter_string (HERE), enumerator_30952.current_mTransitionMessageKind (HERE), enumerator_30952.current_mTransitionMessage (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 826)) ;
      enumerator_30952.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex_31652 ;
    GALGAS_mapAutomatonMessageKind joker_31654 ; // Joker input parameter
    var_mapAutomatonStateMap_30143.method_searchKey (enumerator_30727.current_mStateName (HERE), var_stateIndex_31652, joker_31654, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 834)) ;
    var_mapStateSortedList_30656.addAssign_operation (var_stateIndex_31652, enumerator_30727.current_mStateName (HERE).getter_string (HERE), enumerator_30727.current_mStateMessageKind (HERE), enumerator_30727.current_mStateMessage (HERE).getter_string (HERE), var_mapStateTransitionSortedList_30867  COMMA_SOURCE_FILE ("type-shared-map.galgas", 835)) ;
    GALGAS_stringset var_missingActions_31848 = var_allActions_30578.substract_operation (var_actionsForCurrentState_30795, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 841)) ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      test_30 = GALGAS_bool (kIsStrictSup, var_missingActions_31848.getter_count (SOURCE_FILE ("type-shared-map.galgas", 842)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_30) {
        GALGAS_string var_s_31945 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_31965 (var_missingActions_31848, kENUMERATION_UP) ;
        while (enumerator_31965.hasCurrentObject ()) {
          var_s_31945.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_31965.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 845)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 845)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 845)) ;
          if (enumerator_31965.hasNextObject ()) {
            var_s_31945.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 846)) ;
          }
          enumerator_31965.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_30727.current_mStateName (HERE).getter_location (HERE), GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s_31945, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 848)), fixItArray31  COMMA_SOURCE_FILE ("type-shared-map.galgas", 848)) ;
      }
    }
    enumerator_30727.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates_32229 = var_initialStateSet_28838 ;
  GALGAS_bool var_progress_32268 = GALGAS_bool (true) ;
  const GALGAS_sharedMapDeclarationAST temp_32 = object ;
  if (temp_32.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 854)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 854)).isValid ()) {
    uint32_t variant_32282 = temp_32.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 854)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 854)).uintValue () ;
    bool loop_32282 = true ;
    while (loop_32282) {
      loop_32282 = var_progress_32268.isValid () ;
      if (loop_32282) {
        loop_32282 = var_progress_32268.boolValue () ;
      }
      if (loop_32282 && (0 == variant_32282)) {
        loop_32282 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 854)) ;
      }
      if (loop_32282) {
        variant_32282 -- ;
        var_progress_32268 = GALGAS_bool (false) ;
        const GALGAS_sharedMapDeclarationAST temp_33 = object ;
        cEnumerator_mapStateList enumerator_32395 (temp_33.getter_mMapStateList (HERE), kENUMERATION_UP) ;
        while (enumerator_32395.hasCurrentObject ()) {
          enumGalgasBool test_34 = kBoolTrue ;
          if (kBoolTrue == test_34) {
            test_34 = var_accessibleStates_32229.getter_hasKey (enumerator_32395.current_mStateName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 857)).boolEnum () ;
            if (kBoolTrue == test_34) {
              cEnumerator_mapStateTransitionList enumerator_32516 (enumerator_32395.current_mTransitionList (HERE), kENUMERATION_UP) ;
              while (enumerator_32516.hasCurrentObject ()) {
                enumGalgasBool test_35 = kBoolTrue ;
                if (kBoolTrue == test_35) {
                  test_35 = var_accessibleStates_32229.getter_hasKey (enumerator_32516.current_mTargetStateName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 859)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 859)).boolEnum () ;
                  if (kBoolTrue == test_35) {
                    var_accessibleStates_32229.addAssign_operation (enumerator_32516.current_mTargetStateName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 860)) ;
                    var_progress_32268 = GALGAS_bool (true) ;
                  }
                }
                enumerator_32516.gotoNextObject () ;
              }
            }
          }
          enumerator_32395.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates_32778 = var_mapAutomatonStateMap_30143.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 867)).substract_operation (var_accessibleStates_32229, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 867)) ;
  enumGalgasBool test_36 = kBoolTrue ;
  if (kBoolTrue == test_36) {
    test_36 = GALGAS_bool (kIsStrictSup, var_uselessStates_32778.getter_count (SOURCE_FILE ("type-shared-map.galgas", 868)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_36) {
      GALGAS_string var_s_32875 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_32893 (var_uselessStates_32778, kENUMERATION_UP) ;
      while (enumerator_32893.hasCurrentObject ()) {
        var_s_32875.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_32893.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 871)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 871)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 871)) ;
        if (enumerator_32893.hasNextObject ()) {
          var_s_32875.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 872)) ;
        }
        enumerator_32893.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray37 ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 874)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s_32875, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 874)), fixItArray37  COMMA_SOURCE_FILE ("type-shared-map.galgas", 874)) ;
    }
  }
  GALGAS_stringset var_neededAssociations_33185 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 878)) ;
  GALGAS_stringset var_accessibilityGraph_33226 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 879)) ;
  cEnumerator_mapAutomatonStateMap enumerator_33279 (var_mapAutomatonStateMap_30143, kENUMERATION_UP) ;
  while (enumerator_33279.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates_33317 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 881)) ;
    var_reachableStates_33317.addAssign_operation (enumerator_33279.current (HERE).getter_lkey (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 882)) ;
    var_progress_32268 = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap_30143.getter_count (SOURCE_FILE ("type-shared-map.galgas", 884)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 884)).isValid ()) {
      uint32_t variant_33405 = var_mapAutomatonStateMap_30143.getter_count (SOURCE_FILE ("type-shared-map.galgas", 884)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 884)).uintValue () ;
      bool loop_33405 = true ;
      while (loop_33405) {
        loop_33405 = var_progress_32268.isValid () ;
        if (loop_33405) {
          loop_33405 = var_progress_32268.boolValue () ;
        }
        if (loop_33405 && (0 == variant_33405)) {
          loop_33405 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 884)) ;
        }
        if (loop_33405) {
          variant_33405 -- ;
          var_progress_32268 = GALGAS_bool (false) ;
          const GALGAS_sharedMapDeclarationAST temp_38 = object ;
          cEnumerator_mapStateList enumerator_33523 (temp_38.getter_mMapStateList (HERE), kENUMERATION_UP) ;
          while (enumerator_33523.hasCurrentObject ()) {
            enumGalgasBool test_39 = kBoolTrue ;
            if (kBoolTrue == test_39) {
              test_39 = var_reachableStates_33317.getter_hasKey (enumerator_33523.current_mStateName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 887)).boolEnum () ;
              if (kBoolTrue == test_39) {
                cEnumerator_mapStateTransitionList enumerator_33647 (enumerator_33523.current_mTransitionList (HERE), kENUMERATION_UP) ;
                while (enumerator_33647.hasCurrentObject ()) {
                  enumGalgasBool test_40 = kBoolTrue ;
                  if (kBoolTrue == test_40) {
                    test_40 = var_reachableStates_33317.getter_hasKey (enumerator_33647.current_mTargetStateName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 889)).boolEnum () ;
                    if (kBoolTrue == test_40) {
                      var_reachableStates_33317.addAssign_operation (enumerator_33647.current_mTargetStateName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 890)) ;
                      var_accessibilityGraph_33226.addAssign_operation (enumerator_33279.current (HERE).getter_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 891)).add_operation (enumerator_33647.current_mTargetStateName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 891))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 891)) ;
                      var_progress_32268 = GALGAS_bool (true) ;
                    }
                  }
                  enumerator_33647.gotoNextObject () ;
                }
              }
            }
            enumerator_33523.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_34004 (var_reachableStates_33317, kENUMERATION_UP) ;
    while (enumerator_34004.hasCurrentObject ()) {
      enumGalgasBool test_41 = kBoolTrue ;
      if (kBoolTrue == test_41) {
        test_41 = GALGAS_bool (kIsNotEqual, enumerator_33279.current (HERE).getter_lkey (HERE).getter_string (HERE).objectCompare (enumerator_34004.current_key (HERE))).boolEnum () ;
        if (kBoolTrue == test_41) {
          var_neededAssociations_33185.addAssign_operation (enumerator_33279.current (HERE).getter_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 900)).add_operation (enumerator_34004.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 900))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 900)) ;
        }
      }
      enumerator_34004.gotoNextObject () ;
    }
    enumerator_33279.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList_34219 = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 905)) ;
  const GALGAS_sharedMapDeclarationAST temp_42 = object ;
  cEnumerator_mapOverrideBlockListAST enumerator_34314 (temp_42.getter_mMapOverrideBlockListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_34314.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations_34390 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 907)) ;
    GALGAS_stringset var_neededCombinaisons_34433 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 908)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31__34528 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 909)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_34613 (enumerator_34314.current_mMapOverrideBlockDescriptor_31_AST (HERE), kENUMERATION_UP) ;
    while (enumerator_34613.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex_34727 ;
      GALGAS_mapAutomatonMessageKind joker_34729 ; // Joker input parameter
      var_mapAutomatonStateMap_30143.method_searchKey (enumerator_34613.current_mLeftState (HERE), var_startStateNameIndex_34727, joker_34729, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 911)) ;
      GALGAS_uint var_currentStateNameIndex_34809 ;
      GALGAS_mapAutomatonMessageKind joker_34811 ; // Joker input parameter
      var_mapAutomatonStateMap_30143.method_searchKey (enumerator_34613.current_mRightState (HERE), var_currentStateNameIndex_34809, joker_34811, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 912)) ;
      GALGAS_string var_association_34843 = enumerator_34613.current_mLeftState (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 913)).add_operation (enumerator_34613.current_mRightState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 913)) ;
      enumGalgasBool test_43 = kBoolTrue ;
      if (kBoolTrue == test_43) {
        test_43 = var_neededAssociations_33185.getter_hasKey (var_association_34843 COMMA_SOURCE_FILE ("type-shared-map.galgas", 914)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 914)).boolEnum () ;
        if (kBoolTrue == test_43) {
          TC_Array <C_FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticWarning (enumerator_34613.current_mRightState (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (var_association_34843, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 915)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 915)), fixItArray44  COMMA_SOURCE_FILE ("type-shared-map.galgas", 915)) ;
        }
      }
      enumGalgasBool test_45 = kBoolTrue ;
      if (kBoolTrue == test_45) {
        test_45 = var_handledAssociations_34390.getter_hasKey (var_association_34843 COMMA_SOURCE_FILE ("type-shared-map.galgas", 917)).boolEnum () ;
        if (kBoolTrue == test_45) {
          TC_Array <C_FixItDescription> fixItArray46 ;
          inCompiler->emitSemanticError (enumerator_34613.current_mRightState (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (var_association_34843, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 919)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 919)), fixItArray46  COMMA_SOURCE_FILE ("type-shared-map.galgas", 918)) ;
        }
      }
      var_handledAssociations_34390.addAssign_operation (var_association_34843  COMMA_SOURCE_FILE ("type-shared-map.galgas", 921)) ;
      GALGAS_uint var_finalStateNameIndex_35321 ;
      GALGAS_mapAutomatonMessageKind joker_35323 ; // Joker input parameter
      var_mapAutomatonStateMap_30143.method_searchKey (enumerator_34613.current_mResultingState (HERE), var_finalStateNameIndex_35321, joker_35323, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 922)) ;
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        test_47 = GALGAS_bool (kIsNotEqual, enumerator_34613.current_mLeftState (HERE).getter_string (HERE).objectCompare (enumerator_34613.current_mResultingState (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_47) {
          var_neededCombinaisons_34433.addAssign_operation (enumerator_34613.current_mLeftState (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 924)).add_operation (enumerator_34613.current_mResultingState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 924))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 924)) ;
          var_neededCombinaisons_34433.addAssign_operation (enumerator_34613.current_mResultingState (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 925)).add_operation (enumerator_34613.current_mLeftState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 925))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 925)) ;
          enumGalgasBool test_48 = kBoolTrue ;
          if (kBoolTrue == test_48) {
            test_48 = var_accessibilityGraph_33226.getter_hasKey (enumerator_34613.current_mLeftState (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 926)).add_operation (enumerator_34613.current_mRightState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 926)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 926)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 926)).boolEnum () ;
            if (kBoolTrue == test_48) {
              TC_Array <C_FixItDescription> fixItArray49 ;
              inCompiler->emitSemanticError (enumerator_34613.current_mResultingState (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_34613.current_mResultingState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 928)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 928)).add_operation (enumerator_34613.current_mLeftState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 928)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 928)), fixItArray49  COMMA_SOURCE_FILE ("type-shared-map.galgas", 927)) ;
            }
          }
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_34613.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 931)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31__34528.addAssign_operation (var_startStateNameIndex_34727, enumerator_34613.current_mLeftState (HERE).getter_string (HERE), var_currentStateNameIndex_34809, enumerator_34613.current_mRightState (HERE).getter_string (HERE), var_finalStateNameIndex_35321, enumerator_34613.current_mResultingState (HERE).getter_string (HERE), enumerator_34613.current_mMessageKind (HERE), enumerator_34613.current_mTransitionMessage (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 932)) ;
      enumerator_34613.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations_36176 = var_neededAssociations_33185.substract_operation (var_handledAssociations_34390, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 942)) ;
    enumGalgasBool test_50 = kBoolTrue ;
    if (kBoolTrue == test_50) {
      test_50 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations_36176.getter_count (SOURCE_FILE ("type-shared-map.galgas", 943)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_50) {
        GALGAS_string var_s_36285 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_36305 (var_forgottenAssociations_36176, kENUMERATION_UP) ;
        while (enumerator_36305.hasCurrentObject ()) {
          var_s_36285.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_36305.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 946)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 946)) ;
          enumerator_36305.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray51 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 948)), var_forgottenAssociations_36176.getter_count (SOURCE_FILE ("type-shared-map.galgas", 948)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 948)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 948)).add_operation (var_s_36285, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 948)), fixItArray51  COMMA_SOURCE_FILE ("type-shared-map.galgas", 948)) ;
      }
    }
    GALGAS_stringset var_definedCombinaisons_36527 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 950)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32__36622 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 951)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_36707 (enumerator_34314.current_mMapOverrideBlockDescriptor_32_AST (HERE), kENUMERATION_UP) ;
    while (enumerator_36707.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex_36816 ;
      GALGAS_mapAutomatonMessageKind joker_36818 ; // Joker input parameter
      var_mapAutomatonStateMap_30143.method_searchKey (enumerator_36707.current_mLeftState (HERE), var_leftStateIndex_36816, joker_36818, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 953)) ;
      GALGAS_uint var_rightStateIndex_36892 ;
      GALGAS_mapAutomatonMessageKind joker_36894 ; // Joker input parameter
      var_mapAutomatonStateMap_30143.method_searchKey (enumerator_36707.current_mRightState (HERE), var_rightStateIndex_36892, joker_36894, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 954)) ;
      GALGAS_string var_combinaison_36926 = enumerator_36707.current_mLeftState (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 955)).add_operation (enumerator_36707.current_mRightState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 955)) ;
      enumGalgasBool test_52 = kBoolTrue ;
      if (kBoolTrue == test_52) {
        test_52 = var_neededCombinaisons_34433.getter_hasKey (var_combinaison_36926 COMMA_SOURCE_FILE ("type-shared-map.galgas", 956)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 956)).boolEnum () ;
        if (kBoolTrue == test_52) {
          TC_Array <C_FixItDescription> fixItArray53 ;
          inCompiler->emitSemanticError (enumerator_36707.current_mRightState (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_36707.current_mLeftState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 958)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 958)).add_operation (enumerator_36707.current_mRightState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 958)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 958)), fixItArray53  COMMA_SOURCE_FILE ("type-shared-map.galgas", 957)) ;
        }
      }
      enumGalgasBool test_54 = kBoolTrue ;
      if (kBoolTrue == test_54) {
        test_54 = var_definedCombinaisons_36527.getter_hasKey (var_combinaison_36926 COMMA_SOURCE_FILE ("type-shared-map.galgas", 960)).boolEnum () ;
        if (kBoolTrue == test_54) {
          TC_Array <C_FixItDescription> fixItArray55 ;
          inCompiler->emitSemanticError (enumerator_36707.current_mRightState (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_36707.current_mLeftState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 962)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 962)).add_operation (enumerator_36707.current_mRightState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 962)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 962)), fixItArray55  COMMA_SOURCE_FILE ("type-shared-map.galgas", 961)) ;
        }
      }
      var_definedCombinaisons_36527.addAssign_operation (var_combinaison_36926  COMMA_SOURCE_FILE ("type-shared-map.galgas", 964)) ;
      GALGAS_uint var_resultingStateNameIndex_37452 ;
      GALGAS_mapAutomatonMessageKind joker_37454 ; // Joker input parameter
      var_mapAutomatonStateMap_30143.method_searchKey (enumerator_36707.current_mResultingState (HERE), var_resultingStateNameIndex_37452, joker_37454, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 965)) ;
      enumGalgasBool test_56 = kBoolTrue ;
      if (kBoolTrue == test_56) {
        test_56 = GALGAS_bool (kIsNotEqual, enumerator_36707.current_mLeftState (HERE).getter_string (HERE).objectCompare (enumerator_36707.current_mResultingState (HERE).getter_string (HERE))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_36707.current_mRightState (HERE).getter_string (HERE).objectCompare (enumerator_36707.current_mResultingState (HERE).getter_string (HERE))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 966)).operator_and (var_accessibilityGraph_33226.getter_hasKey (enumerator_36707.current_mLeftState (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 968)).add_operation (enumerator_36707.current_mResultingState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 968)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 968)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 968)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 967)).boolEnum () ;
        if (kBoolTrue == test_56) {
          TC_Array <C_FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (enumerator_36707.current_mResultingState (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_36707.current_mResultingState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 970)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 970)).add_operation (enumerator_36707.current_mResultingState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 970)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 970)), fixItArray57  COMMA_SOURCE_FILE ("type-shared-map.galgas", 969)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_36707.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 972)) ;
      }
      enumGalgasBool test_58 = kBoolTrue ;
      if (kBoolTrue == test_58) {
        test_58 = GALGAS_bool (kIsEqual, enumerator_36707.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 973)))).boolEnum () ;
        if (kBoolTrue == test_58) {
          var_definedCombinaisons_36527.addAssign_operation (enumerator_36707.current_mRightState (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 974)).add_operation (enumerator_36707.current_mLeftState (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 974))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 974)) ;
          var_branchBehaviourSortedListForMapOverride_32__36622.addAssign_operation (var_rightStateIndex_36892, enumerator_36707.current_mRightState (HERE).getter_string (HERE), var_leftStateIndex_36816, enumerator_36707.current_mLeftState (HERE).getter_string (HERE), var_resultingStateNameIndex_37452, enumerator_36707.current_mResultingState (HERE).getter_string (HERE), enumerator_36707.current_mMessageKind (HERE), enumerator_36707.current_mTransitionMessage (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 975)) ;
        }
      }
      var_branchBehaviourSortedListForMapOverride_32__36622.addAssign_operation (var_leftStateIndex_36816, enumerator_36707.current_mLeftState (HERE).getter_string (HERE), var_rightStateIndex_36892, enumerator_36707.current_mRightState (HERE).getter_string (HERE), var_resultingStateNameIndex_37452, enumerator_36707.current_mResultingState (HERE).getter_string (HERE), enumerator_36707.current_mMessageKind (HERE), enumerator_36707.current_mTransitionMessage (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 985)) ;
      enumerator_36707.gotoNextObject () ;
    }
    enumGalgasBool test_59 = kBoolTrue ;
    if (kBoolTrue == test_59) {
      test_59 = GALGAS_bool (kIsEqual, var_forgottenAssociations_36176.getter_count (SOURCE_FILE ("type-shared-map.galgas", 995)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_59) {
        GALGAS_stringset var_forgottenCombinaisons_38729 = var_neededCombinaisons_34433.substract_operation (var_definedCombinaisons_36527, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 996)) ;
        enumGalgasBool test_60 = kBoolTrue ;
        if (kBoolTrue == test_60) {
          test_60 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons_38729.getter_count (SOURCE_FILE ("type-shared-map.galgas", 997)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_60) {
            GALGAS_string var_s_38842 = GALGAS_string::makeEmptyString () ;
            cEnumerator_stringset enumerator_38864 (var_forgottenCombinaisons_38729, kENUMERATION_UP) ;
            while (enumerator_38864.hasCurrentObject ()) {
              var_s_38842.plusAssign_operation(GALGAS_string ("\n"
                "  - ").add_operation (enumerator_38864.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1000)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1000)) ;
              enumerator_38864.gotoNextObject () ;
            }
            TC_Array <C_FixItDescription> fixItArray61 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1002)), var_forgottenCombinaisons_38729.getter_count (SOURCE_FILE ("type-shared-map.galgas", 1002)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1002)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1002)).add_operation (var_s_38842, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1002)), fixItArray61  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1002)) ;
          }
        }
      }
    }
    var_mapOverrideList_34219.addAssign_operation (enumerator_34314.current_mOverrideBlockName (HERE).getter_string (HERE), var_branchBehaviourSortedListForMapOverride_31__34528, var_branchBehaviourSortedListForMapOverride_32__36622  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1005)) ;
    enumerator_34314.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_39286 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 1011)) ;
  GALGAS_propertyIndexMap var_attributeMap_39328 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1012)) ;
  const GALGAS_sharedMapDeclarationAST temp_62 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_39378 (temp_62.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_39378.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_39442 = function_typeNameForUsefulEntitiesGraph (enumerator_39378.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1014)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_27857, var_propertyTypeNameForUsefulness_39442 COMMA_SOURCE_FILE ("type-shared-map.galgas", 1015)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_39594 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_39378.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1016)) ;
    GALGAS_bool var_hasSetter_39695 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_39722 = GALGAS_bool (false) ;
    var_typedAttributeList_39286.addAssign_operation (var_t_39594, enumerator_39378.current_mPropertyName (HERE), var_hasSetter_39695, var_hasSelector_39722  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1019)) ;
    {
    var_attributeMap_39328.setter_insertKey (enumerator_39378.current_mPropertyName (HERE), var_t_39594, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1024)) ;
    }
    enumerator_39378.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_39942 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1027)) ;
  const GALGAS_sharedMapDeclarationAST temp_63 = object ;
  cEnumerator_insertMethodListAST enumerator_39992 (temp_63.getter_mInsertMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_39992.hasCurrentObject ()) {
    {
    var_insertMethodMap_39942.setter_insertKey (enumerator_39992.current (HERE).getter_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1029)) ;
    }
    cEnumerator_stringlist enumerator_40223 (enumerator_39992.current (HERE).getter_mErrorMessage (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1031)), kENUMERATION_UP) ;
    while (enumerator_40223.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_40262 = enumerator_40223.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1032)) ;
      {
      GALGAS_string joker_40357 ; // Joker input parameter
      var_explodedArray_40262.setter_popFirst (joker_40357, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1033)) ;
      }
      cEnumerator_stringlist enumerator_40377 (var_explodedArray_40262, kENUMERATION_UP) ;
      while (enumerator_40377.hasCurrentObject ()) {
        enumGalgasBool test_64 = kBoolTrue ;
        if (kBoolTrue == test_64) {
          test_64 = GALGAS_bool (kIsStrictSup, enumerator_40377.current_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1035)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_64) {
            GALGAS_char var_c_40456 = enumerator_40377.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1036)) ;
            enumGalgasBool test_65 = kBoolTrue ;
            if (kBoolTrue == test_65) {
              test_65 = GALGAS_bool (kIsNotEqual, var_c_40456.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_40456.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1037)).boolEnum () ;
              if (kBoolTrue == test_65) {
                TC_Array <C_FixItDescription> fixItArray66 ;
                inCompiler->emitSemanticError (enumerator_39992.current (HERE).getter_mErrorMessage (HERE).getter_location (HERE), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message"), fixItArray66  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1038)) ;
              }
            }
          }
        }
        enumerator_40377.gotoNextObject () ;
      }
      enumerator_40223.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_40883 (enumerator_39992.current (HERE).getter_mShadowErrorMessage (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1044)), kENUMERATION_UP) ;
    while (enumerator_40883.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_40922 = enumerator_40883.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1045)) ;
      {
      GALGAS_string joker_41023 ; // Joker input parameter
      var_explodedArray_40922.setter_popFirst (joker_41023, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1046)) ;
      }
      cEnumerator_stringlist enumerator_41062 (var_explodedArray_40922, kENUMERATION_UP) ;
      while (enumerator_41062.hasCurrentObject ()) {
        enumGalgasBool test_67 = kBoolTrue ;
        if (kBoolTrue == test_67) {
          test_67 = GALGAS_bool (kIsStrictSup, enumerator_41062.current (HERE).getter_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1048)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_67) {
            GALGAS_char var_c_41133 = enumerator_41062.current (HERE).getter_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1049)) ;
            enumGalgasBool test_68 = kBoolTrue ;
            if (kBoolTrue == test_68) {
              test_68 = GALGAS_bool (kIsNotEqual, var_c_41133.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_41133.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1050)).boolEnum () ;
              if (kBoolTrue == test_68) {
                TC_Array <C_FixItDescription> fixItArray69 ;
                inCompiler->emitSemanticError (enumerator_39992.current (HERE).getter_mErrorMessage (HERE).getter_location (HERE), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message"), fixItArray69  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1051)) ;
              }
            }
          }
        }
        enumerator_41062.gotoNextObject () ;
      }
      enumerator_40883.gotoNextObject () ;
    }
    enumerator_39992.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_41459 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1058)) ;
  const GALGAS_sharedMapDeclarationAST temp_70 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_41509 (temp_70.getter_mSearchMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_41509.hasCurrentObject ()) {
    enumGalgasBool test_71 = kBoolTrue ;
    if (kBoolTrue == test_71) {
      const GALGAS_sharedMapDeclarationAST temp_72 = object ;
      test_71 = GALGAS_bool (kIsEqual, temp_72.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1060)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_71) {
        {
        var_searchMethodMap_41459.setter_insertKey (enumerator_41509.current (HERE).getter_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1061)) ;
        }
      }
    }
    if (kBoolFalse == test_71) {
      {
      var_searchMethodMap_41459.setter_insertKey (enumerator_41509.current (HERE).getter_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1063)) ;
      }
    }
    cEnumerator_stringlist enumerator_41873 (enumerator_41509.current (HERE).getter_mErrorMessage (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1066)), kENUMERATION_UP) ;
    while (enumerator_41873.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_41912 = enumerator_41873.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1067)) ;
      {
      GALGAS_string joker_42012 ; // Joker input parameter
      var_explodedArray_41912.setter_popFirst (joker_42012, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1068)) ;
      }
      cEnumerator_stringlist enumerator_42051 (var_explodedArray_41912, kENUMERATION_UP) ;
      while (enumerator_42051.hasCurrentObject ()) {
        enumGalgasBool test_73 = kBoolTrue ;
        if (kBoolTrue == test_73) {
          test_73 = GALGAS_bool (kIsStrictSup, enumerator_42051.current (HERE).getter_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1070)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_73) {
            GALGAS_char var_c_42122 = enumerator_42051.current (HERE).getter_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1071)) ;
            enumGalgasBool test_74 = kBoolTrue ;
            if (kBoolTrue == test_74) {
              test_74 = GALGAS_bool (kIsNotEqual, var_c_42122.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
              if (kBoolTrue == test_74) {
                TC_Array <C_FixItDescription> fixItArray75 ;
                inCompiler->emitSemanticError (enumerator_41509.current (HERE).getter_mErrorMessage (HERE).getter_location (HERE), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message"), fixItArray75  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1073)) ;
              }
            }
          }
        }
        enumerator_42051.gotoNextObject () ;
      }
      enumerator_41873.gotoNextObject () ;
    }
    enumerator_41509.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_76 = object ;
  const GALGAS_sharedMapDeclarationAST temp_77 = object ;
  const GALGAS_sharedMapDeclarationAST temp_78 = object ;
  const GALGAS_sharedMapDeclarationAST temp_79 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (temp_76.getter_mMapTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1081)), GALGAS_sharedMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_77.getter_mMapTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1083)), var_typedAttributeList_39286, temp_78.getter_mInsertMethodList (HERE), temp_79.getter_mSearchMethodList (HERE), var_mapAutomatonStateMap_30143, var_mapAutomatonActionMap_29456, var_mapStateSortedList_30656, var_mapOverrideList_34219, var_shadowBehaviour_28255, var_shadowMessage_28288  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1082))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1080)) ;
  const GALGAS_sharedMapDeclarationAST temp_80 = object ;
  GALGAS_string var_graphFile_42932 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/shared-map-"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1096)).add_operation (temp_80.getter_mMapTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1096)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1096)) ;
  enumGalgasBool test_81 = kBoolTrue ;
  if (kBoolTrue == test_81) {
    test_81 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_81) {
      GALGAS_string var_theGraph_43106 = GALGAS_string ("digraph G {\n") ;
      cEnumerator_mapAutomatonStateMap enumerator_43158 (var_mapAutomatonStateMap_30143, kENUMERATION_UP) ;
      while (enumerator_43158.hasCurrentObject ()) {
        var_theGraph_43106.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_43158.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1100)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1100)).add_operation (enumerator_43158.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1100)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1100)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1100)) ;
        enumGalgasBool test_82 = kBoolTrue ;
        if (kBoolTrue == test_82) {
          test_82 = var_initialStateSet_28838.getter_hasKey (enumerator_43158.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1101)).boolEnum () ;
          if (kBoolTrue == test_82) {
            var_theGraph_43106.plusAssign_operation(GALGAS_string (" shape=box color=blue"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1102)) ;
          }
        }
        if (kBoolFalse == test_82) {
          var_theGraph_43106.plusAssign_operation(GALGAS_string (" shape=box"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1104)) ;
        }
        switch (enumerator_43158.current_mStateMessageKind (HERE).enumValue ()) {
        case GALGAS_mapAutomatonMessageKind::kNotBuilt:
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
          {
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
          {
            var_theGraph_43106.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1109)) ;
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
          {
            var_theGraph_43106.plusAssign_operation(GALGAS_string (" fontcolor=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1111)) ;
          }
          break ;
        }
        var_theGraph_43106.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1113)) ;
        enumerator_43158.gotoNextObject () ;
      }
      const GALGAS_sharedMapDeclarationAST temp_83 = object ;
      cEnumerator_mapStateList enumerator_43673 (temp_83.getter_mMapStateList (HERE), kENUMERATION_UP) ;
      while (enumerator_43673.hasCurrentObject ()) {
        cEnumerator_mapStateTransitionList enumerator_43764 (enumerator_43673.current_mTransitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_43764.hasCurrentObject ()) {
          var_theGraph_43106.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_43673.current_mStateName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1117)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1117)).add_operation (enumerator_43764.current_mTargetStateName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1117)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1117)).add_operation (enumerator_43764.current_mActionName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1117)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1117)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1117)) ;
          switch (enumerator_43764.current_mTransitionMessageKind (HERE).enumValue ()) {
          case GALGAS_mapAutomatonMessageKind::kNotBuilt:
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
            {
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
            {
              var_theGraph_43106.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\" color=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1121)) ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
            {
              var_theGraph_43106.plusAssign_operation(GALGAS_string (" fontcolor=\"red\" color=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1123)) ;
            }
            break ;
          }
          var_theGraph_43106.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1125)) ;
          enumerator_43764.gotoNextObject () ;
        }
        enumerator_43673.gotoNextObject () ;
      }
      var_theGraph_43106.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1128)) ;
      GALGAS_bool joker_44279 ; // Joker input parameter
      var_theGraph_43106.method_writeToFileWhenDifferentContents (var_graphFile_42932, joker_44279, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1129)) ;
    }
  }
  if (kBoolFalse == test_81) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_graphFile_42932, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1131)) ;
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
  GALGAS_uint index_368_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_368 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_368.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "extern const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_368.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.h1.galgasTemplate", 12)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_368_.increment () ;
      enumerator_368.gotoNextObject () ;
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
  GALGAS_uint index_431_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_431 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_431.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << enumerator_431.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 11)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_431.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 11)).stringValue () ;
      result << " ;\n" ;
      index_431_.increment () ;
      enumerator_431.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public: cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_695_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_695 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_695.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_695.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_695.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 17)).stringValue () ;
      index_695_.increment () ;
      enumerator_695.gotoNextObject () ;
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
  GALGAS_uint index_252_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_252 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_252.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_252.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 5)).stringValue () ;
      result << " & in_" ;
      result << enumerator_252.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 5)).stringValue () ;
      index_252_.increment () ;
      enumerator_252.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cMapElement (inKey COMMA_THERE)" ;
  GALGAS_uint index_470_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_470 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_470.hasCurrentObject ()) {
      result << ",\n"
        "mProperty_" ;
      result << enumerator_470.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 11)).stringValue () ;
      result << " (in_" ;
      result << enumerator_470.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 11)).stringValue () ;
      result << ")" ;
      index_470_.increment () ;
      enumerator_470.gotoNextObject () ;
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
  GALGAS_uint index_849_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_849 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_849.hasCurrentObject ()) {
      result << " && mProperty_" ;
      result << enumerator_849.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 21)).stringValue () ;
      result << ".isValid ()" ;
      index_849_.increment () ;
      enumerator_849.gotoNextObject () ;
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
  GALGAS_uint index_1259_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1259 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1259.hasCurrentObject ()) {
      result << ", mProperty_" ;
      result << enumerator_1259.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 32)).stringValue () ;
      index_1259_.increment () ;
      enumerator_1259.gotoNextObject () ;
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
    GALGAS_uint index_1798_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1798 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1798.hasCurrentObject ()) {
        result << "  ioString << \"\\n\" ;\n"
          "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
          "  ioString << " ;
        result << enumerator_1798.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 47)).stringValue () ;
        result << " \":\" ;\n"
          "  mProperty_" ;
        result << enumerator_1798.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".description (ioString, inIndentation) ;\n" ;
        index_1798_.increment () ;
        enumerator_1798.gotoNextObject () ;
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
  GALGAS_uint index_2517_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2517 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2517.hasCurrentObject ()) {
      result << "  if (kOperandEqual == result) {\n"
        "    result = mProperty_" ;
      result << enumerator_2517.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 60)).stringValue () ;
      result << ".objectCompare (operand->mProperty_" ;
      result << enumerator_2517.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 60)).stringValue () ;
      result << ") ;\n"
        "  }\n" ;
      index_2517_.increment () ;
      enumerator_2517.gotoNextObject () ;
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
  GALGAS_uint index_4621_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP.isValid ()) {
    cEnumerator_mapAutomatonStateMap enumerator_4621 (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_4621 = enumerator_4621.hasCurrentObject () ;
    if (nonEmpty_enumerator_4621) {
      result << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
        "  static const uint32_t kMapStateCount_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " = " ;
      result << in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP.getter_count (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 107)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 107)).stringValue () ;
      result << " ;\n"
        "#endif\n" ;
    }
    while (enumerator_4621.hasCurrentObject ()) {
      result << "static const uint32_t kMapState_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_4621.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 110)).stringValue () ;
      result << " = " ;
      result << enumerator_4621.current_mStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 110)).stringValue () ;
      result << " ;\n" ;
      index_4621_.increment () ;
      enumerator_4621.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Map automaton state names                                                                    \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_5271_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST.isValid ()) {
    cEnumerator_keySortedList enumerator_5271 (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_5271 = enumerator_5271.hasCurrentObject () ;
    if (nonEmpty_enumerator_5271) {
      result << "static const char * kMapStateNames_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " [" ;
      result << in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 120)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 120)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_5271.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5271.current_mKey (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 122)).stringValue () ;
      if (enumerator_5271.hasNextObject ()) {
        result << ",\n" ;
      }
      index_5271_.increment () ;
      enumerator_5271.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_5271) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Map automaton actions                                                                        \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_5844_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP.isValid ()) {
    cEnumerator_mapAutomatonActionMap enumerator_5844 (in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_5844 = enumerator_5844.hasCurrentObject () ;
    if (nonEmpty_enumerator_5844) {
      result << "static const uint32_t kMapActionCount_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " = " ;
      result << in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP.getter_count (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 136)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 136)).stringValue () ;
      result << " ;\n" ;
    }
    while (enumerator_5844.hasCurrentObject ()) {
      result << "static const uint32_t kMapAction_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5844.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 138)).stringValue () ;
      result << " = " ;
      result << enumerator_5844.current_mActionIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 138)).stringValue () ;
      result << " ;\n" ;
      index_5844_.increment () ;
      enumerator_5844.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Map automaton transitions                                                                    \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_6571_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.isValid ()) {
    cEnumerator_mapStateSortedList enumerator_6571 (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_6571 = enumerator_6571.hasCurrentObject () ;
    if (nonEmpty_enumerator_6571) {
      result << "static const cMapAutomatonTransition kMapTransitions_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " [" ;
      result << in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 149)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 149)).stringValue () ;
      result << " * " ;
      result << in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP.getter_count (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 151)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 151)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_6571.hasCurrentObject ()) {
      result << "// State '" ;
      result << enumerator_6571.current_mStateName (HERE).stringValue () ;
      result << "', index " ;
      result << enumerator_6571.current_mStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 154)).stringValue () ;
      result << " \n" ;
      GALGAS_uint index_6665_ (0) ;
      if (enumerator_6571.current_mTransitionList (HERE).isValid ()) {
        cEnumerator_mapStateTransitionSortedList enumerator_6665 (enumerator_6571.current_mTransitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_6665.hasCurrentObject ()) {
          result << "  {kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_6665.current_mTargetStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 156)).stringValue () ;
          result << " /* " ;
          result << enumerator_6665.current_mTargetStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 156)).stringValue () ;
          result << " */, " ;
          switch (enumerator_6665.current_mTransitionMessageKind (HERE).enumValue ()) {
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
          result << enumerator_6665.current_mTransitionMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 166)).stringValue () ;
          result << "}, // for action '" ;
          result << enumerator_6665.current_mActionName (HERE).stringValue () ;
          result << "', (index " ;
          result << enumerator_6665.current_mActionIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 167)).stringValue () ;
          result << ")\n" ;
          index_6665_.increment () ;
          enumerator_6665.gotoNextObject () ;
        }
      }
      index_6571_.increment () ;
      enumerator_6571.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_6571) {
      result << "} ;\n" ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Map automaton final state issues                                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_7701_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.isValid ()) {
    cEnumerator_mapStateSortedList enumerator_7701 (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_7701 = enumerator_7701.hasCurrentObject () ;
    if (nonEmpty_enumerator_7701) {
      result << "static const cMapAutomatonFinalIssue kMapAutomatonFinalIssue_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " [" ;
      result << in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 180)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 180)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_7701.hasCurrentObject ()) {
      result << "  {" ;
      switch (enumerator_7701.current_mStateMessageKind (HERE).enumValue ()) {
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
      result << enumerator_7701.current_mStateMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 192)).stringValue () ;
      result << "},// state '" ;
      result << enumerator_7701.current_mStateName (HERE).stringValue () ;
      result << "' (index " ;
      result << enumerator_7701.current_mStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 193)).stringValue () ;
      result << ")\n" ;
      index_7701_.increment () ;
      enumerator_7701.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_7701) {
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
  GALGAS_uint index_9303_ (0) ;
  if (in_MAP_5F_OVERRIDE_5F_LIST.isValid ()) {
    cEnumerator_mapOverrideList enumerator_9303 (in_MAP_5F_OVERRIDE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9303.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "//" ;
      result << GALGAS_string ("map override '").add_operation (enumerator_9303.current_mOverrideName (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 223)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 223)).stringValue () ;
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9303.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 228)).stringValue () ;
      result << " [" ;
      result << enumerator_9303.current_mBranchBehaviourSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 229)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 229)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_9893_ (0) ;
      if (enumerator_9303.current_mBranchBehaviourSortedListForMapOverride (HERE).isValid ()) {
        cEnumerator_branchBehaviourSortedListForMapOverride enumerator_9893 (enumerator_9303.current_mBranchBehaviourSortedListForMapOverride (HERE), kENUMERATION_UP) ;
        while (enumerator_9893.hasCurrentObject ()) {
          result << "  {kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_9893.current_mStartStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 231)).stringValue () ;
          result << " /* " ;
          result << enumerator_9893.current_mStartStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 231)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_9893.current_mCurrentStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 232)).stringValue () ;
          result << " /* " ;
          result << enumerator_9893.current_mCurrentStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 232)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_9893.current_mFinalStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 233)).stringValue () ;
          result << " /* " ;
          result << enumerator_9893.current_mFinalStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 233)).stringValue () ;
          result << " */, " ;
          switch (enumerator_9893.current_mBehaviourMessageKind (HERE).enumValue ()) {
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
          result << enumerator_9893.current_mBehaviourMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 244)).stringValue () ;
          result << "},\n" ;
          index_9893_.increment () ;
          enumerator_9893.gotoNextObject () ;
        }
      }
      result << "} ;\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9303.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 252)).stringValue () ;
      result << " [" ;
      result << enumerator_9303.current_mBranchCombinationSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 253)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 253)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_10972_ (0) ;
      if (enumerator_9303.current_mBranchCombinationSortedListForMapOverride (HERE).isValid ()) {
        cEnumerator_branchBehaviourSortedListForMapOverride enumerator_10972 (enumerator_9303.current_mBranchCombinationSortedListForMapOverride (HERE), kENUMERATION_UP) ;
        while (enumerator_10972.hasCurrentObject ()) {
          result << "  {kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_10972.current_mStartStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 255)).stringValue () ;
          result << " /* " ;
          result << enumerator_10972.current_mStartStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 255)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_10972.current_mCurrentStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 256)).stringValue () ;
          result << " /* " ;
          result << enumerator_10972.current_mCurrentStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 256)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_10972.current_mFinalStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 257)).stringValue () ;
          result << " /* " ;
          result << enumerator_10972.current_mFinalStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 257)).stringValue () ;
          result << " */, " ;
          switch (enumerator_10972.current_mBehaviourMessageKind (HERE).enumValue ()) {
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
          result << enumerator_10972.current_mBehaviourMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 268)).stringValue () ;
          result << "},\n" ;
          index_10972_.increment () ;
          enumerator_10972.gotoNextObject () ;
        }
      }
      result << "} ;\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_openOverrideFor" ;
      result << enumerator_9303.current_mOverrideName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 273)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 273)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "C_Compiler * inCompiler\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  openOverride (kBranchBehaviourForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9303.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 275)).stringValue () ;
      result << ", " ;
      result << enumerator_9303.current_mBranchBehaviourSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 275)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 275)).stringValue () ;
      result << ",\n"
        "                kBranchCombinationForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9303.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 276)).stringValue () ;
      result << ", " ;
      result << enumerator_9303.current_mBranchCombinationSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 276)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 276)).stringValue () ;
      result << ",\n"
        "                " ;
      result << enumerator_9303.current_mOverrideName (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 277)).stringValue () ;
      result << ",\n"
        "                inCompiler\n"
        "                COMMA_THERE) ;\n"
        "}\n"
        "\n" ;
      index_9303_.increment () ;
      enumerator_9303.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_12530_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_12530 (in_INSERT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12530.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_12530.current_mInsertMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 286)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_12824_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_12824 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_12824.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_12824.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 288)).stringValue () ;
          result << " inArgument" ;
          result << index_12824_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 288)).stringValue () ;
          index_12824_IDX.increment () ;
          enumerator_12824.gotoNextObject () ;
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
      GALGAS_uint index_13156_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_13156 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_13156.hasCurrentObject ()) {
          result << ", inArgument" ;
          result << index_13156_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 295)).stringValue () ;
          index_13156_IDX.increment () ;
          enumerator_13156.gotoNextObject () ;
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
      result << enumerator_12530.current_mErrorMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 302)).stringValue () ;
      result << " ;\n" ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_12530.current_mInitialStateName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
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
        result << enumerator_12530.current_mInitialStateName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 313)).stringValue () ;
        result << ",\n"
          "                   kMapStateNames_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " [kMapState_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_12530.current_mInitialStateName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 314)).stringValue () ;
        result << "],\n"
          "                   kInsertErrorMessage\n"
          "                   COMMA_THERE) ;\n" ;
      }
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_12530_.increment () ;
      enumerator_12530.gotoNextObject () ;
    }
  }
  GALGAS_uint index_14091_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_14091 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14091.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_14091.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 324)).stringValue () ;
      result << " = " ;
      result << enumerator_14091.current_mErrorMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 324)).stringValue () ;
      result << " ;\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::" ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_14091.current_mActionName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "method_" ;
      }else if (kBoolFalse == test_4) {
        result << "setter_" ;
      }
      result << enumerator_14091.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 332)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_14748_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_14748 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_14748.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_14748.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 334)).stringValue () ;
          result << " & outArgument" ;
          result << index_14748_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 334)).stringValue () ;
          index_14748_IDX.increment () ;
          enumerator_14748.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) " ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_14091.current_mActionName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
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
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_14091.current_mActionName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "kMapAction_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_14091.current_mActionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 346)).stringValue () ;
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
      result << enumerator_14091.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 353)).stringValue () ;
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE) ;\n"
        "if (NULL == p) {\n" ;
      GALGAS_uint index_15672_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_15672 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_15672.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_15672_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 357)).stringValue () ;
          result << ".drop () ;\n" ;
          index_15672_IDX.increment () ;
          enumerator_15672.gotoNextObject () ;
        }
      }
      result << "}else{\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_15857_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_15857 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_15857.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_15857_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 362)).stringValue () ;
          result << " = p->mProperty_" ;
          result << enumerator_15857.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 362)).stringValue () ;
          result << " ;\n" ;
          index_15857_IDX.increment () ;
          enumerator_15857.gotoNextObject () ;
        }
      }
      result << "}\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_14091_.increment () ;
      enumerator_14091.gotoNextObject () ;
    }
  }
  GALGAS_uint index_16034_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16034 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16034.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_16034.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 371)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_16034.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 371)).stringValue () ;
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
      result << enumerator_16034.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 376)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_16034.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 379)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_16034_IDX.increment () ;
      enumerator_16034.gotoNextObject () ;
    }
  }
  GALGAS_uint index_17058_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17058 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17058.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_set" ;
      result << enumerator_17058.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 387)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 387)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_" ;
      result << enumerator_17058.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 387)).stringValue () ;
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
      result << enumerator_17058.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 395)).stringValue () ;
      result << " = inAttributeValue ;\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_17058_IDX.increment () ;
      enumerator_17058.gotoNextObject () ;
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
  GALGAS_uint index_19374_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19374 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19374.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_19374.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 428)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_19374.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 428)).stringValue () ;
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
      result << enumerator_19374.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 431)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_19374_IDX.increment () ;
      enumerator_19374.gotoNextObject () ;
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
  cEnumerator_typedPropertyList enumerator_46681 (temp_0.getter_mTypedAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_46681.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_46681.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1192)) ;
    enumerator_46681.gotoNextObject () ;
  }
  const GALGAS_sharedMapTypeForGeneration temp_1 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_2 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_3 = object ;
  const GALGAS_sharedMapTypeForGeneration temp_4 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, temp_1.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1196)), temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1197)), temp_3.getter_mTypedAttributeList (HERE), temp_4.getter_mSearchMethodList (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1195))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_5.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1202)), temp_6.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1203)), temp_7.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1204)), temp_8.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1205)), temp_9.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1206)), temp_10.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1207)), temp_11.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1208)), temp_12.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1209)), temp_13.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1210)), temp_14.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1211)), temp_15.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1212)), temp_16.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1213)), temp_17.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1214)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1201))), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1201)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1226)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1227)), temp_2.getter_mTypedAttributeList (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1225))) ;
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
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1239)) ;
  GALGAS_keySortedList var_keySortedList_48574 = GALGAS_keySortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 1240)) ;
  const GALGAS_sharedMapTypeForGeneration temp_1 = object ;
  cEnumerator_mapAutomatonStateMap enumerator_48619 (temp_1.getter_mMapAutomatonStateMap (HERE), kENUMERATION_UP) ;
  while (enumerator_48619.hasCurrentObject ()) {
    var_keySortedList_48574.addAssign_operation (enumerator_48619.current_lkey (HERE).getter_string (HERE), enumerator_48619.current_mStateIndex (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1242)) ;
    enumerator_48619.gotoNextObject () ;
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
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1245)), temp_3.getter_mTypedAttributeList (HERE), temp_4.getter_mInsertMethodList (HERE), temp_5.getter_mSearchMethodList (HERE), temp_6.getter_mMapAutomatonStateMap (HERE), temp_7.getter_mMapAutomatonActionMap (HERE), temp_8.getter_mMapStateSortedList (HERE), temp_9.getter_mMapOverrideList (HERE), var_keySortedList_48574, temp_10.getter_mShadowBehaviour (HERE), temp_11.getter_mShadowMessage (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1244))) ;
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
  GALGAS_lstring var_key_3293 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mSortedListTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)), temp_1.getter_mSortedListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 84)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3293, temp_2, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 85)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_3465 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_3465.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3465.current_mPropertyTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)), enumerator_3465.current_mPropertyTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 87)) ;
    }
    enumerator_3465.gotoNextObject () ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_4082 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 97)) ;
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_4141 (temp_0.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_4141.hasCurrentObject ()) {
    var_structAttributeList_4082.addAssign_operation (enumerator_4141.current_isConstant (HERE), enumerator_4141.current_mPropertyTypeName (HERE), enumerator_4141.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 104))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 99)) ;
    enumerator_4141.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = object ;
  const GALGAS_sortedListDeclarationAST temp_2 = object ;
  const GALGAS_sortedListDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.getter_mIsPredefined (HERE), GALGAS_lstring::constructor_new (temp_2.getter_mSortedListTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 108)), temp_3.getter_mSortedListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 108)), var_structAttributeList_4082, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 106))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 106)) ;
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
  GALGAS_optionalMethodMap var_optionalMethodMap_5039 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 121)) ;
  GALGAS_unifiedTypeMap_2D_entry var_listTypeIndex_5188 ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.getter_mSortedListTypeName (HERE), var_listTypeIndex_5188 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 123)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listElementTypeIndex_5448 ;
  {
  const GALGAS_sortedListDeclarationAST temp_1 = object ;
  const GALGAS_sortedListDeclarationAST temp_2 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_1.getter_mSortedListTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 127)), temp_2.getter_mSortedListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 127)), var_listElementTypeIndex_5448 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 125)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5536 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 131)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5595 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 132)) ;
  GALGAS_formalParameterSignature var_setterFormalArgumentList_5657 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 133)) ;
  GALGAS_typedPropertyList var_typedAttributeList_5706 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 134)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_5756 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_5756.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_5891 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5756.current_mPropertyTypeName (HERE), var_attributeTypeIndex_5891 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 136)) ;
    }
    GALGAS_bool var_hasSetter_5910 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_5937 = GALGAS_bool (false) ;
    var_typedAttributeList_5706.addAssign_operation (var_attributeTypeIndex_5891, enumerator_5756.current_mPropertyName (HERE), var_hasSetter_5910, var_hasSelector_5937  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 139)) ;
    var_enumerationDescriptor_5536.addAssign_operation (var_attributeTypeIndex_5891, enumerator_5756.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 140)) ;
    var_constructorAttributeTypeList_5595.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 141)), var_attributeTypeIndex_5891, enumerator_5756.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 141)) ;
    var_setterFormalArgumentList_5657.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 142)), var_attributeTypeIndex_5891, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-sorted-list.galgas", 142)), enumerator_5756.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 142)) ;
    enumerator_5756.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6385 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 145)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_4 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_6385, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptySortedList"), temp_4.getter_mSortedListTypeName (HERE).getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 146)) ;
  }
  {
  var_constructorMap_6385.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 154))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 154)), var_constructorAttributeTypeList_5595, GALGAS_bool (false), var_listTypeIndex_5188, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 153)) ;
  }
  GALGAS_getterMap var_getterMap_6845 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6845, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 160)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6845, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 161)) ;
  }
  GALGAS_setterMap var_setterMap_7067 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 169)) ;
  {
  var_setterMap_7067.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 171))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 171)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 172)), var_setterFormalArgumentList_5657, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 175)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 170)) ;
  }
  {
  var_setterMap_7067.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 179))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 179)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 180)), var_setterFormalArgumentList_5657, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 183)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 178)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_7569 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 187)) ;
  {
  var_instanceMethodMap_7569.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 189))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 189)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 190)), var_setterFormalArgumentList_5657, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 192)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 194)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 188)) ;
  }
  {
  var_instanceMethodMap_7569.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 199))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 199)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 200)), var_setterFormalArgumentList_5657, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 202)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 204)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 198)) ;
  }
  {
  const GALGAS_sortedListDeclarationAST temp_5 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_5.getter_mSortedListTypeName (HERE), var_getterMap_6845, var_setterMap_7067, var_instanceMethodMap_7569, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 209)) ;
  }
  {
  const GALGAS_sortedListDeclarationAST temp_6 = object ;
  const GALGAS_sortedListDeclarationAST temp_7 = object ;
  const GALGAS_sortedListDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_6.getter_mSortedListTypeName (HERE), temp_7.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-sorted-list.galgas", 225)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("type-sorted-list.galgas", 226)), GALGAS_bool (true), var_typedAttributeList_5706, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 229)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 230)), var_constructorMap_6385, var_getterMap_6845, var_setterMap_7067, var_instanceMethodMap_7569, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 235)), var_optionalMethodMap_5039, var_enumerationDescriptor_5536, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-sorted-list.galgas", 238)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-sorted-list.galgas", 238)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 238)), var_constructorAttributeTypeList_5595, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 240)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 241)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 242)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 243)), GALGAS_bool (false), var_listElementTypeIndex_5448, GALGAS_string ("emptySortedList"), GALGAS_string ("-sortedlist-").add_operation (temp_8.getter_mSortedListTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-sorted-list.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 247)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-sorted-list.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 221)) ;
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
  GALGAS_lstring var_sortedListNameForUsefulness_9955 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mSortedListTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 265)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_9955, var_sortedListNameForUsefulness_9955, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 266)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = object ;
  const GALGAS_sortedListDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_10145 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.getter_mSortedListTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 267)), temp_2.getter_mSortedListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 267)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_9955, var_elementTypeNameForUsefulness_10145 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 268)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_10394 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 270)) ;
  GALGAS_propertyIndexMap var_attributeMap_10454 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 271)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_10504 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_10504.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_10568 = function_typeNameForUsefulEntitiesGraph (enumerator_10504.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 273)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_9955, var_propertyTypeNameForUsefulness_10568 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 274)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_10730 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_10504.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 275)) ;
    GALGAS_bool var_hasSetter_10831 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_10858 = GALGAS_bool (true) ;
    var_typedAttributeList_10394.addAssign_operation (var_t_10730, enumerator_10504.current_mPropertyName (HERE), var_hasSetter_10831, var_hasSelector_10858  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 278)) ;
    {
    var_attributeMap_10454.setter_insertKey (enumerator_10504.current_mPropertyName (HERE), var_t_10730, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 283)) ;
    }
    enumerator_10504.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting_11075 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sorted-list.galgas", 286)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_11138 = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 287)) ;
  const GALGAS_sortedListDeclarationAST temp_4 = object ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_11182 (temp_4.getter_mSortDescriptorList (HERE), kENUMERATION_UP) ;
  while (enumerator_11182.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_type_11296 ;
    var_attributeMap_10454.method_searchKey (enumerator_11182.current_mSortedAttributeName (HERE), var_type_11296, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 289)) ;
    var_sortDescriptorList_11138.addAssign_operation (var_type_11296, enumerator_11182.current_mSortedAttributeName (HERE).getter_string (HERE), enumerator_11182.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 290)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_attributesUsedForSorting_11075.getter_hasKey (enumerator_11182.current_mSortedAttributeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 291)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_11182.current_mSortedAttributeName (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_11182.current_mSortedAttributeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 292)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 292)), fixItArray6  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 292)) ;
      }
    }
    var_attributesUsedForSorting_11075.addAssign_operation (enumerator_11182.current_mSortedAttributeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 294)) ;
    enumerator_11182.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_7 = object ;
  const GALGAS_sortedListDeclarationAST temp_8 = object ;
  const GALGAS_sortedListDeclarationAST temp_9 = object ;
  const GALGAS_sortedListDeclarationAST temp_10 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (temp_7.getter_mSortedListTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 298)), GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_8.getter_mSortedListTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 300)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (temp_9.getter_mSortedListTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 301)), temp_10.getter_mSortedListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 301)), var_typedAttributeList_10394, var_sortDescriptorList_11138  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 299))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 297)) ;
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
  GALGAS_uint index_551_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_551 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_551.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_551.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_551.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_551.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_551_.increment () ;
      enumerator_551.gotoNextObject () ;
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
  GALGAS_uint index_1597_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1597 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1597.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1597.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1597.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue () ;
      if (enumerator_1597.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1597_.increment () ;
      enumerator_1597.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cSortedListElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_1834_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1834 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1834.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_1834.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 47)).stringValue () ;
      if (enumerator_1834.hasNextObject ()) {
        result << ", " ;
      }
      index_1834_.increment () ;
      enumerator_1834.gotoNextObject () ;
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
  GALGAS_uint index_2466_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2466 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2466.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_2466.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 65)).stringValue () ;
      if (enumerator_2466.hasNextObject ()) {
        result << ", " ;
      }
      index_2466_.increment () ;
      enumerator_2466.gotoNextObject () ;
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
  GALGAS_uint index_2864_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2864 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2864.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n"
        "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
        "  ioString << " ;
      result << enumerator_2864.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 79)).stringValue () ;
      result << " \":\" ;\n"
        "  mObject.mProperty_" ;
      result << enumerator_2864.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 80)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_2864_.increment () ;
      enumerator_2864.gotoNextObject () ;
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
  GALGAS_uint index_4356_ (0) ;
  if (in_SORT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_sortDescriptorListForGeneration enumerator_4356 (in_SORT_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4356.hasCurrentObject ()) {
      result << "  if (result == kOperandEqual) {\n"
        "    result = " ;
      const enumGalgasBool test_0 = enumerator_4356.current_mAscendingOrder (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "mObject.mProperty_" ;
        result << enumerator_4356.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue () ;
        result << ".objectCompare (operand->mObject.mProperty_" ;
        result << enumerator_4356.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue () ;
        result << ")" ;
      }else if (kBoolFalse == test_0) {
        result << "operand->mObject.mProperty_" ;
        result << enumerator_4356.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue () ;
        result << ".objectCompare (mObject.mProperty_" ;
        result << enumerator_4356.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue () ;
        result << ")" ;
      }
      result << " ;\n"
        "  }\n" ;
      index_4356_.increment () ;
      enumerator_4356.gotoNextObject () ;
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
  GALGAS_uint index_5408_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5408 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5408.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_5408.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue () ;
      result << " & inOperand" ;
      result << index_5408_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue () ;
      if (enumerator_5408.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5408_IDX.increment () ;
      enumerator_5408.gotoNextObject () ;
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
  GALGAS_uint index_5762_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5762 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5762.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_5762_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 138)).stringValue () ;
      if (enumerator_5762.hasNextObject ()) {
        result << ", " ;
      }
      index_5762_IDX.increment () ;
      enumerator_5762.gotoNextObject () ;
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
  GALGAS_uint index_6205_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6205 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6205.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_6205.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue () ;
      result << " & inOperand" ;
      result << index_6205_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue () ;
      if (enumerator_6205.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6205_IDX.increment () ;
      enumerator_6205.gotoNextObject () ;
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
  GALGAS_uint index_6513_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6513 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6513.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_6513_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 162)).stringValue () ;
      if (enumerator_6513.hasNextObject ()) {
        result << ", " ;
      }
      index_6513_IDX.increment () ;
      enumerator_6513.gotoNextObject () ;
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
  GALGAS_uint index_7353_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7353 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7353.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_7353.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue () ;
      result << " & outOperand" ;
      result << index_7353_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_7353_IDX.increment () ;
      enumerator_7353.gotoNextObject () ;
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
  GALGAS_uint index_7791_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7791 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7791.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_7791_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 197)).stringValue () ;
      result << ".drop () ;\n" ;
      index_7791_IDX.increment () ;
      enumerator_7791.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_7969_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7969 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7969.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_7969_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 203)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_7969.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 203)).stringValue () ;
      result << " ;\n" ;
      index_7969_IDX.increment () ;
      enumerator_7969.gotoNextObject () ;
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
  GALGAS_uint index_8311_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8311 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8311.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_8311.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 212)).stringValue () ;
      result << " & outOperand" ;
      result << index_8311_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 212)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8311_IDX.increment () ;
      enumerator_8311.gotoNextObject () ;
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
  GALGAS_uint index_8749_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8749 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8749.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_8749_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 222)).stringValue () ;
      result << ".drop () ;\n" ;
      index_8749_IDX.increment () ;
      enumerator_8749.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_8927_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8927 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8927.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_8927_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 228)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_8927.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 228)).stringValue () ;
      result << " ;\n" ;
      index_8927_IDX.increment () ;
      enumerator_8927.gotoNextObject () ;
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
  GALGAS_uint index_9266_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9266 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9266.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_9266.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 237)).stringValue () ;
      result << " & outOperand" ;
      result << index_9266_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 237)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9266_IDX.increment () ;
      enumerator_9266.gotoNextObject () ;
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
  GALGAS_uint index_9707_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9707 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9707.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9707_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 247)).stringValue () ;
      result << ".drop () ;\n" ;
      index_9707_IDX.increment () ;
      enumerator_9707.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_9885_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9885 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9885.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9885_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 253)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_9885.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 253)).stringValue () ;
      result << " ;\n" ;
      index_9885_IDX.increment () ;
      enumerator_9885.gotoNextObject () ;
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
  GALGAS_uint index_10224_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10224 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10224.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_10224.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 262)).stringValue () ;
      result << " & outOperand" ;
      result << index_10224_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 262)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10224_IDX.increment () ;
      enumerator_10224.gotoNextObject () ;
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
  GALGAS_uint index_10665_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10665 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10665.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10665_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 272)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10665_IDX.increment () ;
      enumerator_10665.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10843_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10843 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10843.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10843_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 278)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10843.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 278)).stringValue () ;
      result << " ;\n" ;
      index_10843_IDX.increment () ;
      enumerator_10843.gotoNextObject () ;
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
  GALGAS_uint index_11864_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11864 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11864.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_11864.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_11864.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue () ;
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
      result << enumerator_11864.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 304)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_11864_IDX.increment () ;
      enumerator_11864.gotoNextObject () ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 347)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 348)), temp_2.getter_mTypedAttributeList (HERE) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 352)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 353)), temp_5.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)), temp_6.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)), temp_7.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 356)), temp_8.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 357)), temp_9.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 358)), temp_10.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 359)), temp_11.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 360)), temp_12.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 361)), temp_13.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 362)), temp_14.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 363)), temp_15.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 364)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 351))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 351)) ;
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
  cEnumerator_typedPropertyList enumerator_14900 (temp_0.getter_mTypedAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_14900.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14900.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 375)) ;
    enumerator_14900.gotoNextObject () ;
  }
  const GALGAS_sortedListTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mListElementTypeIndex (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 377)) ;
  const GALGAS_sortedListTypeForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 378)) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = object ;
  const GALGAS_sortedListTypeForGeneration temp_4 = object ;
  const GALGAS_sortedListTypeForGeneration temp_5 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 380)), temp_4.getter_mTypedAttributeList (HERE), temp_5.getter_mSortDescriptorList (HERE) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 379))) ;
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
  GALGAS_lstring var_key_2105 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mStructTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 50)), temp_1.getter_mStructTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 50)) ;
  {
  const GALGAS_structDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2105, temp_2, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 51)) ;
  }
  const GALGAS_structDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_2269 (temp_3.getter_mStructurePropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_2269.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey_2324 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2269.current_mPropertyTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 53)), enumerator_2269.current_mPropertyTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 53)) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2105, var_propertyKey_2324 COMMA_SOURCE_FILE ("type-struct.galgas", 54)) ;
    }
    enumerator_2269.gotoNextObject () ;
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
  GALGAS_string result_outString ; // Returned variable
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  const GALGAS_structDeclarationAST temp_0 = object ;
  result_outString = GALGAS_string ("struct @").add_operation (temp_0.getter_mStructTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 63)) ;
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
  GALGAS_optionalMethodMap var_optionalMethodMap_3763 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 82)) ;
  GALGAS_unifiedTypeMap_2D_entry var_structTypeIndex_3917 ;
  {
  const GALGAS_structDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.getter_mStructTypeName (HERE), var_structTypeIndex_3917 COMMA_SOURCE_FILE ("type-struct.galgas", 84)) ;
  }
  GALGAS_propertyMap var_propertyMap_3984 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 86)) ;
  GALGAS_constructorMap var_constructorMap_4026 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 87)) ;
  GALGAS_functionSignature var_constructorPropertyTypeList_4084 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 88)) ;
  GALGAS_typedPropertyList var_typedPropertyList_4132 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 89)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_4202 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 90)) ;
  const GALGAS_structDeclarationAST temp_1 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_4281 (temp_1.getter_mStructurePropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_4281.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_propertyTypeEntry_4424 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_4281.current_mPropertyTypeName (HERE), var_propertyTypeEntry_4424 COMMA_SOURCE_FILE ("type-struct.galgas", 92)) ;
    }
    GALGAS_lstring var_selector_4451 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-struct.galgas", 93)) ;
    cEnumerator_lstringlist enumerator_4482 (enumerator_4281.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_4482.hasCurrentObject ()) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, enumerator_4482.current_mValue (HERE).getter_string (HERE).objectCompare (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 95)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_selector_4451 = enumerator_4281.current_mPropertyName (HERE) ;
        }
      }
      enumerator_4482.gotoNextObject () ;
    }
    var_constructorPropertyTypeList_4084.addAssign_operation (var_selector_4451, var_propertyTypeEntry_4424, enumerator_4281.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 99)) ;
    var_typesToIncludeInHeaderCompilation_4202.addAssign_operation (var_propertyTypeEntry_4424  COMMA_SOURCE_FILE ("type-struct.galgas", 100)) ;
    GALGAS_bool test_3 = enumerator_4281.current_mIsPublic (HERE) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = enumerator_4281.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 101)) ;
    }
    GALGAS_bool var_hasSetter_4786 = test_3 ;
    GALGAS_bool var_hasSelector_4835 = GALGAS_bool (false) ;
    var_typedPropertyList_4132.addAssign_operation (var_propertyTypeEntry_4424, enumerator_4281.current_mPropertyName (HERE), var_hasSetter_4786, var_hasSelector_4835  COMMA_SOURCE_FILE ("type-struct.galgas", 103)) ;
    {
    var_propertyMap_3984.setter_insertKey (enumerator_4281.current_mPropertyName (HERE), enumerator_4281.current_mIsPublic (HERE), enumerator_4281.current_isConstant (HERE), var_propertyTypeEntry_4424, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 104)) ;
    }
    enumerator_4281.gotoNextObject () ;
  }
  {
  var_constructorMap_4026.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 107))  COMMA_SOURCE_FILE ("type-struct.galgas", 107)), var_constructorPropertyTypeList_4084, GALGAS_bool (false), var_structTypeIndex_3917, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 106)) ;
  }
  GALGAS_getterMap var_getterMap_5249 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5249, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 113)) ;
  }
  cEnumerator_typedPropertyList enumerator_5294 (var_typedPropertyList_4132, kENUMERATION_UP) ;
  while (enumerator_5294.hasCurrentObject ()) {
    {
    routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5249, ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5294.current_mPropertyName (HERE).getter_string (HERE), enumerator_5294.current_mPropertyTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 119)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 115)) ;
    }
    enumerator_5294.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_5588 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 124)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5658 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 126)) ;
  {
  const GALGAS_structDeclarationAST temp_4 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_4.getter_mStructTypeName (HERE), var_getterMap_5249, var_setterMap_5588, var_instanceMethodMap_5658, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 128)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_enumeratedType_6049 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_structDeclarationAST temp_6 = object ;
    test_5 = GALGAS_bool (kIsEqual, temp_6.getter_mEnumeratedElementTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_enumeratedType_6049 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-struct.galgas", 142)) ;
    }
  }
  if (kBoolFalse == test_5) {
    {
    const GALGAS_structDeclarationAST temp_7 = object ;
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_7.getter_mEnumeratedElementTypeName (HERE), var_enumeratedType_6049 COMMA_SOURCE_FILE ("type-struct.galgas", 144)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_6380 = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_6424 (var_typedPropertyList_4132, kENUMERATION_UP) ;
  bool bool_8 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_6380.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_6424.hasCurrentObject () && bool_8) {
    while (enumerator_6424.hasCurrentObject () && bool_8) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, enumerator_6424.current_mPropertyTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 153)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_6424.current_mPropertyTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 153)).operator_not (SOURCE_FILE ("type-struct.galgas", 153)) COMMA_SOURCE_FILE ("type-struct.galgas", 153)).boolEnum () ;
        if (kBoolTrue == test_9) {
          var_defaultConstructorName_6380 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_6424.gotoNextObject () ;
      if (enumerator_6424.hasCurrentObject ()) {
        bool_8 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_6380.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  const GALGAS_structDeclarationAST temp_10 = object ;
  const GALGAS_structDeclarationAST temp_11 = object ;
  const GALGAS_structDeclarationAST temp_12 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_10.getter_mStructTypeName (HERE), temp_11.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-struct.galgas", 162)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("type-struct.galgas", 163)), GALGAS_bool (false), var_typedPropertyList_4132, var_propertyMap_3984, var_typedPropertyList_4132, var_constructorMap_4026, var_getterMap_5249, var_setterMap_5588, var_instanceMethodMap_5658, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 172)), var_optionalMethodMap_3763, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 174)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-struct.galgas", 175)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-struct.galgas", 175)) COMMA_SOURCE_FILE ("type-struct.galgas", 175)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 176)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 177)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 178)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 179)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 180)), GALGAS_bool (false), var_enumeratedType_6049, var_defaultConstructorName_6380, GALGAS_string ("struct-").add_operation (temp_12.getter_mStructTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-struct.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 184)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-struct.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 158)) ;
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
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 194)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-struct.galgas", 195)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-struct.galgas", 196)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-struct.galgas", 197)) ;
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
  GALGAS_lstring var_structNameForUsefulness_8515 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mStructTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 211)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_8515, var_structNameForUsefulness_8515, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 212)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_structDeclarationAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.getter_mStructurePropertyList (HERE).getter_length (SOURCE_FILE ("type-struct.galgas", 214)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mStructTypeName (HERE).getter_location (HERE), GALGAS_string ("a structure cannot be empty: it must have at least one property"), fixItArray4  COMMA_SOURCE_FILE ("type-struct.galgas", 215)) ;
    }
  }
  GALGAS_typedPropertyList var_typedPropertyList_8863 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 217)) ;
  GALGAS_propertyIndexMap var_propertyMap_8904 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 218)) ;
  const GALGAS_structDeclarationAST temp_5 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_8967 (temp_5.getter_mStructurePropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_8967.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_9040 = function_typeNameForUsefulEntitiesGraph (enumerator_8967.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 220)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_8515, var_propertyTypeNameForUsefulness_9040 COMMA_SOURCE_FILE ("type-struct.galgas", 221)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_9198 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_8967.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 222)) ;
    GALGAS_bool var_hasSelector_9301 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_9325 (enumerator_8967.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_9325.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_9325.current_mValue (HERE).getter_string (HERE).objectCompare (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 225)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_9325.current_mValue (HERE).getter_location (HERE), GALGAS_string ("a struct property accepts only the %").add_operation (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 226)).add_operation (GALGAS_string (" feature"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 226)), fixItArray7  COMMA_SOURCE_FILE ("type-struct.galgas", 226)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_hasSelector_9301.boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_9325.current_mValue (HERE).getter_location (HERE), GALGAS_string ("duplicated %").add_operation (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 228)).add_operation (GALGAS_string (" feature"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 228)), fixItArray9  COMMA_SOURCE_FILE ("type-struct.galgas", 228)) ;
        }
      }
      if (kBoolFalse == test_8) {
        var_hasSelector_9301 = GALGAS_bool (true) ;
      }
      enumerator_9325.gotoNextObject () ;
    }
    GALGAS_bool var_hasSetter_9720 = GALGAS_bool (true) ;
    var_typedPropertyList_8863.addAssign_operation (var_t_9198, enumerator_8967.current_mPropertyName (HERE), var_hasSetter_9720, var_hasSelector_9301  COMMA_SOURCE_FILE ("type-struct.galgas", 234)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 239)).getter_hasKey (enumerator_8967.current_mPropertyName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-struct.galgas", 239)).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string var_m_9919 = GALGAS_string ("an property cannot be named:") ;
        cEnumerator_stringset enumerator_9993 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 241)), kENUMERATION_UP) ;
        while (enumerator_9993.hasCurrentObject ()) {
          var_m_9919.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_9993.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 242)) ;
          enumerator_9993.gotoNextObject () ;
        }
        var_m_9919.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 244)) ;
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_8967.current_mPropertyName (HERE).getter_location (HERE), var_m_9919, fixItArray11  COMMA_SOURCE_FILE ("type-struct.galgas", 245)) ;
      }
    }
    {
    var_propertyMap_8904.setter_insertKey (enumerator_8967.current_mPropertyName (HERE), var_t_9198, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 247)) ;
    }
    enumerator_8967.gotoNextObject () ;
  }
  const GALGAS_structDeclarationAST temp_12 = object ;
  const GALGAS_structDeclarationAST temp_13 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (temp_12.getter_mStructTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 250)), GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_13.getter_mStructTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 252)), var_typedPropertyList_8863  COMMA_SOURCE_FILE ("type-struct.galgas", 251))  COMMA_SOURCE_FILE ("type-struct.galgas", 249)) ;
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
  GALGAS_uint index_430_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_430 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_430.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << enumerator_430.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_430.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_430_.increment () ;
      enumerator_430.gotoNextObject () ;
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
  GALGAS_uint index_1082_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1082 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1082.hasCurrentObject ()) {
      result << "  public: inline void setter_set" ;
      result << enumerator_1082.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 28)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 28)).stringValue () ;
      result << " (const GALGAS_" ;
      result << enumerator_1082.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 28)).stringValue () ;
      result << " & inValue COMMA_UNUSED_LOCATION_ARGS) {\n"
        "    mProperty_" ;
      result << enumerator_1082.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 29)).stringValue () ;
      result << " = inValue ;\n"
        "  }\n"
        "\n" ;
      index_1082_.increment () ;
      enumerator_1082.gotoNextObject () ;
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
  GALGAS_uint index_1649_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1649 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1649.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1649.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 37)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1649.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 37)).stringValue () ;
      if (enumerator_1649.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1649_.increment () ;
      enumerator_1649.gotoNextObject () ;
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
  GALGAS_uint index_213_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_213 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_213.hasCurrentObject ()) {
      result << "mProperty_" ;
      result << enumerator_213.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 6)).stringValue () ;
      result << " ()" ;
      if (enumerator_213.hasNextObject ()) {
        result << ",\n" ;
      }
      index_213_.increment () ;
      enumerator_213.gotoNextObject () ;
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
  GALGAS_uint index_706_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_706 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_706.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_706.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue () ;
      result << " & inOperand" ;
      result << index_706_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue () ;
      if (enumerator_706.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_706_IDX.increment () ;
      enumerator_706.gotoNextObject () ;
    }
  }
  result << ") :\n" ;
  GALGAS_uint index_861_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_861 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_861.hasCurrentObject ()) {
      result << "mProperty_" ;
      result << enumerator_861.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue () ;
      result << " (inOperand" ;
      result << index_861_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue () ;
      result << ")" ;
      if (enumerator_861.hasNextObject ()) {
        result << ",\n" ;
      }
      index_861_IDX.increment () ;
      enumerator_861.gotoNextObject () ;
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
    GALGAS_uint index_1294_ (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1294 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1294.hasCurrentObject ()) {
        result << "GALGAS_" ;
        result << enumerator_1294.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue () ;
        result << "::constructor_" ;
        result << enumerator_1294.current_mPropertyTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue () ;
        result << " (HERE)" ;
        if (enumerator_1294.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_1294_.increment () ;
        enumerator_1294.gotoNextObject () ;
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
  GALGAS_uint index_1720_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1720 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1720.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1720.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 46)).stringValue () ;
      result << " & inOperand" ;
      result << index_1720_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 46)).stringValue () ;
      if (enumerator_1720.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1720_IDX.increment () ;
      enumerator_1720.gotoNextObject () ;
    }
  }
  result << " \n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_1952_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1952 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1952.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_1952_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 52)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_1952.hasNextObject ()) {
        result << " && " ;
      }
      index_1952_IDX.increment () ;
      enumerator_1952.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2097_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2097 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2097.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_2097_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 58)).stringValue () ;
      if (enumerator_2097.hasNextObject ()) {
        result << ", " ;
      }
      index_2097_IDX.increment () ;
      enumerator_2097.gotoNextObject () ;
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
  GALGAS_uint index_2487_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2487 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2487.hasCurrentObject ()) {
      result << "  if (result == kOperandEqual) {\n"
        "    result = mProperty_" ;
      result << enumerator_2487.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 73)).stringValue () ;
      result << ".objectCompare (inOperand.mProperty_" ;
      result << enumerator_2487.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 73)).stringValue () ;
      result << ") ;\n"
        "  }\n" ;
      index_2487_.increment () ;
      enumerator_2487.gotoNextObject () ;
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
  GALGAS_uint index_2942_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2942 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2942.hasCurrentObject ()) {
      result << "mProperty_" ;
      result << enumerator_2942.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 84)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_2942.hasNextObject ()) {
        result << " && " ;
      }
      index_2942_.increment () ;
      enumerator_2942.gotoNextObject () ;
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
  GALGAS_uint index_3247_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3247 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3247.hasCurrentObject ()) {
      result << "  mProperty_" ;
      result << enumerator_3247.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 94)).stringValue () ;
      result << ".drop () ;\n" ;
      index_3247_.increment () ;
      enumerator_3247.gotoNextObject () ;
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
  GALGAS_uint index_3734_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3734 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3734.hasCurrentObject ()) {
      result << "    mProperty_" ;
      result << enumerator_3734.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 108)).stringValue () ;
      result << ".description (ioString, inIndentation+1) ;\n" ;
      if (enumerator_3734.hasNextObject ()) {
        result << "    ioString << \", \" ;\n" ;
      }
      index_3734_IDX.increment () ;
      enumerator_3734.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_3935_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3935 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3935.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_3935.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 117)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_3935.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 117)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  return mProperty_" ;
      result << enumerator_3935.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 118)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_3935_.increment () ;
      enumerator_3935.gotoNextObject () ;
    }
  }
  result << "\n"
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
  cEnumerator_typedPropertyList enumerator_11642 (temp_0.getter_mTypedPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_11642.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_11642.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 290)) ;
    enumerator_11642.gotoNextObject () ;
  }
  const GALGAS_structTypeForGeneration temp_1 = object ;
  const GALGAS_structTypeForGeneration temp_2 = object ;
  const GALGAS_structTypeForGeneration temp_3 = object ;
  const GALGAS_structTypeForGeneration temp_4 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_boolsetGenerationTemplate_structTypeHeader_31_ (inCompiler, temp_1.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 294)), temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 295)), temp_3.getter_mTypedPropertyList (HERE), GALGAS_bool (kIsNotEqual, temp_4.getter_mSelfTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 297)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 293))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_5.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 300)), temp_6.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 301)), temp_7.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 302)), temp_8.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 303)), temp_9.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 304)), temp_10.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 305)), temp_11.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 306)), temp_12.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 307)), temp_13.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 308)), temp_14.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 309)), temp_15.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 310)), temp_16.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 311)), temp_17.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 312)) COMMA_SOURCE_FILE ("type-struct.galgas", 299))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 299)) ;
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
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 323)) ;
  const GALGAS_structTypeForGeneration temp_1 = object ;
  const GALGAS_structTypeForGeneration temp_2 = object ;
  const GALGAS_structTypeForGeneration temp_3 = object ;
  const GALGAS_structTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_boolsetGenerationTemplate_structTypeSpecificImplementation (inCompiler, temp_1.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 325)), temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 326)), temp_3.getter_mTypedPropertyList (HERE), GALGAS_bool (kIsNotEqual, temp_4.getter_mSelfTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 328)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 324))) ;
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
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  const GALGAS_abstractExtensionGetterAST temp_0 = object ;
  const GALGAS_abstractExtensionGetterAST temp_1 = object ;
  result_outString = GALGAS_string ("abstract extension getter @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 51)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 51)).add_operation (temp_1.getter_mAbstractExtensionGetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 51)) ;
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
  GALGAS_lstring var_key_3151 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 66)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 66)).add_operation (temp_1.getter_mAbstractExtensionGetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 66)), temp_2.getter_mAbstractExtensionGetterName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 65)) ;
  {
  const GALGAS_abstractExtensionGetterAST temp_3 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3151, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 69)) ;
  }
  {
  const GALGAS_abstractExtensionGetterAST temp_4 = object ;
  const GALGAS_abstractExtensionGetterAST temp_5 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3151, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 70)), temp_5.getter_mTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 70)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 70)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionGetterAST temp_7 = object ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.getter_mTypeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 72)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 72)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionGetterAST temp_8 = object ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.getter_mTypeName (HERE), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-getter.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 73)) ;
      }
    }
  }
  const GALGAS_abstractExtensionGetterAST temp_9 = object ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_3669 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.getter_mTypeName (HERE), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 78)) ;
  if (NULL != objectArray_3669) {
    macroValidSharedObject (objectArray_3669, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionGetterAST temp_10 = object ;
    const GALGAS_abstractExtensionGetterAST temp_11 = object ;
    const GALGAS_abstractExtensionGetterAST temp_12 = object ;
    objectArray_3669->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.getter_mAbstractExtensionGetterName (HERE), temp_11.getter_mAbstractExtensionGetterReturnedTypeName (HERE), temp_12.getter_mAbstractExtensionGetterFormalInputParameterList (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 79)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfType_5444 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_0.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 112)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_selfType_5444.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 114)).getter_isClassType (SOURCE_FILE ("extension-abstract-getter.galgas", 114)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 114)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionGetterAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mAbstractExtensionGetterName (HERE).getter_location (HERE), GALGAS_string ("cannot declare an extension getter: '@").add_operation (var_selfType_5444.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 115)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 115)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 115)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_selfType_5444.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 116)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionGetterAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.getter_mAbstractExtensionGetterName (HERE).getter_location (HERE), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (var_selfType_5444.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 117)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 117)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 117)) ;
      }
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_6036 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-getter.galgas", 120)) ;
  const GALGAS_abstractExtensionGetterAST temp_7 = object ;
  cEnumerator_formalInputParameterListAST enumerator_6122 (temp_7.getter_mAbstractExtensionGetterFormalInputParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_6122.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6036.addAssign_operation (enumerator_6122.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_6122.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 124)), enumerator_6122.current_mFormalArgumentName (HERE).getter_string (HERE), enumerator_6122.current_mFormalArgumentName (HERE), enumerator_6122.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 122)) ;
    enumerator_6122.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterAST temp_8 = object ;
  const GALGAS_abstractExtensionGetterAST temp_9 = object ;
  const GALGAS_abstractExtensionGetterAST temp_10 = object ;
  const GALGAS_abstractExtensionGetterAST temp_11 = object ;
  const GALGAS_abstractExtensionGetterAST temp_12 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (temp_8.getter_mAbstractExtensionGetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 131)), GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (temp_9.getter_mTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 134)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 134)).add_operation (temp_10.getter_mAbstractExtensionGetterName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 134)), var_selfType_5444, temp_11.getter_mAbstractExtensionGetterName (HERE).getter_string (HERE), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_12.getter_mAbstractExtensionGetterReturnedTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 137)), var_formalParameterListForGeneration_6036  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 132))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 130)) ;
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
  ioArgument_ioAbstractExtensionGetterListMap.addAssign_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), temp_1.getter_mAbstractExtensionGetterName (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 160)) ;
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
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 177)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, temp_0.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 187)), temp_1.getter_mAbstractExtensionGetterName (HERE), temp_2.getter_mAbstractExtensionGetterFormalParameterList (HERE), temp_3.getter_mResultType (HERE) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 186))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (temp_0.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201)).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201)).add_operation (temp_1.getter_mAbstractExtensionGetterName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 202)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_3 = object ;
  extensionMethod_addHeaderFileName (temp_3.getter_mReceiverType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 203)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_4 = object ;
  cEnumerator_formalInputParameterListForGeneration enumerator_10464 (temp_4.getter_mAbstractExtensionGetterFormalParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_10464.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10464.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 205)) ;
    enumerator_10464.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterForGeneration temp_5 = object ;
  const GALGAS_abstractExtensionGetterForGeneration temp_6 = object ;
  const GALGAS_abstractExtensionGetterForGeneration temp_7 = object ;
  const GALGAS_abstractExtensionGetterForGeneration temp_8 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, temp_5.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 208)), temp_6.getter_mAbstractExtensionGetterName (HERE), temp_7.getter_mAbstractExtensionGetterFormalParameterList (HERE), temp_8.getter_mResultType (HERE) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 207))) ;
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
  GALGAS_lstring var_key_2379 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)).add_operation (temp_1.getter_mAbstractExtensionMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)), temp_2.getter_mAbstractExtensionMethodName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)) ;
  {
  const GALGAS_abstractExtensionMethodAST temp_3 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2379, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 49)) ;
  }
  {
  const GALGAS_abstractExtensionMethodAST temp_4 = object ;
  const GALGAS_abstractExtensionMethodAST temp_5 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2379, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)), temp_5.getter_mTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionMethodAST temp_7 = object ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.getter_mTypeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 52)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 52)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionMethodAST temp_8 = object ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.getter_mTypeName (HERE), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-method.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 53)) ;
      }
    }
  }
  const GALGAS_abstractExtensionMethodAST temp_9 = object ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_2885 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.getter_mTypeName (HERE), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 58)) ;
  if (NULL != objectArray_2885) {
    macroValidSharedObject (objectArray_2885, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionMethodAST temp_10 = object ;
    const GALGAS_abstractExtensionMethodAST temp_11 = object ;
    objectArray_2885->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.getter_mAbstractExtensionMethodName (HERE), temp_11.getter_mAbstractExtensionMethodFormalParameterList (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 59)) ;
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
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  const GALGAS_abstractExtensionMethodAST temp_0 = object ;
  const GALGAS_abstractExtensionMethodAST temp_1 = object ;
  result_outString = GALGAS_string ("abstract extension method @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 72)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 72)).add_operation (temp_1.getter_mAbstractExtensionMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 72)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfType_5222 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_0.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 102)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_selfType_5222.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 104)).getter_isClassType (SOURCE_FILE ("extension-abstract-method.galgas", 104)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 104)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionMethodAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mAbstractExtensionMethodName (HERE).getter_location (HERE), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_5222.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_selfType_5222.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionMethodAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.getter_mAbstractExtensionMethodName (HERE).getter_location (HERE), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (var_selfType_5222.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 107)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 107)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 107)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_5773 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-method.galgas", 110)) ;
  const GALGAS_abstractExtensionMethodAST temp_7 = object ;
  cEnumerator_formalParameterListAST enumerator_5907 (temp_7.getter_mAbstractExtensionMethodFormalParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_5907.hasCurrentObject ()) {
    var_formalParameterListForGeneration_5773.addAssign_operation (enumerator_5907.current_mFormalSelector (HERE), enumerator_5907.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_5907.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 115)), enumerator_5907.current_mFormalArgumentName (HERE), enumerator_5907.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 112)) ;
    enumerator_5907.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodAST temp_8 = object ;
  const GALGAS_abstractExtensionMethodAST temp_9 = object ;
  const GALGAS_abstractExtensionMethodAST temp_10 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (temp_8.getter_mAbstractExtensionMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 121)), GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_5222.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 124)).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 124)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 124)).add_operation (temp_9.getter_mAbstractExtensionMethodName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 124)), var_selfType_5222, temp_10.getter_mAbstractExtensionMethodName (HERE).getter_string (HERE), var_formalParameterListForGeneration_5773  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 122))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 120)) ;
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
  ioArgument_ioAbstractExtensionMethodListMapAST.addAssign_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), temp_1.getter_mAbstractExtensionMethodName (HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, temp_0.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 169)), temp_1.getter_mAbstractExtensionMethodName (HERE), temp_2.getter_mAbstractExtensionMethodFormalParameterList (HERE) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 168))) ;
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
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 178)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (temp_0.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 187)).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 187)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 187)).add_operation (temp_1.getter_mAbstractExtensionMethodName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 187))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 187)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.getter_mReceiverType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 188)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_3 = object ;
  cEnumerator_formalParameterListForGeneration enumerator_9895 (temp_3.getter_mAbstractExtensionMethodFormalParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_9895.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_9895.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 190)) ;
    enumerator_9895.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodForGeneration temp_4 = object ;
  const GALGAS_abstractExtensionMethodForGeneration temp_5 = object ;
  const GALGAS_abstractExtensionMethodForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, temp_4.getter_mReceiverType (HERE), temp_5.getter_mAbstractExtensionMethodName (HERE), temp_6.getter_mAbstractExtensionMethodFormalParameterList (HERE) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 192))) ;
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
  GALGAS_lstring var_key_2380 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)).add_operation (temp_1.getter_mAbstractExtensionSetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)), temp_2.getter_mAbstractExtensionSetterName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)) ;
  {
  const GALGAS_abstractExtensionSetterAST temp_3 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2380, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 49)) ;
  }
  {
  const GALGAS_abstractExtensionSetterAST temp_4 = object ;
  const GALGAS_abstractExtensionSetterAST temp_5 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2380, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 50)), temp_5.getter_mTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 50)) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 50)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionSetterAST temp_7 = object ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.getter_mTypeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 52)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 52)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionSetterAST temp_8 = object ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.getter_mTypeName (HERE), GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-setter.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 53)) ;
      }
    }
  }
  const GALGAS_abstractExtensionSetterAST temp_9 = object ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_2886 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.getter_mTypeName (HERE), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 58)) ;
  if (NULL != objectArray_2886) {
    macroValidSharedObject (objectArray_2886, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionSetterAST temp_10 = object ;
    const GALGAS_abstractExtensionSetterAST temp_11 = object ;
    objectArray_2886->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.getter_mAbstractExtensionSetterName (HERE), temp_11.getter_mAbstractExtensionSetterFormalParameterList (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 59)) ;
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
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  const GALGAS_abstractExtensionSetterAST temp_0 = object ;
  const GALGAS_abstractExtensionSetterAST temp_1 = object ;
  result_outString = GALGAS_string ("abstract extension setter @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)).add_operation (temp_1.getter_mAbstractExtensionSetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfType_5223 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_0.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 103)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_selfType_5223.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 105)).getter_isClassType (SOURCE_FILE ("extension-abstract-setter.galgas", 105)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionSetterAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mAbstractExtensionSetterName (HERE).getter_location (HERE), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_5223.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 106)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 106)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 106)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_selfType_5223.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 107)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionSetterAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.getter_mAbstractExtensionSetterName (HERE).getter_location (HERE), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (var_selfType_5223.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 108)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 108)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 108)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_5775 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-setter.galgas", 111)) ;
  const GALGAS_abstractExtensionSetterAST temp_7 = object ;
  cEnumerator_formalParameterListAST enumerator_5909 (temp_7.getter_mAbstractExtensionSetterFormalParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_5909.hasCurrentObject ()) {
    var_formalParameterListForGeneration_5775.addAssign_operation (enumerator_5909.current_mFormalSelector (HERE), enumerator_5909.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_5909.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 116)), enumerator_5909.current_mFormalArgumentName (HERE), enumerator_5909.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 113)) ;
    enumerator_5909.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterAST temp_8 = object ;
  const GALGAS_abstractExtensionSetterAST temp_9 = object ;
  const GALGAS_abstractExtensionSetterAST temp_10 = object ;
  const GALGAS_abstractExtensionSetterAST temp_11 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (temp_8.getter_mAbstractExtensionSetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 122)), GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (temp_9.getter_mTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 125)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 125)).add_operation (temp_10.getter_mAbstractExtensionSetterName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 125)), var_selfType_5223, temp_11.getter_mAbstractExtensionSetterName (HERE).getter_string (HERE), var_formalParameterListForGeneration_5775  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)) ;
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
  ioArgument_ioAbstractExtensionSetterListMap.addAssign_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), temp_1.getter_mAbstractExtensionSetterName (HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 150)) ;
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
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 168)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, temp_0.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 177)), temp_1.getter_mAbstractExtensionSetterName (HERE), temp_2.getter_mAbstractExtensionSetterFormalParameterList (HERE) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 176))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (temp_0.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 190)).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 190)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 190)).add_operation (temp_1.getter_mAbstractExtensionSetterName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 190))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 190)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.getter_mReceiverType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_3 = object ;
  cEnumerator_formalParameterListForGeneration enumerator_9894 (temp_3.getter_mAbstractExtensionSetterFormalParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_9894.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_9894.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 193)) ;
    enumerator_9894.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterForGeneration temp_4 = object ;
  const GALGAS_abstractExtensionSetterForGeneration temp_5 = object ;
  const GALGAS_abstractExtensionSetterForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, temp_4.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 196)), temp_5.getter_mAbstractExtensionSetterName (HERE), temp_6.getter_mAbstractExtensionSetterFormalParameterList (HERE) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 195))) ;
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
  GALGAS_string result_outString ; // Returned variable
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  const GALGAS_extensionGetterAST temp_0 = object ;
  const GALGAS_extensionGetterAST temp_1 = object ;
  result_outString = GALGAS_string ("extension getter @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 62)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 62)).add_operation (temp_1.getter_mExtensionGetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 62)) ;
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
  GALGAS_lstring var_key_3539 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 76)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 76)).add_operation (temp_1.getter_mExtensionGetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 76)), temp_2.getter_mExtensionGetterName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 76)) ;
  {
  const GALGAS_extensionGetterAST temp_3 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3539, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 77)) ;
  }
  {
  const GALGAS_extensionGetterAST temp_4 = object ;
  const GALGAS_extensionGetterAST temp_5 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3539, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 78)), temp_5.getter_mTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 78)) COMMA_SOURCE_FILE ("extension-getter.galgas", 78)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionGetterAST temp_7 = object ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.getter_mTypeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("extension-getter.galgas", 80)).operator_not (SOURCE_FILE ("extension-getter.galgas", 80)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionGetterAST temp_8 = object ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.getter_mTypeName (HERE), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-getter.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 81)) ;
      }
    }
  }
  const GALGAS_extensionGetterAST temp_9 = object ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_4029 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.getter_mTypeName (HERE), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 86)) ;
  if (NULL != objectArray_4029) {
    macroValidSharedObject (objectArray_4029, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_extensionGetterAST temp_10 = object ;
    const GALGAS_extensionGetterAST temp_11 = object ;
    const GALGAS_extensionGetterAST temp_12 = object ;
    objectArray_4029->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.getter_mExtensionGetterName (HERE), temp_11.getter_mExtensionGetterReturnedTypeName (HERE), temp_12.getter_mExtensionGetterFormalInputParameterList (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 87)) ;
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
  GALGAS_lstring var_nameForUsefulness_5674 = function_getterNameForUsefulEntitiesGraph (temp_0.getter_mTypeName (HERE).getter_string (HERE), temp_1.getter_mExtensionGetterName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 120)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_5674, var_nameForUsefulness_5674, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 121)) ;
  }
  const GALGAS_extensionGetterAST temp_2 = object ;
  GALGAS_lstring var_typeNameForUsefulness_5856 = function_typeNameForUsefulEntitiesGraph (temp_2.getter_mTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 122)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_5856, var_nameForUsefulness_5674 COMMA_SOURCE_FILE ("extension-getter.galgas", 123)) ;
  }
  const GALGAS_extensionGetterAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6037 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_3.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 125)) ;
  GALGAS_string var_selfObjectName_6146 ;
  GALGAS_string var_selfObjectAccessor_6179 ;
  GALGAS_bool var_implementedAsFunction_6213 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_selfType_6037.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 130)).getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 130)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectName_6146 = GALGAS_string ("object") ;
      var_selfObjectAccessor_6179 = GALGAS_string ("object->") ;
      var_implementedAsFunction_6213 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_6146 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_6179 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_6213 = GALGAS_bool (true) ;
  }
  GALGAS_analysisContext var_analysisContext_6561 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_6146, GALGAS_selfAvailability::constructor_available (var_selfType_6037, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("extension-getter.galgas", 144)), var_selfObjectAccessor_6179  COMMA_SOURCE_FILE ("extension-getter.galgas", 140)) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnType_6806 ;
  GALGAS_string var_returnVariableCppName_6842 ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_6920 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_7001 ;
  {
  const GALGAS_extensionGetterAST temp_5 = object ;
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = var_selfType_6037.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 156)).getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 156)).operator_or (GALGAS_bool (kIsEqual, var_selfType_6037.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 156)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-getter.galgas", 156)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 156)).operator_or (GALGAS_bool (kIsEqual, var_selfType_6037.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 156)).objectCompare (GALGAS_typeKindEnum::constructor_sharedMapEntryType (SOURCE_FILE ("extension-getter.galgas", 156)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 156)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType_6037.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 157)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-getter.galgas", 158)) ;
  }
  const GALGAS_extensionGetterAST temp_8 = object ;
  const GALGAS_extensionGetterAST temp_9 = object ;
  const GALGAS_extensionGetterAST temp_10 = object ;
  const GALGAS_extensionGetterAST temp_11 = object ;
  routine_analyzeFunctionBody (var_nameForUsefulness_5674, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6561, temp_5.getter_mExtensionGetterFormalInputParameterList (HERE), temp_6, var_selfObjectAccessor_6179, temp_8.getter_mExtensionGetterInstructionList (HERE), temp_9.getter_mExtensionGetterReturnedVariableName (HERE), temp_10.getter_mExtensionGetterReturnedTypeName (HERE), temp_11.getter_mEndOfReaderLocation (HERE), var_formalParameterListForGeneration_6920, var_returnType_6806, var_returnVariableCppName_6842, var_semanticInstructionListForGeneration_7001, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 151)) ;
  }
  const GALGAS_extensionGetterAST temp_12 = object ;
  const GALGAS_extensionGetterAST temp_13 = object ;
  const GALGAS_extensionGetterAST temp_14 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (temp_12.getter_mExtensionGetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 172)), GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (var_selfType_6037.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 175)).getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 175)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 175)).add_operation (temp_13.getter_mExtensionGetterName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 175)), var_selfType_6037, temp_14.getter_mExtensionGetterName (HERE).getter_string (HERE), var_implementedAsFunction_6213, var_returnType_6806, var_returnVariableCppName_6842, var_formalParameterListForGeneration_6920, var_selfType_6037.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 182)), var_semanticInstructionListForGeneration_7001  COMMA_SOURCE_FILE ("extension-getter.galgas", 173))  COMMA_SOURCE_FILE ("extension-getter.galgas", 171)) ;
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
  ioArgument_ioExtensionGetterListMap.addAssign_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), temp_1.getter_mExtensionGetterName (HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 204)) ;
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
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-getter.galgas", 227)) ;
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
    test_0 = temp_1.getter_mImplementedAsFunction (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionGetterForGeneration temp_2 = object ;
      const GALGAS_extensionGetterForGeneration temp_3 = object ;
      const GALGAS_extensionGetterForGeneration temp_4 = object ;
      const GALGAS_extensionGetterForGeneration temp_5 = object ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, temp_2.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 237)), temp_3.getter_mExtensionGetterName (HERE), temp_4.getter_mExtensionGetterFormalParameterList (HERE), temp_5.getter_mResultType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 240)) COMMA_SOURCE_FILE ("extension-getter.galgas", 236))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionGetterForGeneration temp_6 = object ;
    const GALGAS_extensionGetterForGeneration temp_7 = object ;
    const GALGAS_extensionGetterForGeneration temp_8 = object ;
    const GALGAS_extensionGetterForGeneration temp_9 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, temp_6.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 244)), temp_7.getter_mExtensionGetterName (HERE), temp_8.getter_mExtensionGetterFormalParameterList (HERE), temp_9.getter_mResultType (HERE) COMMA_SOURCE_FILE ("extension-getter.galgas", 243))) ;
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
  cEnumerator_formalInputParameterListForGeneration enumerator_11815 (temp_0.getter_mExtensionGetterFormalParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_11815.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11815.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 260)) ;
    enumerator_11815.gotoNextObject () ;
  }
  const GALGAS_extensionGetterForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 262)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_extensionGetterForGeneration temp_3 = object ;
    test_2 = temp_3.getter_mImplementedAsFunction (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_extensionGetterForGeneration temp_4 = object ;
      GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_12068 = temp_4.getter_mExtensionGetterFormalParameterList (HERE) ;
      {
      const GALGAS_extensionGetterForGeneration temp_5 = object ;
      var_extensionReaderFormalParameterList_12068.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 266)), temp_5.getter_mReceiverType (HERE), GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 269))  COMMA_SOURCE_FILE ("extension-getter.galgas", 269)), GALGAS_bool (true), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 265)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_6 = object ;
      const GALGAS_extensionGetterForGeneration temp_7 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (temp_6.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 273)).getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 273)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 273)).add_operation (temp_7.getter_mExtensionGetterName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 273))  COMMA_SOURCE_FILE ("extension-getter.galgas", 273)) ;
      GALGAS_string var_code_12800 ;
      {
      const GALGAS_extensionGetterForGeneration temp_8 = object ;
      const GALGAS_extensionGetterForGeneration temp_9 = object ;
      const GALGAS_extensionGetterForGeneration temp_10 = object ;
      const GALGAS_extensionGetterForGeneration temp_11 = object ;
      routine_generateFunction (GALGAS_string ("extensionGetter_").add_operation (temp_8.getter_mExtensionGetterName (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 275)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_12068, temp_9.getter_mSemanticInstructionListForGeneration (HERE), GALGAS_string ("C_Compiler"), temp_10.getter_mResultType (HERE), temp_11.getter_mResultVarCppName (HERE), GALGAS_bool (false), var_code_12800, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 274)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_12 = object ;
      const GALGAS_extensionGetterForGeneration temp_13 = object ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, temp_12.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 286)), temp_13.getter_mExtensionGetterName (HERE), var_code_12800 COMMA_SOURCE_FILE ("extension-getter.galgas", 285))) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_extensionGetterForGeneration temp_14 = object ;
    extensionMethod_addHeaderFileName (temp_14.getter_mReceiverType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 291)) ;
    const GALGAS_extensionGetterForGeneration temp_15 = object ;
    GALGAS_unifiedTypeMap_2D_entry var_baseType_13109 = temp_15.getter_mReceiverType (HERE) ;
    GALGAS_bool var_searching_13154 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 294)).isValid ()) {
      uint32_t variant_13170 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 294)).uintValue () ;
      bool loop_13170 = true ;
      while (loop_13170) {
        loop_13170 = var_searching_13154.isValid () ;
        if (loop_13170) {
          loop_13170 = var_searching_13154.boolValue () ;
        }
        if (loop_13170 && (0 == variant_13170)) {
          loop_13170 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 294)) ;
        }
        if (loop_13170) {
          variant_13170 -- ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = var_baseType_13109.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 295)).getter_isNull (SOURCE_FILE ("extension-getter.galgas", 295)).operator_not (SOURCE_FILE ("extension-getter.galgas", 295)).boolEnum () ;
            if (kBoolTrue == test_16) {
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                const GALGAS_extensionGetterForGeneration temp_18 = object ;
                test_17 = var_baseType_13109.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 296)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 296)).getter_hasKey (temp_18.getter_mExtensionGetterName (HERE) COMMA_SOURCE_FILE ("extension-getter.galgas", 296)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  var_baseType_13109 = var_baseType_13109.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 297)) ;
                }
              }
              if (kBoolFalse == test_17) {
                var_searching_13154 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_16) {
            var_searching_13154 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionGetterForGeneration temp_19 = object ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_13109.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 305)).getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 305)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 305)).add_operation (temp_19.getter_mExtensionGetterName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 305))  COMMA_SOURCE_FILE ("extension-getter.galgas", 305)) ;
    GALGAS_string var_extensionGetterCode_13964 ;
    {
    const GALGAS_extensionGetterForGeneration temp_20 = object ;
    const GALGAS_extensionGetterForGeneration temp_21 = object ;
    const GALGAS_extensionGetterForGeneration temp_22 = object ;
    const GALGAS_extensionGetterForGeneration temp_23 = object ;
    const GALGAS_extensionGetterForGeneration temp_24 = object ;
    const GALGAS_extensionGetterForGeneration temp_25 = object ;
    routine_generateExtensionGetter (temp_20.getter_mReceiverType (HERE), GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, temp_21.getter_mExtensionGetterName (HERE), temp_22.getter_mExtensionGetterFormalParameterList (HERE), temp_23.getter_mSemanticInstructionListForGeneration (HERE), GALGAS_string ("C_Compiler"), temp_24.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 314)), temp_25.getter_mResultVarCppName (HERE), var_extensionGetterCode_13964, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 306)) ;
    }
    const GALGAS_extensionGetterForGeneration temp_26 = object ;
    const GALGAS_extensionGetterForGeneration temp_27 = object ;
    const GALGAS_extensionGetterForGeneration temp_28 = object ;
    const GALGAS_extensionGetterForGeneration temp_29 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, temp_26.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 319)), temp_27.getter_mExtensionGetterName (HERE), temp_28.getter_mExtensionGetterFormalParameterList (HERE), temp_29.getter_mResultType (HERE), var_extensionGetterCode_13964 COMMA_SOURCE_FILE ("extension-getter.galgas", 318))) ;
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
  GALGAS_string result_outString ; // Returned variable
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  const GALGAS_extensionMethodAST temp_0 = object ;
  const GALGAS_extensionMethodAST temp_1 = object ;
  result_outString = GALGAS_string ("extension method @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 50)).add_operation (temp_1.getter_mExtensionMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 50)) ;
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
  GALGAS_lstring var_key_3091 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 64)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 64)).add_operation (temp_1.getter_mExtensionMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 64)), temp_2.getter_mExtensionMethodName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 64)) ;
  {
  const GALGAS_extensionMethodAST temp_3 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3091, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 65)) ;
  }
  {
  const GALGAS_extensionMethodAST temp_4 = object ;
  const GALGAS_extensionMethodAST temp_5 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3091, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 66)), temp_5.getter_mTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 66)) COMMA_SOURCE_FILE ("extension-method.galgas", 66)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionMethodAST temp_7 = object ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.getter_mTypeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("extension-method.galgas", 68)).operator_not (SOURCE_FILE ("extension-method.galgas", 68)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionMethodAST temp_8 = object ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.getter_mTypeName (HERE), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-method.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 69)) ;
      }
    }
  }
  const GALGAS_extensionMethodAST temp_9 = object ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_3582 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.getter_mTypeName (HERE), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 74)) ;
  if (NULL != objectArray_3582) {
    macroValidSharedObject (objectArray_3582, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_extensionMethodAST temp_10 = object ;
    const GALGAS_extensionMethodAST temp_11 = object ;
    objectArray_3582->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.getter_mExtensionMethodName (HERE), temp_11.getter_mExtensionMethodFormalParameterList (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 75)) ;
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
  GALGAS_lstring var_nameForUsefulness_5178 = function_methodNameForUsefulEntitiesGraph (temp_0.getter_mTypeName (HERE).getter_string (HERE), temp_1.getter_mExtensionMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 107)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_5178, var_nameForUsefulness_5178, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 108)) ;
  }
  const GALGAS_extensionMethodAST temp_2 = object ;
  GALGAS_lstring var_typeNameForUsefulness_5360 = function_typeNameForUsefulEntitiesGraph (temp_2.getter_mTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 109)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_5360, var_nameForUsefulness_5178 COMMA_SOURCE_FILE ("extension-method.galgas", 110)) ;
  }
  const GALGAS_extensionMethodAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_5542 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_3.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 112)) ;
  GALGAS_string var_selfObjectName_5652 ;
  GALGAS_string var_selfObjectAccessor_5685 ;
  GALGAS_bool var_implementedAsFunction_5719 ;
  GALGAS_bool var_isReferenceClass_5774 = GALGAS_bool (false) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_isReference_5857 ;
    const bool optionalResult5827 = var_selfType_5542.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 118)).optional_classType (var_isReference_5857) ;
    if (!optionalResult5827) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      var_isReferenceClass_5774 = var_isReference_5857 ;
      var_selfObjectName_5652 = GALGAS_string ("object") ;
      var_selfObjectAccessor_5685 = GALGAS_string ("object->") ;
      var_implementedAsFunction_5719 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_5652 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_5685 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_5719 = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6182 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 129)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6302 ;
  GALGAS_analysisContext var_analysisContext_6324 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_5652, GALGAS_selfAvailability::constructor_available (var_selfType_5542, GALGAS_bool (false), var_isReferenceClass_5774  COMMA_SOURCE_FILE ("extension-method.galgas", 135)), var_selfObjectAccessor_5685  COMMA_SOURCE_FILE ("extension-method.galgas", 131)) ;
  GALGAS_bool var_isRefClass_6558 = GALGAS_bool (false) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    GALGAS_bool var_reference_6639 ;
    const bool optionalResult6611 = var_selfType_5542.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 139)).optional_classType (var_reference_6639) ;
    if (!optionalResult6611) {
      test_5 = kBoolFalse ;
    }
    if (kBoolTrue == test_5) {
      var_isRefClass_6558 = var_reference_6639 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_6702 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 142)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_6753 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 143)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsEqual, var_selfType_5542.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 144)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-method.galgas", 144)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_nonMutableProperties_6753 = var_selfType_5542.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 145)) ;
    }
  }
  if (kBoolFalse == test_6) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      GALGAS_bool var_isReference_6965 ;
      const bool optionalResult6935 = var_selfType_5542.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 146)).optional_classType (var_isReference_6965) ;
      if (!optionalResult6935) {
        test_7 = kBoolFalse ;
      }
      if (kBoolTrue == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_isReference_6965.boolEnum () ;
          if (kBoolTrue == test_8) {
            var_mutableProperties_6702 = var_selfType_5542.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 148)) ;
          }
        }
        if (kBoolFalse == test_8) {
          var_nonMutableProperties_6753 = var_selfType_5542.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 150)) ;
        }
      }
    }
  }
  {
  const GALGAS_extensionMethodAST temp_9 = object ;
  const GALGAS_extensionMethodAST temp_10 = object ;
  const GALGAS_extensionMethodAST temp_11 = object ;
  routine_analyzeRoutineBody (var_nameForUsefulness_5178, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6324, temp_9.getter_mExtensionMethodFormalParameterList (HERE), var_nonMutableProperties_6753, var_mutableProperties_6702, temp_10.getter_mExtensionMethodInstructionList (HERE), temp_11.getter_mEndOfMethodLocation (HERE), var_semanticInstructionListForGeneration_6302, var_formalParameterListForGeneration_6182, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 153)) ;
  }
  const GALGAS_extensionMethodAST temp_12 = object ;
  const GALGAS_extensionMethodAST temp_13 = object ;
  const GALGAS_extensionMethodAST temp_14 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (temp_12.getter_mExtensionMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 167)), GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_5542.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 170)).getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 170)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 170)).add_operation (temp_13.getter_mExtensionMethodName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 170)), var_selfType_5542, temp_14.getter_mExtensionMethodName (HERE).getter_string (HERE), var_implementedAsFunction_5719, var_formalParameterListForGeneration_6182, var_selfType_5542.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 175)), var_semanticInstructionListForGeneration_6302  COMMA_SOURCE_FILE ("extension-method.galgas", 168))  COMMA_SOURCE_FILE ("extension-method.galgas", 166)) ;
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
  ioArgument_ioExtensionMethodListMap.addAssign_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), temp_1.getter_mExtensionMethodName (HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 198)) ;
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
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-method.galgas", 217)) ;
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
    test_0 = temp_1.getter_mImplementedAsFunction (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionMethodForGeneration temp_2 = object ;
      const GALGAS_extensionMethodForGeneration temp_3 = object ;
      const GALGAS_extensionMethodForGeneration temp_4 = object ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, temp_2.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 227)), temp_3.getter_mExtensionMethodName (HERE), temp_4.getter_mExtensionMethodFormalParameterList (HERE) COMMA_SOURCE_FILE ("extension-method.galgas", 226))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_5 = object ;
    const GALGAS_extensionMethodForGeneration temp_6 = object ;
    const GALGAS_extensionMethodForGeneration temp_7 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, temp_5.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 233)), temp_6.getter_mExtensionMethodName (HERE), temp_7.getter_mExtensionMethodFormalParameterList (HERE) COMMA_SOURCE_FILE ("extension-method.galgas", 232))) ;
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
    test_0 = temp_1.getter_mImplementedAsFunction (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionMethodForGeneration temp_2 = object ;
      GALGAS_formalParameterListForGeneration var_extensionMethodFormalParameterList_11511 = temp_2.getter_mExtensionMethodFormalParameterList (HERE) ;
      {
      const GALGAS_extensionMethodForGeneration temp_3 = object ;
      var_extensionMethodFormalParameterList_11511.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 250)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 251)), temp_3.getter_mReceiverType (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 253))  COMMA_SOURCE_FILE ("extension-method.galgas", 253)), GALGAS_string ("inObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 249)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_4 = object ;
      const GALGAS_extensionMethodForGeneration temp_5 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (temp_4.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 257)).getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 257)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 257)).add_operation (temp_5.getter_mExtensionMethodName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 257))  COMMA_SOURCE_FILE ("extension-method.galgas", 257)) ;
      GALGAS_string var_code_12413 ;
      {
      const GALGAS_extensionMethodForGeneration temp_6 = object ;
      const GALGAS_extensionMethodForGeneration temp_7 = object ;
      routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionMethod_").add_operation (temp_6.getter_mExtensionMethodName (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 260)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_11511, temp_7.getter_mSemanticInstructionListForGeneration (HERE), GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_12413, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 258)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_8 = object ;
      const GALGAS_extensionMethodForGeneration temp_9 = object ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, temp_8.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 272)), temp_9.getter_mExtensionMethodName (HERE), var_code_12413 COMMA_SOURCE_FILE ("extension-method.galgas", 271))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_10 = object ;
    extensionMethod_addHeaderFileName (temp_10.getter_mReceiverType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 277)) ;
    const GALGAS_extensionMethodForGeneration temp_11 = object ;
    cEnumerator_formalParameterListForGeneration enumerator_12720 (temp_11.getter_mExtensionMethodFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_12720.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_12720.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 279)) ;
      enumerator_12720.gotoNextObject () ;
    }
    const GALGAS_extensionMethodForGeneration temp_12 = object ;
    GALGAS_unifiedTypeMap_2D_entry var_baseType_12878 = temp_12.getter_mReceiverType (HERE) ;
    GALGAS_bool var_searching_12923 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 283)).isValid ()) {
      uint32_t variant_12939 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 283)).uintValue () ;
      bool loop_12939 = true ;
      while (loop_12939) {
        loop_12939 = var_searching_12923.isValid () ;
        if (loop_12939) {
          loop_12939 = var_searching_12923.boolValue () ;
        }
        if (loop_12939 && (0 == variant_12939)) {
          loop_12939 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 283)) ;
        }
        if (loop_12939) {
          variant_12939 -- ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = var_baseType_12878.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 284)).getter_isNull (SOURCE_FILE ("extension-method.galgas", 284)).operator_not (SOURCE_FILE ("extension-method.galgas", 284)).boolEnum () ;
            if (kBoolTrue == test_13) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                const GALGAS_extensionMethodForGeneration temp_15 = object ;
                test_14 = var_baseType_12878.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 285)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 285)).getter_hasKey (temp_15.getter_mExtensionMethodName (HERE) COMMA_SOURCE_FILE ("extension-method.galgas", 285)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  var_baseType_12878 = var_baseType_12878.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 286)) ;
                }
              }
              if (kBoolFalse == test_14) {
                var_searching_12923 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_13) {
            var_searching_12923 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionMethodForGeneration temp_16 = object ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType_12878.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 294)).getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 294)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 294)).add_operation (temp_16.getter_mExtensionMethodName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 294))  COMMA_SOURCE_FILE ("extension-method.galgas", 294)) ;
    GALGAS_string var_methodImplementation_13661 ;
    {
    const GALGAS_extensionMethodForGeneration temp_17 = object ;
    const GALGAS_extensionMethodForGeneration temp_18 = object ;
    const GALGAS_extensionMethodForGeneration temp_19 = object ;
    const GALGAS_extensionMethodForGeneration temp_20 = object ;
    routine_generateExtensionMethod (temp_17.getter_mReceiverType (HERE), GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, temp_18.getter_mExtensionMethodName (HERE), temp_19.getter_mExtensionMethodFormalParameterList (HERE), temp_20.getter_mSemanticInstructionListForGeneration (HERE), var_methodImplementation_13661, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 295)) ;
    }
    const GALGAS_extensionMethodForGeneration temp_21 = object ;
    const GALGAS_extensionMethodForGeneration temp_22 = object ;
    const GALGAS_extensionMethodForGeneration temp_23 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, temp_21.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 305)), temp_22.getter_mExtensionMethodName (HERE), temp_23.getter_mExtensionMethodFormalParameterList (HERE), var_methodImplementation_13661 COMMA_SOURCE_FILE ("extension-method.galgas", 304))) ;
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
  GALGAS_string result_outString ; // Returned variable
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  const GALGAS_extensionSetterAST temp_0 = object ;
  const GALGAS_extensionSetterAST temp_1 = object ;
  result_outString = GALGAS_string ("extension setter @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 50)).add_operation (temp_1.getter_mExtensionSetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 50)) ;
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
  GALGAS_lstring var_key_3110 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 63)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 63)).add_operation (temp_1.getter_mExtensionSetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 63)), temp_2.getter_mExtensionSetterName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 63)) ;
  {
  const GALGAS_extensionSetterAST temp_3 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3110, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 64)) ;
  }
  {
  const GALGAS_extensionSetterAST temp_4 = object ;
  const GALGAS_extensionSetterAST temp_5 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3110, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 65)), temp_5.getter_mTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 65)) COMMA_SOURCE_FILE ("extension-setter.galgas", 65)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionSetterAST temp_7 = object ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.getter_mTypeName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("extension-setter.galgas", 67)).operator_not (SOURCE_FILE ("extension-setter.galgas", 67)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionSetterAST temp_8 = object ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.getter_mTypeName (HERE), GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-setter.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 68)) ;
      }
    }
  }
  const GALGAS_extensionSetterAST temp_9 = object ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_3600 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.getter_mTypeName (HERE), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-setter.galgas", 73)) ;
  if (NULL != objectArray_3600) {
    macroValidSharedObject (objectArray_3600, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_extensionSetterAST temp_10 = object ;
    const GALGAS_extensionSetterAST temp_11 = object ;
    objectArray_3600->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.getter_mExtensionSetterName (HERE), temp_11.getter_mExtensionSetterFormalParameterList (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 74)) ;
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
  GALGAS_lstring var_nameForUsefulness_5195 = function_setterNameForUsefulEntitiesGraph (temp_0.getter_mTypeName (HERE).getter_string (HERE), temp_1.getter_mExtensionSetterName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 106)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_5195, var_nameForUsefulness_5195, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 107)) ;
  }
  const GALGAS_extensionSetterAST temp_2 = object ;
  GALGAS_lstring var_typeNameForUsefulness_5377 = function_typeNameForUsefulEntitiesGraph (temp_2.getter_mTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 108)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_5377, var_nameForUsefulness_5195 COMMA_SOURCE_FILE ("extension-setter.galgas", 109)) ;
  }
  const GALGAS_extensionSetterAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_5558 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_3.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 111)) ;
  GALGAS_string var_selfObjectName_5667 ;
  GALGAS_string var_selfObjectAccessor_5700 ;
  GALGAS_bool var_implementedAsFunction_5734 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_selfType_5558.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 116)).getter_isClassType (SOURCE_FILE ("extension-setter.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectName_5667 = GALGAS_string ("object") ;
      var_selfObjectAccessor_5700 = GALGAS_string ("object->") ;
      var_implementedAsFunction_5734 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_5667 = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor_5700 = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction_5734 = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6099 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 126)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6218 ;
  GALGAS_analysisContext var_analysisContext_6240 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_5667, GALGAS_selfAvailability::constructor_available (var_selfType_5558, GALGAS_bool (true), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-setter.galgas", 132)), var_selfObjectAccessor_5700  COMMA_SOURCE_FILE ("extension-setter.galgas", 128)) ;
  {
  const GALGAS_extensionSetterAST temp_5 = object ;
  const GALGAS_extensionSetterAST temp_6 = object ;
  const GALGAS_extensionSetterAST temp_7 = object ;
  routine_analyzeRoutineBody (var_nameForUsefulness_5195, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6240, temp_5.getter_mExtensionSetterFormalParameterList (HERE), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 140)), var_selfType_5558.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 141)), temp_6.getter_mExtensionSetterInstructionList (HERE), temp_7.getter_mEndOfSetterDeclarationLocation (HERE), var_semanticInstructionListForGeneration_6218, var_formalParameterListForGeneration_6099, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 135)) ;
  }
  const GALGAS_extensionSetterAST temp_8 = object ;
  const GALGAS_extensionSetterAST temp_9 = object ;
  const GALGAS_extensionSetterAST temp_10 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (temp_8.getter_mExtensionSetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 149)), GALGAS_extensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (var_selfType_5558.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 152)).getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 152)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 152)).add_operation (temp_9.getter_mExtensionSetterName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 152)), var_selfType_5558, temp_10.getter_mExtensionSetterName (HERE).getter_string (HERE), var_implementedAsFunction_5734, var_formalParameterListForGeneration_6099, var_selfType_5558.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 157)), var_semanticInstructionListForGeneration_6218  COMMA_SOURCE_FILE ("extension-setter.galgas", 150))  COMMA_SOURCE_FILE ("extension-setter.galgas", 148)) ;
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
  ioArgument_ioExtensionSettierListMap.addAssign_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), temp_1.getter_mExtensionSetterName (HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 179)) ;
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
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-setter.galgas", 200)) ;
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
    test_0 = temp_1.getter_mImplementedAsFunction (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionSetterForGeneration temp_2 = object ;
      const GALGAS_extensionSetterForGeneration temp_3 = object ;
      const GALGAS_extensionSetterForGeneration temp_4 = object ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, temp_2.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 210)), temp_3.getter_mExtensionSetterName (HERE), temp_4.getter_mExtensionSetterFormalParameterList (HERE) COMMA_SOURCE_FILE ("extension-setter.galgas", 209))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionSetterForGeneration temp_5 = object ;
    const GALGAS_extensionSetterForGeneration temp_6 = object ;
    const GALGAS_extensionSetterForGeneration temp_7 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (inCompiler, temp_5.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 216)), temp_6.getter_mExtensionSetterName (HERE), temp_7.getter_mExtensionSetterFormalParameterList (HERE) COMMA_SOURCE_FILE ("extension-setter.galgas", 215))) ;
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
  cEnumerator_formalParameterListForGeneration enumerator_10746 (temp_0.getter_mExtensionSetterFormalParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_10746.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10746.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 231)) ;
    enumerator_10746.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_extensionSetterForGeneration temp_2 = object ;
    test_1 = temp_2.getter_mImplementedAsFunction (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_extensionSetterForGeneration temp_3 = object ;
      GALGAS_formalParameterListForGeneration var_extensionSetterFormalParameterList_10942 = temp_3.getter_mExtensionSetterFormalParameterList (HERE) ;
      {
      const GALGAS_extensionSetterForGeneration temp_4 = object ;
      var_extensionSetterFormalParameterList_10942.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas", 236)), GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.galgas", 237)), temp_4.getter_mReceiverType (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 239))  COMMA_SOURCE_FILE ("extension-setter.galgas", 239)), GALGAS_string ("ioObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 235)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_5 = object ;
      const GALGAS_extensionSetterForGeneration temp_6 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (temp_5.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 243)).getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 243)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 243)).add_operation (temp_6.getter_mExtensionSetterName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 243))  COMMA_SOURCE_FILE ("extension-setter.galgas", 243)) ;
      GALGAS_string var_code_11840 ;
      {
      const GALGAS_extensionSetterForGeneration temp_7 = object ;
      const GALGAS_extensionSetterForGeneration temp_8 = object ;
      routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionSetter_").add_operation (temp_7.getter_mExtensionSetterName (HERE).getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 246)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_10942, temp_8.getter_mSemanticInstructionListForGeneration (HERE), GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_11840, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 244)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_9 = object ;
      const GALGAS_extensionSetterForGeneration temp_10 = object ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, temp_9.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 258)), temp_10.getter_mExtensionSetterName (HERE), var_code_11840 COMMA_SOURCE_FILE ("extension-setter.galgas", 257))) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_extensionSetterForGeneration temp_11 = object ;
    GALGAS_unifiedTypeMap_2D_entry var_baseType_12089 = temp_11.getter_mReceiverType (HERE) ;
    GALGAS_bool var_searching_12134 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 265)).isValid ()) {
      uint32_t variant_12150 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 265)).uintValue () ;
      bool loop_12150 = true ;
      while (loop_12150) {
        loop_12150 = var_searching_12134.isValid () ;
        if (loop_12150) {
          loop_12150 = var_searching_12134.boolValue () ;
        }
        if (loop_12150 && (0 == variant_12150)) {
          loop_12150 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas", 265)) ;
        }
        if (loop_12150) {
          variant_12150 -- ;
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = var_baseType_12089.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 266)).getter_isNull (SOURCE_FILE ("extension-setter.galgas", 266)).operator_not (SOURCE_FILE ("extension-setter.galgas", 266)).boolEnum () ;
            if (kBoolTrue == test_12) {
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                const GALGAS_extensionSetterForGeneration temp_14 = object ;
                test_13 = var_baseType_12089.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 267)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 267)).getter_hasKey (temp_14.getter_mExtensionSetterName (HERE) COMMA_SOURCE_FILE ("extension-setter.galgas", 267)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_baseType_12089 = var_baseType_12089.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 268)) ;
                }
              }
              if (kBoolFalse == test_13) {
                var_searching_12134 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_12) {
            var_searching_12134 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionSetterForGeneration temp_15 = object ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType_12089.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 276)).getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 276)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 276)).add_operation (temp_15.getter_mExtensionSetterName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 276))  COMMA_SOURCE_FILE ("extension-setter.galgas", 276)) ;
    extensionMethod_addHeaderFileName (var_baseType_12089, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 277)) ;
    GALGAS_string var_setterImplementation_12921 ;
    {
    const GALGAS_extensionSetterForGeneration temp_16 = object ;
    const GALGAS_extensionSetterForGeneration temp_17 = object ;
    const GALGAS_extensionSetterForGeneration temp_18 = object ;
    const GALGAS_extensionSetterForGeneration temp_19 = object ;
    routine_generateExtensionSetter (temp_16.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 279)), GALGAS_string::makeEmptyString (), temp_17.getter_mExtensionSetterName (HERE), ioArgument_ioInclusionSet, temp_18.getter_mExtensionSetterFormalParameterList (HERE), temp_19.getter_mSemanticInstructionListForGeneration (HERE), var_setterImplementation_12921, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 278)) ;
    }
    const GALGAS_extensionSetterForGeneration temp_20 = object ;
    const GALGAS_extensionSetterForGeneration temp_21 = object ;
    const GALGAS_extensionSetterForGeneration temp_22 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (inCompiler, temp_20.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 288)), temp_21.getter_mExtensionSetterName (HERE), temp_22.getter_mExtensionSetterFormalParameterList (HERE), var_setterImplementation_12921 COMMA_SOURCE_FILE ("extension-setter.galgas", 287))) ;
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
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = object ;
  result_outString = GALGAS_string ("overriding extension getter @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 53)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 53)).add_operation (temp_1.getter_mAbstractExtensionGetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 53)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 66)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfType_4919 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_0.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 97)) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_returnType_5033 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_1.getter_mAbstractExtensionGetterReturnedTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 99)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_selfType_4919.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 101)).getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 101)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 101)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mAbstractExtensionGetterName (HERE).getter_location (HERE), GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_4919.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 102)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 102)), fixItArray4  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 102)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_selfType_4919.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 103)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_overridingAbstractExtensionGetterAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.getter_mAbstractExtensionGetterName (HERE).getter_location (HERE), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (var_selfType_4919.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 104)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 104)), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 104)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_5594 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_5637 = var_selfType_4919.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 108)) ;
  GALGAS_functionSignature var_inheritedSignature_5705 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 109)) ;
  GALGAS_unifiedTypeMap_2D_entry var_inheritedReturnType_5758 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 110)) ;
  GALGAS_location var_inheritedDeclarationLocation_5813 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 111)) ;
  if (constinArgument_inSemanticContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 112)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 112)).isValid ()) {
    uint32_t variant_5837 = constinArgument_inSemanticContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 112)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 112)).uintValue () ;
    bool loop_5837 = true ;
    while (loop_5837) {
      loop_5837 = var_superType_5637.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 113)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 113)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5594.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 113)).isValid () ;
      if (loop_5837) {
        loop_5837 = var_superType_5637.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 113)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 113)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5594.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 113)).boolValue () ;
      }
      if (loop_5837 && (0 == variant_5837)) {
        loop_5837 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 112)) ;
      }
      if (loop_5837) {
        variant_5837 -- ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          const GALGAS_overridingAbstractExtensionGetterAST temp_9 = object ;
          test_8 = var_superType_5637.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 114)).getter_hasKey (temp_9.getter_mAbstractExtensionGetterName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 114)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_methodQualifier var_qualifier_6246 ;
            const GALGAS_overridingAbstractExtensionGetterAST temp_10 = object ;
            GALGAS_methodKind joker_6116 ; // Joker input parameter
            GALGAS_bool joker_6193 ; // Joker input parameter
            GALGAS_string joker_6256 ; // Joker input parameter
            var_superType_5637.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 115)).method_searchKey (temp_10.getter_mAbstractExtensionGetterName (HERE), joker_6116, var_inheritedSignature_5705, var_inheritedDeclarationLocation_5813, joker_6193, var_inheritedReturnType_5758, var_qualifier_6246, joker_6256, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 115)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsInfOrEqual, var_qualifier_6246.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 125)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_baseTypeName_5594 = var_superType_5637.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 126)) ;
              }
            }
          }
        }
        var_superType_5637 = var_superType_5637.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 129)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, var_baseTypeName_5594.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_13 = object ;
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.getter_mAbstractExtensionGetterName (HERE).getter_location (HERE), GALGAS_string ("this getter is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 132)) ;
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5594.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_6642 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)) ;
      const GALGAS_overridingAbstractExtensionGetterAST temp_16 = object ;
      cEnumerator_formalInputParameterListAST enumerator_6768 (temp_16.getter_mAbstractExtensionGetterFormalInputParameterList (HERE), kENUMERATION_UP) ;
      while (enumerator_6768.hasCurrentObject ()) {
        var_formalParameterListForGeneration_6642.addAssign_operation (enumerator_6768.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_6768.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 140)), enumerator_6768.current_mFormalArgumentName (HERE).getter_string (HERE), enumerator_6768.current_mFormalArgumentName (HERE), enumerator_6768.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 138)) ;
        enumerator_6768.gotoNextObject () ;
      }
      {
      const GALGAS_overridingAbstractExtensionGetterAST temp_17 = object ;
      routine_checkGetterSignatures (var_formalParameterListForGeneration_6642, var_returnType_5033, temp_17.getter_mAbstractExtensionGetterName (HERE).getter_location (HERE), var_inheritedSignature_5705, var_inheritedReturnType_5758, var_inheritedDeclarationLocation_5813, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 145)) ;
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
  ioArgument_ioOverridingAbstractExtensionGetterListMap.addAssign_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), temp_1.getter_mAbstractExtensionGetterName (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 173)) ;
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
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_1 = object ;
  result_outString = GALGAS_string ("overriding extension method @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)).add_operation (temp_1.getter_mOverridingExtensionMethodName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 58)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfType_4775 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_0.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 90)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_selfType_4775.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 92)).getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 92)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 92)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mOverridingExtensionMethodName (HERE).getter_location (HERE), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_4775.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 93)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 93)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 93)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_selfType_4775.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 94)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionMethodAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.getter_mOverridingExtensionMethodName (HERE).getter_location (HERE), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (var_selfType_4775.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_5309 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_5352 = var_selfType_4775.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 99)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5401 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 100)) ;
  GALGAS_location var_inheritedDeclarationLocation_5476 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 101)) ;
  if (constinArgument_inSemanticContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 102)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 102)).isValid ()) {
    uint32_t variant_5500 = constinArgument_inSemanticContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 102)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 102)).uintValue () ;
    bool loop_5500 = true ;
    while (loop_5500) {
      loop_5500 = var_superType_5352.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5309.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)).isValid () ;
      if (loop_5500) {
        loop_5500 = var_superType_5352.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5309.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)).boolValue () ;
      }
      if (loop_5500 && (0 == variant_5500)) {
        loop_5500 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 102)) ;
      }
      if (loop_5500) {
        variant_5500 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingAbstractExtensionMethodAST temp_8 = object ;
          test_7 = var_superType_5352.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 104)).getter_hasKey (temp_8.getter_mOverridingExtensionMethodName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 104)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_5733 ;
            const GALGAS_overridingAbstractExtensionMethodAST temp_9 = object ;
            GALGAS_methodKind joker_5836 ; // Joker input parameter
            GALGAS_bool joker_5913 ; // Joker input parameter
            GALGAS_string joker_5943 ; // Joker input parameter
            var_superType_5352.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 106)).method_searchKey (temp_9.getter_mOverridingExtensionMethodName (HERE), joker_5836, var_inheritedSignature_5401, var_inheritedDeclarationLocation_5476, joker_5913, var_qualifier_5733, joker_5943, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 106)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_5733.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 115)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_5309 = var_superType_5352.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 116)) ;
              }
            }
          }
        }
        var_superType_5352 = var_superType_5352.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)) ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_5309.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.getter_mOverridingExtensionMethodName (HERE).getter_location (HERE), GALGAS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 122)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_6292 = GALGAS_localVarManager::constructor_emptySharedMap (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 125)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6392 ;
  {
  const GALGAS_overridingAbstractExtensionMethodAST temp_14 = object ;
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, temp_14.getter_mOverridingExtensionMethodFormalParameterList (HERE), var_variableMap_6292, var_formalParameterListForGeneration_6392, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5309.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GALGAS_overridingAbstractExtensionMethodAST temp_16 = object ;
      routine_checkMethodSignatures (var_formalParameterListForGeneration_6392, temp_16.getter_mOverridingExtensionMethodName (HERE).getter_location (HERE), var_inheritedSignature_5401, var_inheritedDeclarationLocation_5476, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 135)) ;
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
  ioArgument_ioOverridingAbstractExtensionMethodListMap.addAssign_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), temp_1.getter_mOverridingExtensionMethodName (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 162)) ;
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
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_1 = object ;
  result_outString = GALGAS_string ("overriding extension setter @").add_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 43)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 43)).add_operation (temp_1.getter_mOverridingExtensionSetterName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 43)) ;
//---
  return result_outString ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 57)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfType_4617 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_0.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 88)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_selfType_4617.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 90)).getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 90)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 90)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mOverridingExtensionSetterName (HERE).getter_location (HERE), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_4617.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 91)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 91)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 91)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_selfType_4617.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 92)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionSetterAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.getter_mOverridingExtensionSetterName (HERE).getter_location (HERE), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (var_selfType_4617.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 93)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 93)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 93)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_5151 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_5194 = var_selfType_4617.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 97)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5243 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 98)) ;
  GALGAS_location var_inheritedDeclarationLocation_5318 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 99)) ;
  if (constinArgument_inSemanticContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).isValid ()) {
    uint32_t variant_5342 = constinArgument_inSemanticContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).uintValue () ;
    bool loop_5342 = true ;
    while (loop_5342) {
      loop_5342 = var_superType_5194.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5151.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).isValid () ;
      if (loop_5342) {
        loop_5342 = var_superType_5194.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5151.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).boolValue () ;
      }
      if (loop_5342 && (0 == variant_5342)) {
        loop_5342 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)) ;
      }
      if (loop_5342) {
        variant_5342 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingAbstractExtensionSetterAST temp_8 = object ;
          test_7 = var_superType_5194.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 102)).getter_hasKey (temp_8.getter_mOverridingExtensionSetterName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 102)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_5567 ;
            const GALGAS_overridingAbstractExtensionSetterAST temp_9 = object ;
            GALGAS_methodKind joker_5646 ; // Joker input parameter
            GALGAS_bool joker_5669 ; // Joker input parameter
            GALGAS_string joker_5683 ; // Joker input parameter
            var_superType_5194.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 104)).method_searchKey (temp_9.getter_mOverridingExtensionSetterName (HERE), joker_5646, var_inheritedSignature_5243, joker_5669, var_qualifier_5567, joker_5683, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 104)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_5567.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 105)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_5151 = var_superType_5194.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 106)) ;
              }
            }
          }
        }
        var_superType_5194 = var_superType_5194.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 109)) ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_5151.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.getter_mOverridingExtensionSetterName (HERE).getter_location (HERE), GALGAS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 112)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_6025 = GALGAS_localVarManager::constructor_emptySharedMap (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 115)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6125 ;
  {
  const GALGAS_overridingAbstractExtensionSetterAST temp_14 = object ;
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, temp_14.getter_mOverridingExtensionSetterFormalParameterList (HERE), var_variableMap_6025, var_formalParameterListForGeneration_6125, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 117)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5151.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GALGAS_overridingAbstractExtensionSetterAST temp_16 = object ;
      routine_checkMethodSignatures (var_formalParameterListForGeneration_6125, temp_16.getter_mOverridingExtensionSetterName (HERE).getter_location (HERE), var_inheritedSignature_5243, var_inheritedDeclarationLocation_5318, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 125)) ;
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
  ioArgument_ioOverridingAbstractExtensionSetterListMap.addAssign_operation (temp_0.getter_mTypeName (HERE).getter_string (HERE), temp_1.getter_mOverridingExtensionSetterName (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 151)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps, NULL) ;

